#include <libavcodec/avcodec.h>
#include <libavformat/avformat.h>
#include <libswscale/swscale.h>
#include <Imlib2.h>

void farneback_set_grey(unsigned char *p,
			unsigned int width,
			unsigned int y,
			unsigned int x,
			unsigned int value);

void farneback_set_flow(float *p,
			unsigned int width,
			unsigned int y,
			unsigned int x,
			unsigned int channel,
			float value);

float farneback_get_flow(float *p,
			 unsigned int width,
			 unsigned int y,
			 unsigned int x,
			 unsigned int channel);

float farneback_avg_flow_magnitude_in_box(float *p,
					  unsigned int width,
					  int x1,
					  int y1,
					  int x2,
					  int y2);
float average_flow_magnitude_in_rect(float* integral_flow_magnitude,
				     int width,
				     int height,
				     int x1,
				     int y1,
				     int x2,
				      int y2);

void average_flow_in_rect(float* integral_flow,
			  int width,
			  int height,
			  int x1,
			  int y1,
			  int x2,
			  int y2,
			  float* avg);

void copy_flow(double* flow_in,
	       double* flow_out,
	       int width,
	       int height);

void run_farneback_on_imlib(Imlib_Image previous_img,
			    Imlib_Image next_img,
			    float *flow,
			    int initial,
			    double pyr_scale,
			    int levels,
			    int winsize,
			    int iterations,
			    int poly_n,
			    double poly_sigma);


void run_farneback_on_video(char* filename,
			    float** flow,
			    float** integral_flow,
			    float** integral_flow_magnitude,
			    double pyr_scale,
			    int levels,
			    int winsize,
			    int iterations,
			    int poly_n,
			    double poly_sigma);

void compute_farneback_integral_flow_magnitude(float *flow,
					       float* integral_flow_magnitude,
					       unsigned int width,
					       unsigned int height);

void compute_farneback_integral_flow(float *flow,
				     float* integral_flow,
				     unsigned int width,
				     unsigned int height);

