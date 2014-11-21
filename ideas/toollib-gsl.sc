(MODULE TOOLLIB-GSL)

;;; GSL (GNU Scientific Libraries) interface

;;; Example of using toollib-gsl.sc in order to generate SVD
;;; (define (gsl-svd a)
;;;  (let* ((u (gsl-copy-matrix a))
;;; 	    (v (gsl-matrix-alloc (gsl-matrix-size2 a)
;;; 	                 	 (gsl-matrix-size2 a)))
;;; 	    (s (gsl-vector-alloc (gsl-matrix-size2 a)))
;;;         (scratch (gsl-vector-alloc (gsl-matrix-size2 a))))
;;;   (gsl-svd-decomp! u v s scratch)
;;;   (gsl-vector-free scratch)
;;;   `(,u ,s ,v)))

(include "QobiScheme.sch")
(include "toollib-c-macros.sch")
(include "toollib-c-bindings.sch")
(include "toollib-c-externals.sch")

(c-include "gsl/gsl_matrix_double.h")
(c-include "gsl/gsl_math.h")
(c-include "gsl/gsl_eigen.h")
(c-include "gsl/gsl_linalg.h")
(c-include "gsl/gsl_rng.h")
(c-include "gsl/gsl_randist.h")
(c-include "gsl/gsl_cdf.h")
(c-include "idealib-c.h")

(define-structure gsl:rng handle)
(c-ffi:add-custom-type gsl:rng pointer make-gsl:rng gsl:rng-handle)
(define-structure gsl:rng-type handle)
(c-ffi:add-custom-type gsl:rng-type pointer make-gsl:rng-type gsl:rng-type-handle)

;;; Default RNG

(define *gsl-rng* #f)
(define (setup-default-gsl-rng!) 
 ;; Note that the default seed is 0
 (unless *gsl-rng*
  (gsl:rng-env-setup)
  (set! *gsl-rng* (gsl:rng-alloc gsl:rng-default))
  *gsl-rng*))

;;; Matrices

(c-define-field gsl-matrix size1 int (typedef-offset "gsl_matrix" "size1"))
(c-define-field gsl-matrix size2 int (typedef-offset "gsl_matrix" "size2"))
(c-define-field gsl-matrix data int  (typedef-offset "gsl_matrix" "data"))

(c-define-field gsl-vector size int (typedef-offset "gsl_vector" "size"))
(c-define-field gsl-vector data int (typedef-offset "gsl_vector" "data"))

(define gsl-matrix-alloc
 (c-function pointer ("gsl_matrix_alloc" int int)))
(define gsl-matrix-free
 (c-function void ("gsl_matrix_free" pointer)))

(define gsl-vector-alloc
 (c-function pointer ("gsl_vector_alloc" int)))
(define gsl-vector-free
 (c-function void ("gsl_vector_free" pointer)))

(define (scheme-vector->gsl! a)
 (let ((v (gsl-vector-alloc (vector-length a))))
  (list->c-inexact-array
   (gsl-vector-data v)
   (vector->list a)
   c-sizeof-double
   #t)
  v))

(define (scheme-matrix->gsl! m)
 (let ((matrix (gsl-matrix-alloc
		(matrix-rows m)
		(matrix-columns m))))
  (list->c-inexact-array
   (gsl-matrix-data matrix)
   (reduce
    append
    (map (lambda (x) (vector->list x)) (vector->list m))
    '())
   c-sizeof-double
   #t)
  matrix))

(define (gsl-vector->scheme v)
 (list->vector
  (c-inexact-array->list (gsl-vector-data v)
			 c-sizeof-double
			 (gsl-vector-size v)
			 #t)))

(define (gsl-matrix->scheme m)
 (let ((l (c-inexact-array->list (gsl-matrix-data m)
				 c-sizeof-double
				 (* (gsl-matrix-size1 m)
				    (gsl-matrix-size2 m))
				 #t)))
  (list->vector
   (map-n (lambda (i)
	   (list->vector (sublist l
				  (* i (gsl-matrix-size2 m))
				  (* (+ i 1) (gsl-matrix-size2 m)))))
	  (gsl-matrix-size1 m)))))

(define gsl-vector-fprintf
 (c-function int ("gsl_vector_fprintf" pointer pointer string)))
(define gsl-matrix-fprintf
 (c-function int ("gsl_matrix_fprintf" pointer pointer string)))

(define stdin  (c-value pointer "stdin"))
(define stdout (c-value pointer "stdout"))
(define stderr (c-value pointer "stderr"))

(define gsl-matrix-get
 (c-function double ("gsl_matrix_get" pointer int int)))
(define gsl-matrix-set
 (c-function void ("gsl_matrix_set" pointer int int double)))
(define gsl-matrix-transpose
 (c-function int ("gsl_matrix_transpose" pointer)))
(define gsl-matrix-swap-rows
 (c-function int ("gsl_matrix_swap_rows" pointer int int)))
(define gsl-matrix-swap-columns
 (c-function int ("gsl_matrix_swap_columns" pointer int int)))

(define gsl-matrix-get-row!
 (c-function int ("gsl_matrix_get_row" pointer pointer int)))
(define gsl-matrix-get-col!
 (c-function int ("gsl_matrix_get_col" pointer pointer int)))
(define gsl-matrix-set-row!
 (c-function int ("gsl_matrix_set_row" pointer int pointer)))
(define gsl-matrix-set-col!
 (c-function int ("gsl_matrix_set_col" pointer int pointer)))

(define (gsl-matrix-get-row a v i)
 (let ((m (gsl-copy-matrix a)))
  (gsl-matrix-get-row! m v i)
  m))
(define (gsl-matrix-get-col a v i)
 (let ((m (gsl-copy-matrix a)))
  (gsl-matrix-get-col! m v i)
  m))
(define (gsl-matrix-set-row a i v)
 (let ((m (gsl-copy-matrix a)))
  (gsl-matrix-set-row! m i v)
  m))
(define (gsl-matrix-set-col a i v)
 (let ((m (gsl-copy-matrix a)))
  (gsl-matrix-set-col! m i v)
  m))

(define gsl-vector-memcpy!
 (c-function int ("gsl_vector_memcpy" pointer pointer)))

(define gsl-matrix-memcpy!
 (c-function int ("gsl_matrix_memcpy" pointer pointer)))

(define (gsl-copy-vector v)
 (let ((new-v (gsl-vector-alloc (gsl-vector-size v))))
  (gsl-vector-memcpy! new-v v)
  new-v))

(define (gsl-copy-matrix m)
 (let ((new-m (gsl-matrix-alloc (gsl-matrix-size1 m)
				(gsl-matrix-size2 m))))
  (gsl-matrix-memcpy! new-m m)
  new-m))

(define gsl-vector-add!
 (c-function int ("gsl_vector_add" pointer pointer)))
(define gsl-vector-sub!
 (c-function int ("gsl_vector_sub" pointer pointer)))
(define gsl-vector-mul!
 (c-function int ("gsl_vector_mul" pointer pointer)))
(define gsl-vector-div!
 (c-function int ("gsl_vector_div" pointer pointer)))
(define gsl-vector-scale!
 (c-function int ("gsl_vector_scale" pointer double)))
(define gsl-vector-add-constant!
 (c-function int ("gsl_vector_add_constant" pointer double)))

(define (gsl-v+ a b)
 (gsl-vector-add! (gsl-copy-vector a) b))
(define (gsl-v- a b)
 (gsl-vector-sub! (gsl-copy-vector a) b))
(define (gsl-v* a b)
 (gsl-vector-mul! (gsl-copy-vector a) b))
(define (gsl-v/ a b)
 (gsl-vector-div! (gsl-copy-vector a) b))
(define (gsl-k*v a b)
 (gsl-vector-scale! (gsl-copy-vector a) b))
(define (gsl-k+v a b)
 (gsl-vector-add-constant! (gsl-copy-vector a) b))

(define gsl-matrix-add!
 (c-function int ("gsl_matrix_add" pointer pointer)))
(define gsl-matrix-sub!
 (c-function int ("gsl_matrix_sub" pointer pointer)))
(define gsl-matrix-mul-elements!
 (c-function int ("gsl_matrix_mul_elements" pointer pointer)))
(define gsl-matrix-div-elements!
 (c-function int ("gsl_matrix_div_elements" pointer pointer)))
(define gsl-matrix-scale!
 (c-function int ("gsl_matrix_scale" pointer double)))
(define gsl-matrix-add-constant!
 (c-function int ("gsl_matrix_add_constant" pointer double)))

(define (gsl-m+ a b)
 (gsl-matrix-add! (gsl-copy-matrix a) b))
(define (gsl-m- a b)
 (gsl-matrix-sub! (gsl-copy-matrix a) b))
(define (gsl-k+m k m)
 (gsl-matrix-add-constant! (gsl-copy-matrix m) k))
(define (gsl-k*m k m)
 (gsl-matrix-scale! (gsl-copy-matrix m) k))
(define (gsl-m*-elements a b)
 (gsl-matrix-mul-elements! (gsl-copy-matrix a) b))
(define (gsl-m/-elements a b)
 (gsl-matrix-div-elements! (gsl-copy-matrix a) b))

(define gsl-matrix-all!
 (c-function void ("gsl_matrix_set_all" pointer double)))
(define gsl-matrix-zero!
 (c-function void ("gsl_matrix_set_zero" pointer)))
(define gsl-matrix-identity!
 (c-function void ("gsl_matrix_set_identity" pointer)))
(define gsl-matrix-null?
 (c-function int ("gsl_matrix_isnull" pointer)))
(define gsl-matrix-positive?
 (c-function int ("gsl_matrix_ispos" pointer)))
(define gsl-matrix-negative?
 (c-function int ("gsl_matrix_isneg" pointer)))
(define gsl-matrix-non-negative?
 (c-function int ("gsl_matrix_isnonneg" pointer)))

(define gsl-vector-null?
 (c-function int ("gsl_vector_isnull" pointer)))
(define gsl-vector-positive?
 (c-function int ("gsl_vector_ispos" pointer)))
(define gsl-vector-negative?
 (c-function int ("gsl_vector_isneg" pointer)))
(define gsl-vector-non-negative?
 (c-function int ("gsl_vector_isnonneg" pointer)))

(define gsl-svd-decomp!
 (c-function int ("gsl_linalg_SV_decomp" pointer pointer pointer pointer)))
;;		  (gsl_matrix * A, gsl_matrix * V, gsl_vector * S, gsl_vector * work)
(define (gsl-svd a)
 (let* ((u (gsl-copy-matrix a))
	(v (gsl-matrix-alloc (gsl-matrix-size2 a)
			     (gsl-matrix-size2 a)))
	(s (gsl-vector-alloc (gsl-matrix-size2 a)))
	(scratch (gsl-vector-alloc (gsl-matrix-size2 a))))
  (gsl-svd-decomp! u v s scratch)
  (gsl-vector-free scratch)
  `(,u ,s ,v)))

(define gsl-eigen-symmv-workspace
 (c-function pointer ("gsl_eigen_symmv_alloc" int)))
(define gsl-eigen-symmv-free
 (c-function void ("gsl_eigen_symmv_free" pointer)))
(define gsl-eigen-symmv!
 (c-function int ("gsl_eigen_symmv" pointer pointer pointer pointer)))
(define gsl-eigen-symmv-sort!
 (c-function int ("gsl_eigen_symmv_sort" pointer pointer int)))

(define gsl-eigen-sort-val-asc
 (c-value int "GSL_EIGEN_SORT_VAL_ASC"))
(define gsl-eigen-sort-val-desc
 (c-value int "GSL_EIGEN_SORT_VAL_DESC"))

(define (gsl-eigen-symm a)
 (let* ((m (gsl-copy-matrix a))
	(eval (gsl-vector-alloc (gsl-matrix-size2 m)))
	(evec (gsl-matrix-alloc (gsl-matrix-size1 m)
				(gsl-matrix-size2 m)))
	(scratch (gsl-eigen-symmv-workspace
		  (gsl-matrix-size2 m))))
  (gsl-eigen-symmv! m eval evec scratch)
  (gsl-eigen-symmv-sort! eval evec gsl-eigen-sort-val-asc)
  (gsl-eigen-symmv-free scratch)
  (gsl-matrix-free m)
  `(,eval ,evec)))

;;; Distributions, sampling and pdfs

(define gsl:ran-bernoulli (c-function unsigned ("gsl_ran_bernoulli" gsl:rng double)))
(define gsl:ran-bernoulli-pdf (c-function double ("gsl_ran_bernoulli_pdf" unsigned double)))

(define gsl:ran-beta (c-function double ("gsl_ran_beta" gsl:rng double double)))
(define gsl:ran-beta-pdf (c-function double ("gsl_ran_beta_pdf" double double double)))

(define gsl:ran-binomial (c-function unsigned ("gsl_ran_binomial" gsl:rng double unsigned)))
(define gsl:ran-binomial-knuth (c-function unsigned ("gsl_ran_binomial_knuth" gsl:rng double unsigned)))
(define gsl:ran-binomial-tpe (c-function unsigned ("gsl_ran_binomial_tpe" gsl:rng double unsigned)))
(define gsl:ran-binomial-pdf (c-function double ("gsl_ran_binomial_pdf" unsigned double unsigned)))

(define gsl:ran-exponential (c-function double ("gsl_ran_exponential" gsl:rng double)))
(define gsl:ran-exponential-pdf (c-function double ("gsl_ran_exponential_pdf" double double)))

(define gsl:ran-exppow (c-function double ("gsl_ran_exppow" gsl:rng double double)))
(define gsl:ran-exppow-pdf (c-function double ("gsl_ran_exppow_pdf" double double double)))

(define gsl:ran-cauchy (c-function double ("gsl_ran_cauchy" gsl:rng double)))
(define gsl:ran-cauchy-pdf (c-function double ("gsl_ran_cauchy_pdf" double double)))

(define gsl:ran-chisq (c-function double ("gsl_ran_chisq" gsl:rng double)))
(define gsl:ran-chisq-pdf (c-function double ("gsl_ran_chisq_pdf" double double)))

(define gsl:ran-dirichlet (c-function void ("gsl_ran_dirichlet" gsl:rng unsigned pointer pointer)))
(define gsl:ran-dirichlet-pdf (c-function double ("gsl_ran_dirichlet_pdf" unsigned pointer pointer)))
(define gsl:ran-dirichlet-lnpdf (c-function double ("gsl_ran_dirichlet_lnpdf" unsigned pointer pointer)))

(define gsl:ran-erlang (c-function double ("gsl_ran_erlang" gsl:rng double double)))
(define gsl:ran-erlang-pdf (c-function double ("gsl_ran_erlang_pdf" double double double)))

(define gsl:ran-fdist (c-function double ("gsl_ran_fdist" gsl:rng double double)))
(define gsl:ran-fdist-pdf (c-function double ("gsl_ran_fdist_pdf" double double double)))

(define gsl:ran-flat (c-function double ("gsl_ran_flat" gsl:rng double double)))
(define gsl:ran-flat-pdf (c-function double ("gsl_ran_flat_pdf" double double double)))

(define gsl:ran-gamma (c-function double ("gsl_ran_gamma" gsl:rng double double)))
(define gsl:ran-gamma-int (c-function double ("gsl_ran_gamma_int" gsl:rng unsigned)))
(define gsl:ran-gamma-pdf (c-function double ("gsl_ran_gamma_pdf" double double double)))
(define gsl:ran-gamma-mt (c-function double ("gsl_ran_gamma_mt" gsl:rng double double)))
(define gsl:ran-gamma-knuth (c-function double ("gsl_ran_gamma_knuth" gsl:rng double double)))

(define gsl:ran-gaussian (c-function double ("gsl_ran_gaussian" gsl:rng double)))
(define gsl:ran-gaussian-ratio-method (c-function double ("gsl_ran_gaussian_ratio_method" gsl:rng double)))
(define gsl:ran-gaussian-ziggurat (c-function double ("gsl_ran_gaussian_ziggurat" gsl:rng double)))
(define gsl:ran-gaussian-pdf (c-function double ("gsl_ran_gaussian_pdf" double double)))

(define gsl:ran-ugaussian (c-function double ("gsl_ran_ugaussian" gsl:rng)))
(define gsl:ran-ugaussian-ratio-method (c-function double ("gsl_ran_ugaussian_ratio_method" gsl:rng)))
(define gsl:ran-ugaussian-pdf (c-function double ("gsl_ran_ugaussian_pdf" double)))

(define gsl:ran-gaussian-tail (c-function double ("gsl_ran_gaussian_tail" gsl:rng double double)))
(define gsl:ran-gaussian-tail-pdf (c-function double ("gsl_ran_gaussian_tail_pdf" double double double)))

(define gsl:ran-ugaussian-tail (c-function double ("gsl_ran_ugaussian_tail" gsl:rng double)))
(define gsl:ran-ugaussian-tail-pdf (c-function double ("gsl_ran_ugaussian_tail_pdf" double double)))

(define gsl:ran-bivariate-gaussian (c-function void ("gsl_ran_bivariate_gaussian" gsl:rng double double double pointer pointer)))
(define gsl:ran-bivariate-gaussian-pdf (c-function double ("gsl_ran_bivariate_gaussian_pdf" double double double double double)))

(define gsl:ran-landau (c-function double ("gsl_ran_landau" gsl:rng)))
(define gsl:ran-landau-pdf (c-function double ("gsl_ran_landau_pdf" double)))

(define gsl:ran-geometric (c-function unsigned ("gsl_ran_geometric" gsl:rng double)))
(define gsl:ran-geometric-pdf (c-function double ("gsl_ran_geometric_pdf" unsigned double)))

(define gsl:ran-hypergeometric (c-function unsigned ("gsl_ran_hypergeometric" gsl:rng unsigned unsigned unsigned)))
(define gsl:ran-hypergeometric-pdf (c-function double ("gsl_ran_hypergeometric_pdf" unsigned unsigned unsigned unsigned)))

(define gsl:ran-gumbel1 (c-function double ("gsl_ran_gumbel1" gsl:rng double double)))
(define gsl:ran-gumbel1-pdf (c-function double ("gsl_ran_gumbel1_pdf" double double double)))

(define gsl:ran-gumbel2 (c-function double ("gsl_ran_gumbel2" gsl:rng double double)))
(define gsl:ran-gumbel2-pdf (c-function double ("gsl_ran_gumbel2_pdf" double double double)))

(define gsl:ran-logistic (c-function double ("gsl_ran_logistic" gsl:rng double)))
(define gsl:ran-logistic-pdf (c-function double ("gsl_ran_logistic_pdf" double double)))

(define gsl:ran-lognormal (c-function double ("gsl_ran_lognormal" gsl:rng double double)))
(define gsl:ran-lognormal-pdf (c-function double ("gsl_ran_lognormal_pdf" double double double)))

(define gsl:ran-logarithmic (c-function unsigned ("gsl_ran_logarithmic" gsl:rng double)))
(define gsl:ran-logarithmic-pdf (c-function double ("gsl_ran_logarithmic_pdf" unsigned double)))

(define gsl:ran-multinomial (c-function void ("gsl_ran_multinomial" gsl:rng unsigned unsigned pointer pointer)))
(define gsl:ran-multinomial-pdf (c-function double ("gsl_ran_multinomial_pdf" unsigned pointer pointer)))
(define gsl:ran-multinomial-lnpdf (c-function double ("gsl_ran_multinomial_lnpdf" unsigned pointer pointer)))

(define gsl:ran-negative-binomial (c-function unsigned ("gsl_ran_negative_binomial" gsl:rng double double)))
(define gsl:ran-negative-binomial-pdf (c-function double ("gsl_ran_negative_binomial_pdf" unsigned double double)))

(define gsl:ran-pascal (c-function unsigned ("gsl_ran_pascal" gsl:rng double unsigned)))
(define gsl:ran-pascal-pdf (c-function double ("gsl_ran_pascal_pdf" unsigned double unsigned)))

(define gsl:ran-pareto (c-function double ("gsl_ran_pareto" gsl:rng double double)))
(define gsl:ran-pareto-pdf (c-function double ("gsl_ran_pareto_pdf" double double double)))

(define gsl:ran-poisson (c-function unsigned ("gsl_ran_poisson" gsl:rng double)))
(define gsl:ran-poisson-array (c-function void ("gsl_ran_poisson_array" gsl:rng unsigned pointer double)))
(define gsl:ran-poisson-pdf (c-function double ("gsl_ran_poisson_pdf" unsigned double)))

(define gsl:ran-rayleigh (c-function double ("gsl_ran_rayleigh" gsl:rng double)))
(define gsl:ran-rayleigh-pdf (c-function double ("gsl_ran_rayleigh_pdf" double double)))

(define gsl:ran-rayleigh-tail (c-function double ("gsl_ran_rayleigh_tail" gsl:rng double double)))
(define gsl:ran-rayleigh-tail-pdf (c-function double ("gsl_ran_rayleigh_tail_pdf" double double double)))

(define gsl:ran-tdist (c-function double ("gsl_ran_tdist" gsl:rng double)))
(define gsl:ran-tdist-pdf (c-function double ("gsl_ran_tdist_pdf" double double)))

(define gsl:ran-laplace (c-function double ("gsl_ran_laplace" gsl:rng double)))
(define gsl:ran-laplace-pdf (c-function double ("gsl_ran_laplace_pdf" double double)))

(define gsl:ran-levy (c-function double ("gsl_ran_levy" gsl:rng double double)))
(define gsl:ran-levy-skew (c-function double ("gsl_ran_levy_skew" gsl:rng double double double)))

(define gsl:ran-weibull (c-function double ("gsl_ran_weibull" gsl:rng double double)))
(define gsl:ran-weibull-pdf (c-function double ("gsl_ran_weibull_pdf" double double double)))

(define gsl:ran-dir-2d (c-function void ("gsl_ran_dir_2d" gsl:rng pointer pointer)))
(define gsl:ran-dir-2d-trig-method (c-function void ("gsl_ran_dir_2d_trig_method" gsl:rng pointer pointer)))
(define gsl:ran-dir-3d (c-function void ("gsl_ran_dir_3d" gsl:rng pointer pointer pointer)))
(define gsl:ran-dir-nd (c-function void ("gsl_ran_dir_nd" gsl:rng unsigned pointer)))

;;; Distributions cdfs

(define gsl:cdf-ugaussian-P (c-function double ("gsl_cdf_ugaussian_P" double)))
(define gsl:cdf-ugaussian-Q (c-function double ("gsl_cdf_ugaussian_Q" double)))

(define gsl:cdf-ugaussian-P-inv (c-function double ("gsl_cdf_ugaussian_Pinv" double)))
(define gsl:cdf-ugaussian-Q-inv (c-function double ("gsl_cdf_ugaussian_Qinv" double)))

(define gsl:cdf-gaussian-P (c-function double ("gsl_cdf_gaussian_P" double double)))
(define gsl:cdf-gaussian-Q (c-function double ("gsl_cdf_gaussian_Q" double double)))

(define gsl:cdf-gaussian-P-inv (c-function double ("gsl_cdf_gaussian_Pinv" double double)))
(define gsl:cdf-gaussian-Q-inv (c-function double ("gsl_cdf_gaussian_Qinv" double double)))

(define gsl:cdf-gamma-P (c-function double ("gsl_cdf_gamma_P" double double double)))
(define gsl:cdf-gamma-Q (c-function double ("gsl_cdf_gamma_Q" double double double)))

(define gsl:cdf-gamma-P-inv (c-function double ("gsl_cdf_gamma_Pinv" double double double)))
(define gsl:cdf-gamma-Q-inv (c-function double ("gsl_cdf_gamma_Qinv" double double double)))

(define gsl:cdf-cauchy-P (c-function double ("gsl_cdf_cauchy_P" double double)))
(define gsl:cdf-cauchy-Q (c-function double ("gsl_cdf_cauchy_Q" double double)))

(define gsl:cdf-cauchy-P-inv (c-function double ("gsl_cdf_cauchy_Pinv" double double)))
(define gsl:cdf-cauchy-Q-inv (c-function double ("gsl_cdf_cauchy_Qinv" double double)))

(define gsl:cdf-laplace-P (c-function double ("gsl_cdf_laplace_P" double double)))
(define gsl:cdf-laplace-Q (c-function double ("gsl_cdf_laplace_Q" double double)))

(define gsl:cdf-laplace-P-inv (c-function double ("gsl_cdf_laplace_Pinv" double double)))
(define gsl:cdf-laplace-Q-inv (c-function double ("gsl_cdf_laplace_Qinv" double double)))

(define gsl:cdf-rayleigh-P (c-function double ("gsl_cdf_rayleigh_P" double double)))
(define gsl:cdf-rayleigh-Q (c-function double ("gsl_cdf_rayleigh_Q" double double)))

(define gsl:cdf-rayleigh-P-inv (c-function double ("gsl_cdf_rayleigh_Pinv" double double)))
(define gsl:cdf-rayleigh-Q-inv (c-function double ("gsl_cdf_rayleigh_Qinv" double double)))

(define gsl:cdf-chisq-P (c-function double ("gsl_cdf_chisq_P" double double)))
(define gsl:cdf-chisq-Q (c-function double ("gsl_cdf_chisq_Q" double double)))

(define gsl:cdf-chisq-P-inv (c-function double ("gsl_cdf_chisq_Pinv" double double)))
(define gsl:cdf-chisq-Q-inv (c-function double ("gsl_cdf_chisq_Qinv" double double)))

(define gsl:cdf-exponential-P (c-function double ("gsl_cdf_exponential_P" double double)))
(define gsl:cdf-exponential-Q (c-function double ("gsl_cdf_exponential_Q" double double)))

(define gsl:cdf-exponential-P-inv (c-function double ("gsl_cdf_exponential_Pinv" double double)))
(define gsl:cdf-exponential-Q-inv (c-function double ("gsl_cdf_exponential_Qinv" double double)))

(define gsl:cdf-exppow-P (c-function double ("gsl_cdf_exppow_P" double double double)))
(define gsl:cdf-exppow-Q (c-function double ("gsl_cdf_exppow_Q" double double double)))

(define gsl:cdf-tdist-P (c-function double ("gsl_cdf_tdist_P" double double)))
(define gsl:cdf-tdist-Q (c-function double ("gsl_cdf_tdist_Q" double double)))

(define gsl:cdf-tdist-P-inv (c-function double ("gsl_cdf_tdist_Pinv" double double)))
(define gsl:cdf-tdist-Q-inv (c-function double ("gsl_cdf_tdist_Qinv" double double)))

(define gsl:cdf-fdist-P (c-function double ("gsl_cdf_fdist_P" double double double)))
(define gsl:cdf-fdist-Q (c-function double ("gsl_cdf_fdist_Q" double double double)))

(define gsl:cdf-fdist-P-inv (c-function double ("gsl_cdf_fdist_Pinv" double double double)))
(define gsl:cdf-fdist-Q-inv (c-function double ("gsl_cdf_fdist_Qinv" double double double)))

(define gsl:cdf-beta-P (c-function double ("gsl_cdf_beta_P" double double double)))
(define gsl:cdf-beta-Q (c-function double ("gsl_cdf_beta_Q" double double double)))

(define gsl:cdf-beta-P-inv (c-function double ("gsl_cdf_beta_Pinv" double double double)))
(define gsl:cdf-beta-Q-inv (c-function double ("gsl_cdf_beta_Qinv" double double double)))

(define gsl:cdf-flat-P (c-function double ("gsl_cdf_flat_P" double double double)))
(define gsl:cdf-flat-Q (c-function double ("gsl_cdf_flat_Q" double double double)))

(define gsl:cdf-flat-P-inv (c-function double ("gsl_cdf_flat_Pinv" double double double)))
(define gsl:cdf-flat-Q-inv (c-function double ("gsl_cdf_flat_Qinv" double double double)))

(define gsl:cdf-lognormal-P (c-function double ("gsl_cdf_lognormal_P" double double double)))
(define gsl:cdf-lognormal-Q (c-function double ("gsl_cdf_lognormal_Q" double double double)))

(define gsl:cdf-lognormal-P-inv (c-function double ("gsl_cdf_lognormal_Pinv" double double double)))
(define gsl:cdf-lognormal-Q-inv (c-function double ("gsl_cdf_lognormal_Qinv" double double double)))

(define gsl:cdf-gumbel1-P (c-function double ("gsl_cdf_gumbel1_P" double double double)))
(define gsl:cdf-gumbel1-Q (c-function double ("gsl_cdf_gumbel1_Q" double double double)))

(define gsl:cdf-gumbel1-P-inv (c-function double ("gsl_cdf_gumbel1_Pinv" double double double)))
(define gsl:cdf-gumbel1-Q-inv (c-function double ("gsl_cdf_gumbel1_Qinv" double double double)))

(define gsl:cdf-gumbel2-P (c-function double ("gsl_cdf_gumbel2_P" double double double)))
(define gsl:cdf-gumbel2-Q (c-function double ("gsl_cdf_gumbel2_Q" double double double)))

(define gsl:cdf-gumbel2-P-inv (c-function double ("gsl_cdf_gumbel2_Pinv" double double double)))
(define gsl:cdf-gumbel2-Q-inv (c-function double ("gsl_cdf_gumbel2_Qinv" double double double)))

(define gsl:cdf-weibull-P (c-function double ("gsl_cdf_weibull_P" double double double)))
(define gsl:cdf-weibull-Q (c-function double ("gsl_cdf_weibull_Q" double double double)))

(define gsl:cdf-weibull-P-inv (c-function double ("gsl_cdf_weibull_Pinv" double double double)))
(define gsl:cdf-weibull-Q-inv (c-function double ("gsl_cdf_weibull_Qinv" double double double)))

(define gsl:cdf-pareto-P (c-function double ("gsl_cdf_pareto_P" double double double)))
(define gsl:cdf-pareto-Q (c-function double ("gsl_cdf_pareto_Q" double double double)))

(define gsl:cdf-pareto-P-inv (c-function double ("gsl_cdf_pareto_Pinv" double double double)))
(define gsl:cdf-pareto-Q-inv (c-function double ("gsl_cdf_pareto_Qinv" double double double)))

(define gsl:cdf-logistic-P (c-function double ("gsl_cdf_logistic_P" double double)))
(define gsl:cdf-logistic-Q (c-function double ("gsl_cdf_logistic_Q" double double)))

(define gsl:cdf-logistic-P-inv (c-function double ("gsl_cdf_logistic_Pinv" double double)))
(define gsl:cdf-logistic-Q-inv (c-function double ("gsl_cdf_logistic_Qinv" double double)))

(define gsl:cdf-binomial-P (c-function double ("gsl_cdf_binomial_P" unsigned double unsigned)))
(define gsl:cdf-binomial-Q (c-function double ("gsl_cdf_binomial_Q" unsigned double unsigned)))

(define gsl:cdf-poisson-P (c-function double ("gsl_cdf_poisson_P" unsigned double)))
(define gsl:cdf-poisson-Q (c-function double ("gsl_cdf_poisson_Q" unsigned double)))

(define gsl:cdf-geometric-P (c-function double ("gsl_cdf_geometric_P" unsigned double)))
(define gsl:cdf-geometric-Q (c-function double ("gsl_cdf_geometric_Q" unsigned double)))

(define gsl:cdf-negative-binomial-P (c-function double ("gsl_cdf_negative_binomial_P" unsigned double double)))
(define gsl:cdf-negative-binomial-Q (c-function double ("gsl_cdf_negative_binomial_Q" unsigned double double)))

(define gsl:cdf-pascal-P (c-function double ("gsl_cdf_pascal_P" unsigned double unsigned)))
(define gsl:cdf-pascal-Q (c-function double ("gsl_cdf_pascal_Q" unsigned double unsigned)))

(define gsl:cdf-hypergeometric-P (c-function double ("gsl_cdf_hypergeometric_P" unsigned unsigned unsigned unsigned)))
(define gsl:cdf-hypergeometric-Q (c-function double ("gsl_cdf_hypergeometric_Q" unsigned unsigned unsigned unsigned)))

;;; Random number generators

(define gsl:rng-borosh13         (c-value gsl:rng-type "gsl_rng_borosh13"))
(define gsl:rng-coveyou          (c-value gsl:rng-type "gsl_rng_coveyou"))
(define gsl:rng-cmrg             (c-value gsl:rng-type "gsl_rng_cmrg"))
(define gsl:rng-fishman18        (c-value gsl:rng-type "gsl_rng_fishman18"))
(define gsl:rng-fishman20        (c-value gsl:rng-type "gsl_rng_fishman20"))
(define gsl:rng-fishman2x        (c-value gsl:rng-type "gsl_rng_fishman2x"))
(define gsl:rng-gfsr4            (c-value gsl:rng-type "gsl_rng_gfsr4"))
(define gsl:rng-knuthran         (c-value gsl:rng-type "gsl_rng_knuthran"))
(define gsl:rng-knuthran2        (c-value gsl:rng-type "gsl_rng_knuthran2"))
(define gsl:rng-knuthran2002     (c-value gsl:rng-type "gsl_rng_knuthran2002"))
(define gsl:rng-lecuyer21        (c-value gsl:rng-type "gsl_rng_lecuyer21"))
(define gsl:rng-minstd           (c-value gsl:rng-type "gsl_rng_minstd"))
(define gsl:rng-mrg              (c-value gsl:rng-type "gsl_rng_mrg"))
(define gsl:rng-mt19937          (c-value gsl:rng-type "gsl_rng_mt19937"))
(define gsl:rng-mt19937-1999     (c-value gsl:rng-type "gsl_rng_mt19937_1999"))
(define gsl:rng-mt19937-1998     (c-value gsl:rng-type "gsl_rng_mt19937_1998"))
(define gsl:rng-r250             (c-value gsl:rng-type "gsl_rng_r250"))
(define gsl:rng-ran0             (c-value gsl:rng-type "gsl_rng_ran0"))
(define gsl:rng-ran1             (c-value gsl:rng-type "gsl_rng_ran1"))
(define gsl:rng-ran2             (c-value gsl:rng-type "gsl_rng_ran2"))
(define gsl:rng-ran3             (c-value gsl:rng-type "gsl_rng_ran3"))
(define gsl:rng-rand             (c-value gsl:rng-type "gsl_rng_rand"))
(define gsl:rng-rand48           (c-value gsl:rng-type "gsl_rng_rand48"))
(define gsl:rng-random128-bsd    (c-value gsl:rng-type "gsl_rng_random128_bsd"))
(define gsl:rng-random128-glibc2 (c-value gsl:rng-type "gsl_rng_random128_glibc2"))
(define gsl:rng-random128-libc5  (c-value gsl:rng-type "gsl_rng_random128_libc5"))
(define gsl:rng-random256-bsd    (c-value gsl:rng-type "gsl_rng_random256_bsd"))
(define gsl:rng-random256-glibc2 (c-value gsl:rng-type "gsl_rng_random256_glibc2"))
(define gsl:rng-random256-libc5  (c-value gsl:rng-type "gsl_rng_random256_libc5"))
(define gsl:rng-random32-bsd     (c-value gsl:rng-type "gsl_rng_random32_bsd"))
(define gsl:rng-random32-glibc2  (c-value gsl:rng-type "gsl_rng_random32_glibc2"))
(define gsl:rng-random32-libc5   (c-value gsl:rng-type "gsl_rng_random32_libc5"))
(define gsl:rng-random64-bsd     (c-value gsl:rng-type "gsl_rng_random64_bsd"))
(define gsl:rng-random64-glibc2  (c-value gsl:rng-type "gsl_rng_random64_glibc2"))
(define gsl:rng-random64-libc5   (c-value gsl:rng-type "gsl_rng_random64_libc5"))
(define gsl:rng-random8-bsd      (c-value gsl:rng-type "gsl_rng_random8_bsd"))
(define gsl:rng-random8-glibc2   (c-value gsl:rng-type "gsl_rng_random8_glibc2"))
(define gsl:rng-random8-libc5    (c-value gsl:rng-type "gsl_rng_random8_libc5"))
(define gsl:rng-random-bsd       (c-value gsl:rng-type "gsl_rng_random_bsd"))
(define gsl:rng-random-glibc2    (c-value gsl:rng-type "gsl_rng_random_glibc2"))
(define gsl:rng-random-libc5     (c-value gsl:rng-type "gsl_rng_random_libc5"))
(define gsl:rng-randu            (c-value gsl:rng-type "gsl_rng_randu"))
(define gsl:rng-ranf             (c-value gsl:rng-type "gsl_rng_ranf"))
(define gsl:rng-ranlux           (c-value gsl:rng-type "gsl_rng_ranlux"))
(define gsl:rng-ranlux389        (c-value gsl:rng-type "gsl_rng_ranlux389"))
(define gsl:rng-ranlxd1          (c-value gsl:rng-type "gsl_rng_ranlxd1"))
(define gsl:rng-ranlxd2          (c-value gsl:rng-type "gsl_rng_ranlxd2"))
(define gsl:rng-ranlxs0          (c-value gsl:rng-type "gsl_rng_ranlxs0"))
(define gsl:rng-ranlxs1          (c-value gsl:rng-type "gsl_rng_ranlxs1"))
(define gsl:rng-ranlxs2          (c-value gsl:rng-type "gsl_rng_ranlxs2"))
(define gsl:rng-ranmar           (c-value gsl:rng-type "gsl_rng_ranmar"))
(define gsl:rng-slatec           (c-value gsl:rng-type "gsl_rng_slatec"))
(define gsl:rng-taus             (c-value gsl:rng-type "gsl_rng_taus"))
(define gsl:rng-taus2            (c-value gsl:rng-type "gsl_rng_taus2"))
(define gsl:rng-taus113          (c-value gsl:rng-type "gsl_rng_taus113"))
(define gsl:rng-transputer       (c-value gsl:rng-type "gsl_rng_transputer"))
(define gsl:rng-tt800            (c-value gsl:rng-type "gsl_rng_tt800"))
(define gsl:rng-uni              (c-value gsl:rng-type "gsl_rng_uni"))
(define gsl:rng-uni32            (c-value gsl:rng-type "gsl_rng_uni32"))
(define gsl:rng-vax              (c-value gsl:rng-type "gsl_rng_vax"))
(define gsl:rng-waterman14       (c-value gsl:rng-type "gsl_rng_waterman14"))
(define gsl:rng-zuf              (c-value gsl:rng-type "gsl_rng_zuf"))

(define gsl:rng-env-setup (c-function gsl:rng-type ("gsl_rng_env_setup")))
(define gsl:rng-default (c-value gsl:rng-type "gsl_rng_default"))
(define gsl:rng-default-seed (c-value long "gsl_rng_default_seed"))

(define gsl:rng-alloc (c-function gsl:rng ("gsl_rng_alloc" gsl:rng-type)))
(define gsl:rng-memcpy (c-function int ("gsl_rng_memcpy" gsl:rng gsl:rng)))
(define gsl:rng-clone (c-function gsl:rng ("gsl_rng_clone" gsl:rng)))
(define gsl:rng-free (c-function void ("gsl_rng_free" gsl:rng)))

(define gsl:rng-set (c-function void ("gsl_rng_set" gsl:rng long)))
(define gsl:rng-max (c-function long ("gsl_rng_max" gsl:rng)))
(define gsl:rng-min (c-function long ("gsl_rng_min" gsl:rng)))
(define gsl:rng-name (c-function string ("gsl_rng_name" gsl:rng)))

(define gsl:rng-get (c-function long ("gsl_rng_get" gsl:rng)))
(define gsl:rng-uniform (c-function double ("gsl_rng_uniform" gsl:rng)))
(define gsl:rng-uniform-pos (c-function double ("gsl_rng_uniform_pos" gsl:rng)))
(define gsl:rng-uniform-int (c-function long ("gsl_rng_uniform_int" gsl:rng long)))
