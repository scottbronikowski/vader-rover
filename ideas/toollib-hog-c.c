#include <stdlib.h>
#include <strings.h>
#include <stdio.h>
#include <math.h>
#include "toollib-hog-c.h"

#define hog_error(...) {			\
    fprintf(stderr, "%s: ", __FUNCTION__);	\
    fprintf(stderr, __VA_ARGS__);		\
    fprintf(stderr, "\n");			\
    exit(-1);					\
  }

double normalize_orientation(double orientation) {
  if (orientation>M_PI/2) return normalize_orientation(orientation-M_PI);
  else if (orientation<-M_PI/2) return normalize_orientation(orientation+M_PI);
  else return orientation;
}

double orientation_plus(double x, double y) {
  return normalize_orientation(x+y);
}

double orientation_minus(double x, double y) {
  return normalize_orientation(x-y);
}

double orientation_separation(double x, double y) {
  double a = fabs(orientation_minus(x, y));
  double b = fabs(orientation_minus(y, x));
  if (a<b) return a;
  else return b;
}

void *hog_malloc(size_t size) {
  void *p = malloc(size);
  if (p==NULL) hog_error("Out of memory");
  return p;
}

void normalize_hog_image(struct hog_image *hog_image) {
  unsigned int width = hog_image->width;
  unsigned int height = hog_image->height;
  unsigned int number_of_orientations = hog_image->number_of_orientations;
  unsigned int x, y, index;
  double sum;
  for (y = 0; y<height; y++) {
    for (x = 0; x<width; x++) {
      sum = 0.0;
      for (index = 0; index<number_of_orientations*4; index++) {
	sum +=
	  hog_image->gradients
	  [y * hog_image->width * hog_image->number_of_orientations * 4 +
	   x * hog_image->number_of_orientations * 4 +
	   index];
      }
      if (sum>0.0) {
	for (index = 0; index<number_of_orientations*4; index++) {
	  hog_image->gradients
	    [y * hog_image->width * hog_image->number_of_orientations * 4 +
	     x * hog_image->number_of_orientations * 4 +
	     index] /= sum;
	}
      }
    }
  }
}

double hog_image_ref(struct hog_image *hog_image,
		     unsigned int x, unsigned int y, unsigned int index) {
  if (x>=hog_image->width||
      y>=hog_image->height||
      index>=hog_image->number_of_orientations*4) {
    hog_error("index out of bounds x:%d y:%d index:%d width: %d height: %d number_of_orientations: %d",
	      x, y, index, hog_image->width, hog_image->height,
	      hog_image->number_of_orientations);
  }
  return hog_image->gradients
    [y * hog_image->width * hog_image->number_of_orientations * 4 +
     x * hog_image->number_of_orientations * 4 +
     index];
}

struct hog_descriptor_model *allocate_hog_descriptor_model
(unsigned int number_of_hog_descriptors,
 unsigned int number_of_orientations) {
  unsigned int i;
  struct hog_descriptor_model *hog_descriptor_model =
    (struct hog_descriptor_model *)
    hog_malloc(sizeof(struct hog_descriptor_model));
  hog_descriptor_model->number_of_hog_descriptors = number_of_hog_descriptors;
  hog_descriptor_model->hog_descriptor =
    (struct hog_descriptor *)
    hog_malloc(number_of_hog_descriptors*sizeof(struct hog_descriptor));
  for (i = 0; i<number_of_hog_descriptors; i++) {
    hog_descriptor_model->hog_descriptor[i].number_of_orientations =
      number_of_orientations;
    hog_descriptor_model->hog_descriptor[i].gradients =
      (double *)hog_malloc(number_of_orientations*4*sizeof(double));
  }
  return hog_descriptor_model;
}

void free_hog_descriptor_model
(struct hog_descriptor_model *hog_descriptor_model) {
  unsigned int i;
  for (i = 0; i<hog_descriptor_model->number_of_hog_descriptors; i++) {
    free(hog_descriptor_model->hog_descriptor[i].gradients);
  }
  free(hog_descriptor_model->hog_descriptor);
  free(hog_descriptor_model);
}

void set_hog_descriptor_model_x
(struct hog_descriptor_model *hog_descriptor_model,
 unsigned int i,
 unsigned int x) {
  if (i>=hog_descriptor_model->number_of_hog_descriptors) {
    hog_error("index out of bounds");
  }
  hog_descriptor_model->hog_descriptor[i].x = x;
}

void set_hog_descriptor_model_y
(struct hog_descriptor_model *hog_descriptor_model,
 unsigned int i,
 unsigned int y) {
  if (i>=hog_descriptor_model->number_of_hog_descriptors) {
    hog_error("index out of bounds");
  }
  hog_descriptor_model->hog_descriptor[i].y = y;
}

void set_hog_descriptor_model_gradient
(struct hog_descriptor_model *hog_descriptor_model,
 unsigned int i,
 unsigned int index,
 double gradient) {
  if (i>=hog_descriptor_model->number_of_hog_descriptors||
      index>=
      hog_descriptor_model->hog_descriptor[i].number_of_orientations*4) {
    hog_error("index out of bounds");
  }
  hog_descriptor_model->hog_descriptor[i].gradients[index] = gradient;
}

double hog_dot
(struct hog_descriptor_model *hog_descriptor_model,
 struct hog_image *hog_image,
 unsigned int x,
 unsigned int y) {
  double dot = 0.0, sum;
  unsigned int i;
  unsigned int index;
  unsigned int number_of_hog_descriptors =
    hog_descriptor_model->number_of_hog_descriptors;
  if (x>=hog_image->width||y>=hog_image->height) {
    hog_error("index out of bounds");
  }
  for (i = 0; i<number_of_hog_descriptors; i++) {
    unsigned int x1 = x+hog_descriptor_model->hog_descriptor[i].x;
    unsigned int y1 = y+hog_descriptor_model->hog_descriptor[i].y;
    if (hog_descriptor_model->hog_descriptor[i].number_of_orientations!=
	hog_image->number_of_orientations) {
      hog_error("mismatched number_of_orientations");
    }
    /* needs work:
       Should no longer do this check and error out since it is the
       responsibility of the caller to prevent the detections from going out of
       the frame. The old method inconsistently allowed detections to go
       outside the frame on the right and bottom but not the left and top. */
    if (x1<hog_image->width&&y1<hog_image->height) {
      sum = 0.0;
      for (index = 0;
	   index<
	     hog_descriptor_model->hog_descriptor[i].number_of_orientations*4;
	   index++) {
	if (hog_descriptor_model->hog_descriptor[i].gradients[index]==0.0) {
	  sum += hog_image_ref(hog_image, x1, y1, index);
	}
      }
      if (sum<TH1) {
	for (index = 0;
	     index<
	       hog_descriptor_model->hog_descriptor[i].number_of_orientations*4;
	     index++) {
	  dot +=
	    hog_descriptor_model->hog_descriptor[i].gradients[index]*
	    hog_image_ref(hog_image, x1, y1, index);
	}
      }
    }
  }
  return dot/number_of_hog_descriptors;
}

double hog_norm
(struct hog_descriptor_model *hog_descriptor_model,
 struct hog_image *hog_image,
 unsigned int x,
 unsigned int y) {
  double norm = 0.0;
  unsigned int i;
  unsigned int index;
  unsigned int number_of_hog_descriptors =
    hog_descriptor_model->number_of_hog_descriptors;
  if (x>=hog_image->width||y>=hog_image->height) {
    hog_error("index out of bounds");
  }
  for (i = 0; i<number_of_hog_descriptors; i++) {
    unsigned int x1 = x+hog_descriptor_model->hog_descriptor[i].x;
    unsigned int y1 = y+hog_descriptor_model->hog_descriptor[i].y;
    if (hog_descriptor_model->hog_descriptor[i].number_of_orientations!=
	hog_image->number_of_orientations) {
      hog_error("mismatched number_of_orientations");
    }
    /* needs work:
       Should no longer do this check and error out since it is the
       responsibility of the caller to prevent the detections from going out of
       the frame. The old method inconsistently allowed detections to go
       outside the frame on the right and bottom but not the left and top. */
    if (x1<hog_image->width&&y1<hog_image->height) {
      for (index = 0;
	   index<
	     hog_descriptor_model->hog_descriptor[i].number_of_orientations*4;
	   index++) {
	double diff =
	  hog_descriptor_model->hog_descriptor[i].gradients[index]-
	  hog_image_ref(hog_image, x1, y1, index);
	norm -= diff*diff;
      }
    }
  }
  return norm/number_of_hog_descriptors;
}

struct c_matrix *allocate_c_matrix (unsigned int width, unsigned int height) {
  struct c_matrix *c_matrix =
    (struct c_matrix *)hog_malloc(sizeof(struct c_matrix));
  c_matrix->width = width;
  c_matrix->height = height;
  c_matrix->element = (double *)hog_malloc(width*height*sizeof(double));
  return c_matrix;
}

struct c_matrix *hog_convolve_dot
(struct hog_descriptor_model *hog_descriptor_model,
 struct hog_image *hog_image) {
  unsigned int i, x, y, index;
  unsigned int width = hog_image->width, height = hog_image->height;
  unsigned int number_of_orientations = hog_image->number_of_orientations;
  struct c_matrix *c_matrix =
    (struct c_matrix *)hog_malloc(sizeof(struct c_matrix));
  unsigned int *p;
  unsigned int max_x = 0, max_y = 0;
  unsigned int number_of_hog_descriptors =
    hog_descriptor_model->number_of_hog_descriptors;
  double sum;
  for (i = 0; i<number_of_hog_descriptors; i++) {
    if (hog_descriptor_model->hog_descriptor[i].x>max_x) {
      max_x = hog_descriptor_model->hog_descriptor[i].x;
    }
    if (hog_descriptor_model->hog_descriptor[i].y>max_y) {
      max_y = hog_descriptor_model->hog_descriptor[i].y;
    }
  }
  if (width>max_x) c_matrix->width = width-max_x;
  else c_matrix->width = 0;
  if (height>max_y) c_matrix->height = height-max_y;
  else c_matrix->height = 0;
  unsigned int c_matrix_width = c_matrix->width;
  unsigned int c_matrix_height = c_matrix->height;
  c_matrix->element =
    (double *)hog_malloc(c_matrix_width*c_matrix_height*sizeof(double));
  for (y = 0; y<c_matrix_height; y++) {
    for (x = 0; x<c_matrix_width; x++) {
      c_matrix->element[y*c_matrix_width+x] = 0.0;
    }
  }
  for (i = 0; i<number_of_hog_descriptors; i++) {
    struct hog_descriptor hog_descriptor =
      hog_descriptor_model->hog_descriptor[i];
    if (hog_descriptor_model->hog_descriptor[i].number_of_orientations!=
	number_of_orientations) {
      hog_error("mismatched number_of_orientations");
    }
    for (y = 0; y<c_matrix_height; y++) {
      for (x = 0; x<c_matrix_width; x++) {
	sum = 0.0;
	for (index = 0; index<number_of_orientations*4; index++) {
	  if (hog_descriptor.gradients[index]==0.0) {
	    sum +=
	      hog_image->gradients
	      [(y+hog_descriptor.y)*width*number_of_orientations*4+
	       (x+hog_descriptor.x)*number_of_orientations*4+
	       index];
	  }
	}
	if (sum<TH1) {
	  for (index = 0; index<number_of_orientations*4; index++) {
	    c_matrix->element[y*c_matrix_width+x] +=
	      hog_descriptor.gradients[index]*
	      hog_image->gradients
	      [(y+hog_descriptor.y)*width*number_of_orientations*4+
	       (x+hog_descriptor.x)*number_of_orientations*4+
	       index];
	  }
	}
      }
    }
  }
  for (y = 0; y<c_matrix_height; y++) {
    for (x = 0; x<c_matrix_width; x++) {
      c_matrix->element[y*c_matrix_width+x] /= number_of_hog_descriptors;
    }
  }
  return c_matrix;
}

struct c_matrix *hog_convolve_norm
(struct hog_descriptor_model *hog_descriptor_model,
 struct hog_image *hog_image) {
  unsigned int i, x, y, index;
  unsigned int width = hog_image->width, height = hog_image->height;
  unsigned int number_of_orientations = hog_image->number_of_orientations;
  struct c_matrix *c_matrix =
    (struct c_matrix *)hog_malloc(sizeof(struct c_matrix));
  unsigned int *p;
  unsigned int max_x = 0, max_y = 0;
  unsigned int number_of_hog_descriptors =
    hog_descriptor_model->number_of_hog_descriptors;
  for (i = 0; i<number_of_hog_descriptors; i++) {
    if (hog_descriptor_model->hog_descriptor[i].x>max_x) {
      max_x = hog_descriptor_model->hog_descriptor[i].x;
    }
    if (hog_descriptor_model->hog_descriptor[i].y>max_y) {
      max_y = hog_descriptor_model->hog_descriptor[i].y;
    }
  }
  if (width>max_x) c_matrix->width = width-max_x;
  else c_matrix->width = 0;
  if (height>max_y) c_matrix->height = height-max_y;
  else c_matrix->height = 0;
  unsigned int c_matrix_width = c_matrix->width;
  unsigned int c_matrix_height = c_matrix->height;
  c_matrix->element =
    (double *)hog_malloc(c_matrix_width*c_matrix_height*sizeof(double));
  for (y = 0; y<c_matrix_height; y++) {
    for (x = 0; x<c_matrix_width; x++) {
      c_matrix->element[y*c_matrix_width+x] = 0.0;
    }
  }
  for (i = 0; i<number_of_hog_descriptors; i++) {
    struct hog_descriptor hog_descriptor =
      hog_descriptor_model->hog_descriptor[i];
    if (hog_descriptor_model->hog_descriptor[i].number_of_orientations!=
	number_of_orientations) {
      hog_error("mismatched number_of_orientations");
    }
    for (y = 0; y<c_matrix_height; y++) {
      for (x = 0; x<c_matrix_width; x++) {
	for (index = 0; index<number_of_orientations*4; index++) {
	  double diff =
	    hog_descriptor.gradients[index]-
	    hog_image->gradients
	    [(y+hog_descriptor.y)*width*number_of_orientations*4+
	     (x+hog_descriptor.x)*number_of_orientations*4+
	     index];
	  c_matrix->element[y*c_matrix_width+x] -= diff*diff;
	}
      }
    }
  }
  for (y = 0; y<c_matrix_height; y++) {
    for (x = 0; x<c_matrix_width; x++) {
      c_matrix->element[y*c_matrix_width+x] /= number_of_hog_descriptors;
    }
  }
  return c_matrix;
}

unsigned int c_matrix_width(struct c_matrix *c_matrix) {
  return c_matrix->width;
}

unsigned int c_matrix_height(struct c_matrix *c_matrix) {
  return c_matrix->height;
}

double c_matrix_ref(struct c_matrix *c_matrix,
		    unsigned int x, unsigned int y) {
  if (x>=c_matrix->width||y>=c_matrix->height) {
    hog_error("index out of bounds");
  }
  return c_matrix->element[y*c_matrix->width+x];
}

void c_matrix_set(struct c_matrix *c_matrix,
		  unsigned int x, unsigned int y, double score) {
  if (x>=c_matrix->width||y>=c_matrix->height) {
    hog_error("index out of bounds");
  }
  c_matrix->element[y*c_matrix->width+x] = score;
}

struct c_hog_detection *c_hog_detections
(struct c_matrix *c_matrix, unsigned int k) {
  struct c_hog_detection *c_hog_detections =
    (struct c_hog_detection *)hog_malloc(k*sizeof(struct c_hog_detection));
  unsigned i, j, x, y;
  for (i = 0; i<k; i++) c_hog_detections[i].score = -INFINITY;
  for (y = 0; y<c_matrix->height; y++) {
    for (x = 0; x<c_matrix->width; x++) {
      for (i = 0; i<k; i++) {
	if (c_matrix->element[y*c_matrix->width+x]>
	    c_hog_detections[i].score) {
	  for (j = k-1; j>i; j--) {
	    c_hog_detections[j].x = c_hog_detections[j-1].x;
	    c_hog_detections[j].y = c_hog_detections[j-1].y;
	    c_hog_detections[j].score = c_hog_detections[j-1].score;
	  }
	  c_hog_detections[i].x = x;
	  c_hog_detections[i].y = y;
	  c_hog_detections[i].score = c_matrix->element[y*c_matrix->width+x];
	  break;
	}
      }
    }
  }
  return c_hog_detections;
}

struct c_hog_detection *c_ROI_hog_detections
(struct c_matrix *c_matrix, unsigned int k,
 unsigned int x1, unsigned int y1, unsigned int number_of_adjacent_hog_pixels) {
  struct c_hog_detection *c_hog_detections =
    (struct c_hog_detection *)hog_malloc(k*sizeof(struct c_hog_detection));
  unsigned i, j, x, y;
  unsigned int xl =
    x1<number_of_adjacent_hog_pixels?0:x1-number_of_adjacent_hog_pixels;
  unsigned int xh =
    x1+number_of_adjacent_hog_pixels>c_matrix->width-1?
    c_matrix->width-1:
    x1+number_of_adjacent_hog_pixels;
  unsigned int yl =
    y1<number_of_adjacent_hog_pixels?0:y1-number_of_adjacent_hog_pixels;
  unsigned int yh =
    y1+number_of_adjacent_hog_pixels>c_matrix->height-1?
    c_matrix->height-1:
    y1+number_of_adjacent_hog_pixels;
  for (i = 0; i<k; i++) c_hog_detections[i].score = -INFINITY;
  for (y = yl; y<=yh; y++) {
    for (x = xl; x<=xh; x++) {
      for (i = 0; i<k; i++) {
	if (c_matrix->element[y*c_matrix->width+x]>
	    c_hog_detections[i].score) {
	  for (j = k-1; j>i; j--) {
	    c_hog_detections[j].x = c_hog_detections[j-1].x;
	    c_hog_detections[j].y = c_hog_detections[j-1].y;
	    c_hog_detections[j].score = c_hog_detections[j-1].score;
	  }
	  c_hog_detections[i].x = x;
	  c_hog_detections[i].y = y;
	  c_hog_detections[i].score = c_matrix->element[y*c_matrix->width+x];
	  break;
	}
      }
    }
  }
  return c_hog_detections;
}

/* Can't include idealib-c.h because it is broken. */
double *euclidean_1d_dt_vals(double *f, unsigned n);

void c_matrix_dt(struct c_matrix *c_matrix) {
  unsigned int width = c_matrix->width;
  unsigned int height = c_matrix->height;
  unsigned int x, y;
  double *t, m[width*height];
  /* This computes the row-wise 1D DT of c_matrix[height*width] and puts the
     transposed result into m[width*height]. */
  for (y = 0; y<height; y++) {
    t = euclidean_1d_dt_vals(&c_matrix->element[y*width], width);
    for (x = 0; x<width; x++) {
      m[x*height+y] = t[x];
    }
    free(t);
  }
  /* This computes the row-wise 1D DT of m[width*height] and puts the
     transposed result into c_matrix[height*width]. */
  for (x = 0; x<width; x++) {
    t = euclidean_1d_dt_vals(&m[x*height], height);
    for (y = 0; y<height; y++) {
      c_matrix->element[y*width+x] = sqrt(t[y]);
    }
    free(t);
  }
}

void free_c_matrix(struct c_matrix *c_matrix) {
  free(c_matrix->element);
  free(c_matrix);
}

struct c_oriented_points
*allocate_c_oriented_points(unsigned int number_of_points) {
  struct c_oriented_points *c_oriented_points =
    (struct c_oriented_points *)hog_malloc(sizeof(struct c_oriented_points));
  c_oriented_points->number_of_points = number_of_points;
  c_oriented_points->x = (int *)hog_malloc(number_of_points*sizeof(int));
  c_oriented_points->y = (int *)hog_malloc(number_of_points*sizeof(int));
  c_oriented_points->orientation =
    (double *)hog_malloc(number_of_points*sizeof(double));
  return c_oriented_points;
}

void c_oriented_points_set(struct c_oriented_points *c_oriented_points,
			   unsigned int i, int x, int y, double orientation) {
  c_oriented_points->x[i] = x;
  c_oriented_points->y[i] = y;
  c_oriented_points->orientation[i] = orientation;
}

int best_x, best_y;
double best_score;

void qmodel_search_v1(struct c_oriented_points *boundary,
		      struct c_matrix *dt,
		      int x_low,
		      int x_high,
		      int x_increment,
		      int y_low,
		      int y_high,
		      int y_increment,
		      double boundary_dt_threshold) {
  int yi, xi, y, x;
  unsigned int i, width = dt->width, height = dt->height;
  unsigned int boundary_number_of_points = boundary->number_of_points;
  unsigned int count;
  double score;
  best_score = -INFINITY;
  for (y = y_low; y<=y_high; y += y_increment) {
    for (x = x_low; x<=x_high; x += x_increment) {
      count = 0;
      for (i = 0; i<boundary_number_of_points; i++) {
	yi = y+boundary->y[i];
	xi = x+boundary->x[i];
	if (yi>=0&&
	    yi<height&&
	    xi>=0&&
	    xi<width&&
	    dt->element[yi*width+xi]<=boundary_dt_threshold)
	  count++;
      }
      score = ((double)count)/boundary_number_of_points;
      if (score>best_score) {
	best_x = x;
	best_y = y;
	best_score = score;
      }
    }
  }
}

void qmodel_search_v2(struct c_oriented_points *boundary,
		      struct c_matrix *dt,
		      int x_low,
		      int x_high,
		      int x_increment,
		      int y_low,
		      int y_high,
		      int y_increment,
		      double boundary_dt_threshold,
		      double alpha) {
  int yi, xi, y, x;
  unsigned int i, width = dt->width, height = dt->height;
  unsigned int boundary_number_of_points = boundary->number_of_points;
  unsigned int count, gap_length, longest_gap_length;
  double score;
  best_score = -INFINITY;
  for (y = y_low; y<=y_high; y += y_increment) {
    for (x = x_low; x<=x_high; x += x_increment) {
      count = 0;
      gap_length = 0;
      longest_gap_length = 0;
      for (i = 0; i<boundary_number_of_points; i++) {
	yi = y+boundary->y[i];
	xi = x+boundary->x[i];
	if (yi>=0&&
	    yi<height&&
	    xi>=0&&
	    xi<width&&
	    dt->element[yi*width+xi]<=boundary_dt_threshold) {
	  count++;
	  if (gap_length>longest_gap_length) longest_gap_length = gap_length;
	  gap_length = 0;
	}
	else gap_length++;
      }
      /* Go around a second time to catch gaps that cross the beginning.
	 But don't increment count. */
      for (i = 0; i<boundary_number_of_points; i++) {
	yi = y+boundary->y[i];
	xi = x+boundary->x[i];
	if (yi>=0&&
	    yi<height&&
	    xi>=0&&
	    xi<width&&
	    dt->element[yi*width+xi]<=boundary_dt_threshold) {
	  if (gap_length>longest_gap_length) longest_gap_length = gap_length;
	  /* Don't need a full second pass after gap that crosses the beginning
	     ends. */
	  goto l;
	}
	else gap_length++;
      }
    l:
      score =
	alpha*(((double)count)/boundary_number_of_points)+
	(1.0-alpha)*
	(((double)(boundary_number_of_points-longest_gap_length))/
	 boundary_number_of_points);
      if (score>best_score) {
	best_x = x;
	best_y = y;
	best_score = score;
      }
    }
  }
}

void qmodel_search_v3(struct c_oriented_points *boundary,
		      struct c_matrix *dt,
		      struct c_matrix *orientation,
		      int x_low,
		      int x_high,
		      int x_increment,
		      int y_low,
		      int y_high,
		      int y_increment,
		      double boundary_dt_threshold,
		      double orientation_threshold) {
  int yi, xi, y, x;
  unsigned int i, width = dt->width, height = dt->height;
  unsigned int boundary_number_of_points = boundary->number_of_points;
  unsigned int count;
  double score;
  if (width!=orientation->width || height!=orientation->height)
    hog_error("mismatched dimensions");
  best_score = -INFINITY;
  for (y = y_low; y<=y_high; y += y_increment) {
    for (x = x_low; x<=x_high; x += x_increment) {
      count = 0;
      for (i = 0; i<boundary_number_of_points; i++) {
	yi = y+boundary->y[i];
	xi = x+boundary->x[i];
	if (yi>=0&&
	    yi<height&&
	    xi>=0&&
	    xi<width&&
	    dt->element[yi*width+xi]<=boundary_dt_threshold&&
	    orientation_separation(orientation->element[yi*width+xi],
				   boundary->orientation[i])<
	    orientation_threshold)
	  count++;
      }
      score = ((double)count)/boundary_number_of_points;
      if (score>best_score) {
	best_x = x;
	best_y = y;
	best_score = score;
      }
    }
  }
}

void qmodel_search_v4(struct c_oriented_points *boundary,
		      struct c_matrix *dt,
		      struct c_matrix *orientation,
		      int x_low,
		      int x_high,
		      int x_increment,
		      int y_low,
		      int y_high,
		      int y_increment,
		      double boundary_dt_threshold) {
  int yi, xi, y, x;
  unsigned int i, width = dt->width, height = dt->height;
  unsigned int boundary_number_of_points = boundary->number_of_points;
  unsigned int count, number_of_internal_points;
  double score, orientation_cost, orientation_cost1;
  best_score = -INFINITY;
  if (width!=orientation->width || height!=orientation->height)
    hog_error("mismatched dimensions");
  for (y = y_low; y<=y_high; y += y_increment) {
    for (x = x_low; x<=x_high; x += x_increment) {
      number_of_internal_points = 0;
      count = 0;
      orientation_cost = 0.0;
      for (i = 0; i<boundary_number_of_points; i++) {
	yi = y+boundary->y[i];
	xi = x+boundary->x[i];
	if (yi>=0&&
	    yi<height&&
	    xi>=0&&
	    xi<width) {
	  number_of_internal_points++;
	  if (dt->element[yi*width+xi]<=boundary_dt_threshold) {
	    count++;
	    orientation_cost1 =
	      orientation_separation(orientation->element[yi*width+xi],
				     boundary->orientation[i]);
	    orientation_cost += orientation_cost1*orientation_cost1;
	  }
	}
      }
      /* needs work: This doesn't include orientation_cost. */
      score = ((double)count)/boundary_number_of_points;
      if (score>best_score) {
	best_x = x;
	best_y = y;
	best_score = score;
      }
    }
  }
}

void qmodel_search_v5(struct c_oriented_points *boundary,
		      struct c_oriented_points *interior,
		      struct c_matrix *dt,
		      int x_low,
		      int x_high,
		      int x_increment,
		      int y_low,
		      int y_high,
		      int y_increment,
		      double boundary_dt_threshold,
		      double interior_dt_threshold,
		      double alpha) {
  int yi, xi, y, x;
  unsigned int i, width = dt->width, height = dt->height;
  unsigned int boundary_number_of_points = boundary->number_of_points;
  unsigned int interior_number_of_points = interior->number_of_points;
  unsigned int boundary_count;
  unsigned int interior_count;
  double score;
  best_score = -INFINITY;
  for (y = y_low; y<=y_high; y += y_increment) {
    for (x = x_low; x<=x_high; x += x_increment) {
      boundary_count = 0;
      for (i = 0; i<boundary_number_of_points; i++) {
	yi = y+boundary->y[i];
	xi = x+boundary->x[i];
	if (yi>=0&&
	    yi<height&&
	    xi>=0&&
	    xi<width&&
	    dt->element[yi*width+xi]<=boundary_dt_threshold)
	  boundary_count++;
      }
      interior_count = 0;
      for (i = 0; i<interior_number_of_points; i++) {
	yi = y+interior->y[i];
	xi = x+interior->x[i];
	if (yi>=0&&
	    yi<height&&
	    xi>=0&&
	    xi<width&&
	    dt->element[yi*width+xi]>interior_dt_threshold)
	  interior_count++;
      }
      score =
	alpha*((double)boundary_count)/boundary_number_of_points+
	(1.0-alpha)*((double)interior_count)/interior_number_of_points;
      if (score>best_score) {
	best_x = x;
	best_y = y;
	best_score = score;
      }
    }
  }
}

void qmodel_search_v6(struct c_oriented_points *boundary,
		      struct c_matrix *dt,
		      int x_low,
		      int x_high,
		      int x_increment,
		      int y_low,
		      int y_high,
		      int y_increment) {
  int yi, xi, y, x;
  unsigned int i, width = dt->width, height = dt->height;
  unsigned int boundary_number_of_points = boundary->number_of_points;
  double sum, score;
  best_score = -INFINITY;
  for (y = y_low; y<=y_high; y += y_increment) {
    for (x = x_low; x<=x_high; x += x_increment) {
      sum = 0.0;
      for (i = 0; i<boundary_number_of_points; i++) {
	yi = y+boundary->y[i];
	xi = x+boundary->x[i];
	if (yi>=0&&
	    yi<height&&
	    xi>=0&&
	    xi<width)
	  sum -= dt->element[yi*width+xi];
	else sum = -INFINITY;
      }
      score = sum/boundary_number_of_points;
      if (score>best_score) {
	best_x = x;
	best_y = y;
	best_score = score;
      }
    }
  }
}

int qmodel_search_x(void) {
  return best_x;
}

int qmodel_search_y(void) {
  return best_y;
}

double qmodel_search_score(void) {
  return best_score;
}

void free_c_oriented_points(struct c_oriented_points *c_oriented_points) {
  free(c_oriented_points->x);
  free(c_oriented_points->y);
  free(c_oriented_points->orientation);
  free(c_oriented_points);
}

/*******************************************************************************
 * Piotr's Image&Video Toolbox      Version 2.62
 * Copyright 2011 Piotr Dollar.  [pdollar-at-caltech.edu]
 * Please email me if you find bugs, or have suggestions or questions!
 * Licensed under the Lesser GPL [see external/lgpl.txt]
 ******************************************************************************/

double mind(double x, double y) { return (x <= y ? x : y); }

/* build lookup table a[] s.t. a[(dx+1.1)/2.2*(n-1)]~=acos(dx) */
float* acosTable() {
  int i, n=25000; float t, ni;
  static float a[25000]; static char init=0;
  if( init ) return a; ni = 2.2f/(float) n;
  for( i=0; i<n; i++ ) {
    t = (i+1)*ni - 1.1f;
    t = t<-1 ? -1 : (t>1 ? 1 : t);
    a[i] = (float) acos( t );
  }
  init=1; return a;
}

/* compute gradient magnitude and orientation at each location */
void gradMag(double *I, double *M, float *O, int h, int w, int d ) {
  int x, y, c, a=w*h; double m, m1, dx, dx1, dy, dy1, rx, ry;
  double *Ix, *Ix0, *Ix1, *Iy0, *Iy1, *M0; float o, *O0;
  float *acost = acosTable(), acMult=(25000-1)/2.2f;
  for( x=0; x<w; x++ ) {
    rx=.5; M0=M+x*h; O0=O+x*h; Ix=I+x*h; Ix0=Ix-h; Ix1=Ix+h;
    if(x==0) { Ix0=Ix; rx=1; } else if(x==w-1) { Ix1=Ix; rx=1; }
    for( y=0; y<h; y++ ) {
      if(y==0) {   Iy0=Ix-0; Iy1=Ix+1; ry=1; }
      if(y==1) {   Iy0=Ix-1; Iy1=Ix+1; ry=.5; }
      if(y==h-1) { Iy0=Ix-1; Iy1=Ix+0; ry=1; }
      dy=(*Iy1-*Iy0)*ry; dx=(*Ix1-*Ix0)*rx; m=dx*dx+dy*dy;
      for(c=1; c<d; c++) {
        dy1=(*(Iy1+c*a)-*(Iy0+c*a))*ry; dx1=(*(Ix1+c*a)-*(Ix0+c*a))*rx;
        m1=dx1*dx1+dy1*dy1; if(m1>m) { m=m1; dx=dx1; dy=dy1; }
      }
      if( m==0 ) { o=0; } else {
        m=sqrt(m); /* o=acos(dx/m); */
        o = acost[(int)((dx/m+1.1f)*acMult)];
        if( o>M_PI-1e-5 ) o=0; else if( dy<0 ) o=(float)M_PI-o;
      }
      *(M0++) = m; *(O0++) = o;
      Ix0++; Ix1++; Iy0++; Iy1++; Ix++;
    }
  }
}

/* compute oBin gradient histograms per sBin x sBin block of pixels */
void gradHist( double *M, float *O, double *H, int h, int w, int d,
	       int sBin, int oBin, char sSoft, char oSoft )
{
  const int hb=h/sBin, wb=w/sBin, h0=hb*sBin, w0=wb*sBin, nb=wb*hb;
  const double s=sBin, sInv=1/s, sInv2=1/s/s, oMult=(double)oBin/M_PI;
  double *H0; int x, y, xy, o0, o1, xb0, yb0, oBin1=oBin*nb;
  double od0, od1, o, m, m0, m1, xb, yb, xd0, xd1, yd0, yd1;
  if( !sSoft || sBin==1 ) { for( x=0; x<w0; x++ ) for( y=0; y<h0; y++ ) {
	/* interpolate w.r.t. orientation only, not spatial bin */
	xy=x*h+y; m=M[xy]*sInv2; o=O[xy]*oMult; o0=(int) o;
	m1=(o-o0)*m; m0=m-m1; o0*=nb; o1=o0+nb; if(o1==oBin1) o1=0;
	H0=H+(x/sBin)*hb+y/sBin; H0[o0]+=m0; H0[o1]+=m1;
      } return; }
  for( x=0; x<w0; x++ ) for( y=0; y<h0; y++ ) {
      /* get interpolation coefficients */
      xy=x*h+y; m=M[xy]*sInv2; o=O[xy]*oMult; o0=(int) o;
      xb=(((double) x)+.5)*sInv-0.5; xb0=(xb<0) ? -1 : (int) xb;
      yb=(((double) y)+.5)*sInv-0.5; yb0=(yb<0) ? -1 : (int) yb;
      xd0=xb-xb0; xd1=1.0-xd0; yd0=yb-yb0; yd1=1.0-yd0; H0=H+xb0*hb+yb0;
      /* interpolate using bilinear or trilinear interpolation */
      if( !oSoft || oBin==1 ) {
	o0*=nb;
	if( xb0>=0 && yb0>=0     ) *(H0+o0)      += xd1*yd1*m;
	if( xb0+1<wb && yb0>=0   ) *(H0+hb+o0)   += xd0*yd1*m;
	if( xb0>=0 && yb0+1<hb   ) *(H0+1+o0)    += xd1*yd0*m;
	if( xb0+1<wb && yb0+1<hb ) *(H0+hb+1+o0) += xd0*yd0*m;
      } else {
	od0=o-o0; od1=1.0-od0; o0*=nb; o1=o0+nb; if(o1==oBin1) o1=0;
	if( xb0>=0 && yb0>=0     ) *(H0+o0)      += od1*xd1*yd1*m;
	if( xb0+1<wb && yb0>=0   ) *(H0+hb+o0)   += od1*xd0*yd1*m;
	if( xb0>=0 && yb0+1<hb   ) *(H0+1+o0)    += od1*xd1*yd0*m;
	if( xb0+1<wb && yb0+1<hb ) *(H0+hb+1+o0) += od1*xd0*yd0*m;
	if( xb0>=0 && yb0>=0     ) *(H0+o1)      += od0*xd1*yd1*m;
	if( xb0+1<wb && yb0>=0   ) *(H0+hb+o1)   += od0*xd0*yd1*m;
	if( xb0>=0 && yb0+1<hb   ) *(H0+1+o1)    += od0*xd1*yd0*m;
	if( xb0+1<wb && yb0+1<hb ) *(H0+hb+1+o1) += od0*xd0*yd0*m;
      }
    }
}

/* compute HOG features given gradient histograms */
void computeHog( double *H, double *HG, int h, int w, int d, int sBin, int oBin ) {
  double *N, *N1, *H1, *HG1, n; int o, x, y, x1, y1, hb, wb, nb, hb1, wb1, nb1;
  double eps = 1e-4/4.0/sBin/sBin/sBin/sBin; /* precise backward equality */
  hb=h/sBin; wb=w/sBin; nb=wb*hb; hb1=hb-2; wb1=wb-2; nb1=hb1*wb1;
  if(hb1<=0 || wb1<=0) return; N = (double*) calloc(nb,sizeof(double));
  for(o=0; o<oBin; o++) for(x=0; x<nb; x++) N[x]+=H[x+o*nb]*H[x+o*nb];
  for( x=0; x<wb1; x++ ) for( y=0; y<hb1; y++ ) {
      HG1 = HG + x*hb1 + y; /* perform 4 normalizations per spatial block */
      for(x1=1; x1>=0; x1--) for(y1=1; y1>=0; y1--) {
	  N1 = N + (x+x1)*hb + (y+y1);  H1 = H + (x+1)*hb + (y+1);
	  n = 1.0/sqrt(*N1 + *(N1+1) + *(N1+hb) + *(N1+hb+1) + eps);
	  for(o=0; o<oBin; o++) { *HG1=mind(*H1*n, 0.2); HG1+=nb1; H1+=nb; }
	}
    } free(N);
}

/* H = hog( I, [sBin], [oBin] ) - see hog.m */
// image uint8_t[h*w*d]
// sBin spatial bins         - 8
// oBin orientation bins     - 9
// [m/sBin-2 n/sBin-2 oBin*4]
double *hog( unsigned char *image, int h, int w, int d, int sBin, int oBin) {
  int hb, wb, nb, hb1, wb1;
  double *M, *H, *HG; float *O;
  double *I = hog_malloc(sizeof(double)*w*h*d);

  /* Note that w and h are flipped here, this is because this code was
     written for matlab, which stores its matrices in column-major
     order, unlike the rest of the world. */
  for(int y = 0; y < w; ++y)
    for(int x = 0; x < h; ++x) {
      for(int z = 0; z < d; ++z) {
        I[y*h + x + h*w*z] = image[(y + x*w)*d + z];
      }
    }

  hb=h/sBin; wb=w/sBin; nb=wb*hb; hb1=hb>2?hb-2:0; wb1=wb>2?wb-2:0;
  HG = hog_malloc(sizeof(double)*hb1*wb1*oBin*4);
  bzero(HG,sizeof(double)*hb1*wb1*oBin*4);
  if( hb1==0 || wb1==0 ) return NULL;
  M = (double*) hog_malloc(h*w*sizeof(double));
  bzero(M,h*w*sizeof(double));
  O = (float*) hog_malloc(h*w*sizeof(float));
  bzero(O,h*w*sizeof(float));
  H = (double*) hog_malloc(nb*oBin*sizeof(double));
  bzero(H,nb*oBin*sizeof(double));
  gradMag( I, M, O, h, w, d );
  gradHist( M, O, H, h, w, d, sBin, oBin, 1, 1 );
  computeHog( H, HG, h, w, d, sBin, oBin );
  /* Transpose the result */
  double *HGR = hog_malloc(sizeof(double)*hb1*wb1*oBin*4);
  for(int y = 0; y < hb1; ++y)
    for(int x = 0; x < wb1; ++x)
      for(int j = 0; j < oBin*4; ++j)
        HGR[y*wb1*oBin*4+x*oBin*4+j] = HG[y+x*hb1+j*wb1*hb1];
  free(I); free(M); free(O); free(H); free(HG);
  return HGR;
}
