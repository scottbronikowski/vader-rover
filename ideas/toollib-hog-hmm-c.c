/* LaHaShem HaAretz U'Mloah */

#include "toollib-hog-hmm-c.h"
#include "hmm-def.h"
#include "stlib-c.h"
#include <libavcodec/avcodec.h>
#include <libavformat/avformat.h>
#include <libswscale/swscale.h>
#include <Imlib2.h>
#include "toollib-farneback-c.h"
#include "toollib-hog-c.h"
#include <math.h>
#include <opencv/cv.h>
#include <opencv/highgui.h>
//#include "idealib-c.h"
/* Global Variables */

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

typedef struct CvRectf
{
  float x,y,width,height;
  
} CvRectf;

CvRectf make_CvRectf(float x,float y, float width, float height)
{
  CvRectf rect;
  rect.x=x;
  rect.y=y;
  rect.width=width;
  rect.height=height;
  return rect;
}

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

Imlib_Image ffmpeg_get_frame_as_imlib2(struct ffmpeg_video_t *video);

double degrees_to_radians(double degrees) {
  /* needs work: Will it constant fold? */
  return (2*M_PI/360.0)*degrees;
}

double radians_to_degrees(double radians) {
  /* needs work: Will it constant fold? */
  return (360.0/(2*M_PI))*radians;
}

void normalize_vector(int length, double* vector)
{
  double sum = 0;
  int i;
  for (i=0;i<length;i++) sum+=vector[i];
  for (i=0;i<length;i++) vector[i]=vector[i]/sum;
  return;
}

void unit_vector(int length, double* vector)
{
  double mag = 0;
  int i;
  for (i=0;i<length;i++) mag+=vector[i]*vector[i];
  mag=sqrt(mag);
  for (i=0;i<length;i++) vector[i]=vector[i]/mag;
  return;
}

void vector_plus(int length, double* v1, double* v2)
{
  int i;
  for (i=0;i<length;i++) v1[i]+=v2[i];
  return;
}

void k_times_vector(int length, double k, double* v)
{
  int i;
  for (i=0;i<length;i++) v[i]=v[i]*k;
  return;
} 

void v_plus(int length, double* v1, double* v2,double* out)
{
  int i;
  for (i=0;i<length;i++) out[i]=v1[i]+v2[i];
  return;
}

void k_times_v(int length, double k, double* v,double* out)
{
  int i;
  for (i=0;i<length;i++) out[i]=v[i]*k;
  return;
} 


double vector_dot(int length, double* vector1, double* vector2)
{
  int i;
  double sum=0;
  for (i=0;i<length;i++)
    {
      sum+= vector1[i]*vector2[i];
      // printf("%f*%f=%f\n",vector1[i],vector2[i],vector1[i]*vector2[i]);
    }
  
  return sum;
}

int read_c_cache_file(char* filename, double** fv_data, int* frames, int* featurelength, int* orientations)
{
  int check;
  //printf("sizeof int:%d\n",sizeof(int));
  FILE* fid = fopen(filename,"rb");
  //if (fscanf(fid,"%d\n",frames) < 1) { printf("no frames\n");fclose(fid); return 0;}
  //if (fscanf(fid,"%d\n",featurelength) < 1) { printf("no featurelengths\n");fclose(fid); return 0;}
  //if (fscanf(fid,"%d\n",orientations) < 1) {printf("no orientations\n");fclose(fid); return 0;}

  fread(frames,sizeof(int),1,fid);
  fread(featurelength,sizeof(int),1,fid);
  fread(orientations,sizeof(int),1,fid);
  
  printf("%d %d %d\n",*frames, *featurelength, *orientations);

  fv_data[0]=(double*)malloc(sizeof(double)*(*frames)*(*featurelength)*(*orientations));
  printf("third element before read: %f\n",fv_data[0][2]);
  printf("allocated pointer: %p\n",fv_data[0]);
  int number_read = fread(fv_data[0],sizeof(double),(*frames)*(*featurelength)*(*orientations),fid);
  printf("read %d elements\n",number_read);
  printf("third element after read: %f\n",fv_data[0][2]);
  if (number_read < (*frames)*(*featurelength)*(*orientations))
    {
      printf("file too short, only read %d out of %d bytes\n",number_read,(*frames)*(*featurelength)*(*orientations));
      free(fv_data);
      fclose(fid);
      return 0;
    }
  //for (int i=0;i<(*frames)*(*featurelength)*(*orientations);i++) printf("%f ",fv_data[0][i]);
  
  if (fscanf(fid,"%d",&check) < 1)
    {
      printf("file too short, last number missing\n");
      free(fv_data);
      fclose(fid);
      return 0;
    }
  if (check!=(*frames)*(*featurelength)*(*orientations))
    {
      printf("check value doesn't match: %d!=%d\n",check,(*frames)*(*featurelength)*(*orientations));
      free(fv_data);
      fclose(fid);
      return 0;
    }
  
  /* for (int i=0;i<(*frames)*(*featurelength)*(*orientations);i++) */
  /*   if (fscanf(fid,"%f",fv_data+i) < 1) */
  /*     { free(fv_data); */
  /* 	printf("file too short, only %d out of %d expected\n",i,(*frames)*(*featurelength)*(*orientations)); */
  /* 	fclose(fid); */
  /* 	return 0; */
  /*     } */

  /* if (fscanf("%d",&check) < 1) */
  /*   { */
  /*     printf("file too short, last number missing\n"); */
  /*     free(fv_data); */
  /*     fclose(fid); */
  /*     return 0; */
  /*   } */
  /* if (check!=(*frames)*(*featurelength)*(*orientations)) */
  /*   { */
  /*     printf("check value doesn't match: %d!=%d\n",check,(*frames)*(*featurelength)*(*orientations)); */
  /*     free(fv_data); */
  /*     fclose(fid); */
  /*     return 0; */
  /*   } */
  //printf("%d %d %d\n",frames[0], featurelength[0], orientations[0]);
  fclose(fid);
  return 1;
      
}

int write_c_cache_file(char* filename, double* fv_data, int frames, int featurelength, int orientations)
{
   //printf("sizeof int:%d\n",sizeof(int));
  FILE* fid = fopen(filename,"wb");
  //fprintf(fid,"%d\n",frames);
  //fprintf(fid,"%d\n",featurelength);
  //fprintf(fid,"%d\n",orientations);
  fwrite(&frames,sizeof(int),1,fid);
  fwrite(&featurelength,sizeof(int),1,fid);
  fwrite(&orientations,sizeof(int),1,fid);
  printf("%d\n",frames);
  printf("%d\n",featurelength);
  printf("%d\n",orientations);
  //for (int i=0;i<(frames)*(featurelength)*(orientations);i++) printf("%f ",fv_data[i]);
  int elements_written = fwrite(fv_data,sizeof(double),(frames)*(featurelength)*(orientations),fid);
  printf("%d elements written\n",elements_written);
  
  printf("second to last element written:%f\n",fv_data[elements_written-2]);
  /* for (int i=0;i<frames*featurelength*orientations;i++) */
  /*   fprintf(fid,"%f",fv_data[i]); */
  //for (int i=0;i<(frames)*(featurelength)*(orientations);i++) printf("%f ",fv_data[i]);
  fprintf(fid,"\n%d",frames*featurelength*orientations);
  fclose(fid);
  return 1;
      
}

void compute_video_features_min_max(int frames,
				    int number_of_features,
				    int* feature_lengths,
				    double**** fvs,
				    double* mins,
				    double* maxes)

{
  int t,f,o,i;
  double x;
  for (f=0;f<number_of_features;f++)
    {
      //printf("feature-lengths[%d]=%d\n",f,feature_lengths[f]);
      maxes[f]=-1./0.;;
      mins[f]=1./0.;
    }
  for (f=0;f<number_of_features;f++)
    {
      for (t=0;t<frames;t++)
	{
	  //printf("t=%d\n",t);
	  for (o=0;o<1;o++)
	    {
	      for (i=0;i<feature_lengths[f];i++)
		{
		  x = fvs[f][t][o][i];
		  //printf("x=%f\n",x);
		  if (x < mins[f]) mins[f]=x;
		  if (x > maxes[f]) maxes[f]=x;
		}
	    }
	}
    }
  return;
}

double discretize_x(double x, double min, double max, int bins)
{
  double out;
  if (x<=min)
    out = 0;
  if (x>=max)
    out = bins-1;
  else
    out = floor(((x-min)/(max-min))*bins);
  //printf("%f ",out);
  return out;

}

void discretize_fvs(int frames,
		    int number_of_features,
		    int* feature_lengths,
		    int* bin_lengths,
		    double**** fvs,
		    double* mins,
		    double* maxes)
{
  int t,f,o,i;
  for (f=0;f<number_of_features;f++)
    {
      if (bin_lengths[f]>0) // otherwise this isnt a discrete feature and we do nothing
      for (t=0;t<frames;t++)
	{
	  //printf("t=%d\n",t);
	  for (o=0;o<1;o++)
	    {
	      for (i=0;i<feature_lengths[f];i++)
		{
		  fvs[f][t][o][i] = discretize_x(fvs[f][t][o][i],
						 mins[f],
						 maxes[f],
						 bin_lengths[f]);
		}
	    }
	}
    }
  return;
}

void calc_alphas(int states,
		 int frames,
		 double** states_output_log_likelihood,
		 double* log_initial_state_vector,
		 double* log_transition_matrix,
		 double** alphas)
{
  int t,i,j;
  for (i=0;i<states;i++)
    {
      alphas[0][i]=log_initial_state_vector[i]+states_output_log_likelihood[i][0];
    }
  for (t=1;t<frames;t++)
    {
      for (j=0;j<states;j++)
	{
	  alphas[t][j]=NEGATIVE_INFINITY;
	  for (i=0;i<states;i++)
	    {
	      alphas[t][j] = add_exp(alphas[t][j],alphas[t-1][i]+log_transition_matrix[states*i+j]);
	    }
	  alphas[t][j]+=states_output_log_likelihood[j][t];
	}
    }
}

void calc_alphas_with_k_duplicates(int states,
				   int frames,
				   double** states_output_log_likelihood,
				   double* log_initial_state_vector,
				   double* log_transition_matrix,
				   double** alphas,
				   int k)
{
  int t,i,j;
  // printf("alphas\n");
  for (i=0;i<states*k;i++)
    {
      
      if ((i%k)==0)
	alphas[0][i]=log_initial_state_vector[i/k]+states_output_log_likelihood[i/k][0];
      else
	alphas[0][i]=NEGATIVE_INFINITY;
      // printf("%f ",alphas[0][i]);
    }
  //printf("\n");
  for (t=1;t<frames;t++)
    {
      for (j=0;j<states*k;j++)
	{
	  //printf("j\%k=%d\n",j%k);
	  alphas[t][j]=NEGATIVE_INFINITY;
	  if ((j%k)==0) // you reach the first from some 'end' state
	    for (i=0;i<states*k;i++)
	      {
		if ((i%k)==(k-1) && (i!=j+k-1||k==1)) // exclude multiple passes through the substates
		  alphas[t][j] = add_exp(alphas[t][j],
					 alphas[t-1][i]+
					 log_transition_matrix[states*(i/k)+(j/k)]);
	      }
	  else if ((j%k)<(k-1)) // you reach middle states from the previous state
	    alphas[t][j] = add_exp(alphas[t][j],
					 alphas[t-1][j-1]+
				   log_transition_matrix[states*((j-1)/k)+(j/k)]);
	  else if ((j%k)==(k-1)) // you reach end states from prev or self transitions
	    {
	      alphas[t][j] = add_exp(alphas[t][j],
					 alphas[t-1][j-1]+
				     log_transition_matrix[states*((j-1)/k)+(j/k)]);
	      alphas[t][j] = add_exp(alphas[t][j],
					 alphas[t-1][j]+
					 log_transition_matrix[states*(j/k)+(j/k)]);
	    }
	  else
	    {panic("gahh, i don't know what happened in the duplicate alpha code!\n");}

	  alphas[t][j]+=states_output_log_likelihood[j/k][t];
	  //printf("%f ",alphas[t][j]);
	}
      //printf("\n");
    }
}

void calc_betas(int states,
		int frames,
		double** states_output_log_likelihood,
		double* log_initial_state_vector,
		double* log_transition_matrix,
		double** betas)
{
 int t,i,j;
  for (i=0;i<states;i++)
    {
      if (i==states-1) // this if statement accounts for the required end state
	betas[frames-1][i]=0; // 0 is 1 in log-space
      else
	betas[frames-1][i]=NEGATIVE_INFINITY;
    }

  for (t=frames-2;t>=0;t--)
    {
      for (i=0;i<states;i++)
	{
	  betas[t][i]=NEGATIVE_INFINITY;
	  for (j=0;j<states;j++)
	    {
	      betas[t][i] = add_exp(betas[t][i],
				    betas[t+1][j]+
				    log_transition_matrix[states*i+j]+
				    states_output_log_likelihood[j][t+1]);
	    }
	  
	}
      //printf("\n");
    }
}

void calc_betas_with_k_duplicates(int states,
				  int frames,
				  double** states_output_log_likelihood,
				  double* log_initial_state_vector,
				  double* log_transition_matrix,
				  double** betas,
				  int k)
{
 int t,i,j;
 //printf("betas k=%d\n",k);
  for (i=0;i<states*k;i++)
    {
      if (i/k==states-1) // this if statement accounts for the required end state
	betas[frames-1][i]=0; // 0 is 1 in log-space
      else
	betas[frames-1][i]=NEGATIVE_INFINITY;
      //printf("%f ",betas[frames-1][i]);
    }
  //printf("\n");
  for (t=frames-2;t>=0;t--)
    {
      for (i=0;i<states*k;i++)
	{
	  betas[t][i]=NEGATIVE_INFINITY;
	  if ((i%k)==(k-1))
	    for (j=0;j<states*k;j++)
	      {
		if (((j%k)==0)|(j==i))
		  {
		    //printf("foo i=%d j=%d\n",i,j);
		betas[t][i] = add_exp(betas[t][i],
				      betas[t+1][j]+
				      log_transition_matrix[states*(i/k)+j/k]+
				      states_output_log_likelihood[j/k][t+1]);
		  }
	      }
	  else if ((i%k)<(k-1))
	    betas[t][i] = add_exp(betas[t][i],
				      betas[t+1][i+1]+
				  log_transition_matrix[states*(i/k)+(i+1)/k]+
				  states_output_log_likelihood[(i+1)/k][t+1]);
	  
	  //printf("betas[%d][%d]=%f\n",t,i,betas[t][i]);
	  //printf("%f ",betas[t][i]);
	}
      //printf("\n");
    }
}

void calc_gammas(int states,
		 int frames,
		 double** alphas,
		 double** betas,
		 double** gammas)
{
  int t,i;
  double log_sum;
  for (t=0;t<frames;t++)
    {
      log_sum = NEGATIVE_INFINITY;
      for (i=0;i<states;i++)
	{
	  gammas[t][i]=alphas[t][i]+betas[t][i];
	  log_sum = add_exp(log_sum,gammas[t][i]);
	  //printf("unnormalized gammas[%d][%d]=%f\n",t,i,gammas[t][i]);
	}
      for (i=0;i<states;i++)
	{
	  gammas[t][i] -= log_sum;
	  //printf("gammas[%d][%d]=%f\n",t,i,gammas[t][i]);
	}
    }

}

void calc_gammas_with_k_duplicates(int states,
				   int frames,
				   double** alphas,
				   double** betas,
				   double** gammas,
				   int k)
{
  int t,i;
  double log_sum;
  for (t=0;t<frames;t++)
    {
      log_sum = NEGATIVE_INFINITY;
      for (i=0;i<states*k;i++)
	{
	  gammas[t][i]=alphas[t][i]+betas[t][i];
	  log_sum = add_exp(log_sum,gammas[t][i]);
	  //printf("unnormalized gammas[%d][%d]=%f\n",t,i,gammas[t][i]);
	}
      for (i=0;i<states*k;i++)
	{
	  gammas[t][i] -= log_sum;
	  //printf("gammas[%d][%d]=%f\n",t,i,gammas[t][i]);
	}
    }

}

void  compute_output_log_likelihoods_and_hog_lrs(int states,
						 int frames,
						 int* model_types,
						 int number_of_features,
						 int* feature_lengths,
						 int* bin_lengths,
						 double**** fvs,
						 double*** output_models,
						 double sigmoid_a,
						 double sigmoid_b,
						 double** states_output_log_likelihood,
						 double*** features_states_hog_dots,
						 double*** states_features_output_log_likelihood,
						 int*** features_states_frames_lr)
{
  int f,t,o,s;
  int type,len,orientations;
  double maxdot;
  double dot;
  double out;
  for (t=0;t<frames;t++)
    {
      for (s=0;s<states;s++)
	{
	  for (f=0;f<number_of_features;f++)
	    {
	      type=model_types[f];
	      len=feature_lengths[f];
	      orientations=1;
	      //printf("type=%d\n",type);
	      if (type==0) 
		{ orientations=2;
		  maxdot=-1000;
		  for (o=0;o<orientations;o++)
		    {
		      dot=vector_dot(len,output_models[s][f],fvs[f][t][o]);
		      //printf("fv[%d][%d][%d]=%f,  dot=%f\n",f,t,o,fvs[f][t][o],dot);
		      if (dot>maxdot)
			{ 
			  maxdot=dot;
			  features_states_frames_lr[f][s][t]=o;
			  //printf("states_frames_lr[%d][%d]=%d frames=%d\n",s,t,states_frames_lr[s][t],frames);
			}
		    }
		  features_states_hog_dots[f][s][t]=maxdot;
		  out = my_log(sigmoid(maxdot,sigmoid_a,sigmoid_b));
		  states_features_output_log_likelihood[s][t][f]=out;
		  states_output_log_likelihood[s][t]+=out;
		}
	      else if (type==3)
		{
		  out = my_log(output_models[s][f][llround(fvs[f][t][0][0])]);
		  states_features_output_log_likelihood[s][t][f]=out;
		  states_output_log_likelihood[s][t]+= out;
		      
		}
	      else panic("other model types currently unsupported. use dot or discrete");
	    }
	}
    }
  return;
}

void compute_log_alphas_bar(double** alphas,
			    double* final_log_alphas_bar,
			    double** states_output_log_likelihood,
			    double* log_transition_matrix,
			    int states,
			    int frames,
			    double** log_alphas_bar)
{
  int i, j, t,s;
  double foo;
  for (s=0;s<states;s++)
    log_alphas_bar[frames][s]=final_log_alphas_bar[s];
  for (t=frames-1;t>=0;t--)
    {
      for (i=0;i<states;i++)
	{
	  log_alphas_bar[t][i]=NEGATIVE_INFINITY;
	  for (j=0;j<states;j++)
	    {
	      foo = 
		log_alphas_bar[t+1][j] + 
		states_output_log_likelihood[j][t] +
		log_transition_matrix[states*i+j];
	      log_alphas_bar[t][i]=add_exp(log_alphas_bar[t][i],
					   foo);
	    }
	}
    }
  return;
}

void compute_log_alphas_bar_with_k_duplicates(double** alphas,
					      double* final_log_alphas_bar,
					      double** states_output_log_likelihood,
					      double* log_transition_matrix,
					      int states,
					      int frames,
					      double** log_alphas_bar,
					      int k)
{
  // not implemented!
  int i, j, t,s;
  double foo;
  for (s=0;s<states*k;s++)
    log_alphas_bar[frames][s]=final_log_alphas_bar[s/k];
  for (t=frames-1;t>=0;t--)
    {
      for (i=0;i<states*k;i++)
	{
	  log_alphas_bar[t][i]=NEGATIVE_INFINITY;
	  for (j=0;j<states*k;j++)
	    {
	      foo = 
		log_alphas_bar[t+1][j] + 
		states_output_log_likelihood[j][t] +
		log_transition_matrix[states*i+j];
	      log_alphas_bar[t][i]=add_exp(log_alphas_bar[t][i],
					   foo);
	    }
	}
    }
  return;
}

void compute_log_initial_vector_bar(double** alphas,
				    double** log_alphas_bar,
				    double** states_output_log_likelihood,
				    int states,
				    double* initial_vector_bar)
{
  int s;
  for (s=0;s<states;s++)
    {
      initial_vector_bar[s] = exp(log_alphas_bar[1][s]+states_output_log_likelihood[s][0]);
    }
  return;
}

void compute_aij_bar(double** alphas,
		     double** log_alphas_bar,
		     double** states_output_log_likelihood,
		     int states,
		     int frames,
		     double* aij_bar)
{
  int i,j,t;
  double foo;
  for (i=0;i<states;i++)
    for (j=0;j<states;j++)
      {
	aij_bar[states*i+j]=NEGATIVE_INFINITY;
	for (t=0;t<frames-1;t++)
	  {
	    foo = states_output_log_likelihood[j][t+1] +
	      log_alphas_bar[t+2][j] + alphas[t][i];
	    
	    aij_bar[states*i+j] = add_exp (aij_bar[states*i+j],foo);
	  }
	aij_bar[states*i+j]=exp(aij_bar[states*i+j]);
      }

  return;
}

void compute_normalize_bar(double* xs_bar,
			   double* xs,
			   int len,
			   double* normalize_bar)
{
  int i;
  double w1=0;
  double w1_bars_sum=0;
  for (i=0;i<len;i++) w1+=xs[i];
  for (i=0;i<len;i++) w1_bars_sum+= (xs_bar[i]*xs[i]) / -(w1*w1);
  for (i=0;i<len;i++) normalize_bar[i]=xs_bar[i]/w1 + w1_bars_sum;
  return;
}

void compute_btj_bar(double** alphas,
		     double** log_alphas_bar,
		     double* log_initial_vector,
		     double* log_transition_matrix,
		     int states,
		     int frames,
		     double** btj_bar)
{
  int i,j,t;
  for (j=0;j<states;j++)
    btj_bar[0][j] = exp(log_alphas_bar[1][j]+log_initial_vector[j]);
  for (t=1;t<frames;t++)
    {
      for (j=0;j<states;j++)
	{
	  btj_bar[t][j]=NEGATIVE_INFINITY;
	  for (i=0;i<states;i++)
	    btj_bar[t][j] = add_exp(btj_bar[t][j],
				    log_transition_matrix[states*i+j]+
				    alphas[t-1][i]);
	  btj_bar[t][j]= exp(btj_bar[t][j] +log_alphas_bar[t+1][j]);
	}
    }
}

double compute_sigmoid_x_bar(double sig_bar, double x, double a, double b)
{
  double w2,w3,w2_bar,w3_bar;
  w2 = exp(-b*(x-a));
  w3 = 1+w2;
  w3_bar = sig_bar*(-(1/(w3*w3)));
  w2_bar = w3_bar*w2;
  return -b*w2_bar;
}

void compute_unit_x_bar(double* xs_bar, double* xs, int len, double* unit_x_bar)
{
  double w1=0;
  double w2=0;
  double w1_bars_i;
  double w2_bars_i;
  double w1_bars_sum=0;
  int i;
  for (i=0;i<len;i++) w1+= xs[i]*xs[i];
  w2=sqrt(w1);
  for (i=0;i<len;i++) 
    {
      w2_bars_i=xs_bar[i]*xs[i]*(-1/w1);
      w1_bars_i=w2_bars_i*.5*sqrt(1/w1);
      w1_bars_sum+=w1_bars_i;
    }
  for (i=0;i<len;i++) unit_x_bar[i]=xs_bar[i]/w2 + 2*xs[i]*w1_bars_sum;
  } 

void compute_hog_params_bar(double** btj_bar,
			    double**** fvs,
			    double** states_hog_dots,
			    double*** states_features_log_likelihoods,
			    int** states_frames_lr,
			    int model_length,
			    int states,
			    int frames,
			    int number_of_features,
			    int feature_index,
			    double*** output_params_bar,
			    double sigmoid_a,
			    double sigmoid_b)
{
  int j,t,f,o,x;
  double sigmoid_x_bar;
  double other_feature_output=0;
  double*** f_fvs=fvs[feature_index];
  double** ft_fvs;
  double* fj_output_params_bar;
  for (j=0;j<states;j++)
    {
      fj_output_params_bar = output_params_bar[feature_index][j];
    for (t=0;t<frames;t++)
      {
	ft_fvs=f_fvs[t];
	other_feature_output=0;
	for (f=0;f<number_of_features;f++)
	  if (f!=feature_index)
	    other_feature_output+=states_features_log_likelihoods[j][t][f];
	
	sigmoid_x_bar = compute_sigmoid_x_bar(btj_bar[t][j]*exp(other_feature_output),states_hog_dots[j][t],
					      sigmoid_a,sigmoid_b);
	o = states_frames_lr[j][t];
	for (x=0;x<model_length;x++)
	  fj_output_params_bar[x]+=sigmoid_x_bar*ft_fvs[o][x];
      }
    }
  return; 
}

void compute_discrete_params_bar(double** btj_bar,
				 double**** fvs,
				 double*** states_features_log_likelihoods,
				 int bin_length,
				 int states,
				 int frames,
				 int number_of_features,
				 int feature_index,
				 double*** output_params_bar)
{
  double other_feature_output=0;
  int j,x,t,f;
  double*** f_fvs=fvs[feature_index];
  double** ft_fvs;
  double* fj_output_params_bar;
  double discrete_btj_bar;
  for (j=0;j<states;j++)
    {
      fj_output_params_bar = output_params_bar[feature_index][j];
      for (t=0;t<frames;t++)
	{
	  ft_fvs=f_fvs[t];
	  other_feature_output=0;
	  for (f=0;f<number_of_features;f++)
	    if (f!=feature_index)
	      other_feature_output+=states_features_log_likelihoods[j][t][f];
	  discrete_btj_bar = btj_bar[t][j]*exp(other_feature_output);
	  for (x=0;x<bin_length;x++)
	    if (ft_fvs[0][0]==x)
	      fj_output_params_bar[x]+=discrete_btj_bar;
	}
    }
}

void compute_output_params_bar(double** btj_bar,
			       double**** fvs,
			       double*** states_output_models,
			       int*** features_states_frames_lr,
			       double*** features_states_hog_dots,
			       double*** states_features_log_likelihoods,
			       int states,
			       int frames,
			       int number_of_features,
			       int* model_types,
			       int* model_lengths,
			       int* bin_lengths,
			       double sigmoid_a,
			       double sigmoid_b,
			       double*** output_params_bar)
{
  int f,s;
  for (f=0;f<number_of_features;f++)
    {
      switch (model_types[f])
	{
	case 0:
	  compute_hog_params_bar(btj_bar,fvs,features_states_hog_dots[f],states_features_log_likelihoods,features_states_frames_lr[f],model_lengths[f],states,frames,number_of_features,f,output_params_bar,sigmoid_a,sigmoid_b);
	  for (s=0; s<states;s++) 
	    {
	      compute_unit_x_bar(output_params_bar[f][s],
				 states_output_models[s][f],
				 model_lengths[f],
				 output_params_bar[f][s]);
	    }
	  break;
	case 3:
	  compute_discrete_params_bar(btj_bar, fvs, states_features_log_likelihoods,bin_lengths[f],states,frames,number_of_features,f,output_params_bar);
	  for (s=0; s<states;s++) compute_normalize_bar(output_params_bar[f][s],states_output_models[s][f],bin_lengths[f],output_params_bar[f][s]);
	  break;
	default:
	  panic("unimplemented model type. use dot product or discrete features");
	  break;
	}
    }
}	       

double hog_hmm_derivative_in_c(int states,
			       int frames,
			       int number_of_features,
			       int* feature_types,
			       int* model_types,
			       int* feature_lengths,
			       int* bin_lengths,
			       double* initial_state_vector,
			       double* transition_matrix,
			       double**** fvs,
			       double*** output_models,
			       double sigmoid_a,
			       double sigmoid_b,
			       int compute_gradient,
			       double* gradient_out,
			       int compute_gammas,
			       double** gammas,
			       int*** features_states_frames_lr_out)
{

  /* printf("fvs: %p\n",fvs); */
  /* printf("out: %p\n",output_models); */
  int i,f,t,s;
  int params_length;
  double* log_initial_state_vector=(double*)malloc(sizeof(double)*states);
  double* log_transition_matrix=(double*)malloc(sizeof(double)*states*states);
  double* aij_bar=(double*)malloc(sizeof(double)*states*states);
  double** states_output_log_likelihood=(double**)malloc(sizeof(double*)*states);
  for (s=0;s<states;s++) 
    states_output_log_likelihood[s] = (double*)calloc(frames,sizeof(double));

  double*** features_states_hog_dots=(double***)malloc(sizeof(double*)*number_of_features);
  for (f=0;f<number_of_features;f++)
    {
      features_states_hog_dots[f]=(double**)malloc(sizeof(double*)*states);
      for (s=0;s<states;s++) 
	features_states_hog_dots[f][s] = (double*)malloc(sizeof(double)*frames);
    }

  int*** features_states_frames_lr=(int***)malloc(sizeof(double*)*number_of_features);;
  for (f=0;f<number_of_features;f++)
    {
      features_states_frames_lr[f]=(int**)malloc(sizeof(double*)*states);
      for (s=0;s<states;s++) 
	features_states_frames_lr[f][s] = (int*)malloc(sizeof(double)*frames);
    }
  
  double** alphas=(double**)malloc(sizeof(double*)*frames);
  for (t=0;t<frames;t++) 
    alphas[t] = (double*)malloc(sizeof(double)*states);

  double** betas=(double**)malloc(sizeof(double*)*frames);
  for (t=0;t<frames;t++) 
    betas[t] = (double*)malloc(sizeof(double)*states);

  /* double** gammas=(double**)malloc(sizeof(double*)*frames); */
  /* for (t=0;t<frames;t++)  */
  /*   gammas[t] = (double*)malloc(sizeof(double)*states); */
  
  
  double** log_alphas_bar=(double**)malloc(sizeof(double*)*(frames+1));
  for (t=0;t<=frames;t++) 
    log_alphas_bar[t] = (double*)malloc(sizeof(double)*states);

  double** btj_bar=(double**)malloc(sizeof(double*)*frames);
  for (t=0;t<frames;t++) 
    btj_bar[t] = (double*)malloc(sizeof(double)*states);

  double*** states_features_output_log_likelihood=(double***)malloc(sizeof(double**)*states);
  for (s=0;s<states;s++) 
    {
      states_features_output_log_likelihood[s] = (double**)malloc(frames*sizeof(double*));
      for (t=0;t<frames;t++)
	states_features_output_log_likelihood[s][t] =
	  (double*)malloc(number_of_features*sizeof(double));
    }

  double*** output_params_bar = (double***)malloc(number_of_features*sizeof(double**));
  for (f=0;f<number_of_features;f++) 
    {
      params_length=0;
      if (model_types[f]==0) 
	params_length = feature_lengths[f];
      else if (model_types[f]==3)
	params_length = bin_lengths[f];
      else panic("?? :(");	
      output_params_bar[f] = (double**)malloc(states*sizeof(double*));
      for (s=0;s<states;s++)
	output_params_bar[f][s] =
	  (double*)calloc(params_length,sizeof(double));
    }

  double* final_log_alphas_bar = (double*) malloc(states*sizeof(double));
  for (s=0;s<states;s++)
    final_log_alphas_bar[s]=NEGATIVE_INFINITY;

  double* initial_vector_bar=(double*)malloc(sizeof(double)*states);

  /* printf("init:"); */
  /* for (s=0;s<states;s++) printf("%f ",initial_state_vector[s]); */
  /* printf("\ntransition:"); */
  /* for (i=0;i<states;i++)  */
  /*   for (j=0;j<states;j++) printf("%f ",transition_matrix[i*states+j]); */
  /* printf("\n"); */

  normalize_vector(states,initial_state_vector);
  for (s=0;s<states;s++) normalize_vector(states,transition_matrix+s*states);

  for (s =0;s<states;s++) log_initial_state_vector[s]=my_log(initial_state_vector[s]);
  for (s =0;s<states*states;s++) log_transition_matrix[s]=my_log(transition_matrix[s]);

  for (s=0;s<states;s++)
    {
      for (f=0;f<number_of_features;f++)
	{
	  if (model_types[f]==0)
	    unit_vector(feature_lengths[f],output_models[s][f]);
	  else if (model_types[f]==3)
	    normalize_vector(bin_lengths[f],output_models[s][f]);
	}
    } 
  //printf("about to compute out likes and lrs\n");
  compute_output_log_likelihoods_and_hog_lrs(states,frames,model_types,number_of_features,feature_lengths,bin_lengths, fvs, output_models, sigmoid_a,sigmoid_b,states_output_log_likelihood, features_states_hog_dots, states_features_output_log_likelihood, features_states_frames_lr);
  //printf("about to compute alphas\n");
  calc_alphas(states, frames, states_output_log_likelihood, log_initial_state_vector, log_transition_matrix, alphas);
  if (compute_gammas)
    {
      //printf("inside compute gammas\n");
      calc_betas(states, frames, states_output_log_likelihood, log_initial_state_vector, log_transition_matrix, betas);
      
      calc_gammas(states, frames, alphas, betas, gammas);
      for (f=0;f<number_of_features;f++)
      for (s=0;s<states;s++)
	for(t=0;t<frames;t++)
	  {
	    //printf("lr=%d\n",features_states_frames_lr[f][s][t]);
	    features_states_frames_lr_out[f][s][t]=features_states_frames_lr[f][s][t];
	  }
    }



  double likelihood = alphas[frames-1][states-1]/frames;
  
  if (compute_gradient==1)
    {
      final_log_alphas_bar[states-1]=-(alphas[frames-1][states-1]+log(frames));
      compute_log_alphas_bar(alphas,
			     final_log_alphas_bar,
			     states_output_log_likelihood,
			     log_transition_matrix,
			     states,
			     frames,
			     log_alphas_bar);

      compute_log_initial_vector_bar(alphas,
				     log_alphas_bar,
				     states_output_log_likelihood,
				     states,
				     initial_vector_bar);

      compute_normalize_bar(initial_vector_bar,
			    initial_state_vector,
			    states,
			    initial_vector_bar);

      compute_aij_bar(alphas,
		      log_alphas_bar,
		      states_output_log_likelihood,
		      states,
		      frames,
		      aij_bar);
  
      for(i=0;i<states;i++)
	compute_normalize_bar(aij_bar+states*i,
			      transition_matrix+states*i,
			      states,
			      aij_bar+states*i);

      compute_btj_bar(alphas,
		      log_alphas_bar,
		      log_initial_state_vector,
		      log_transition_matrix,
		      states,
		      frames,
		      btj_bar);
  
      compute_output_params_bar(btj_bar,
				fvs,
				output_models,
				features_states_frames_lr,
				features_states_hog_dots,
				states_features_output_log_likelihood,
				states,
				frames,
				number_of_features,
				model_types,
				feature_lengths,
				bin_lengths,
				sigmoid_a,
				sigmoid_b,
				output_params_bar);

      
      int j=0;
      for (i=0;i<states;i++) 
	{
	  gradient_out[j]=initial_vector_bar[i];
	  j++;
	}
      for (i=0;i<states*states;i++) 
	{
	  gradient_out[j]=aij_bar[i];
	  j++;
	}
      for(i=0;i<states;i++)
	{
	  for (f=0;f<number_of_features;f++)
	    {
	      params_length=0;
	      if (model_types[f]==0)
		params_length = feature_lengths[f];
	      else if (model_types[f]==3)
		params_length = bin_lengths[f];
	      else panic("?? :(");
      
	      for (int x=0;x<params_length;x++)
		{
		  gradient_out[j]=output_params_bar[f][i][x];
		  j++;
		}
	    }
	}
      // the sigmoid parameter gradients are left zero for now: we arent optimizing them
      gradient_out[j]=0;
      j++;
      gradient_out[j]=0;
    }

  free(log_initial_state_vector);
  free(log_transition_matrix);
  free(aij_bar);

  for(f=0;f<number_of_features;f++)
    {
      for (i=0;i<states;i++)
	{
	  free(features_states_hog_dots[f][i]);
	  free(features_states_frames_lr[f][i]);      
	}
      free(features_states_hog_dots[f]);
      free(features_states_frames_lr[f]);
    }
  free(features_states_hog_dots);
  free(features_states_frames_lr);

  for (i=0;i<states;i++)
    {
      free(states_output_log_likelihood[i]);
      for (t=0;t<frames;t++)
	free(states_features_output_log_likelihood[i][t]);
      free(states_features_output_log_likelihood[i]);
    }
 
  free(states_output_log_likelihood);
  free(states_features_output_log_likelihood);

  for (t=0;t<frames;t++)
    {
      free(alphas[t]);
      free(betas[t]);
      free(log_alphas_bar[t]);
      free(btj_bar[t]);
    }
  
  free(alphas);
  free(betas);
  free(log_alphas_bar[t]); // its 1 longer than the others
  free(log_alphas_bar);
  free(btj_bar);

  for (f=0;f<number_of_features;f++)
    {
      for (i=0;i<states;i++)
	{
	  free(output_params_bar[f][i]);
	}
      free(output_params_bar[f]);
    }
  free(output_params_bar);
  
  return likelihood;//gradient_out;
}

/* double hog_hmm_derivative_in_c_with_duplicates(int states, */
/* 					       int frames, */
/* 					       int number_of_features, */
/* 					       int* feature_types, */
/* 					       int* model_types, */
/* 					       int* feature_lengths, */
/* 					       int* bin_lengths, */
/* 					       double* initial_state_vector, */
/* 					       double* transition_matrix, */
/* 					       double**** fvs, */
/* 					       double*** output_models, */
/* 					       double sigmoid_a, */
/* 					       double sigmoid_b, */
/* 					       int compute_gradient, */
/* 					       double* gradient_out, */
/* 					       int compute_gammas, */
/* 					       double** gammas, */
/* 					       int k) */
/* { */
/*   int i,j,f,t,o,s; */
/*   int type,len,orientations,params_length; */
/*   double* log_initial_state_vector=(double*)malloc(sizeof(double)*states); */
/*   double* log_transition_matrix=(double*)malloc(sizeof(double)*states*states); */
/*   double* aij_bar=(double*)malloc(sizeof(double)*states*states); */
/*   double** states_output_log_likelihood=(double**)malloc(sizeof(double*)*states); */
/*   for (s=0;s<states;s++)  */
/*     states_output_log_likelihood[s] = (double*)calloc(frames,sizeof(double)); */

/*   double** states_hog_dots=(double**)malloc(sizeof(double*)*states); */
/*   for (s=0;s<states;s++)  */
/*     states_hog_dots[s] = (double*)malloc(sizeof(double)*frames); */

/*   int** states_frames_lr=(int**)malloc(sizeof(double*)*states); */
/*   for (s=0;s<states;s++)  */
/*     states_frames_lr[s] = (int*)malloc(sizeof(double)*frames); */
  
/*   double** alphas=(double**)malloc(sizeof(double*)*frames); */
/*   for (t=0;t<frames;t++)  */
/*     alphas[t] = (double*)malloc(sizeof(double)*states*k); */

/*   double** betas=(double**)malloc(sizeof(double*)*frames); */
/*   for (t=0;t<frames;t++)  */
/*     betas[t] = (double*)malloc(sizeof(double)*states*k); */
  
/*   double** log_alphas_bar=(double**)malloc(sizeof(double*)*(frames+1)); */
/*   for (t=0;t<=frames;t++)  */
/*     log_alphas_bar[t] = (double*)malloc(sizeof(double)*states*k); */

/*   double** btj_bar=(double**)malloc(sizeof(double*)*frames); */
/*   for (t=0;t<frames;t++)  */
/*     btj_bar[t] = (double*)malloc(sizeof(double)*states); */

/*   double*** states_features_output_log_likelihood=(double***)malloc(sizeof(double**)*states); */
/*   for (s=0;s<states;s++)  */
/*     { */
/*       states_features_output_log_likelihood[s] = (double**)malloc(frames*sizeof(double*)); */
/*       for (t=0;t<frames;t++) */
/* 	states_features_output_log_likelihood[s][t] = */
/* 	  (double*)malloc(number_of_features*sizeof(double)); */
/*     } */

/*   double*** output_params_bar = (double***)malloc(number_of_features*sizeof(double**)); */
/*   for (f=0;f<number_of_features;f++)  */
/*     { */
/*       params_length=0; */
/*       if (model_types[f]==0)  */
/* 	params_length = feature_lengths[f]; */
/*       else if (model_types[f]==3) */
/* 	params_length = bin_lengths[f]; */
/*       else panic("?? :(");	 */
/*       output_params_bar[f] = (double**)malloc(states*sizeof(double*)); */
/*       for (s=0;s<states;s++) */
/* 	output_params_bar[f][s] = */
/* 	  (double*)calloc(params_length,sizeof(double)); */
/*     } */

/*   double* final_log_alphas_bar = (double*) malloc(states*sizeof(double)); */
/*   for (s=0;s<states;s++) */
/*     final_log_alphas_bar[s]=NEGATIVE_INFINITY; */

/*   double* initial_vector_bar=(double*)malloc(sizeof(double)*states); */



/*   double* log_initial_state_vector_with_duplicates=(double*)malloc(sizeof(double)*states*k); */
/*   double* log_transition_matrix_with_duplicates=(double*)malloc(sizeof(double)*states*states*k*k); */
/*   double* aij_bar_with_duplicates=(double*)malloc(sizeof(double)*states*states*k*k); */
/*   double** states_output_log_likelihood_with_duplicates=(double**)malloc(sizeof(double*)*states*k); */
/*   for (s=0;s<states*k;s++)  */
/*     states_output_log_likelihood_with_duplicates[s] = (double*)calloc(frames,sizeof(double)); */
/*   double** alphas_with_duplicates=(double**)malloc(sizeof(double*)*frames); */
/*   for (t=0;t<frames;t++)  */
/*     alphas_with_duplicates[t] = (double*)malloc(sizeof(double)*states*k); */
/*   double** log_alphas_bar_with_duplicates=(double**)malloc(sizeof(double*)*(frames+1)); */
/*   for (t=0;t<=frames;t++)  */
/*     log_alphas_bar_with_duplicates[t] = (double*)malloc(sizeof(double)*states*k); */
/*   double** btj_bar_with_duplicates=(double**)malloc(sizeof(double*)*frames); */
/*   for (t=0;t<frames;t++)  */
/*     btj_bar_with_duplicates[t] = (double*)malloc(sizeof(double)*states*k); */
/*   double* final_log_alphas_bar_with_duplicates = (double*) malloc(states*k*sizeof(double)); */
/*   for (s=0;s<states*k;s++) */
/*     final_log_alphas_bar_with_duplicates[s]=NEGATIVE_INFINITY; */
  
/*   double* initial_vector_bar_with_duplicates=(double*)malloc(sizeof(double)*states*k); */

  
/*   normalize_vector(states,initial_state_vector); */
/*   for (s=0;s<states;s++) normalize_vector(states,transition_matrix+s*states); */

/*   for (s =0;s<states;s++) log_initial_state_vector[s]=my_log(initial_state_vector[s]); */
/*   for (s =0;s<states*states;s++) log_transition_matrix[s]=my_log(transition_matrix[s]); */

/*   for (s=0;s<states;s++) */
/*     { */
/*       for (f=0;f<number_of_features;f++) */
/* 	{ */
/* 	  if (model_types[f]==0) */
/* 	    unit_vector(feature_lengths[f],output_models[s][f]); */
/* 	  else if (model_types[f]==3) */
/* 	    normalize_vector(bin_lengths[f],output_models[s][f]); */
/* 	} */
/*     }  */

/*   compute_output_log_likelihoods_and_hog_lrs(states,frames,model_types,number_of_features,feature_lengths,bin_lengths, fvs, output_models, sigmoid_a,sigmoid_b,states_output_log_likelihood, states_hog_dots, states_features_output_log_likelihood, states_frames_lr); */

/*   // populate intermediate arrays holding repeated state information */
/*   //printf("initial vector:\n"); */
/*   for (s=0;s<states*k;s++) */
/*     { */
/*       if (s%k==0) log_initial_state_vector_with_duplicates[s]=log_initial_state_vector[s/k]; */
/*       else log_initial_state_vector_with_duplicates[s] = NEGATIVE_INFINITY; */
/*       //printf("%f ",log_initial_state_vector_with_duplicates[s]); */
/*     } */
/*   //printf("\ntransition:\n"); */
/*   for (i=0;i<states*k;i++) */
/*     { */
/*     for (j=0;j<states*k;j++) */
/*       { */
/* 	log_transition_matrix_with_duplicates[i*states*k+j]=NEGATIVE_INFINITY; */
/* 	if (i%k<(k-1)) */
/* 	  if (j==i+1) log_transition_matrix_with_duplicates[i*states*k+j]=0; */
/* 	if (i%k==(k-1)) */
/* 	  { */
/* 	    if (i==j || ((j%k==0) && (j/k)!=(i/k)))   */
/* 	      log_transition_matrix_with_duplicates[i*states*k+j] =  */
/* 		log_transition_matrix[i/k*states+(j/k)]; */
/* 	  } */
/* 	//printf("%f ",log_transition_matrix_with_duplicates[i*states*k+j]); */
/*       } */
/*     //printf("\n"); */
/*     } */
/*   //printf("states output likelihood:\n"); */
/*   for(s=0;s<states*k;s++) */
/*     { */
/*     for (t=0;t<frames;t++) */
/*       { */
/* 	states_output_log_likelihood_with_duplicates[s][t]=states_output_log_likelihood[s/k][t]; */
	
/*       } */
    
/*     } */
/*   for (t=0;t<frames;t++) */
/*     { */
/*       for(s=0;s<states*k;s++) */
/* 	{ */
/* 	  //printf("%f ",states_output_log_likelihood_with_duplicates[s][t]); */
/* 	} */
/*       //printf("\n"); */
/*     } */
   
/*   // */

/*   calc_alphas(states*k, */
/* 	      frames, */
/* 	      states_output_log_likelihood_with_duplicates, */
/* 	      log_initial_state_vector_with_duplicates, */
/* 	      log_transition_matrix_with_duplicates, */
/* 	      alphas_with_duplicates); */
/*   /\* printf("alphas_with_duplicates\n"); *\/ */
/*   /\* for (t=0;t<frames;t++) *\/ */
/*   /\*   { *\/ */
/*   /\*     for (s=0;s<states*k;s++) *\/ */
/*   /\* 	{ *\/ */
/*   /\* 	  printf("%f ",alphas_with_duplicates[t][s]); *\/ */
/*   /\* 	} *\/ */
/*   /\*     printf("\n"); *\/ */
/*   /\*   } *\/ */

/*   if (compute_gammas) */
/*     { */
/*       calc_betas(states*k, */
/* 		 frames, */
/* 		 states_output_log_likelihood_with_duplicates, */
/* 		 log_initial_state_vector_with_duplicates, */
/* 		 log_transition_matrix_with_duplicates, */
/* 		 betas */
/* 		 ); */
      
/*       calc_gammas(states*k, frames, alphas_with_duplicates, betas, gammas); */

/*       // need to produce gammas from the duplicate version right here */
/*     } */



/*   double likelihood = 0; */
/*   double unnormalized_likelihood = 0; */
/*   for (i=0;i<k;i++) unnormalized_likelihood+=alphas_with_duplicates[frames-1][(states-1)*k+i];///frames; */
/*   likelihood=unnormalized_likelihood/frames; */

/*   if (compute_gradient==1) */
/*     { */
/*       for (i=0;i<k;i++) */
/* 	final_log_alphas_bar[(states-1)*k+i]=-(unnormalized_likelihood+log(frames)); */
/*       compute_log_alphas_bar(alphas_with_duplicates, */
/* 			     final_log_alphas_bar_with_duplicates, */
/* 			     states_output_log_likelihood_with_duplicates, */
/* 			     log_transition_matrix_with_duplicates, */
/* 			     states*k, */
/* 			     frames, */
/* 			     log_alphas_bar_with_duplicates); */

/*       compute_log_initial_vector_bar(alphas_with_duplicates, */
/* 				     log_alphas_bar_with_duplicates, */
/* 				     states_output_log_likelihood_with_duplicates, */
/* 				     states*k, */
/* 				     initial_vector_bar_with_duplicates); */

/*       // need to produce initial_vector_bar from the duplicate version right here */
/*       for (s=0;s<states;s++) */
/* 	initial_vector_bar[s]=0; */
/*       for (s=0;s<states*k;s++) */
/* 	initial_vector_bar[s/k]+=initial_vector_bar_with_duplicates[s]; */


/*       compute_normalize_bar(initial_vector_bar, */
/* 			    initial_state_vector, */
/* 			    states, */
/* 			    initial_vector_bar); */

/*       compute_aij_bar(alphas_with_duplicates, */
/* 		      log_alphas_bar_with_duplicates, */
/* 		      states_output_log_likelihood_with_duplicates, */
/* 		      states*k, */
/* 		      frames, */
/* 		      aij_bar_with_duplicates); */

/*       // need to produce aij_bar from the duplicate version right here */
/*       for (i=0;i<states;i++) */
/* 	for (j=0;j<states;j++) */
/* 	  aij_bar[states*i+j]=0; */

/*       for (i=0;i<states*k;i++) */
/* 	for (j=0;j<states*k;j++) */
/* 	  { */
/* 	    if ((i%k)==(k-1) && (j%k)==0)  */
/* 	      aij_bar[states*(i/k)+(j/k)]=aij_bar[states*k*i+j]; */
/* 	  } */
  
/*       for(i=0;i<states;i++) */
/* 	compute_normalize_bar(aij_bar+states*i, */
/* 			      transition_matrix+states*i, */
/* 			      states, */
/* 			      aij_bar+states*i); */

/*       compute_btj_bar(alphas_with_duplicates, */
/* 		      log_alphas_bar_with_duplicates, */
/* 		      log_initial_state_vector_with_duplicates, */
/* 		      log_transition_matrix_with_duplicates, */
/* 		      states*k, */
/* 		      frames, */
/* 		      btj_bar_with_duplicates); */

/*       // need to produce btj_bar from the duplicate version right here */
/*       for (t=0;t<frames;t++) */
/* 	for (j=0;j<states;j++) */
/* 	  btj_bar[t][j]=0; */
      
/*       for (t=0;t<frames;t++) */
/* 	for (j=0;j<states*k;j++) */
/* 	  btj_bar[t][j/k] += btj_bar_with_duplicates[t][j]; */
  
/*       compute_output_params_bar(btj_bar, */
/* 				fvs, */
/* 				output_models, */
/* 				states_frames_lr, */
/* 				states_hog_dots, */
/* 				states_features_output_log_likelihood, */
/* 				states, */
/* 				frames, */
/* 				number_of_features, */
/* 				model_types, */
/* 				feature_lengths, */
/* 				bin_lengths, */
/* 				sigmoid_a, */
/* 				sigmoid_b, */
/* 				output_params_bar); */

      
/*       int j=0; */
/*       for (i=0;i<states;i++)  */
/* 	{ */
/* 	  gradient_out[j]=initial_vector_bar[i]; */
/* 	  j++; */
/* 	} */
/*       for (i=0;i<states*states;i++)  */
/* 	{ */
/* 	  gradient_out[j]=aij_bar[i]; */
/* 	  j++; */
/* 	} */
/*       for(i=0;i<states;i++) */
/* 	{ */
/* 	  for (f=0;f<number_of_features;f++) */
/* 	    { */
/* 	      params_length=0; */
/* 	      if (model_types[f]==0) */
/* 		params_length = feature_lengths[f]; */
/* 	      else if (model_types[f]==3) */
/* 		params_length = bin_lengths[f]; */
/* 	      else panic("?? :("); */
      
/* 	      for (int x=0;x<params_length;x++) */
/* 		{ */
/* 		  gradient_out[j]=output_params_bar[f][i][x]; */
/* 		  j++; */
/* 		} */
/* 	    } */
/* 	} */
/*       // the sigmoid parameter gradients are left zero for now: we arent optimizing them */
/*       gradient_out[j]=0; */
/*       j++; */
/*       gradient_out[j]=0; */
/*     } */



/*  /\* double* log_initial_state_vector_with_duplicates=(double*)malloc(sizeof(double)*states*k); *\/ */
/*  /\*  double* log_transition_matrix_with_duplicates=(double*)malloc(sizeof(double)*states*states*k*k); *\/ */
/*  /\*  double* aij_bar_with_duplicates=(double*)malloc(sizeof(double)*states*states*k*k); *\/ */
/*  /\*  double** states_output_log_likelihood_with_duplicates=(double**)malloc(sizeof(double*)*states*k); *\/ */
/*  /\*  for (s=0;s<states*k;s++)  *\/ */
/*  /\*    states_output_log_likelihood_with_duplicates[s] = (double*)calloc(frames,sizeof(double)); *\/ */
/*  /\*  double** alphas_with_duplicates=(double**)malloc(sizeof(double*)*frames); *\/ */
/*  /\*  for (t=0;t<frames;t++)  *\/ */
/*  /\*    alphas_with_duplicates[t] = (double*)malloc(sizeof(double)*states*k); *\/ */
/*  /\*  double** log_alphas_bar_with_duplicates=(double**)malloc(sizeof(double*)*(frames+1)); *\/ */
/*  /\*  for (t=0;t<=frames;t++)  *\/ */
/*  /\*    log_alphas_bar_with_duplicates[t] = (double*)malloc(sizeof(double)*states*k); *\/ */
/*  /\*  double** btj_bar_with_duplicates=(double**)malloc(sizeof(double*)*frames); *\/ */
/*  /\*  for (t=0;t<frames;t++)  *\/ */
/*  /\*    btj_bar_with_duplicates[t] = (double*)malloc(sizeof(double)*states*k); *\/ */
/*  /\*  double* final_log_alphas_bar_with_duplicates = (double*) malloc(states*k*sizeof(double)); *\/ */
/*  /\*  for (s=0;s<states*k;s++) *\/ */
/*  /\*    final_log_alphas_bar_with_duplicates[s]=NEGATIVE_INFINITY; *\/ */
  
/*  /\*  double* initial_vector_bar_with_duplicates=(double*)malloc(sizeof(double)*states*k); *\/ */

/* free(log_initial_state_vector_with_duplicates); */
/*   free(log_transition_matrix_with_duplicates); */
/*   free(aij_bar_with_duplicates); */
/*   for (i=0;i<states*k;i++) */
/*     { */
/*        free(states_output_log_likelihood_with_duplicates[i]); */
/*       // free(states_hog_dots[i]); */
/*       // free(states_frames_lr[i]);       */
/*       // for (t=0;t<frames;t++) */
/*       //	free(states_features_output_log_likelihood[i][t]); */
/*       // free(states_features_output_log_likelihood[i]); */
/*     } */
 
/*   free(states_output_log_likelihood_with_duplicates); */
/*   //free(states_hog_dots); */
/*   //free(states_frames_lr); */
/*   //free(states_features_output_log_likelihood); */

/*   for (t=0;t<frames;t++) */
/*     { */
/*       free(alphas_with_duplicates[t]); */
/*       //free(betas_with_duplicates[t]); */
/*       free(log_alphas_bar_with_duplicates[t]); */
/*       free(btj_bar_with_duplicates[t]); */
/*     } */
  
/*   free(alphas_with_duplicates); */
/*   //free(betas_with_duplicates); */
/*   free(log_alphas_bar_with_duplicates[t]); // its 1 longer than the others */
/*   free(log_alphas_bar_with_duplicates); */
/*   free(final_log_alphas_bar_with_duplicates); */
/*   free(btj_bar_with_duplicates); */
/*   free(initial_vector_bar_with_duplicates); */
  
/*   /\* for (f=0;f<number_of_features;f++) *\/ */
/*   /\*   { *\/ */
/*   /\*     for (i=0;i<states;i++) *\/ */
/*   /\* 	{ *\/ */
/*   /\* 	  free(output_params_bar[f][i]); *\/ */
/*   /\* 	} *\/ */
/*   /\*     free(output_params_bar[f]); *\/ */
/*   /\*   } *\/ */
/*   /\* free(output_params_bar); *\/ */




/*   free(log_initial_state_vector); */
/*   free(log_transition_matrix); */
/*   free(aij_bar); */
/*   for (i=0;i<states;i++) */
/*     { */
/*       free(states_output_log_likelihood[i]); */
/*       free(states_hog_dots[i]); */
/*       free(states_frames_lr[i]);       */
/*       for (t=0;t<frames;t++) */
/* 	free(states_features_output_log_likelihood[i][t]); */
/*       free(states_features_output_log_likelihood[i]); */
/*     } */
 
/*   free(states_output_log_likelihood); */
/*   free(states_hog_dots); */
/*   free(states_frames_lr); */
/*   free(states_features_output_log_likelihood); */

/*   for (t=0;t<frames;t++) */
/*     { */
/*       free(alphas[t]); */
/*       free(betas[t]); */
/*       free(log_alphas_bar[t]); */
/*       free(btj_bar[t]); */
/*     } */
  
/*   free(alphas); */
/*   free(betas); */
/*   free(log_alphas_bar[t]); // its 1 longer than the others */
/*   free(log_alphas_bar); */
/*   free(btj_bar); */
/*   free(initial_vector_bar); */

/*   for (f=0;f<number_of_features;f++) */
/*     { */
/*       for (i=0;i<states;i++) */
/* 	{ */
/* 	  free(output_params_bar[f][i]); */
/* 	} */
/*       free(output_params_bar[f]); */
/*     } */
/*   free(output_params_bar); */
  
/*   return likelihood;//gradient_out; */
/* } */


//#define THREADS 6

void threaded_hog_hmm_derivative_in_c(int states,
				      int number_of_features,
				      int flattened_length,
				      int gradient_length,
				      int number_of_classes,
				      int* hmm_indeces,
				      double sigmoid_a,
				      double sigmoid_b,
				      int** flattened_feature_types,
				      int** flattened_model_types,
				      int** flattened_feature_lengths,
				      int** flattened_bin_lengths,
				      double** flattened_initial_state_vectors,
				      double** flattened_transition_matrices,
				      double**** flattened_states_output_models,
				      double***** flattened_fvs,
				      int* flattened_frames,
				      double* flattened_likelihoods,
				      double** flattened_gradients,
				      int compute_gradient,
				      double* weights,
				      double** out_gradients)
				      
{
/*   int i,j; */
/*   //printf("\nflattened length: %d\n",flattened_length); */
/*   for (i=0;i<=(flattened_length/(THREADS));i++) */
/*     { */
/* #pragma omp parallel for num_threads(THREADS), private(j) */
/*     for (j=0; j<THREADS;j++) */
/*       { */
/* 	int f=i*THREADS+j; */
	//printf("\n f:%d j:%d\n",f,j);
  //  if (f<flattened_length)
  int f;
#pragma omp parallel for schedule(dynamic) private(f)
  for (f=0;f<flattened_length;f++)
    {
	    //  printf("%d %d %d %d %d %d %d\n",states, flattened_frames[f],number_of_features,flattened_feature_types[f][0],flattened_model_types[f][0],flattened_feature_lengths[f][0],flattened_bin_lengths[f][0]);
	    //printf("%f %f \n",flattened_initial_state_vectors[f][0],flattened_transition_matrices[f][0]);
	    //printf("%p\n",flattened_fvs[f]);
	    //printf("%p\n",flattened_states_output_models[f]);
	  flattened_likelihoods[f]=hog_hmm_derivative_in_c(states,
							   flattened_frames[f],
							   number_of_features,
							   flattened_feature_types[f],
							   flattened_model_types[f],
							   flattened_feature_lengths[f],
							   flattened_bin_lengths[f],
							   flattened_initial_state_vectors[f],
							   flattened_transition_matrices[f],
							   flattened_fvs[f],
							   flattened_states_output_models[f],
							   sigmoid_a,
							   sigmoid_b,
							   compute_gradient,
							   flattened_gradients[f],
							   0,
							   NULL,
							   NULL);
	  k_times_vector(gradient_length, weights[f], flattened_gradients[f]);
	  //printf("like:%f f:%d j:%d \n",flattened_likelihoods[f],f,j);
    } 

  int h,i;
  printf("adding up the weighted vectors in c\n");
#pragma omp parallel for schedule(dynamic) private(f,h,i)
  for (h=0;h<number_of_classes; h++)
    {
      for (i=0;i<gradient_length;i++) out_gradients[h][i]=0;
      for (f=0;f<flattened_length;f++)
	{
	  // printf("indeces[%d]=%d\n",f,hmm_indeces[f]);
	  if (hmm_indeces[f]==h)
	    vector_plus(gradient_length,out_gradients[h],flattened_gradients[f]);
	}
    }
  printf("done adding them up\n");
  
}

void render_hog(char* filename,
		double* hog_image,
		int number_of_orientations,
		int pitch,
		int hog_width,
		int hog_height,
		int transposed
		) {
  // unsigned int id = fake_id;
  //int s = ((int)id)-FIRST_HOG_TASK;
  unsigned int downsample = 1;// or 2
  unsigned int size = downsample*pitch;
  unsigned int number_of_features = number_of_orientations*4; /* hardwired */
  unsigned int half_hog_size = size/2;
  Imlib_Image descriptor_image = imlib_create_image(size, size);
  Imlib_Image scratch = imlib_create_image(size*hog_width,size*hog_height);
  // printf("render a\n");
  imlib_context_set_image(scratch);
  imlib_context_set_anti_alias(TRUE);
  imlib_context_set_color(0, 0, 0, 255);
  imlib_image_fill_rectangle(0, 0, size*hog_width, size*hog_height);
  // printf("render b\n");
  if (hog_image!=NULL) {
    for (unsigned int y = 0; y<hog_height; y += downsample) {
      for (unsigned int x = 0; x<hog_width; x += downsample) {
	int xi,yi;
	if (transposed)
	  {
	    xi=y;
	    yi=x;
	  }
	else
	  {
	    xi=x;
	    yi=y;
	  }
	//printf("render x=%d y=%d\n",x, y);
	imlib_context_set_image(descriptor_image);
	imlib_context_set_anti_alias(TRUE);
	imlib_context_set_color(0, 0, 0, 255);
	imlib_image_fill_rectangle(0, 0, size, size);
	for (unsigned int orientation = 0;
	     orientation<number_of_orientations;
	     orientation++) {
	  unsigned int intensity =
	    round(255.0*
		  (hog_image
		   [yi*hog_width*number_of_features+
		    xi*number_of_features+
		    0*number_of_orientations+orientation]+
		   hog_image
		   [yi*hog_width*number_of_features+
		    xi*number_of_features+
		    1*number_of_orientations+orientation]+
		   hog_image
		   [yi*hog_width*number_of_features+
		    xi*number_of_features+
		    2*number_of_orientations+orientation]+
		   hog_image
		   [yi*hog_width*number_of_features+
		    xi*number_of_features+
		    3*number_of_orientations+orientation]));
	  double theta =
	    degrees_to_radians((180.0*orientation)/number_of_orientations);
	  double cos_theta, sin_theta;
	  sincos(theta, &sin_theta, &cos_theta);
	  unsigned int x1 = round(half_hog_size+sin_theta*half_hog_size);
	  unsigned int y1 = round(half_hog_size+cos_theta*half_hog_size);
	  unsigned int x2 = round(half_hog_size-sin_theta*half_hog_size);
	  unsigned int y2 = round(half_hog_size-cos_theta*half_hog_size);
	  imlib_context_set_color(intensity, intensity, intensity, 255);
	  imlib_image_draw_line(x1, y1, x2, y2, 0);
	}
	imlib_context_set_image(scratch);
	
	imlib_blend_image_onto_image
	  (descriptor_image, FALSE,
	   0, 0, size, size,
	   // The +1 is because there is a one-pitch-wide border of the image
	   // where no HOG descriptors are computed.
	   (size*(x+1))/downsample, (size*(y+1))/downsample, size, size);
	
      }
    }
  }
  //printf("render c\n");
  imlib_context_set_image(descriptor_image);
  imlib_free_image_and_decache();
  imlib_context_set_image(scratch);
  imlib_save_image(filename);
  imlib_free_image_and_decache(); 
}

void render_score_pyramid_level(double *score_pyramid,
				int h,
				int s,
				int pyramid_width,
				int pyramid_height,
				int hmms,
				int states,
				char* filename)
{
  Imlib_Image scratch = imlib_create_image(pyramid_width,pyramid_height);
  // printf("score render a\n");
  imlib_context_set_image(scratch);
  imlib_context_set_anti_alias(TRUE);
  imlib_context_set_color(0, 0, 0, 255);
  imlib_image_fill_rectangle(0, 0, pyramid_width, pyramid_height);
  unsigned char* image_data = (unsigned char*)imlib_image_get_data_for_reading_only();
  double min_score=99999;
  double max_score=-99999;
  double score;
  //printf("render a\n");
  for (int x=0;x<pyramid_width;x++)
    for (int y=0;y<pyramid_height;y++)
      {
	score = score_pyramid[y*pyramid_width*hmms*states+
			      x*hmms*states+
			      h*states+
			      s];
	if (score<min_score)
	  min_score=score;
	if (score>max_score)
	  max_score=score;
      }
  //printf("render b\n");
  for (int x=0;x<pyramid_width;x++)
    for (int y=0;y<pyramid_height;y++)
      {
	score = score_pyramid[y*pyramid_width*hmms*states+
			      x*hmms*states+
			      h*states+
			      s];
	//printf("score:%f ",score);
	if (score>0)
	  image_data[(y*pyramid_width + x)*4 + 2] = (unsigned char)floor(score/max_score*255);
	if (score<0)
	  image_data[(y*pyramid_width + x)*4 + 0] = (unsigned char)floor(-score/min_score*255);
      }
  // printf("render c\n");
  //  printf("filename: %s\n",filename);
  imlib_context_set_image(scratch);
  imlib_save_image(filename);
  imlib_free_image_and_decache();
  // printf("render d\n");
  return;

}

void imlib_image_draw_rect_thickness(CvRectf rect,
				     int thickness) {
  int x1 = rect.x;
  int y1 = rect.y;
  int x2 = rect.x+rect.width-1;
  int y2 = rect.y+rect.height-1;
  for (int i = -thickness; i<=thickness; i++) {
    imlib_image_draw_line(x1+i, y1+i, x1+i, y2-i, 0);
    imlib_image_draw_line(x1+i, y2-i, x2-i, y2-i, 0);
    imlib_image_draw_line(x2-i, y2-i, x2-i, y1+i, 0);
    imlib_image_draw_line(x2-i, y1+i, x1+i, y1+i, 0);
  }
}

void render_top_boxes(float scores[],
		      CvRectf rects[],
		      int topk,
		      char filename[],
		      Imlib_Image frame) 
{
  float score;
  imlib_context_set_image(frame);
  Imlib_Image scratch = imlib_clone_image();
  // printf("score render a\n");
  imlib_context_set_image(scratch);
  imlib_context_set_anti_alias(TRUE);
  float min_score=9999;
  float max_score=-9999;
  for (int i=0;i<topk;i++)
    {
      score=scores[i];
      if (score != -INFINITY && score<min_score)
	min_score=score;
      if (score>max_score)
	max_score=score;
    }

  for (int i=topk-1;i>=0;i--)
    {
      imlib_context_set_color((scores[i]-min_score)*255.0/(max_score-min_score),0,0, 255);
      imlib_image_draw_rect_thickness(rects[i],1);}
  
  imlib_context_set_image(scratch);
  imlib_save_image(filename);

}

CvRectf pyramid_to_rect(double pitch,double scale,
		       int hog_model_width, int hog_model_height,
		       unsigned int y, unsigned int x)
{
  // The +1 is because there is a one-pitch-wide border of the image where no
  // HOG descriptors are computed.
  return make_CvRectf((pitch*scale*(x+1)),
		      (pitch*scale*(y+1)),
		      (pitch*scale*hog_model_width),
		      (pitch*scale*hog_model_height));
}

void rect_to_pyramid_scale_x_y(double pitch, int hog_model_width,
			       CvRectf rect, double* scale,
			       unsigned int *x, unsigned int* y)
{
  *scale = rect.width / (pitch*hog_model_width);
  *x = llround(rect.x/(*scale*pitch)-1);
  *y = llround(rect.y/(*scale*pitch)-1);
}

void compute_scaled_image_size(int level,
			       int number_of_levels,
			       double min_scale,
			       double max_scale,
			       int width, int height,
			       int *scaled_width, int *scaled_height)
{
  double scale = min_scale*pow( (max_scale/min_scale),
				((double)level /(double)(number_of_levels - 1)));
  *scaled_width = llround(width*scale);
  *scaled_height = llround(height*scale);
}


void compute_feature_for_pyramid_location(int feature_type,
					  int feature_length,
					  unsigned char* scaled_image_data,
					  double* hog,
					  float* flow,
					  float* integral_flow,
					  float* integral_flow_magnitude,
					  double scale,
					  int width,
					  int height,
					  int hog_width,
					  int hog_height,
					  int x,
					  int y,
					  int model_width,
					  int model_height,
					  double* feature,
					  int flipped,
					  double flow_sigmoid_a,
					  double flow_sigmoid_b)
{
  // flipped=0;
  CvRectf rect = pyramid_to_rect(8,scale,model_width,model_height,y,x);
  unsigned int tmpx,tmpy;
  double tmpscale;
  rect_to_pyramid_scale_x_y(8, model_width,
  			    rect, &tmpscale,
  			    &tmpx, &tmpy);
  //printf("x tmpx %d %d  y tmpy %d %d scale %f tmpscale %f\n",x,tmpx,y,tmpy,scale,tmpscale);
  
  if (x!=tmpx || y!=tmpy || fabs(tmpscale-scale)>.000001)
    {
      printf("not equal!\n");
      exit(1);
    }
  //printf("scale=%f model-width=%d model-height=%d x=%d y=%d\n",scale,model_width,model_height,x,y);
  int x1 = llround(rect.x);
  int y1 = llround(rect.y);
  int x2 = llround(rect.x+rect.width);
  int scaled_width = llround(width*scale);
  int scaled_height = llround(height*scale);
  //printf("x1=%d y1=%d\n",x1,y1);
  double h;
  float avg[2];
  int sx1,sx2,sy1,sy2;
  switch (feature_type)
    {
    case 0://hog
      if (flipped)
	{
	  x = hog_width - model_width - x - 1;
	}
      //printf("computing hog feature\n");
      for (int i=0;i<model_width;i++)
	for (int j=0;j<model_height;j++)
	  for (int k=0;k<36;k++)
	    {
	      //if (j+y>=0 && i+x>=0 && j+y < hog_height && i+x<hog_width)
		h = hog[(y+j)*hog_width*36+
			(x+i)*36+
			k];
		//else
		//	h =0.0; 
	      
	      
	      feature[i*model_height*36+j*36+k] = h;
	      //feature[j*model_width*9*4+i*9*4+k] = h;
	    }
      //printf("finished hog feature\n");
      break;
    case 1://flow grid
      {
	//printf("computing flow grid feature\n");
	int flow_grid_size = sqrt(feature_length/4);
      double rh = (double)rect.height/(double)flow_grid_size;
      double rw = (double)rect.width/(double)flow_grid_size;
      //printf("rect width: %d height %d flow-grid-size=%d\n",rect.width,rect.height,flow_grid_size);
      float max=-INFINITY;
      float min=INFINITY;
      float sum=0;
      for (int i=0;i<flow_grid_size;i++)
      	{
      	  sx1 = llround((i*rw+x1));
      	  sx2 = llround((i*rw+rw+x1));
	  if (flipped)
	    {
	      int tmp = sx1;
	      //sx1 = width - 1 - sx2;
	      //sx2 = width - 1 - tmp;
	      sx1 = x2-(sx2-x1);
	      sx2 = x2-(tmp-x1);
	    }
	  
      	  for (int j=0;j<flow_grid_size;j++)
      	    {
      	      sy1 = llround((j*rh+y1));
      	      sy2 = llround((j*rh+rh+y1));
      	      //break rect into sqrt(feature_length/4) smaller rects
      	      // for each small rect run
      	      //if (sx1>=0 && sy1>=0 && sy2 < scaled_height && sx2<scaled_width)
      		average_flow_in_rect(integral_flow,width,height,sx1,sy1,sx2,sy2,avg);
		float mag = sqrt(avg[0]*avg[0]+avg[1]*avg[1]);
		if (mag<min)
		  {
		    min=mag;
		  }
		else if (mag>max)
		  {
		    max=mag;
		  }
		sum+=mag;
		//else
      		//{
      		//  avg[0]=0;
      		//  avg[1]=0;
		//}
	      if (flipped)
		avg[0] = -avg[0];
      	      feature[i*flow_grid_size*4+j*4+0]=avg[0]>0? avg[0] : 0;
      	      feature[i*flow_grid_size*4+j*4+1]=avg[1]>0? avg[1] : 0;
      	      feature[i*flow_grid_size*4+j*4+2]=avg[0]<0? -avg[0] : 0;
      	      feature[i*flow_grid_size*4+j*4+3]=avg[1]<0? -avg[1] : 0;
      	    }
	  //printf("min max avg: %f %f %f\n",min,max,sum/flow_grid_size/flow_grid_size);
      	}}
      break;
    case 13://augmented flow grid
      {
	//printf("computing flow grid feature\n");
	int flow_grid_size = sqrt(feature_length/6);
	double rh = (double)rect.height/(double)flow_grid_size;
	double rw = (double)rect.width/(double)flow_grid_size;
	//printf("rect width: %d height %d flow-grid-size=%d\n",rect.width,rect.height,flow_grid_size);
	float max=-INFINITY;
	float min=INFINITY;
	float sum=0;
	for (int i=0;i<flow_grid_size;i++)
	  {
	    sx1 = llround((i*rw+x1));
	    sx2 = llround((i*rw+rw+x1));
	    if (flipped)
	      {
		int tmp = sx1;
		//sx1 = width - 1 - sx2;
		//sx2 = width - 1 - tmp;
		sx1 = x2-(sx2-x1);
		sx2 = x2-(tmp-x1);
	      }
	  
	    for (int j=0;j<flow_grid_size;j++)
	      {
		sy1 = llround((j*rh+y1));
		sy2 = llround((j*rh+rh+y1));
		//break rect into sqrt(feature_length/4) smaller rects
		// for each small rect run
		//if (sx1>=0 && sy1>=0 && sy2 < scaled_height && sx2<scaled_width)
      		average_flow_in_rect(integral_flow,width,height,sx1,sy1,sx2,sy2,avg);
		/* float mag = sqrt(avg[0]*avg[0]+avg[1]*avg[1]); */
		/* if (mag<min) */
		/*   { */
		/*     min=mag; */
		/*   } */
		/* else if (mag>max) */
		/*   { */
		/*     max=mag; */
		/*   } */
		/* sum+=mag; */
		//else
      		//{
      		//  avg[0]=0;
      		//  avg[1]=0;
		//}
		if (flipped)
		  avg[0] = -avg[0];

		float abs_x = fabs(avg[0]);
		float abs_y = fabs(avg[1]);
		float sig_x = sigmoid(abs_x,flow_sigmoid_a,flow_sigmoid_b);
		float sig_y = sigmoid(abs_y,flow_sigmoid_a,flow_sigmoid_b);
		
		feature[i*flow_grid_size*6+j*6+0]= 1 - sig_x;
		feature[i*flow_grid_size*6+j*6+1]= 1 - sig_y;
		feature[i*flow_grid_size*6+j*6+2]=avg[0]>0? sig_x : 0;
		feature[i*flow_grid_size*6+j*6+3]=avg[1]>0? sig_y : 0;
		feature[i*flow_grid_size*6+j*6+4]=avg[0]<0? sig_x : 0;
		feature[i*flow_grid_size*6+j*6+5]=avg[1]<0? sig_y : 0;
	      }
	    //printf("min max avg: %f %f %f\n",min,max,sum/flow_grid_size/flow_grid_size);
	  }}
      break;
    }
  
  unit_vector(feature_length, feature);

}

double rect_area(CvRectf rect) {
  
  
  return rect.width*rect.height;
}

double rect_intersection(CvRectf rect1,
                              CvRectf rect2) {
  int x1 = MAX(rect1.x, rect2.x);
  int x2 = MIN(rect1.x+rect1.width, rect2.x+rect2.width);
  int y1 = MAX(rect1.y, rect2.y);
  int y2 = MIN(rect1.y+rect1.height, rect2.y+rect2.height);
  if (x2<=x1||y2<=y1) return 0.0;
  return (x2-x1)*(y2-y1);
}

double rect_overlap1(CvRectf rect1,
		     CvRectf rect2) {
  return
    rect_intersection(rect1, rect2)/
    rect_area(rect2);
}

double rect_overlap(CvRectf rect1,
		     CvRectf rect2) {
  return
    rect_intersection(rect1, rect2)/
    (rect_area(rect1)+rect_area(rect2)-
     rect_intersection(rect1, rect2));
}
				  
void detection_with_NMS(CvRectf rect,
			float score,
			CvRectf rects[],
			float topk[],
			unsigned int k,
			double overlap) {
  for (unsigned int l = 0; l<k; l++) {
    if (score>topk[l]) {
      /* remove any lower score detection that overlaps with new */
      for (unsigned int l1 = l; l1<k&&topk[l1]!=-INFINITY; l1++) {
	if (rect_overlap(rect, rects[l1])>overlap) {
	  topk[l1] = -INFINITY;
	}
      }
      for (unsigned int l1 = l, l2 = l; l2<k;) {
	if (topk[l2]==-INFINITY) l2++;
	else if (l1==l2) {
	  l1++;
	  l2++;
	}
	else if (topk[l1]!=-INFINITY) l1++;
	else {
	  rects[l1] = rects[l2];
	  topk[l1]=topk[l2];
	  topk[l2] = -INFINITY;
	  l1++;
	  l2++;
	}
      }
      /* push lower score detections down */
      for (unsigned int l1 = k-1; l1>l; l1--)
	{
	  topk[l1] = topk[l1-1];
	  rects[l1] = rects[l1-1];
	}
      topk[l] = score;
      rects[l] = rect;
      break;
    }
    else if (rect_overlap(rect, rects[l])>overlap) break;
  }
}					  

double compute_rect_coherency(CvRectf rect0,
			      CvRectf rect1,
			      int width,
			      int height,
			      float* integral_flow)
{
  float avg[2];
  average_flow_in_rect(integral_flow,
		       width,
		       height,
		       llround(rect0.x),
		       llround(rect0.y),
		       llround(rect0.x+rect0.width),
		       llround(rect0.y+rect0.height),
		       avg);

  /* CvRect projected = rect0; */
  /* projected.x = projected.x+avg[0]; */
  /* projected.y = projected.y+avg[1]; */
  
  CvRectf projected;// = rects[0];
  projected.x = rect0.x+avg[0];
  projected.y = rect0.y+avg[1];
  projected.width = rect0.width;
  projected.height = rect0.height;

  //double scale = .5*(rect_area(rect0)+rect_area(rect1));
  //double d = pow(((projected.x+.5*projected.width)-(rect1.x+.5*rect1.width)),2)+
  //  pow(((projected.y+.5*projected.height)-(rect1.y+.5*rect1.height)),2);
  //return -d/scale;
  return rect_overlap(projected,rect1);
  //return 1;/* sigmoid(-(rect0.x-rect1.x)*(rect0.x-rect1.x) */
	   /* 	 -(rect0.y-rect1.y)*(rect0.y-rect1.y), */
	   /* 	 .25*(sqrt(rect_area(rect0))+sqrt(rect_area(rect1))), */
	   /* 	 8/(sqrt(rect_area(rect0))+sqrt(rect_area(rect1)))) */; //rect_overlap(rect0,rect1);
}

// takes a set of hmms with transition, output models, etc
// takes what feature types, etc
// takes a video path

// computes optical flow
// computes a feature score pyramid
// takes the top k and then massages it into the input needed by the sentence tracker
// calls the sentence tracker, yielding a track and a score
int hog_hmm_tracker(char* filename,
		    int hmms,
		    int states,
		    int frames,
		    int number_of_features,
		    int* feature_types,
		    int* model_types,
		    int* feature_lengths,
		    int* bin_lengths,
		    double** hmms_initial_state_vectors,
		    double** hmms_transition_matrices,
		    double**** hmms_output_models,
		    double sigmoid_a,
		    double sigmoid_b,
		    double flow_sigmoid_a,
		    double flow_sigmoid_b,
		    double coherency_weight,
		    double max_scale,
		    double min_scale,
		    int pyramid_levels,
		    double flow_pyr_scale,
		    int flow_levels,
		    int flow_winsize,
		    int flow_iterations,
		    int flow_poly_n,
		    double flow_poly_sigma,
		    int model_width,
		    int model_height,
		    double***** hmms_fvs,
		    double* hmms_tracks, //hmms_tracks[h*frames*4+t*4+i]
		    double* hmms_scores)
{
  struct ffmpeg_video_t *video = ffmpeg_open_video(filename);
  int width = ffmpeg_video_width(video);
  int height = ffmpeg_video_height(video);
  int scaled_width, scaled_height;
  float *flow, *integral_flow, *integral_flow_magnitude;
  double** hog_pyramid = (double**)malloc(sizeof(double*)*pyramid_levels);
  double** flipped_hog_pyramid = (double**)malloc(sizeof(double*)*pyramid_levels);
  int t,l,x,y,f,h,s;
  Imlib_Image scaled_image;
  int max_feature_length=0;
  for (f=0;f<number_of_features;f++) 
    if (feature_lengths[f]>max_feature_length)
      max_feature_length=feature_lengths[f];
  double* feature = (double*)malloc(sizeof(double)*max_feature_length);
  double* flipped_feature = (double*)malloc(sizeof(double)*max_feature_length);
  printf("feature-length:%d computed-length:%d",feature_lengths[0],model_width*model_height*9*4);

  int k=40;
  float** hmms_states_topk = (float**)malloc(sizeof(float*)*hmms*states*frames);
  CvRectf** hmms_states_topkrects = (CvRectf**)malloc(sizeof(CvRectf*)*hmms*states*frames);
  float *topk;
  CvRectf *topkrects;

  for (int i=0;i<hmms*states*frames;i++)
    {
      hmms_states_topk[i] = (float*)malloc(sizeof(float)*k);
      hmms_states_topkrects[i] = (CvRectf*)malloc(sizeof(CvRectf)*k);
    }

  // one score pyramid per frame
  // each score pyramid has pyramid_levels layers
  // each layer has (scaled_width/8-2)*(scaled_width/8-2) entries
  // each entry holds hmms*states scores
  double*** score_pyramids = (double***)malloc(sizeof(double**)*frames);
  for(t=0;t<frames;t++)
    score_pyramids[t]=(double**)malloc(sizeof(double*)*pyramid_levels);
    

  // compute optical flow
  printf("computing optical flow:\n");
  run_farneback_on_video(filename,
			 &flow,
			 &integral_flow,
			 &integral_flow_magnitude,
			 flow_pyr_scale,
			 flow_levels,
			 flow_winsize,
			 flow_iterations,
			 flow_poly_n,
			 flow_poly_sigma);
  printf("done computing flow\n");

  // for each video frame
  //   get image
  for (t=0;t<frames;t++)
    {

      /* for (int i=0;i<k;i++) */
      /* 	topk[i]=-INFINITY;//k00; */

      printf("frame %d\n",t);
      Imlib_Image image = ffmpeg_get_frame_as_imlib2(video);
      ffmpeg_next_frame(video);
      
      
      // compute hog pyramid
      // compute intermediate image sizes and create scales images
      // for each scaled image run hog(image,height,width,4,8,9)
      printf("computing hog pyramid\n");
      for (l=0;l<pyramid_levels;l++)
	{
	  //printf("pyramid level %d\n",l);
	  compute_scaled_image_size(l,
				    pyramid_levels,
				    min_scale,
				    max_scale,
				    width,
				    height,
				    &scaled_width,
				    &scaled_height);
	  // printf("a\n");
	  imlib_context_set_image(image);
	  scaled_image = 
	    imlib_create_cropped_scaled_image(0,0,width,height,scaled_width,scaled_height);
	  int pyramid_width = (scaled_width/8-2);
	  int pyramid_height = (scaled_height/8-2);

	  imlib_context_set_image(scaled_image);
	  unsigned char* image_data = (unsigned char*)imlib_image_get_data_for_reading_only();
	  hog_pyramid[l] = hog(image_data,
			       scaled_height,scaled_width,4,8,9);
	  
	  imlib_image_flip_horizontal();
	  unsigned char* flipped_image_data = (unsigned char*)imlib_image_get_data_for_reading_only();
	  flipped_hog_pyramid[l] = hog(flipped_image_data,
				       scaled_height,scaled_width,4,8,9);
	  
	  // printf("b\n");
	  if (0)
	    {
	      char filename[100];
	      sprintf(filename,"/tmp/rendered-hog-frame-%04d-scale-%02d.png",t,l);
	      render_hog(filename,
			 hog_pyramid[l],
			 9,
			 8,
			 pyramid_width,
			 pyramid_height,
			 0);
	    }
	  
	  score_pyramids[t][l]=(double*)malloc(sizeof(double)*
					       pyramid_width*
					       pyramid_height*
					       hmms*states);
	  //printf("b2\n");
	  for (y=0; y<pyramid_height; y++)
	    for (x=0; x<pyramid_width; x++)
	      for (h=0;h<hmms;h++)
		for (s=0;s<states;s++)
		  score_pyramids[t][l][y*pyramid_width*hmms*states+
				       x*hmms*states+
				       h*states+
				       s]=0;
	  //printf("c\n");
	  for (y=0; y<pyramid_height-model_height; y++)
	    for (x=0; x<pyramid_width-model_width; x++)
	      {
	      for (f=0; f<number_of_features; f++)
		{
		  //printf("d\n");
		  compute_feature_for_pyramid_location(feature_types[f],
						       feature_lengths[f],
						       image_data,
						       hog_pyramid[l],
						       flow+t*width*height*2,//flow holds the whole video's flow
						       integral_flow+t*width*height*2,//flow holds the whole video's flow
						       integral_flow_magnitude+t*width*height,//flow holds the whole video's flow
						       (float)width/(float)scaled_width,
						       width,
						       height,
						       pyramid_width,
						       pyramid_height,
						       x,
						       y,
						       model_width,
						       model_height,
						       feature,
						       0,
						       flow_sigmoid_a,
						       flow_sigmoid_b);

		  compute_feature_for_pyramid_location(feature_types[f],
						       feature_lengths[f],
						       image_data,
						       flipped_hog_pyramid[l],
						       flow+t*width*height*2,//flow holds the whole video's flow
						       integral_flow+t*width*height*2,//flow holds the whole video's flow
						       integral_flow_magnitude+t*width*height,//flow holds the whole video's flow
						       (float)width/(float)scaled_width,
						       width,
						       height,
						       pyramid_width,
						       pyramid_height,
						       x,
						       y,
						       model_width,
						       model_height,
						       flipped_feature,
						       1,
						       flow_sigmoid_a,
						       flow_sigmoid_b);
		  //printf("e\n");
		  // printf("e\n");

		  for (h=0;h<hmms;h++)
		    for (s=0;s<states;s++)
		      {
			score_pyramids[t][l][y*pyramid_width*hmms*states+
					     x*hmms*states+
					     h*states+
					     s]+=my_log(sigmoid(MAX(vector_dot(feature_lengths[f],
									       feature,
									       hmms_output_models[h][s][f]),
								    
								    vector_dot(feature_lengths[f],
									       flipped_feature,
									       hmms_output_models[h][s][f])),
								sigmoid_a,
								sigmoid_b));
		      }
	  
		  
		}
	      
	      }
	  if (0)
	    {
	    for (h=0;h<hmms;h++)
	      for (s=0;s<states;s++)
		{
		  char score_pathname[200];
		  sprintf(score_pathname,"/tmp/rendered-score-pyramid-frame-%04d-level-%04d-hmm-%04d-state-%04d.png",t,l,h,s);
		  render_score_pyramid_level(score_pyramids[t][l],h,s,pyramid_width,pyramid_height,hmms,states,score_pathname);
		}
	    }
	  imlib_context_set_image(scaled_image);
	  imlib_free_image_and_decache();
	  
	}

      for (h=0;h<hmms;h++)
	for (s=0;s<states;s++)
	  {
	    topk=hmms_states_topk[h*states*frames+s*frames + t];
	    topkrects = hmms_states_topkrects[h*states*frames+s*frames + t];
	    for (int i=0;i<k;i++)
	      topk[i]=-INFINITY;//k00;
	    for (l=0;l<pyramid_levels;l++)
	      {
		compute_scaled_image_size(l,
					  pyramid_levels,
					  min_scale,
					  max_scale,
					  width,
					  height,
					  &scaled_width,
					  &scaled_height);
		int pyramid_width = (scaled_width/8-2);
		int pyramid_height = (scaled_height/8-2);
		
		
		for (y=0; y<pyramid_height-model_height; y++)
		  for (x=0; x<pyramid_width-model_width; x++)
		    {
		      float score =  score_pyramids[t][l][y*pyramid_width*hmms*states+
							  x*hmms*states+
							  h*states+
							  s];
		      
		      detection_with_NMS(pyramid_to_rect(8,
							 (float)width/(float)scaled_width,
							 model_width,
							 model_height,
							 y,
							 x),
					 score,
					 topkrects,
					 topk,
					 k,
					 .65);
		    }
	      }
		if (1)
		  {
		    char boxesfilename[200];
		    sprintf(boxesfilename,"/tmp/rendered-boxes-frame-%04d-hmm-%04d-state-%04d.png",t,h,s);
		    render_top_boxes(topk,
				     topkrects,
				     k,
				     boxesfilename,
				     image);
		  }
	      }
	
      
      for (int l=0; l<pyramid_levels;l++)
	{
	  printf("freeing hog images\n");
	  free(hog_pyramid[l]);
	  free(flipped_hog_pyramid[l]);
	}
      
      imlib_context_set_image(image);
      imlib_free_image_and_decache();
      printf("next frame\n");
    }
  
  ffmpeg_close_and_free_video(video);
  
  int class_label=-1;
  double best_score=-INFINITY;

  unsigned int*** hmms_tracks_frames_detectionindeces = (unsigned int***)malloc(sizeof(unsigned int**)*hmms); // this is an output of st 
  
  for (h=0;h<hmms;h++)
    {
      
      hmms_tracks_frames_detectionindeces[h] = (unsigned int**)malloc(sizeof(unsigned int*)*1);
      hmms_tracks_frames_detectionindeces[h][0] = (unsigned int*)malloc(sizeof(unsigned int)*frames);
      
      unsigned int* states_per_entry = (unsigned int*)malloc(sizeof(int)*1);
      states_per_entry[0] = states;

      unsigned int* roles_per_entry = (unsigned int*)malloc(sizeof(unsigned int)*1);
      roles_per_entry[0]=1;

      unsigned int* values_per_feature=(unsigned int*)malloc(sizeof(unsigned int)*1);
      values_per_feature[0]=states;

      double** entries_initial_vectors = (double**)malloc(sizeof(double*)*1);//double **b,
      entries_initial_vectors[0] = (double*)malloc(sizeof(double)*states);
      for (int i=0;i<states;i++) entries_initial_vectors[0][i] = my_log(hmms_initial_state_vectors[h][i]);
      double*** entries_transition_matrices = (double***)malloc(sizeof(double**)*1);// ***a,
      entries_transition_matrices[0]=(double**)malloc(sizeof(double*)*states);
      for (int i=0;i<states;i++)
	{
	  entries_transition_matrices[0][i] = (double*)malloc(sizeof(double)*states);
	  for (int j=0;j<states;j++)
	    entries_transition_matrices[0][i][j] =my_log( hmms_transition_matrices[h][i*states+j]);
	}


      double** entries_final_vectors = (double**)malloc(sizeof(double*)*1);//double **z,
      entries_final_vectors[0] = (double*)malloc(sizeof(double)*states);
      for (int i=0;i<states-1;i++)
	entries_final_vectors[0][i] = my_log(0);
      entries_final_vectors[0][states-1] = my_log(1);
      

      double**** entries_states_features_distibutions = (double****)malloc(sizeof(double***)*1);//double ****c,
      entries_states_features_distibutions[0] = (double***)malloc(sizeof(double**)*states);
      for (int i=0;i<states;i++)
	{
	  entries_states_features_distibutions[0][i] = (double**)malloc(sizeof(double*)*1);
	  entries_states_features_distibutions[0][i][0] = (double*)malloc(sizeof(double)*states);
	  for (int j=0;j<states;j++)
	    if (i==j) entries_states_features_distibutions[0][i][0][j] = my_log(1);
	    else entries_states_features_distibutions[0][i][0][j] = my_log(0);
	}
  
      unsigned int** frames_classes_ndetections = (unsigned int**)malloc(sizeof(unsigned int*)*frames);//unsigned int **J,
      for (t=0;t<frames;t++)
	{
	  frames_classes_ndetections[t] = (unsigned int*)malloc(sizeof(unsigned int)*1);
	  frames_classes_ndetections[t][0] = k*states;
	}

      //topk=hmms_states_topk[h*states*frames+s*frames + t];
      double*** frames_classes_detectionscores = (double***)malloc(sizeof(double**)*frames);//double ***f,
      for (t=0;t<frames;t++)
	{
	  frames_classes_detectionscores[t] = (double**)malloc(sizeof(double*)*1);
	  frames_classes_detectionscores[t][0] = (double*)malloc(sizeof(double)*k*states);
	  for (int s=0; s<states; s++)
	    {
	      for (int d=0;d<k;d++)
		{
		  frames_classes_detectionscores[t][0][s*k+d] = 
		    hmms_states_topk[h*states*frames+s*frames + t][d];//,
		  //sigmoid_a,sigmoid_b));
		  //printf("%f ",frames_classes_detectionscores[t][0][s*k+d]);
		}
	    }
	
	}

      double**** frames_classes_deti_detj_coherency = (double****)malloc(sizeof(double***)*frames);//double ****g,
      for (t=0;t<frames;t++)
	{
	  frames_classes_deti_detj_coherency[t] = (double***)malloc(sizeof(double**)*1);
	  frames_classes_deti_detj_coherency[t][0] = (double**)malloc(sizeof(double*)*k*states);
	  for (int s0=0;s0<states;s0++)
	    {
	      for (int d0=0;d0<k;d0++)
		{
		  frames_classes_deti_detj_coherency[t][0][s0*k+d0] =
		    (double*)malloc(sizeof(double)*k*states);
		  for (int s1=0;s1<states;s1++)
		    {
		  
		      for (int d1=0;d1<k;d1++)
			if (t==frames-1)
			  frames_classes_deti_detj_coherency[t][0][s0*k+d0][s1*k+d1] = my_log(1);
			else
			  {
			    frames_classes_deti_detj_coherency[t][0][s0*k+d0][s1*k+d1] =
			      coherency_weight*my_log(compute_rect_coherency(hmms_states_topkrects[h*states*frames+s0*frames + t][d0],
									     hmms_states_topkrects[h*states*frames+s1*frames + t+1][d1],
									     width,
									     height,
									     integral_flow+(t)*width*height*2));
			    //			printf("coherency=%f\n",frames_classes_deti_detj_coherency[t][0][d0][d1]);
			  }
		    }
		}
	    }
	}
  
      unsigned int**** frames_classes_dets_featuresvalues = (unsigned int****)malloc(sizeof(unsigned int***)*frames);//unsigned int ****phi1,
      for (t=0;t<frames;t++)
	{
	  frames_classes_dets_featuresvalues[t] = (unsigned int***)malloc(sizeof(unsigned int**)*1);
	  frames_classes_dets_featuresvalues[t][0] = (unsigned int**)malloc(sizeof(unsigned int*)*k*states);
	  for (s=0;s<states;s++)
	    for (int d=0;d<k;d++)
	      {
		frames_classes_dets_featuresvalues[t][0][s*k+d] =
		  (unsigned int*)malloc(sizeof(unsigned int)*1);
		frames_classes_dets_featuresvalues[t][0][s*k+d][0] = s;
	      }
	}

      unsigned int****** frames_class1_det1_class2_det2_featuresvalues = NULL;//(unsigned int******)malloc(sizeof(unsigned int*****)*frames);//unsigned int ******phi2,
      /* for (t=0;t<frames;t++) */
      /*   { */
      /*     frames_class1_det1_class2_det2_featuresvalues[t] = (unsigned int*****)malloc(sizeof(unsigned int****)*1); */
      /*     frames_class1_det1_class2_det2_featuresvalues[t][0] = (unsigned int****)malloc(sizeof(unsigned int***)*k*states); */
      /*     for (int d0=0;d0<k*states;d0++) */
      /* 	{ */
      /* 	  frames_class1_det1_class2_det2_featuresvalues[t][0][d0] = (unsigned int***)malloc(sizeof(unsigned int**)*1); */
      /* 	  frames_class1_det1_class2_det2_featuresvalues[t][0][d0][0] = (unsigned int**)malloc(sizeof(unsigned int*)*k*states); */
      /* 	  for (int d1=0;d1<k*states;d1++) */
      /* 	    frames_class1_det1_class2_det2_featuresvalues[t][0][d0][0][d1] = NULL; */
      /* 	} */
      /*   } */
  
      unsigned int* entry_for_word = (unsigned int*)malloc(sizeof(int)*1);//unsigned int *e,
      entry_for_word[0]=0;
  
      unsigned int** words_roles_trackindeces = (unsigned int**)malloc(sizeof(unsigned int*)*1);//unsigned int **l,
      words_roles_trackindeces[0] = (unsigned int*)malloc(sizeof(unsigned int)*1);
      words_roles_trackindeces[0][0] = 0;


      unsigned int* tracks_class_indeces = (unsigned int*)malloc(sizeof(unsigned int)*1); // this is an output of st
      /* unsigned int** tracks_frames_detectionindeces = (unsigned int**)malloc(sizeof(unsigned int*)*1); // this is an output of st  */
      /* tracks_frames_detectionindeces[0] = (unsigned int*)malloc(sizeof(unsigned int)*frames); */





      /* printf("init:\n"); */
      /* for (int i=0;i<states;i++) printf("%f ",entries_initial_vectors[0][i]); */
      /* printf("\n"); */
  
      /* printf("transition:\n"); */
      /* for (int i=0;i<states;i++) */
      /*   {    */
      /*     for (int j=0;j<states;j++) */
      /* 	printf("%f ",entries_transition_matrices[0][i][j]); */
      /*     printf("\n"); */
      /*   } */

      /* printf("final:\n"); */
      /* for (int i=0;i<states;i++) */
      /*   printf("%f ",entries_final_vectors[0][i]); */
      /* printf("\n"); */

  

      /* printf("states feature distributions\n"); */
      /* for (int i=0;i<states;i++) */
      /*   {  */
      /*     for (int j=0;j<states;j++) */
      /* 	printf("%f ",entries_states_features_distibutions[0][i][0][j]); */
      /*     printf("\n"); */
      /*   } */

  
      /* printf("frames ndetections:\n"); */
      /* for (t=0;t<frames;t++) */
      /*   { */
      /*     printf("%d ",frames_classes_ndetections[t][0]); */
      /*   } */
      /* printf("\n"); */

      /* printf("frames detectionscores:\n"); */
      /* for (t=0;t<frames;t++) */
      /*   { */
      /*     printf("frame %d\n",t); */
      /*     for (int s=0; s<states; s++) */
      /* 	{ */
      /* 	  printf("state %d:\n",s); */
      /* 	  for (int d=0;d<k;d++) */
      /* 	    { */
      /* 	      printf("%f ",frames_classes_detectionscores[t][0][s*k+d]); */
      /* 	    } */
      /* 	  printf("\n"); */
      /* 	} */
      /*   } */


      /* printf("feature values:\n"); */

      /* for (t=0;t<frames;t++) */
      /*   { */
      /*     printf("frame %d\n",t); */
      /*     for (s=0;s<states;s++) */
      /* 	{ */
      /* 	  printf("state %d\n",s); */
      /* 	  for (int d=0;d<k;d++) */
      /* 	    { */
      /* 	      printf("%d ",frames_classes_dets_featuresvalues[t][0][s*k+d][0]); */
      /* 	    } */
      /* 	} */
      
      /*   } */


      /* for (t=0;t<frames;t++) */
      /*   { */
      /*     for (int s0=0;s0<states;s0++) */
      /* 	{ */
      /* 	  for (int d0=0;d0<k;d0++) */
      /* 	    { */
      /* 	      for (int s1=0;s1<states;s1++) */
      /* 		{   */
      /* 		  for (int d1=0;d1<k;d1++) */
		 
      /* 		    printf("%f ",frames_classes_deti_detj_coherency[t][0][s0*k+d0][s1*k+d1]); */
		  
      /* 		} */
      /* 	    } */
      /* 	} */
      /*   } */




      double track_score =  sentence_tracker(frames,
					     1, //# tracks
					     1, //# "classes"
					     1,// #single det features
					     0,// #det pair   features
					     1,// #entries,
					     1, // #words 
					     states_per_entry,//unsigned int *K,
					     roles_per_entry,//unsigned int *R,
					     values_per_feature,//unsigned int *Phi1,
					     NULL,//unsigned int *Phi2,
					     entries_initial_vectors,//double **b,
					     NULL,
					     entries_transition_matrices,// ***a,
					     NULL,//double ***anew,
					     entries_final_vectors,//double **z,
					     NULL,//double **znew,
					     entries_states_features_distibutions,//double ****c,
					     NULL,//double ****cnew,
					     frames_classes_ndetections,//unsigned int **J,
					     frames_classes_detectionscores,//double ***f,
					     frames_classes_deti_detj_coherency,//double ****g,
					     frames_classes_dets_featuresvalues,//unsigned int ****phi1,
					     NULL,//frames_class1_det1_class2_det2_featuresvalues,//unsigned int ******phi2,
					     entry_for_word,//unsigned int *e,
					     words_roles_trackindeces,//unsigned int **l,
					     tracks_class_indeces,//unsigned int *otracks,
					     hmms_tracks_frames_detectionindeces[h]/* unsigned int **jtracks */);
      printf("hmm %d track score is: %f\n",h,track_score);
      hmms_scores[h]=track_score;
      if (track_score > best_score)
	{
	  best_score=track_score;
	  class_label = h;
	}
      
   
      /* for (t=0;t<frames;t++) */
      /* 	{ */
      /* 	  int det = tracks_frames_detectionindeces[0][i]; */
      /* 	  int detnum = det%k; */
      /* 	  int detstate= (det-detnum)/k; */
      /* 	  CvRect rect = hmms_states_topkrects[h*states*frames+detstate*frames + i][detnum];  */
      /* 	  hmms_tracks[h*frames*4+t*4+0] = rect.x; */
      /* 	  hmms_tracks[h*frames*4+t*4+1] = rect.y; */
      /* 	  hmms_tracks[h*frames*4+t*4+2] = rect.x+rect.width; */
      /* 	  hmms_tracks[h*frames*4+t*4+3] = rect.y+rect.height; */
      /* 	} */
      

      if (1)
	{
	  video = ffmpeg_open_video(filename);
    
	  CvRectf rects[2];
	  float vals[2]={1,0};
	
	  for (int i=1;i<frames-1;i++)
	    {
	      Imlib_Image image = ffmpeg_get_frame_as_imlib2(video);
	      ffmpeg_next_frame(video);
	    
	      char trackfilename[100];
	      sprintf(trackfilename,"/tmp/rendered-track-hmm-%04d-frame-%04d.png",h,i);
	      //printf("%d\n", tracks_frames_detectionindeces[0][i]);
	      int det = hmms_tracks_frames_detectionindeces[h][0][i];
	      int detnum = det%k;
	      int detstate= (det-detnum)/k;
	      //printf("det=%d,detstate=%d, detnum=%d\n",det,detstate,detnum);
	      rects[0] = hmms_states_topkrects[h*states*frames+detstate*frames + i][detnum];
	      hmms_tracks[h*frames*4+i*4+0] = rects[0].x;
	      hmms_tracks[h*frames*4+i*4+1] = rects[0].y;
	      hmms_tracks[h*frames*4+i*4+2] = rects[0].width;
	      hmms_tracks[h*frames*4+i*4+3] = rects[0].height;
	      //printf("\na\n");
	      /* if (i==frames-1) */
	      /* 	{ */
	      /* 	  // printf("\nb\n"); */
	      /* 	  render_top_boxes(vals, */
	      /* 			   rects, */
	      /* 			   1, */
	      /* 			   trackfilename, */
	      /* 			   image); */
	      /* 	} */
	      /* else */
		{
		  // printf("\nc\n");
		  int prev_det = hmms_tracks_frames_detectionindeces[h][0][i-1];
		  int prev_detnum = prev_det%k;
		  int prev_detstate= (prev_det-prev_detnum)/k;
		
		
		  /* float avg[2]; */
		  /* average_flow_in_rect(integral_flow+(i)*width*height*2, */
		  /* 		       width, */
		  /* 		       height, */
		  /* 		       rects[0].x, */
		  /* 		       rects[0].y, */
		  /* 		       rects[0].x+rects[0].width, */
		  /* 		       rects[0].y+rects[0].height, */
		  /* 		       avg); */
		  /* CvRect projected;// = rects[0]; */
		  /* projected.x = rects[0].x+avg[0]; */
		  /* projected.y = rects[0].y+avg[1]; */
		  /* projected.width = rects[0].width; */
		  /* projected.height = rects[0].height; */
		  //printf("avg: %f %f\n",avg[0],avg[1]);
		  // rects[1] = projected;
		  rects[1] = hmms_states_topkrects[h*states*frames+prev_detstate*frames + i-1][prev_detnum];
		  
		
		  printf("%f ",
		  	   coherency_weight*my_log(compute_rect_coherency(rects[1],
		  					 rects[0],
		  					 width,
		  					 height,
		  					 integral_flow+(i-1)*width*height*2)));
		  printf("coherency:%f\n",frames_classes_deti_detj_coherency[i-1][0][prev_det][det]);
		  render_top_boxes(vals,
				   rects,
				   2,
				   trackfilename,
				   image);
		}
	      imlib_context_set_image(image);
	      imlib_free_image_and_decache();
	    }
	
	  ffmpeg_close_and_free_video(video);
	}
      free(states_per_entry);
      free(roles_per_entry);
      free(values_per_feature);

      free(entries_initial_vectors[0]);
      free(entries_initial_vectors);
    
      for (int i=0;i<states;i++)
	{
	  free(entries_transition_matrices[0][i]);
	}
	
      free(entries_transition_matrices[0]);
      free(entries_transition_matrices);
    
      free(entries_final_vectors[0]);
      free(entries_final_vectors);
    
      for (int i=0; i<states; i++)
	{
	  free(entries_states_features_distibutions[0][i][0]);
	  free(entries_states_features_distibutions[0][i]);
	}
      free(entries_states_features_distibutions[0]);
      free(entries_states_features_distibutions);
    
      for (int t=0; t<frames; t++)
	{
	  free(frames_classes_ndetections[t]);
	}
      free(frames_classes_ndetections);

      for (int t=0; t<frames; t++)
	{
	  free(frames_classes_detectionscores[t][0]);
	  free(frames_classes_detectionscores[t]);
	}
      free(frames_classes_detectionscores);

      for (int t=0; t<frames; t++)
	{
	  for (int i=0; i<states*k; i++)
	    {
	      free(frames_classes_deti_detj_coherency[t][0][i]);
	    }
	  free(frames_classes_deti_detj_coherency[t][0]);
	  free(frames_classes_deti_detj_coherency[t]);
	}
      free(frames_classes_deti_detj_coherency);
    

      for (int t=0; t<frames; t++)
	{
	  for (int i=0;i<states*k; i++)
	    {
	      free(frames_classes_dets_featuresvalues[t][0][i]);
	    
	    
	    }
	  free(frames_classes_dets_featuresvalues[t][0]);
	  free(frames_classes_dets_featuresvalues[t]);
	}
      free(frames_classes_dets_featuresvalues);

      free(entry_for_word);
      free(words_roles_trackindeces[0]);
      free(words_roles_trackindeces);
      free(tracks_class_indeces);
      //free(tracks_frames_detectionindeces[0]);
      //free(tracks_frames_detectionindeces);

    }
  video = ffmpeg_open_video(filename);
  for (t=0;t<frames;t++)
    {
      Imlib_Image image = ffmpeg_get_frame_as_imlib2(video);
      ffmpeg_next_frame(video);
      for (h=0;h<hmms;h++)
	{
	  int det = hmms_tracks_frames_detectionindeces[h][0][t];
	  int detnum = det%k;
	  int detstate= (det-detnum)/k;
	  double scale;
	  unsigned int x,y;
	  //printf("det=%d,detstate=%d, detnum=%d\n",det,detstate,detnum);
	  CvRectf rect = hmms_states_topkrects[h*states*frames+detstate*frames + t][detnum];
	  rect_to_pyramid_scale_x_y(8, model_width, 
				    rect, &scale,
				    &x, &y); 
	  int scaled_width = llround(width/scale);
	  int scaled_height = llround(height/scale);
	  
	  int pyramid_width = (scaled_width/8-2);
	  int pyramid_height = (scaled_height/8-2);

	  imlib_context_set_image(image);
	  Imlib_Image scaled_image = 
	    imlib_create_cropped_scaled_image(0,0,width,height,scaled_width,scaled_height);

	  imlib_context_set_image(scaled_image);
	  unsigned char* image_data = (unsigned char*)imlib_image_get_data_for_reading_only();
	  
	  hog_pyramid[0] = hog(image_data,
			       scaled_height,scaled_width,4,8,9);
	  imlib_image_flip_horizontal();
	  unsigned char* flipped_image_data = (unsigned char*)imlib_image_get_data_for_reading_only();
	  flipped_hog_pyramid[0] = hog(flipped_image_data,
				       scaled_height,scaled_width,4,8,9);
	  for (f=0; f<number_of_features; f++)
	    {
	      compute_feature_for_pyramid_location(feature_types[f],
						   feature_lengths[f],
						   image_data,
						   hog_pyramid[0],
						   flow+t*width*height*2,//flow holds the whole video's flow
						   integral_flow+t*width*height*2,//flow holds the whole video's flow
						   integral_flow_magnitude+t*width*height,//flow holds the whole video's flow
						   scale,
						   width,
						   height,
						   pyramid_width,
						   pyramid_height,
						   x,
						   y,
						   model_width,
						   model_height,
						   hmms_fvs[h][f][t][0],
						   0,
						   flow_sigmoid_a,
						   flow_sigmoid_b);
	      compute_feature_for_pyramid_location(feature_types[f],
						   feature_lengths[f],
						   image_data,
						   flipped_hog_pyramid[0],
						   flow+t*width*height*2,//flow holds the whole video's flow
						   integral_flow+t*width*height*2,//flow holds the whole video's flow
						   integral_flow_magnitude+t*width*height,//flow holds the whole video's flow
						   scale,
						   width,
						   height,
						   pyramid_width,
						   pyramid_height,
						   x,
						   y,
						   model_width,
						   model_height,
						   hmms_fvs[h][f][t][1],
						   1,
						   flow_sigmoid_a,
						   flow_sigmoid_b);
	      if (f==0)
		{
	      char fv_filename[100];
	      sprintf(fv_filename,"/tmp/rendered-fv-hmm-%04d-frame-%04d.png",h,t);
	      render_hog(fv_filename,
			 hmms_fvs[h][f][t][0],
			 9,
			 8,
			 model_width,
			 model_height,
			 1);
		}
	    }
	  free(hog_pyramid[0]);
	  free(flipped_hog_pyramid[0]);
	}
      
    }
      
  ffmpeg_close_and_free_video(video);

    
    free(hog_pyramid);
    free(flipped_hog_pyramid);
    free(flow);
    free(integral_flow);
    free(integral_flow_magnitude);
    free(feature);
    free(flipped_feature);
    for (int t=0;t<frames;t++)
      {
	for (int l=0; l<pyramid_levels;l++)
	  free(score_pyramids[t][l]);
	free(score_pyramids[t]);
      }
    free(score_pyramids);
	     
    for (int i=0;i<hmms*states*frames;i++)
      {
	free(hmms_states_topk[i]);
	free(hmms_states_topkrects[i]);
      }
    free(hmms_states_topk);
    free(hmms_states_topkrects);

    printf("class label: %d\n",class_label);
    return class_label;
}



/* Tam V'Nishlam Shevah L'El Borei Olam */
