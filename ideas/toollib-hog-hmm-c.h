/* LaHaShem HaAretz U'Mloah */

#ifndef _TOOL1LIB_HOG_HMM_C_H
#define _TOOL1LIB_HOG_HMM_C_H

/* needs work: many of these are no longer needed */
#include <math.h>
#include <malloc.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <fcntl.h>
#include <string.h>
#include <memory.h>
#include <time.h>
#include <errno.h>
#include <unistd.h>
#include <sched.h>
#include <netdb.h>
#include <sys/ioctl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/mman.h>
#include <sys/fcntl.h>
#include <sys/signal.h>
#include <sys/time.h>
#include <sys/times.h>
#include <sys/resource.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <linux/soundcard.h>

struct detection {
  int x, y, min_x, min_y, max_x, max_y;
  double score;
  unsigned int m;
};

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
			       double** gammas_out,
			       int*** features_states_frames_lr_out);

double vector_dot(int length, double* vector1, double* vector2);

void compute_video_features_min_max(int frames,
				    int number_of_features,
				    int* feature_lengths,
				    double**** fvs,
				    double* mins,
				    double* maxes);

void discretize_fvs(int frames,
		    int number_of_features,
		    int* feature_lengths,
		    int* bin_lengths,
		    double**** fvs,
		    double* mins,
		    double* maxes);

// double hog_hmm_derivative_in_c_with_duplicates(int states,
// 					       int frames,
// 					       int number_of_features,
// 					       int* feature_types,
// 					       int* model_types,
// 					       int* feature_lengths,
// 					       int* bin_lengths,
// 					       double* initial_state_vector,
// 					       double* transition_matrix,
// 					       double**** fvs,
// 					       double*** output_models,
// 					       double sigmoid_a,
// 					       double sigmoid_b,
// 					       int compute_gradient,
// 					       double* gradient_out,
// 					       int compute_gammas,
// 					       double** gammas,
// 					       int k);

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
				      double** out_gradients);

int read_c_cache_file(char* filename, double** fv_data, int* frames, int* featurelength, int* orientations);
int write_c_cache_file(char* filename, double* fv_data, int frames, int featurelength, int orientations);

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
		    double ***** hmms_fvs,
		    double* hmms_tracks,
		    double* hmms_scores);

#endif

/* Tam V'Nishlam Shevah L'El Borei Olam */
