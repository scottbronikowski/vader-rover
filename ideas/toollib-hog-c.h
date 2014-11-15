#define TH1 1000.0

struct hog_image {
  unsigned int width, height, number_of_orientations;
  double *gradients;
};

struct hog_descriptor {
  unsigned int x, y, number_of_orientations;
  double *gradients;
};

struct hog_descriptor_model {
  unsigned int number_of_hog_descriptors;
  struct hog_descriptor *hog_descriptor;
};

struct c_matrix {
  unsigned int width, height;
  double *element;
};

struct c_hog_detection {
  unsigned int x, y;
  double score;
};

struct c_oriented_points {
  unsigned int number_of_points;
  int *x, *y;
  double *orientation;
};

void *hog_malloc(size_t size);

double normalize_orientation(double orientation);

double orientation_plus(double x, double y);

double orientation_minus(double x, double y);

double orientation_separation(double x, double y);

void normalize_hog_image(struct hog_image *hog_image);

double hog_image_ref(struct hog_image *hog_image,
		     unsigned int x, unsigned int y, unsigned int index);

struct hog_descriptor_model *allocate_hog_descriptor_model
(unsigned int number_of_hog_descriptors,
 unsigned int number_of_orientations);

void free_hog_descriptor_model
(struct hog_descriptor_model *hog_descriptor_model);

void set_hog_descriptor_model_x
(struct hog_descriptor_model *hog_descriptor_model,
 unsigned int i,
 unsigned int x);

void set_hog_descriptor_model_y
(struct hog_descriptor_model *hog_descriptor_model,
 unsigned int i,
 unsigned int y);

void set_hog_descriptor_model_gradient
(struct hog_descriptor_model *hog_descriptor_model,
 unsigned int i,
 unsigned int index,
 double gradient);

double hog_dot
(struct hog_descriptor_model *hog_descriptor_model,
 struct hog_image *hog_image,
 unsigned int x,
 unsigned int y);

double hog_norm
(struct hog_descriptor_model *hog_descriptor_model,
 struct hog_image *hog_image,
 unsigned int x,
 unsigned int y);

struct c_matrix *allocate_c_matrix(unsigned int width, unsigned int height);

struct c_matrix *hog_convolve_dot
(struct hog_descriptor_model *hog_descriptor_model,
 struct hog_image *hog_image);

struct c_matrix *hog_convolve_norm
(struct hog_descriptor_model *hog_descriptor_model,
 struct hog_image *hog_image);

unsigned int c_matrix_width(struct c_matrix *c_matrix);

unsigned int c_matrix_height(struct c_matrix *c_matrix);

double c_matrix_ref(struct c_matrix *c_matrix,
		    unsigned int x, unsigned int y);

void c_matrix_set(struct c_matrix *c_matrix,
		  unsigned int x, unsigned int y, double score);

struct c_hog_detection *c_hog_detections
(struct c_matrix *c_matrix, unsigned int k);

struct c_hog_detection *c_ROI_hog_detections
(struct c_matrix *c_matrix, unsigned int k,
 unsigned int x1, unsigned int y1, unsigned int number_of_adjacent_hog_pixels);

void c_matrix_dt(struct c_matrix *c_matrix);

void free_c_matrix(struct c_matrix *c_matrix);

struct c_oriented_points
*allocate_c_oriented_points(unsigned int number_of_points);

void c_oriented_points_set(struct c_oriented_points *c_oriented_points,
			   unsigned int i, int x, int y, double orientation);

void qmodel_search_v1(struct c_oriented_points *boundary,
		      struct c_matrix *dt,
		      int x_low,
		      int x_high,
		      int x_increment,
		      int y_low,
		      int y_high,
		      int y_increment,
		      double boundary_dt_threshold);

void qmodel_search_b2(struct c_oriented_points *boundary,
		      struct c_matrix *dt,
		      int x_low,
		      int x_high,
		      int x_increment,
		      int y_low,
		      int y_high,
		      int y_increment,
		      double boundary_dt_threshold,
		      double alpha);

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
		      double orientation_threshold);

void qmodel_search_v4(struct c_oriented_points *boundary,
		      struct c_matrix *dt,
		      struct c_matrix *orientation,
		      int x_low,
		      int x_high,
		      int x_increment,
		      int y_low,
		      int y_high,
		      int y_increment,
		      double boundary_dt_threshold);

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
		      double alpha);

void qmodel_search_v6(struct c_oriented_points *boundary,
		      struct c_matrix *dt,
		      int x_low,
		      int x_high,
		      int x_increment,
		      int y_low,
		      int y_high,
		      int y_increment);

int qmodel_search_x(void);

int qmodel_search_y(void);

double qmodel_search_score(void);

void free_c_oriented_points(struct c_oriented_points *c_oriented_points);

double mind(double x, double y);

float* acosTable(void);

void gradMag(double *I, double *M, float *O, int h, int w, int d );

void gradHist( double *M, float *O, double *H, int h, int w, int d,
	       int sBin, int oBin, char sSoft, char oSoft );

void computeHog
( double *H, double *HG, int h, int w, int d, int sBin, int oBin );

double *hog( unsigned char *image, int h, int w, int d, int sBin, int oBin);
