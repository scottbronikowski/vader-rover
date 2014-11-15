#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <sys/mman.h>
#include <zlib.h>
#include <errno.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <signal.h>
#include <time.h>
#include <sys/time.h>
#include <pthread.h>

#include "objects.h"
#include "idealib-c.h"
#include <opencv/cv.h>
#include <opencv/highgui.h>
//typedef short int char16_t;

#ifndef MIN
#define MIN(a,b) ((a)>(b)?(b):(a))
#endif
#ifndef MAX
#define MAX(a,b) ((a)>(b)?(a):(b))
#endif

const int* imlib_get_text_dimension (const char *text) {
  static int width_height[2];
  imlib_get_text_size (text, &(width_height[0]), &(width_height[1]));
  return width_height;
}

struct superpixel_id_t read_superpixel_id(FILE* file) {
  struct superpixel_id_t id;
  uint8_t type;
  fread(&type, sizeof(type), 1, file);
  switch(type) {
  case ID_Number:
    fread(&id.number, 4, 1, file);
    return id;
  case ID_Boolean:
    fread(&id.number, 1, 1, file);
    return id;
  default:
    printf("Error, got superpixel id of type %d, only numbers and booleans are supported", type);
    exit(1);
  }
}

struct superpixels_t* read_superpixels(char *filename, int w, int h) {
  FILE *file = fopen(filename, "r");
  uint16_t nr_superpixels;
  fread(&nr_superpixels, sizeof(nr_superpixels), 1, file);
  printf("Superpixels %d\n", nr_superpixels);
  struct superpixel_t* s = malloc(sizeof(struct superpixel_t)*nr_superpixels);
  for(int i = 0; i < nr_superpixels; ++i) {
    s[i].name = read_superpixel_id(file);

    fread(&s[i].next_length, sizeof(s[i].next_length), 1, file);
    s[i].next = malloc(s[i].next_length * sizeof(s[i].next));
    for(int j = 0; j < s[i].next_length; ++j)
      s[i].next[j] = read_superpixel_id(file);

    s[i].parent = read_superpixel_id(file);

    fread(&s[i].children_length, sizeof(s[i].children_length), 1, file);
    s[i].children = malloc(s[i].children_length * sizeof(s[i].children));
    for(int j = 0; j < s[i].children_length; ++j)
      s[i].children[j] = read_superpixel_id(file);

    int t;
    fread(&t, sizeof(t), 1, file);
    s[i].vx = ((float)t)/1000.0;
    fread(&t, sizeof(t), 1, file);
    s[i].vy = ((float)t)/1000.0;

    fread(&s[i].pixels_length, sizeof(s[i].pixels_length), 1, file);
    s[i].pixels = malloc(s[i].pixels_length * sizeof(s[i].pixels));
    for(int j = 0; j < s[i].pixels_length; ++j) {
      struct point_t p;
      fread(&p.x, sizeof(p.x), 1, file);
      fread(&p.y, sizeof(p.y), 1, file);
      s[i].pixels[j] = p;
    }
  }

  struct superpixels_t* superpixels = malloc(sizeof(struct superpixels_t));
  superpixels->number = nr_superpixels;
  superpixels->superpixel = s;
  superpixels->width = w;
  superpixels->height = h;
  return superpixels;
}

int* superpixel_map(struct superpixels_t* superpixels) {
  int* map = malloc(superpixels->width * superpixels->height * sizeof(int));
  for(int i = 0; i < superpixels->number; ++i) {
    struct superpixel_t* s = &superpixels->superpixel[i];
    for(int j = 0; j < s->pixels_length; ++j)
      map[s->pixels[j].y * superpixels->width + s->pixels[j].x] = i;
  }
  return map;
}

char same_superpixel_name_int(struct superpixel_id_t id, int name) {
  return id.type == ID_Number && id.number == name;
}

int safe_ref(int *map, int x, int y, int w, int h) {
  if(x >= w || y < 0 || x < 0 || y >= h)
    return -1;
  return map[y*w+x];
}

int is_outline_superpixel_pixel(int *map, struct superpixel_id_t id, int x, int y, int w, int h) {
  return(same_superpixel_name_int(id, safe_ref(map,y+1,x,w,h)) &&
	 same_superpixel_name_int(id, safe_ref(map,y-1,x,w,h)) &&
	 same_superpixel_name_int(id, safe_ref(map,y,x+1,w,h)) &&
	 same_superpixel_name_int(id, safe_ref(map,y,x-1,w,h)));
}

void color_superpixel(Imlib_Image *image, struct superpixels_t* superpixels,
		      int superpixel, int r, int g, int b, int fill) {
  imlib_context_set_color(r, g, b, 1);
  imlib_context_set_image(image);
  int* map = superpixel_map(superpixels);
  for(int i = 0; i < superpixels->number; ++i)
    if(same_superpixel_name_int(superpixels->superpixel[i].name, superpixel)) {
      struct superpixel_t* s = &superpixels->superpixel[i];
      for(int j = 0; j < s->pixels_length; ++j)
	if(fill || is_outline_superpixel_pixel(map, s->name, s->pixels[j].x, s->pixels[j].y, superpixels->width, superpixels->height))
	  imlib_image_draw_pixel(s->pixels[j].x, s->pixels[j].y, 0);
    }
}

int superpixel_center_x(struct superpixel_t* s) {
  int x = 0;
  for(int i = 0; i < s->pixels_length; ++i)
    x += s->pixels[i].x;
  return x/s->pixels_length;
}

int superpixel_center_y(struct superpixel_t* s) {
  int y = 0;
  for(int i = 0; i < s->pixels_length; ++i)
    y += s->pixels[i].y;
  return y/s->pixels_length;
}

float vmagnitude(float x, float y) {
  return sqrt(x*x + y*y);
}

uint32_t* read_binary_superpixel_map(char *filename) {
  FILE *file = fopen(filename, "r");
  uint32_t rows, columns;
  fread(&rows, sizeof(rows), 1, file);
  fread(&columns, sizeof(columns), 1, file);
  uint32_t* matrix = malloc(rows * columns * sizeof(uint32_t));
  for(int r = 0; r < rows; ++r) {
    for(int c = 0; c < columns; ++c) {
      fread(&matrix[r*columns + c], sizeof(uint32_t), 1, file);
    }
  }
  fclose(file);
  return matrix;
}

int superpixel_map_ref(uint32_t* map, int x, int y, int w) {
  return map[y*w + x];
}

double *read_flo_from_stream(FILE *file) {
  /* TODO flo files can have unknown values in them, this is unimplemented */
  const float TAG = 202021.25;
  float tag;
  uint32_t width, height;
  fread(&tag, sizeof(float), 1, file);
  fread(&width, sizeof(uint32_t), 1, file);
  fread(&height, sizeof(uint32_t), 1, file);
  if(tag != TAG) {
    fprintf(stderr,"flo file: bad tag %f (%dx%d)\n", tag, width, height);
    abort();
  }
  const int size = width*height*2;
  float *float_matrix = malloc(size*sizeof(float));
  int ret = 0;
  if( (ret = fread(float_matrix, sizeof(float), size, file)) != size ) {
    fprintf(stderr,"flo file: too short %d != %d\n", ret, size);
    abort();
  }
  double *matrix = malloc(size*sizeof(double));
  for(unsigned i = 0; i < size; i += 2)
    matrix[i/2] = float_matrix[i];
  for(unsigned i = 1; i < size; i += 2)
    matrix[i/2+width*height] = float_matrix[i];
  free(float_matrix);
  return matrix;
}

int32_t* read_flo_size_from_stream(FILE *file) {
  const float TAG = 202021.25;
  float tag;
  fread(&tag, sizeof(float), 1, file);
  if(tag != TAG) {
    printf("flo file: bad tag %f\n", tag);
    abort();
  }
  int32_t *size = malloc(2 * sizeof(int32_t));
  int ret = 0;
  if( (ret = fread(size, sizeof(int32_t), 2, file)) != 2 ) {
    printf("flo file: too short %d != %d\n", ret, 2);
    abort();
  }
  return size;
}

void write_flo_to_stream(double *matrix,
			 const unsigned width, const unsigned height,
			 FILE *stream) {
  float *float_matrix = malloc(width*height*2*sizeof(float));
  for(unsigned i = 0; i < width*height; ++i)
    float_matrix[i*2] = matrix[i];
  for(unsigned i = 0; i < width*height; ++i)
    float_matrix[i*2+1] = matrix[width*height+i];

  fprintf(stream, "PIEH");
  if (fwrite(&width, sizeof(int), 1, stream) != 1 ||
      fwrite(&height, sizeof(int), 1, stream) != 1) {
    fprintf(stderr,"flo file: couldn't write width and height\n");
    abort();
  }
  if (fwrite(float_matrix, sizeof(float), 2*width*height, stream) != 2*width*height) {
    fprintf(stderr,"flo file: problem writing data");
    abort();
  }
  free(float_matrix);
  return;
}

double *read_optical_flow_ssv(char *filename, unsigned height, unsigned width) {
  double *flow = (double *)malloc(sizeof(double)*width*height*2);
  if (flow==NULL) {
    fprintf(stderr, "can't malloc in read_optical_flow_ssv\n");
    exit(EXIT_FAILURE);
  }

  FILE *file = fopen(filename, "r");
  if (file==NULL) {
    perror("can't fopen in read_optical_flow_ssv");
    exit(EXIT_FAILURE);
  }

  if (fseek(file, 0, SEEK_END)!=0) {
    perror("can't fseek in read_optical_flow_ssv");
    exit(EXIT_FAILURE);
  }

  long size = ftell(file);
  if (size==-1) {
    perror("can't ftell in read_optical_flow_ssv");
    exit(EXIT_FAILURE);
  }

  rewind(file);

  char *data = (char *)malloc(size);
  if (data==NULL) {
    fprintf(stderr, "can't malloc in read_optical_flow_ssv\n");
    exit(EXIT_FAILURE);
  }

  if (fread(data, 1, size, file)!=size) {
    fprintf(stderr, "can't fread in read_optical_flow_ssv\n");
    exit(EXIT_FAILURE);
  }

  char *next = data;
  for(int i = 0; i<width*2*height; i++) {
    flow[i] = strtod(next, &next);
  }

  free(data);

  if (fclose(file)!=0) {
    perror("can't fclose in read_optical_flow_ssv");
    exit(EXIT_FAILURE);
  }

  return flow;
}

double *read_optical_flow_ssv_gz(char *filename,
				 unsigned height,
				 unsigned width) {
  double *flow = (double *)malloc(sizeof(double)*width*height*2);
  if (flow==NULL) {
    fprintf(stderr, "can't malloc in read_optical_flow_ssv_gz\n");
    exit(EXIT_FAILURE);
  }

  gzFile file = gzopen(filename, "r");
  if (file==NULL) {
    if (errno==0) {
      fprintf(stderr, "can't gzopen in read_optical_flow_ssv_gz\n");
    }
    else {
      perror("can't gzopen in read_optical_flow_ssv_gz\n");
    }
    exit(EXIT_FAILURE);
  }

  /* Note that the following does not work reliably, unsupported by zlib */
#if 0
  if (gzseek(file, 0, SEEK_END)==-1) {
    /*
      for some reason gzseek() returns -1 when it should not
      fprintf(stderr, "can't gzseek in read_optical_flow_ssv_gz\n");
      exit(EXIT_FAILURE);
    */
  }

  if (gztell(file)==-1) {
    fprintf(stderr, "can't gztell in read_optical_flow_ssv_gz\n");
    exit(EXIT_FAILURE);
  }
#else  /* This is a nasty temporary hack as this file format is deprecated */
  long size = 10000000;
#endif

  if (gzrewind(file)==-1) {
    fprintf(stderr, "can't gzrewind in read_optical_flow_ssv_gz\n");
    exit(EXIT_FAILURE);
  }

  char *data = (char *)malloc(size);
  if (data==NULL) {
    fprintf(stderr, "can't malloc in read_optical_flow_ssv_gz\n");
    exit(EXIT_FAILURE);
  }

  long read = gzread(file, data, size);
  if (read==size-1 || read <=0) {
    /*  */
    fprintf(stderr, "can't gzread in read_optical_flow_ssv_gz\n");
    exit(EXIT_FAILURE);
  }

  char *next = data;
  for(int i = 0; i<width*2*height; i++) {
    flow[i] = strtod(next, &next);
  }

  free(data);

  if (gzclose(file)!=0) {
    fprintf(stderr, "can't gzclose in read_optical_flow_ssv\n");
    exit(EXIT_FAILURE);
  }

  return flow;
}

double *average_optical_flow_ssv_from_c(double *ssv,
					unsigned height,
					unsigned width,
					unsigned xl,
					unsigned xh,
					unsigned yl,
					unsigned yh) {
  double ax = 0.0, ay = 0.0;
  for (int y = yl; y<=yh; y++) {
    for (int x = xl; x<=xh; x++) {
      ax += ssv[x+y*width];
      ay += ssv[width*height+x+y*width];
    }
  }

  double *average_flow = (double *)malloc(sizeof(double)*2);
  if (average_flow == NULL) {
    fprintf(stderr, "out of memory in average_optical_flow_ssv_from_c\n");
    exit(EXIT_FAILURE);
  }

  average_flow[0] = ax/(((xh-xl)+1)*((yh-yl)+1));
  average_flow[1] = ay/(((xh-xl)+1)*((yh-yl)+1));
  return average_flow;
}

void integral_optical_flow_f(double *flow, double *integral,
			     const unsigned height,
			     const unsigned width) {
  for(int y = height - 1; y >= 0; --y)
    for(int x = width - 1; x >= 0; --x)
      integral[x+y*width] =
	flow[x+y*width]
	+ (y+1 >= height ? 0 : integral[x+(y+1)*width])
	+ (x+1 >= width  ? 0 : integral[(x+1)+y*width])
	- (x+1 >= width || y+1 >= height ? 0 : integral[(x+1)+(y+1)*width]);
}

double *integral_optical_flow(double *flow,
			      const unsigned height,
			      const unsigned width) {
  double *integral = malloc(sizeof(double)*height*width*2);
  integral_optical_flow_f(flow, integral, height, width);
  integral_optical_flow_f(flow+height*width, integral+height*width, height, width);
  return integral;
}

double integral_optical_flow_area(double *integral_flow,
				  const unsigned height,
				  const unsigned width,
				  unsigned x1, unsigned y1,
				  unsigned x2, unsigned y2) {
  x1 = (x1+1 >= width ? width-2 : x1);
  y1 = (y1+1 >= height ? height-2 : y1);
  x2 = (x2+1 >= width ? width-2 : x2);
  y2 = (y2+1 >= height ? height-2 : y2);
  return integral_flow[x1+y1*width]
    - integral_flow[(x2+1)+y1*width]
    - integral_flow[x1+(y2+1)*width]
    + integral_flow[(x2+1)+(y2+1)*width];
}

double integral_optical_flow_area2(double *integral_flow,
				  const unsigned height,
				  const unsigned width,
				  unsigned x1, unsigned y1,
				  unsigned x2, unsigned y2) {
  return integral_flow[x1+y1*width]
    - (x2+1 >= width? 0: integral_flow[(x2+1)+y1*width])
    - (y2+1 >= height? 0: integral_flow[x1+(y2+1)*width])
    + ((x2+1>=width || y2+1>=height)? 0: integral_flow[(x2+1)+(y2+1)*width]);
}

double *euclidean_1d_dt(double *f, unsigned n) {
  double *d = (double *)malloc(2*n*sizeof(double));
  int *v = (int *)malloc(n*sizeof(int));
  double *z = (double *)malloc((n+1)*sizeof(double));
  int k = 0;
  v[0] = 0;
  z[0] = -HUGE_VAL;
  z[1] = +HUGE_VAL;
  for (int q = 1; q <= n-1; q++) {
    double s  = ((f[q]+(q*q))-(f[v[k]]+(v[k]*v[k])))/(2*q-2*v[k]);
    while (s <= z[k]) {
      k--;
      s  = ((f[q]+(q*q))-(f[v[k]]+(v[k]*v[k])))/(2*q-2*v[k]);
    }
    k++;
    v[k] = q;
    z[k] = s;
    z[k+1] = +HUGE_VAL;
  }
  k = 0;
  for (int q = 0; q <= n-1; q++) {
    while (z[k+1] < q) {k++;}
    d[q] = (q-v[k])*(q-v[k]) + f[v[k]];
    d[q+n] = v[k];
  }
  free(v);
  free(z);
  return d;
}

double *euclidean_1d_dt_vals(double *f, unsigned n) {
  double *d = (double *)malloc(n*sizeof(double));
  int *v = (int *)malloc(n*sizeof(int));
  double *z = (double *)malloc((n+1)*sizeof(double));
  int k = 0;
  v[0] = 0;
  z[0] = -HUGE_VAL;
  z[1] = +HUGE_VAL;
  for (int q = 1; q <= n-1; q++) {
    double s  = ((f[q]+(q*q))-(f[v[k]]+(v[k]*v[k])))/(2*q-2*v[k]);
    while (s <= z[k]) {
      k--;
      s  = ((f[q]+(q*q))-(f[v[k]]+(v[k]*v[k])))/(2*q-2*v[k]);
    }
    k++;
    v[k] = q;
    z[k] = s;
    z[k+1] = +HUGE_VAL;
  }
  k = 0;
  for (int q = 0; q <= n-1; q++) {
    while (z[k+1] < q) {k++;}
    d[q] = (q-v[k])*(q-v[k]) + f[v[k]];
  }
  free(v);
  free(z);
  return d;
}

int ffmpeg_first_video_stream(struct ffmpeg_video_t *video) {
  if(av_find_stream_info(video->pFormatCtx)<0) {
    fprintf(stderr, "error: Can't get video stream information\n");
    exit(-1);
  }
  for(int i=0; i < video->pFormatCtx->nb_streams; i++)
    if(video->pFormatCtx->streams[i]->codec->codec_type==AVMEDIA_TYPE_VIDEO)
      return i;
  fprintf(stderr, "error: Can't find first video stream");
  exit(-1);
}

AVCodecContext *ffmpeg_get_codec(struct ffmpeg_video_t *video) {
  AVCodecContext *pCodecCtx = video->pFormatCtx->streams[video->videoStream]->codec;
  AVCodec *pCodec = avcodec_find_decoder(pCodecCtx->codec_id);
  if(pCodec==NULL) {
    fprintf(stderr,"error: Unsupported codec!");
    exit(-1);
  }
  if(avcodec_open(pCodecCtx, pCodec)<0) {
    fprintf(stderr,"error: Can't open codec!");
    exit(-1);
  }
  return pCodecCtx;
}

int ffmpeg_next_frame(struct ffmpeg_video_t *video) {
  av_free_packet(&video->packet);
  int frameFinished;
  int nextFrameValid = av_read_frame(video->pFormatCtx, &video->packet) >= 0;
  if(nextFrameValid && video->packet.stream_index==video->videoStream) {
    avcodec_decode_video2(video->pCodecCtx, video->pFrame, &frameFinished, &video->packet);
    if(frameFinished) video->frame++;
    else ffmpeg_next_frame(video);
  } else if(nextFrameValid) {
    ffmpeg_next_frame(video);
  } else if(!video->videoFinished && !nextFrameValid) {
    // This is required because ffmpeg hangs on to many frames internally
    AVPacket packet;
    packet.data = 0;
    packet.size = 0;
    avcodec_decode_video2(video->pCodecCtx, video->pFrame, &frameFinished, &packet);
    if(frameFinished)
      video->frame++;
    else
      video->videoFinished = 1;
  }
  return !video->videoFinished;
}

char ffmpeg_video_finished(struct ffmpeg_video_t *video) {
  return video->videoFinished == 1;
}

void ffmpeg_close_and_free_video(struct ffmpeg_video_t *video) {
  av_free(video->buffer);
  av_free(video->pFrameBGRA);
  av_free(video->pFrame);
  avcodec_close(video->pCodecCtx);
  av_close_input_file(video->pFormatCtx);
  av_free_packet(&video->packet);
  video->videoFinished = 1;
  free(video);
}

struct ffmpeg_video_t *ffmpeg_open_video(char* filename) {
  struct ffmpeg_video_t *video = malloc(sizeof(struct ffmpeg_video_t));
  bzero(video, sizeof(struct ffmpeg_video_t));
  av_register_all();
  if(avformat_open_input(&video->pFormatCtx, filename, NULL, NULL)!=0) {
    fprintf(stderr, "error: Can't open video\n");
    free(video);
    return NULL;
  }
  video->videoStream = ffmpeg_first_video_stream(video);
  video->pCodecCtx = ffmpeg_get_codec(video);
  video->pFrame = avcodec_alloc_frame();
  video->pFrameBGRA = avcodec_alloc_frame();
  if(!video->pFrameBGRA || !video->pFrame) {
    fprintf(stderr,"error: Can't allocate frame!");
    avcodec_close(video->pCodecCtx);
    free(video);
    return NULL;
  }
  video->buffer =
    (uint8_t *)av_malloc(avpicture_get_size(PIX_FMT_BGRA,
					    video->pCodecCtx->width,
					    video->pCodecCtx->height) *
			 sizeof(uint8_t));
  avpicture_fill((AVPicture *)video->pFrameBGRA, video->buffer, PIX_FMT_BGRA,
		 video->pCodecCtx->width, video->pCodecCtx->height);
  video->img_convert_ctx =
    sws_getContext(video->pCodecCtx->width, video->pCodecCtx->height,
		   video->pCodecCtx->pix_fmt,
		   video->pCodecCtx->width, video->pCodecCtx->height,
		   PIX_FMT_BGRA, SWS_BICUBIC,
		   NULL, NULL, NULL);
  video->videoFinished = 0;
  video->frame = 0;
  av_init_packet(&video->packet);
  ffmpeg_next_frame(video);
  return video;
}

uint8_t *ffmpeg_get_frame(struct ffmpeg_video_t *video) {
  uint8_t *data = malloc(avpicture_get_size(PIX_FMT_BGRA,
					    video->pCodecCtx->width,
					    video->pCodecCtx->height) * sizeof(uint8_t));
  sws_scale(video->img_convert_ctx, (const uint8_t * const*)video->pFrame->data,
	    video->pFrame->linesize, 0,
	    video->pCodecCtx->height,
	    video->pFrameBGRA->data, video->pFrameBGRA->linesize);
  memcpy(data, video->buffer,
	 avpicture_get_size(PIX_FMT_BGRA,
			    video->pCodecCtx->width,
			    video->pCodecCtx->height) * sizeof(uint8_t));
  return data;
}

unsigned int ffmpeg_video_width(struct ffmpeg_video_t *video) {
  return video->pCodecCtx->width;
}

unsigned int ffmpeg_video_height(struct ffmpeg_video_t *video) {
  return video->pCodecCtx->height;
}

double ffmpeg_video_frame_rate(struct ffmpeg_video_t *video) {
  /* hints from
     http://ffmpeg.org/pipermail/ffmpeg-cvslog/2011-August/039936.html*/
  int i = video->videoStream;
  int rfps = video->pFormatCtx->streams[i]->r_frame_rate.num;
  int rfps_base = video->pFormatCtx->streams[i]->r_frame_rate.den;

  return (float)rfps / rfps_base;
}

Imlib_Image *ffmpeg_get_frame_as_imlib(struct ffmpeg_video_t *video) {
  sws_scale(video->img_convert_ctx, (const uint8_t * const*)video->pFrame->data,
	    video->pFrame->linesize, 0,
	    video->pCodecCtx->height,
	    video->pFrameBGRA->data, video->pFrameBGRA->linesize);
  Imlib_Image *image =
    imlib_create_image_using_copied_data(video->pCodecCtx->width,
					 video->pCodecCtx->height,
					 (uint32_t*)video->buffer);
  return image;
}

struct box_line_t *read_boxes_file(const char *filename) {
  FILE *file = fopen(filename, "r");
  if(!file) printf("read_boxes_file failed to open file '%s'", filename);

  char buffer[2048];
  struct box_line_t *start = malloc(sizeof(struct box_line_t));
  start->next = NULL;
  struct box_line_t *line = start;

  while(file && fgets(buffer,2048,file)) {
    int i = 0;
    double storage[100];
    char *next = buffer, *prev = buffer;
    do {prev = next; storage[i++] = strtod(prev, &next);}  while(next != prev);
    line->values = malloc((i-1)*sizeof(double));
    memcpy(line->values, storage, (i-1)*sizeof(double));
    line->nr_values = i-1;
    if(line->nr_values > 1)
      {
	int len = strlen(next);
	line->name = malloc(len+1);
	bzero(line->name,len+1);
	strncpy(line->name, next, len);
	line->name[len] = 0;
	line->name[len-1] = 0;
      } else {
      line->name = 0;
    }
    line->next = malloc(sizeof(struct box_line_t));
    line = line->next;
  }

  line->next = NULL;
  if(file) fclose(file);

  return start;
}

/* This is a destructive operation on buffer! */
struct box_line_t *read_boxes_from_buffer(char *buffer) {
  struct box_line_t *start = malloc(sizeof(struct box_line_t));
  start->next = NULL;
  struct box_line_t *line = start;
  char *buffer_line = 0;
  while((buffer_line = strsep(&buffer, "\n"))) {
    int i = 0;
    /* can't have more than strlen buffer_line doubles */
    line->values = malloc(sizeof(double)*MAX(1,strlen(buffer_line)));
    char *next = buffer_line, *prev = buffer_line;
    do {prev = next; line->values[i++] = strtod(prev, &next);}  while(next != prev);
    line->nr_values = i-1;
    assert(line->nr_values < MAX(1,strlen(buffer_line)));
    /* frames are separated by single integers */
    if(1 == line->nr_values) {
      line->name = 0;
    } else {
      int len = strlen(next);
      line->name = malloc(len+1);
      strncpy(line->name, next, len);
      line->name[len] = 0;
    }
    line->next = malloc(sizeof(struct box_line_t));
    line = line->next;
  }
  line->next = NULL;
  return start;
}

// -------------------------------------------------------------------------------- Pedro Predefs

struct alphainfo;
void alphacopy(const real *src, real *dst, struct alphainfo *ofs, int n);
void resize1dtran(const real *src, int sheight, real *dst, int dheight, int width, int chan);

// -------------------------------------------------------------------------------- Pedro_Resize
struct dim3array* pedro_resize_image(const real* image, int height, int width, int channels, real scale)
{
  // Change the layout of the matrix to suit pedro's matlab formatting
  const real* src = image;

  if (scale > 1.0)
    fprintf(stderr, "Invalid scaling factor: %f\n", scale);

  int new_w = (int)round(width*scale);
  int new_h = (int)round(height*scale);
  int c = channels;
  real* dst = (real*) malloc(new_w * new_h * c * sizeof(real));

  real* tmp = (real*) malloc(new_h * width * c * sizeof(real));
  resize1dtran(src, height, tmp, new_h, width, c);
  resize1dtran(tmp, width, dst, new_w, new_h, c);

  free(tmp);

  struct dim3array* res = malloc(sizeof(struct dim3array));
  res->rows = new_h;
  res->cols = new_w;
  res->channels = c;
  res->data = dst;

  return res;
}

// struct used for caching interpolation values
struct alphainfo {
  int si, di;
  real alpha;
};

// copy src into dst using pre-computed interpolation values
void alphacopy(const real *src, real *dst, struct alphainfo *ofs, int n) {
  struct alphainfo *end = ofs + n;
  while (ofs != end) {
    dst[ofs->di] += ofs->alpha * src[ofs->si];
    ofs++;
  }
}

// resize along each column
// result is transposed, so we can apply it twice for a complete resize
void resize1dtran(const real *src, int sheight, real *dst, int dheight, int width, int chan) {
  real scale = (real)dheight/(real)sheight;
  real invscale = (real)sheight/(real)dheight;

  // we cache the interpolation values since they can be
  // shared among different columns
  int len = (int)ceil(dheight*invscale) + 2*dheight;
  struct alphainfo ofs[len];
  int k = 0;
  for (int dy = 0; dy < dheight; dy++) {
    real fsy1 = dy * invscale;
    real fsy2 = fsy1 + invscale;
    int sy1 = (int)ceil(fsy1);
    int sy2 = (int)floor(fsy2);

    if (sy1 - fsy1 > 1e-3) {
      assert(k < len);
      assert(sy1-1 >= 0);
      ofs[k].di = dy*width;
      ofs[k].si = sy1-1;
      ofs[k++].alpha = (sy1 - fsy1) * scale;
    }

    for (int sy = sy1; sy < sy2; sy++) {
      assert(k < len);
      assert(sy < sheight);
      ofs[k].di = dy*width;
      ofs[k].si = sy;
      ofs[k++].alpha = scale;
    }

    if (fsy2 - sy2 > 1e-3) {
      assert(k < len);
      assert(sy2 < sheight);
      ofs[k].di = dy*width;
      ofs[k].si = sy2;
      ofs[k++].alpha = (fsy2 - sy2) * scale;
    }
  }

  // resize each column of each color channel
  // This is pedro's original code; pretty certain doesn't work on all archs, AJM
  //bzero(dst, chan*width*dheight*sizeof(real));

  // Initialise memory before applying sumations
  for(int i = 0; i < chan*width*dheight; ++i) dst[i] = 0.0;

  for (int c = 0; c < chan; c++) {
    for (int x = 0; x < width; x++) {
      const real *s = src + c*width*sheight + x*sheight;
      real *d = dst + c*width*dheight + x;
      alphacopy(s, d, ofs, k);
    }
  }
}

// -------------------------------------------------------------------------------- Pedro_Features

// small value, used to avoid division by zero
#define eps 0.0001

// unit vectors used to compute gradient orientation
real uu[9] = {1.0000,
	      0.9397,
	      0.7660,
	      0.500,
	      0.1736,
	      -0.1736,
	      -0.5000,
	      -0.7660,
	      -0.9397};
real vv[9] = {0.0000,
	      0.3420,
	      0.6428,
	      0.8660,
	      0.9848,
	      0.9848,
	      0.8660,
	      0.6428,
	      0.3420};

static inline real min_real(real x, real y) { return (x <= y ? x : y); }
static inline real max_real(real x, real y) { return (x <= y ? y : x); }

static inline int min_int(int x, int y) { return (x <= y ? x : y); }
static inline int max_int(int x, int y) { return (x <= y ? y : x); }

// main function:
// takes a real color image and a bin size
// returns HOG features
struct dim3array* pedro_features(const real* im, int height, int width, int channels, int sbin) {

  int dims[3];
  dims[0] = height;
  dims[1] = width;
  dims[2] = channels;

  // memory for caching orientation histograms & their norms
  int blocks[2];
  blocks[0] = (int) round((real)height/(real)sbin);
  blocks[1] = (int) round((real)width/(real)sbin);
  real* hist = (real*) malloc(blocks[0]*blocks[1]*18 * sizeof(real));
  real* norm = (real*) malloc(blocks[0]*blocks[1] * sizeof(real));

  // memory for HOG features
  int out[3];
  out[0] = max_int(blocks[0]-2, 0);
  out[1] = max_int(blocks[1]-2, 0);
  out[2] = 27+4+1;

  real* feat = (real*) malloc(out[1] * out[0] * out[2] * sizeof(real));

  int visible[2];
  visible[0] = blocks[0]*sbin;
  visible[1] = blocks[1]*sbin;

  for (int x = 1; x < visible[1]-1; x++) {
    for (int y = 1; y < visible[0]-1; y++) {
      // first color channel
      const real *s = im + min_int(x, dims[1]-2)*dims[0] + min_int(y, dims[0]-2);
      real dy = *(s+1) - *(s-1);
      real dx = *(s+dims[0]) - *(s-dims[0]);
      real v = dx*dx + dy*dy;

      // second color channel
      s += dims[0]*dims[1];
      real dy2 = *(s+1) - *(s-1);
      real dx2 = *(s+dims[0]) - *(s-dims[0]);
      real v2 = dx2*dx2 + dy2*dy2;

      // third color channel
      s += dims[0]*dims[1];
      real dy3 = *(s+1) - *(s-1);
      real dx3 = *(s+dims[0]) - *(s-dims[0]);
      real v3 = dx3*dx3 + dy3*dy3;

      // pick channel with strongest gradient
      if (v2 > v) {
	v = v2;
	dx = dx2;
	dy = dy2;
      }
      if (v3 > v) {
	v = v3;
	dx = dx3;
	dy = dy3;
      }

      // snap to one of 18 orientations
      real best_dot = 0;
      int best_o = 0;
      for (int o = 0; o < 9; o++) {
	real dot = uu[o]*dx + vv[o]*dy;
	if (dot > best_dot) {
	  best_dot = dot;
	  best_o = o;
	} else if (-dot > best_dot) {
	  best_dot = -dot;
	  best_o = o+9;
	}
      }

      // add to 4 histograms around pixel using linear interpolation
      real xp = ((real)x+0.5)/(real)sbin - 0.5;
      real yp = ((real)y+0.5)/(real)sbin - 0.5;
      int ixp = (int)floor(xp);
      int iyp = (int)floor(yp);
      real vx0 = xp-ixp;
      real vy0 = yp-iyp;
      real vx1 = 1.0-vx0;
      real vy1 = 1.0-vy0;
      v = sqrt(v);

      if (ixp >= 0 && iyp >= 0) {
	*(hist + ixp*blocks[0] + iyp + best_o*blocks[0]*blocks[1]) +=
	  vx1*vy1*v;
      }

      if (ixp+1 < blocks[1] && iyp >= 0) {
	*(hist + (ixp+1)*blocks[0] + iyp + best_o*blocks[0]*blocks[1]) +=
	  vx0*vy1*v;
      }

      if (ixp >= 0 && iyp+1 < blocks[0]) {
	*(hist + ixp*blocks[0] + (iyp+1) + best_o*blocks[0]*blocks[1]) +=
	  vx1*vy0*v;
      }

      if (ixp+1 < blocks[1] && iyp+1 < blocks[0]) {
	*(hist + (ixp+1)*blocks[0] + (iyp+1) + best_o*blocks[0]*blocks[1]) +=
	  vx0*vy0*v;
      }
    }
  }

  // compute energy in each block by summing over orientations
  for (int o = 0; o < 9; o++) {
    real *src1 = hist + o*blocks[0]*blocks[1];
    real *src2 = hist + (o+9)*blocks[0]*blocks[1];
    real *dst = norm;
    real *end = norm + blocks[1]*blocks[0];
    while (dst < end) {
      *(dst++) += (*src1 + *src2) * (*src1 + *src2);
      src1++;
      src2++;
    }
  }

  // compute features
  for (int x = 0; x < out[1]; x++) {
    for (int y = 0; y < out[0]; y++) {
      real *dst = feat + x*out[0] + y;
      real *src, *p, n1, n2, n3, n4;

      p = norm + (x+1)*blocks[0] + y+1;
      n1 = 1.0 / sqrt(*p + *(p+1) + *(p+blocks[0]) + *(p+blocks[0]+1) + eps);
      p = norm + (x+1)*blocks[0] + y;
      n2 = 1.0 / sqrt(*p + *(p+1) + *(p+blocks[0]) + *(p+blocks[0]+1) + eps);
      p = norm + x*blocks[0] + y+1;
      n3 = 1.0 / sqrt(*p + *(p+1) + *(p+blocks[0]) + *(p+blocks[0]+1) + eps);
      p = norm + x*blocks[0] + y;
      n4 = 1.0 / sqrt(*p + *(p+1) + *(p+blocks[0]) + *(p+blocks[0]+1) + eps);

      real t1 = 0;
      real t2 = 0;
      real t3 = 0;
      real t4 = 0;

      // contrast-sensitive features
      src = hist + (x+1)*blocks[0] + (y+1);
      for (int o = 0; o < 18; o++) {
	real h1 = min_real(*src * n1, 0.2);
	real h2 = min_real(*src * n2, 0.2);
	real h3 = min_real(*src * n3, 0.2);
	real h4 = min_real(*src * n4, 0.2);
	*dst = 0.5 * (h1 + h2 + h3 + h4);
	t1 += h1;
	t2 += h2;
	t3 += h3;
	t4 += h4;
	dst += out[0]*out[1];
	src += blocks[0]*blocks[1];
      }

      // contrast-insensitive features
      src = hist + (x+1)*blocks[0] + (y+1);
      for (int o = 0; o < 9; o++) {
	real sum = *src + *(src + 9*blocks[0]*blocks[1]);
	real h1 = min_real(sum * n1, 0.2);
	real h2 = min_real(sum * n2, 0.2);
	real h3 = min_real(sum * n3, 0.2);
	real h4 = min_real(sum * n4, 0.2);
	*dst = 0.5 * (h1 + h2 + h3 + h4);
	dst += out[0]*out[1];
	src += blocks[0]*blocks[1];
      }

      // texture features
      *dst = 0.2357 * t1;
      dst += out[0]*out[1];
      *dst = 0.2357 * t2;
      dst += out[0]*out[1];
      *dst = 0.2357 * t3;
      dst += out[0]*out[1];
      *dst = 0.2357 * t4;

      // truncation feature
      dst += out[0]*out[1];
      *dst = 0;
    }
  }

  free(hist);
  free(norm);

  struct dim3array* res = malloc(sizeof(struct dim3array));
  res->rows = out[0];
  res->cols = out[1];
  res->channels = out[2];
  res->data = feat;

  return res;
}

TSCP bool_tscp(int bool) {
  if(bool) return TRUEVALUE;
  else return FALSEVALUE;
}

void sc_error( char *symbol, char *format, TSCP args );

int tscp_bool(TSCP bool) {
  if(bool == TRUEVALUE) return 1;
  if(bool == FALSEVALUE) return 0;
  sc_error( "TSCP_BOOL", "~s is not a boolean", CONS( bool, EMPTYLIST ) );
  exit(EXIT_FAILURE);
}

/* Fix Scheme->C signed integers */

TSCP sc_int_tscp(int n) {
  if (n<=MAXTSCPINT&&n>=MINTSCPINT) return (C_FIXED(n));
  return (MAKEFLOAT((double)n));
}

int sc_tscp_int(TSCP p) {
  switch TSCPTAG(p) {
    case FIXNUMTAG:
      return (FIXED_C(p));
      break;
    case EXTENDEDTAG:
      if (TX_U(p)->extendedobj.tag==DOUBLEFLOATTAG) {
        return ((S2CINT)FLOAT_VALUE(p));
      }
      break;
    }
  sc_error("TSCP_S2CINT", "Argument cannot be converted to C int",
            EMPTYLIST);
  return 0;                     /* silences warning */
}

void setCudaDevice(int device) {
  fprintf(stderr, "cuda\n");
  exit(-1);
}

int c_gettimeofday(struct timeofday_t *t) {
  struct timeval tv;
  struct timezone tz;
  int r = gettimeofday(&tv, &tz);
  t->seconds = tv.tv_sec;
  t->microseconds = tv.tv_usec;
  t->minutewest = tz.tz_minuteswest;
  t->dsttime = tz.tz_dsttime;
  return r;
}

// FIXME Andrei char *bgra suffers from endianess issues
int rgb_at(unsigned char *bgra, int width, int height, int x, int y, int *out) {
  if(0 <= x && x < width && 0 <= y && y < height) {
    out[0] = bgra[4*(x+y*width)+2];
    out[1] = bgra[4*(x+y*width)+1];
    out[2] = bgra[4*(x+y*width)];
    return 1;
  } else {
    out[0] = 0;
    out[1] = 0;
    out[2] = 0;
    return 0;
  }
}

// FIXME Andrei char *bgra suffers from endianess issues
int rgba_at(unsigned char *bgra, int width, int height, int x, int y, int *out) {
  if(0 <= x && x < width && 0 <= y && y < height) {
    out[0] = bgra[4*(x+y*width)+2];
    out[1] = bgra[4*(x+y*width)+1];
    out[2] = bgra[4*(x+y*width)];
    out[3] = bgra[4*(x+y*width)+3];
    return 1;
  } else {
    out[0] = 0;
    out[1] = 0;
    out[2] = 0;
    out[3] = 0;
    return 0;
  }
}

// FIXME Andrei char *bgra suffers from endianess issues
float *bgra_average_color(unsigned char *bgra, int width, int height,
                          int x1, int y1, int x2, int y2) {
  float r = 0, g = 0, b = 0, t = 0;
  for (int y = y1; y < y2; ++y)
    for (int x = x1; x < x2; ++x)
      if(0 <= x && x < width && 0 <= y && y < height) {
        b += (float)(bgra[4*(x+y*width)]);
        g += (float)(bgra[4*(x+y*width)+1]);
        r += (float)(bgra[4*(x+y*width)+2]);
        t++;
      }
  float *color = malloc(sizeof(float)*3);
  color[0] = r/t;
  color[1] = g/t;
  color[2] = b/t;
  return color;
}

Imlib_Image canny(Imlib_Image input,
		  int size, double sigma,
		  double threshold1, double threshold2, int aperture_size) {
  imlib_context_set_image(input);
  int width = imlib_image_get_width();
  int height = imlib_image_get_height();

  IplImage *inputRGBA, *greyscale, *outputRGBA;
  inputRGBA = cvCreateImageHeader(cvSize(width, height), IPL_DEPTH_8U, 4);
  cvSetData(inputRGBA, imlib_image_get_data_for_reading_only(), CV_AUTOSTEP);
  greyscale = cvCreateImage(cvSize(width, height), IPL_DEPTH_8U, 1);
  outputRGBA = cvCreateImage(cvSize(width, height), IPL_DEPTH_8U, 4);

  cvCvtColor(inputRGBA, greyscale, CV_RGBA2GRAY);
  if (size!=0) {
    cvSmooth(greyscale, greyscale, CV_GAUSSIAN, size, 0, sigma, 0.0);
  }
  cvCanny(greyscale, greyscale, threshold1, threshold2, aperture_size);
  cvCvtColor(greyscale, outputRGBA, CV_GRAY2RGBA);

  Imlib_Image result =
    imlib_create_image_using_copied_data(width, height, (unsigned int*) outputRGBA->imageData);
  cvReleaseImageHeader(&inputRGBA);
  cvReleaseImage(&greyscale);
  cvReleaseImage(&outputRGBA);
  return result;
}

/* video player */

void start_video_player(struct video_player_t *args) {
  pthread_attr_t attributes;
  pthread_attr_init(&attributes);
  pthread_attr_setstacksize(&attributes, 10485760); /* hardwired 10MB */
  if (pthread_create(&args->thread, &attributes, video_player_thread, (void*)args))
    perror("Can't presenter thread");
}

void stop_video_player(struct video_player_t *args) {
  args->stop = 1;
  if(pthread_join(args->thread, NULL))
    perror("Can't stop presenter thread");
}

void *video_player_thread(void *args_) {
  const int border = 3;
  struct video_player_t *args = args_;
  Display *display = XOpenDisplay("");
  int screen = DefaultScreen(display);
  imlib_context_disconnect_display();
  imlib_context_set_display(display);
  imlib_context_set_visual(XDefaultVisual(display, screen));
  imlib_context_set_colormap(XDefaultColormap(display, screen));
  imlib_context_set_drawable(args->window);
  struct ffmpeg_video_t **videos = malloc(sizeof(struct ffmpeg_video_t *)*args->number_of_videos);
  for(int v = 0; v < args->number_of_videos; v++) {
    videos[v] = ffmpeg_open_video(args->video_filenames[v]);
    if(!videos[v]) {
      printf("Could not open %s\n", args->video_filenames[v]);
    }
  }
  while(!args->stop) {
    for(int v = 0; v < args->number_of_videos; v++) {
      if(videos[v]) {
        if(ffmpeg_video_finished(videos[v])) {
          ffmpeg_close_and_free_video(videos[v]);
          videos[v] = ffmpeg_open_video(args->video_filenames[v]);
        }
        Imlib_Image *frame = ffmpeg_get_frame_as_imlib(videos[v]);
        imlib_context_set_image(frame);
        int frame_width = imlib_image_get_width();
        int frame_height = imlib_image_get_height();
        Imlib_Image *draw = imlib_create_image(args->w[v], args->h[v]);
        imlib_context_set_image(draw);
        imlib_context_set_color(0,0,0,255);
        imlib_image_fill_rectangle(0, 0, imlib_image_get_width(), imlib_image_get_height());
        double draw_ratio = (double)args->w[v] / (double)args->h[v];
        double frame_ratio = (double)frame_width / (double)frame_height;
        int new_width, new_height, new_x, new_y;
        if(draw_ratio > frame_ratio) {
          new_width = (double)args->h[v] * (double)frame_width / (double)frame_height;
          new_height = args->h[v];
          new_x = (args->w[v] - new_width) / 2;
          new_y = 0;
        } else {
          new_width = args->w[v];
          new_height = (double)args->w[v] * (double)frame_height / (double)frame_width;
          new_x = 0;
          new_y = (args->h[v] - new_height) / 2;
        }
        imlib_blend_image_onto_image(frame, 0, 0, 0, frame_width, frame_height,
                                     new_x, new_y, new_width, new_height);
        switch(args->border[v]) {
        case 1:
          imlib_context_set_color(0,255,0,255);
          break;
        case 2:
          imlib_context_set_color(255,0,0,255);
          break;
        default: break;
        }
        if(args->border[v]) {
          imlib_image_fill_rectangle(0,          0,            border,args->h[v]);
          imlib_image_fill_rectangle(args->w[v]-3,0,            border,args->h[v]);
          imlib_image_fill_rectangle(0,          0,            args->w[v],border);
          imlib_image_fill_rectangle(0,          args->h[v]-3,  args->w[v],border);
        }
        imlib_render_image_on_drawable(args->x[v], args->y[v]);
        imlib_free_image_and_decache();
        imlib_context_set_image(frame);
        imlib_free_image_and_decache();
        ffmpeg_next_frame(videos[v]);
      }
    }
    XFlush(display);
    usleep(166666);             /* 6fps */
  }
  for(int v = 0; v < args->number_of_videos; v++) {
    if(videos[v]) ffmpeg_close_and_free_video(videos[v]);
  }
  free(videos);
  return NULL;
}
