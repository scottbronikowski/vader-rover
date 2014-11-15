#include <opencv/cv.h>
#include <opencv/highgui.h>
#include "toollib-farneback-c.h"
#include <Imlib2.h>
#include <stdio.h>

#define DEBUG 0

#define CLIP(x, t, u) {				\
    if (x<t) x = t;				\
    if (x>u) x = u;				\
  }

/* Can't include idealib-c.h because it is broken. */
struct ffmpeg_video_t {
  AVFormatContext *pFormatCtx;
  int videoStream;
  AVCodecContext *pCodecCtx;
  AVFrame *pFrame;
  AVFrame *pFrameBGRA;
  uint8_t *buffer;
  struct SwsContext *img_convert_ctx;
  AVPacket packet;
  int frame;
  int videoFinished;
};

uint8_t *ffmpeg_get_frame(struct ffmpeg_video_t *video);
struct ffmpeg_video_t *ffmpeg_open_video(char* filename);
void ffmpeg_close_and_free_video(struct ffmpeg_video_t *video);
char ffmpeg_video_finished(struct ffmpeg_video_t *video);
int ffmpeg_next_frame(struct ffmpeg_video_t *video);
int ffmpeg_first_video_stream(struct ffmpeg_video_t *video);
unsigned int ffmpeg_video_width(struct ffmpeg_video_t *video);
unsigned int ffmpeg_video_height(struct ffmpeg_video_t *video);
double ffmpeg_video_frame_rate(struct ffmpeg_video_t *video);
Imlib_Image *ffmpeg_get_frame_as_imlib(struct ffmpeg_video_t *video);

int ffmpeg_video_length(char* filename)
{
  int i=0;
  struct ffmpeg_video_t *video = ffmpeg_open_video(filename);
  while (video!=NULL && !ffmpeg_video_finished(video))
    {
      i++;
      ffmpeg_next_frame(video);
    }
  if (video!=NULL) ffmpeg_close_and_free_video(video);
  return i;
}

void farneback_set_grey(unsigned char *p,
			unsigned int width,
			unsigned int y,
			unsigned int x,
			unsigned int value) {
  p[y*width+x] = value;
}

void farneback_set_flow(float *p,
			unsigned int width,
			unsigned int y,
			unsigned int x,
			unsigned int channel,
			float value) {
  p[y*2*width+x*2+channel] = value;
}

float farneback_get_flow(float *p,
			 unsigned int width,
			 unsigned int y,
			 unsigned int x,
			 unsigned int channel) {
  return p[y*2*width+x*2+channel];
}

float farneback_avg_flow_magnitude_in_box(float *p,
					  unsigned int width,
					  int x1,
					  int y1,
					  int x2,
					  int y2)
// runtime linear with box size.
// you should use avergage_flow_magnitude_in_rect on integral flow below if you care
{
  int x,y,index;
  float sum=0; 
  float fx,fy;
  for (x=x1;x<=x2;x++)
    for (y=y1;y<=y2;y++)
      {
	index = y*2*width+x*2;
	fx = p[index];
	fy = p[index+1];
	sum+= sqrt(fx*fx+fy*fy);
      }
  return (sum/((x2-x1+1)*(y2-y1+1)));
}

void average_flow_in_rect(float* integral_flow,
			  int width,
			  int height,
			  int x1,
			  int y1,
			  int x2,
			  int y2,
			  float* avg) {
  /* height and width are those of integral_flow which are the same
     as the original image.
     rect is at the scale of the integral_flow which is the same as the
     original image. */
  CLIP(y1, 0, height-2);
  CLIP(x1, 0, width-2);
  CLIP(y2, 0, height-2);
  CLIP(x2, 0, width-2);
  double area = (y2-y1+1)*(x2-x1+1);
  avg[0] = (integral_flow[y1*2*width+x1*2]
	    -integral_flow[y1*2*width+(x2+1)*2]
	    -integral_flow[(y2+1)*2*width+x1*2]
	    +integral_flow[(y2+1)*2*width+(x2+1)*2])/area;
  avg[1] = (integral_flow[y1*2*width+x1*2+1]
	    -integral_flow[y1*2*width+(x2+1)*2+1]
	    -integral_flow[(y2+1)*2*width+x1*2+1]
	    +integral_flow[(y2+1)*2*width+(x2+1)*2+1])/area;
return;
}

float average_flow_magnitude_in_rect(float* integral_flow_magnitude,
				     int width,
				     int height,
				     int x1,
				     int y1,
				     int x2,
				     int y2) {
  /* height and width are those of integral_flow which are the same
     as the original image.
     rect is at the scale of the integral_flow which is the same as the
     original image. */
  CLIP(y1, 0, height-2);
  CLIP(x1, 0, width-2);
  CLIP(y2, 0, height-2);
  CLIP(x2, 0, width-2);
  float area = (y2-y1+1)*(x2-x1+1);
   float foo = (integral_flow_magnitude[y1*width+x1]
	  -integral_flow_magnitude[y1*width+x2+1]
	  -integral_flow_magnitude[(y2+1)*width+x1]
	  +integral_flow_magnitude[(y2+1)*width+x2+1])/area;
  return foo;
}

void farneback(unsigned char *previous, unsigned char *next, float *flow,
	       unsigned int width, unsigned int height, int initial) {
  CvMat previous_matrix = cvMat(height, width, CV_8UC1, previous);
  CvMat next_matrix = cvMat(height, width, CV_8UC1, next);
  CvMat flow_matrix = cvMat(height, width, CV_32FC2, flow);
  cvCalcOpticalFlowFarneback(&previous_matrix,
			     &next_matrix,
			     &flow_matrix,
			     0.5, /* pyr_scale */
			     5,	  /* levels */
			     8,	  /* winsize */
			     20,  /* iterations */
			     5,	  /* poly_n */
			     1.1, /* poly_sigma */
			     /* needs work: use OPTFLOW_USE_INITIAL_FLOW */
			     /* OPTFLOW_USE_INITIAL_FLOW */
			     /* OPTFLOW_FARNEBACK_GAUSSIAN */
			     initial?4:0);
}

void run_farneback(unsigned char *previous,
		   unsigned char *next,
		   float *flow,
		   unsigned int width,
		   unsigned int height, 
		   int initial,
		   double pyr_scale,
		   int levels,
		   int winsize,
		   int iterations,
		   int poly_n,
		   double poly_sigma) {
  CvMat previous_matrix = cvMat(height, width, CV_8UC1, previous);
  CvMat next_matrix = cvMat(height, width, CV_8UC1, next);
  CvMat flow_matrix = cvMat(height, width, CV_32FC2, flow);
  cvCalcOpticalFlowFarneback(&previous_matrix,
			     &next_matrix,
			     &flow_matrix,
			     pyr_scale,
			     levels,
			     winsize,
			     iterations,
			     poly_n,
			     poly_sigma,
			     /* needs work: use OPTFLOW_USE_INITIAL_FLOW */
			     /* OPTFLOW_USE_INITIAL_FLOW */
			     /* OPTFLOW_FARNEBACK_GAUSSIAN */
			     initial?4:0);
}

void copy_flow(double* flow_in,
	       double* flow_out,
	       int width,
	       int height)
{
  memcpy(flow_out,flow_in,sizeof(float)*width*height*2);
}

void run_farneback_on_imlib(Imlib_Image previous_img,
			    Imlib_Image next_img,
			    float *flow,
			    //unsigned int width,
			    //unsigned int height, 
			    int initial,
			    double pyr_scale,
			    int levels,
			    int winsize,
			    int iterations,
			    int poly_n,
			    double poly_sigma) {
   imlib_context_set_image(previous_img);
  unsigned int width = imlib_image_get_width();
  unsigned int height = imlib_image_get_height();
   IplImage *previousRGBA, *previousgreyscale;
  previousRGBA = cvCreateImageHeader(cvSize(width, height), IPL_DEPTH_8U, 4);
  cvSetData(previousRGBA, imlib_image_get_data_for_reading_only(), CV_AUTOSTEP);
  previousgreyscale = cvCreateImage(cvSize(width, height), IPL_DEPTH_8U, 1);
  cvCvtColor(previousRGBA, previousgreyscale, CV_RGBA2GRAY);

 
  imlib_context_set_image(next_img);
  IplImage *nextRGBA, *nextgreyscale;
  nextRGBA = cvCreateImageHeader(cvSize(width, height), IPL_DEPTH_8U, 4);
  cvSetData(nextRGBA, imlib_image_get_data_for_reading_only(), CV_AUTOSTEP);
  nextgreyscale = cvCreateImage(cvSize(width, height), IPL_DEPTH_8U, 1);
  cvCvtColor(nextRGBA, nextgreyscale, CV_RGBA2GRAY);

 
  //CvMat previous_matrix = cvMat(height, width, CV_8UC1, previousgreyscale);
  //CvMat next_matrix = cvMat(height, width, CV_8UC1, nextgreyscale);

  CvMat *previous_matrix = cvCreateMat(height, width, CV_8UC1);
  CvMat *next_matrix = cvCreateMat(height, width, CV_8UC1);
  cvConvert(previousgreyscale,previous_matrix);
  cvConvert(nextgreyscale,next_matrix);

  
  CvMat flow_matrix = cvMat(height, width, CV_32FC2, flow);
  cvCalcOpticalFlowFarneback(previous_matrix,
			     next_matrix,
			     &flow_matrix,
			     pyr_scale,
			     levels,
			     winsize,
			     iterations,
			     poly_n,
			     poly_sigma,
			     /* needs work: use OPTFLOW_USE_INITIAL_FLOW */
			     /* OPTFLOW_USE_INITIAL_FLOW */
			     /* OPTFLOW_FARNEBACK_GAUSSIAN */
			     initial?1:0);

    cvReleaseImageHeader(&previousRGBA);
  cvReleaseImageHeader(&nextRGBA);
  cvReleaseImage(&previousgreyscale);
  cvReleaseImage(&nextgreyscale);
  cvReleaseMat(&previous_matrix);
  cvReleaseMat(&next_matrix);
  
}

Imlib_Image ffmpeg_get_frame_as_imlib2(struct ffmpeg_video_t *video) {
  sws_scale(video->img_convert_ctx, (const uint8_t * const*)video->pFrame->data,
	    video->pFrame->linesize, 0,
	    video->pCodecCtx->height,
	    video->pFrameBGRA->data, video->pFrameBGRA->linesize);
  Imlib_Image image =
    imlib_create_image_using_copied_data(video->pCodecCtx->width,
					 video->pCodecCtx->height,
					 (uint32_t*)video->buffer);
  return image;
}

void compute_farneback_integral_flow(float *flow,
				     float* integral_flow,
				     unsigned int width,
				     unsigned int height)
//assumes that integral flow is already malloced
{
  for (int y = height-1; y>=0; y--) {
    for (int x = width-1; x>=0; x--) {
      int index = y*2*width+x*2;
      int xy = y*2*width+x*2;
      int xp1 = y*2*width+(x+1)*2;
      int yp1 = (y+1)*2*width+x*2;
      int xyp1 = (y+1)*2*width+(x+1)*2;
      integral_flow[xy] = 
	flow[index]
	+(y+1>=height?0.0:integral_flow[yp1])
	+(x+1>=width?0.0:integral_flow[xp1])
	-(x+1>=width||y+1>=height?0.0:integral_flow[xyp1]);
      integral_flow[xy+1]=
	flow[index+1]
	+(y+1>=height?0.0:integral_flow[yp1+1])
	+(x+1>=width?0.0:integral_flow[xp1+1])
	-(x+1>=width||y+1>=height?0.0:integral_flow[xyp1+1]);
    }
  }
}

void compute_farneback_integral_flow_magnitude(float *flow,
					       float* integral_flow_magnitude,
					       unsigned int width,
					       unsigned int height)
//assumes that integral flow is already malloced
{  
for (int y = height-1; y>=0; y--) {
    for (int x = width-1; x>=0; x--) {
      int index = y*2*width+x*2;
      int xy = y*width+x;
      int xp1 = y*width+(x+1);
      int yp1 = (y+1)*width+x;
      int xyp1 = (y+1)*width+(x+1);
      integral_flow_magnitude[xy] =
	sqrt((flow[index])*(flow[index])+(flow[index+1])*(flow[index+1]))
	+(y+1>=height?0.0:integral_flow_magnitude[yp1])
	+(x+1>=width?0.0:integral_flow_magnitude[xp1])
	-(x+1>=width||y+1>=height?0.0:integral_flow_magnitude[xyp1]);
    }
 }}

void render_flow(float* flow,
		 char* filename,
		 int width,
		 int height)
{

  unsigned int downsample = 8;//render_downsampled?8:4;
  Imlib_Image scratch = imlib_create_image(width,height);
  imlib_context_set_image(scratch);
  imlib_context_set_anti_alias(1);
  imlib_context_set_color(0, 0, 0, 255);
  imlib_image_fill_rectangle(0, 0, width, height);
  for (unsigned int y = 0; y<height; y += downsample) {
    for (unsigned int x = 0; x<width; x += downsample) {
      imlib_context_set_color(255, 255, 255, 255);
      imlib_image_draw_line
	(x,
	 y,
	 x+farneback_get_flow(flow,width,y,x,0),
	 y+farneback_get_flow(flow,width,y,x,1),
	 0);
    }
  }
  imlib_context_set_image(scratch);
  imlib_save_image(filename);
  imlib_free_image_and_decache();
}

void run_farneback_on_video(char* filename,
			    float** flow,
			    float** integral_flow,
			    float** integral_flow_magnitude,
			    double pyr_scale,
			    int levels,
			    int winsize,
			    int iterations,
			    int poly_n,
			    double poly_sigma)
{

  int width, height, length, frame;
  struct ffmpeg_video_t* video;
  length = ffmpeg_video_length(filename);
  if (length==0) printf("empty video?\n");
  video = ffmpeg_open_video(filename);
  width = ffmpeg_video_width(video);
  height = ffmpeg_video_height(video);
  
  printf("length=%d,width=%d,height=%d\n",length,width,height);
  *(flow) = (float*)malloc(sizeof(float)*length*width*height*2);
  *(integral_flow) =(float*) malloc(sizeof(float)*length*width*height*2);
  *(integral_flow_magnitude) = (float*)malloc(sizeof(float)*length*width*height);

  Imlib_Image prev=NULL, next=NULL;

  for (frame=0;frame<length;frame++)
    {
      printf("frame:%d\n",frame);
      if (frame==0)
	{
	  prev = ffmpeg_get_frame_as_imlib2(video);
	  ffmpeg_next_frame(video);
	}
      else if (frame==1)
	{
	  next = ffmpeg_get_frame_as_imlib2(video);
	  ffmpeg_next_frame(video);
	}
      else
	{
	  imlib_context_set_image(prev);
	  imlib_free_image_and_decache();
	  prev = next;
	  next = ffmpeg_get_frame_as_imlib2(video);
	  ffmpeg_next_frame(video);
	}

      if (prev!=NULL && next!=NULL)
	{
	  run_farneback_on_imlib(prev,
				 next,
				 &((*flow)[(frame-1)*width*height*2]),
				 0,
				 pyr_scale,
				 levels,
				 winsize,
				 iterations,
				 poly_n,
				 poly_sigma);
	  compute_farneback_integral_flow(&((*flow)[(frame-1)*width*height*2]),
					  &((*integral_flow)[(frame-1)*width*height*2]),
					  width,
					  height);
	  compute_farneback_integral_flow_magnitude(&((*flow)[(frame-1)*width*height*2]),
						    &((*integral_flow_magnitude)[(frame-1)*width*height]),
						    width,
						    height);
#if DEBUG
	  char filename[100];
	  sprintf(filename,"/tmp/rendered-flow-frame-%05d.png",frame);
	  render_flow(&((*flow)[(frame-1)*width*height*2]),
		      filename,
		      width,
		      height);
#endif
	}
      
    }

  

}
