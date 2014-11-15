(MODULE TOOLLIB-HOG)

(include "QobiScheme.sch")
(include "toollib-c-macros.sch")
(include "toollib-hog.sch")

(c-ffi:rename-id "hog_image" "c-hog-image")

(c-include "toollib-hog-c.h")
(c-include "idealib-c.h")

(define-structure hog-image buffer width height pitch number-of-orientations)

(define-structure hog-pyramid hog-images scales)

;;; Bin 0 is vertical. Bin 1 is clockwise.
(define-structure hog-descriptor x y gradients)

(define-structure hog-detection point score)

(define-structure oriented-point point orientation)

(define-structure qmodel
 scale
 radians
 boundary
 interior
 boundary-c-oriented-points
 interior-c-oriented-points)

(define *hog-dot?* #t)

;;; HOG images and pyramids

;;; currently only takes an imlib image
(define (compute-hog-pyramid-at-scales
	 image scales pitch number-of-orientations)
 (make-hog-pyramid
  (map (lambda (scale)
	(let* ((scaled-image (imlib:create-scaled
			      image
			      (exact-round (* scale (imlib:width image)))
			      (exact-round (* scale (imlib:height image)))))
	       (hog-image
		(image->hog-image scaled-image pitch number-of-orientations)))
	 (imlib:free scaled-image)
	 hog-image))
       scales)
  scales))

;;; currently only takes an imlib image
(define (compute-hog-pyramid image min-scale max-scale number-of-scales
			     pitch number-of-orientations)
 (compute-hog-pyramid-at-scales
  image
  (map-n (lambda (i)
	  (+ min-scale
	     (* (/ i (- number-of-scales 1)) (- max-scale min-scale))))
	 number-of-scales)
  pitch
  number-of-orientations))

(define (free-hog-pyramid pyramid)
 (for-each free-hog-image (hog-pyramid-hog-images pyramid)))

(define (hog-pyramid-number-of-orientations pyramid)
 (hog-image-number-of-orientations (first pyramid)))

;;; HOG models

(define allocate-hog-descriptor-model
 (c-function pointer ("allocate_hog_descriptor_model" unsigned unsigned)))

(define free-hog-descriptor-model
 (c-function void ("free_hog_descriptor_model" pointer)))

(define set-hog-descriptor-model-x!
 (c-function void ("set_hog_descriptor_model_x" pointer unsigned unsigned)))

(define set-hog-descriptor-model-y!
 (c-function void ("set_hog_descriptor_model_y" pointer unsigned unsigned)))

(define set-hog-descriptor-model-gradient!
 (c-function
  void ("set_hog_descriptor_model_gradient" pointer unsigned unsigned double)))

(define hog-dot
 (c-function double ("hog_dot" pointer pointer unsigned unsigned)))

(define hog-norm
 (c-function double ("hog_norm" pointer pointer unsigned unsigned)))

(define (hog-score hog-descriptor-model c-hog-image x y)
 (if *hog-dot?*
     (hog-dot hog-descriptor-model c-hog-image x y)
     (hog-norm hog-descriptor-model c-hog-image x y)))

(define allocate-c-matrix
 (c-function pointer ("allocate_c_matrix" unsigned unsigned)))

(define hog-convolve-dot
 (c-function pointer ("hog_convolve_dot" pointer pointer)))

(define hog-convolve-norm
 (c-function pointer ("hog_convolve_norm" pointer pointer)))

(define (hog-convolve hog-descriptor-model c-hog-image)
 (if *hog-dot?*
     (hog-convolve-dot hog-descriptor-model c-hog-image)
     (hog-convolve-norm hog-descriptor-model c-hog-image)))

(define c-matrix-width (c-function unsigned ("c_matrix_width" pointer)))

(define c-matrix-height (c-function unsigned ("c_matrix_height" pointer)))

(define c-matrix-ref
 (c-function double ("c_matrix_ref" pointer unsigned unsigned)))

(define c-matrix-set!
 (c-function void ("c_matrix_set" pointer unsigned unsigned double)))

(define (matrix->c-matrix matrix)
 (let* ((height (matrix-rows matrix))
	(width (matrix-columns matrix))
	(c-matrix (allocate-c-matrix width height)))
  (do ((y 0 (+ y 1))) ((>= y height))
   (do ((x 0 (+ x 1))) ((>= x width))
    (c-matrix-set! c-matrix x y (matrix-ref matrix y x))))
  c-matrix))

(define (c-matrix->matrix c-matrix)
 (let ((height (c-matrix-height c-matrix))
       (width (c-matrix-width c-matrix)))
  (map-n-vector
   (lambda (y) (map-n-vector (lambda (x) (c-matrix-ref c-matrix x y)) width))
   height)))

(define c-hog-detections
 (c-function pointer ("c_hog_detections" pointer unsigned)))

(define c-roi-hog-detections
 (c-function
  pointer
  ("c_ROI_hog_detections" pointer unsigned unsigned unsigned unsigned)))

(define (imlib-opencv-canny-output->c-matrix image)
 (let ((p (imlib-image->pnm-buffer! image)))
  (unless (eq? (pnm-buffer-type p) 'color) (fuck-up))
  (let* ((stride (pixfmt->stride (pnm-buffer-pixfmt p)))
	 (red-index (pixfmt->red (pnm-buffer-pixfmt p)))
	 (green-index (pixfmt->green (pnm-buffer-pixfmt p)))
	 (blue-index (pixfmt->blue (pnm-buffer-pixfmt p)))
	 (height (pnm-buffer-height p))
	 (width (pnm-buffer-width p))
	 (c-matrix (allocate-c-matrix width height))
	 (buffer (pnm-buffer-buffer p)))
   (do ((y 0 (+ y 1))) ((>= y height))
    (do ((x 0 (+ x 1))) ((>= x width))
     (c-matrix-set!
      c-matrix x y
      (if (zero? (c-byte-ref buffer (+ (* stride (+ (* y width) x)) red-index)))
	  255.0
	  0.0))))
   c-matrix)))

(define (c-matrix-dt matrix)
 (let ((c-matrix (matrix->c-matrix matrix)))
  ((c-function void ("c_matrix_dt" pointer)) c-matrix)
  (let ((matrix (c-matrix->matrix c-matrix)))
   (free-c-matrix c-matrix)
   matrix)))

(define (get-dt-opencv-canny-from-imlib-v1
	 image size sigma threshold1 threshold2 aperature)
 (let* ((canny-image (canny image size sigma threshold1 threshold2 aperature))
	(c-matrix
	 (matrix->c-matrix
	  (map-matrix
	   sqrt
	   (vector-ref
	    (euclidean-2d-dt
	     (pgm-grey
	      (pbm->pgm
	       (pbm-not
		(pgm->pbm
		 (make-pgm #t 255 (ppm-red (imlib-image->ppm canny-image)))
		 128)))))
	    0)))))
  (imlib:free canny-image)
  c-matrix))

(define (get-dt-opencv-canny-from-imlib-v2
	 image size sigma threshold1 threshold2 aperature)
 (let* ((canny-image (canny image size sigma threshold1 threshold2 aperature))
	(c-matrix
	 (matrix->c-matrix
	  (map-matrix
	   sqrt
	   (euclidean-2d-dt-vals
	    (pgm-grey
	     (pbm->pgm
	      (pbm-not
	       (pgm->pbm
		(make-pgm #t 255 (ppm-red (imlib-image->ppm canny-image)))
		128)))))))))
  (imlib:free canny-image)
  c-matrix))

(define (get-dt-opencv-canny-from-imlib-v3
	 image size sigma threshold1 threshold2 aperature)
 (let* ((canny-image (canny image size sigma threshold1 threshold2 aperature))
	(c-matrix
	 (matrix->c-matrix
	  (map-matrix
	   sqrt
	   (vector-ref
	    (euclidean-2d-dt
	     (let ((p (imlib-image->pnm-buffer! canny-image)))
	      (unless (eq? (pnm-buffer-type p) 'color) (fuck-up))
	      (let ((stride (pixfmt->stride (pnm-buffer-pixfmt p)))
		    (red-index (pixfmt->red (pnm-buffer-pixfmt p)))
		    (green-index (pixfmt->green (pnm-buffer-pixfmt p)))
		    (blue-index (pixfmt->blue (pnm-buffer-pixfmt p))))
	       (map-n-vector
		(lambda (r)
		 (map-n-vector
		  (lambda (c)
		   (if (zero? (c-byte-ref
			       (pnm-buffer-buffer p)
			       (+ (* stride (+ (* r (pnm-buffer-width p)) c))
				  red-index)))
		       255
		       0))
		  (pnm-buffer-width p)))
		(pnm-buffer-height p)))))
	    0)))))
  (imlib:free canny-image)
  c-matrix))

(define (get-dt-opencv-canny-from-imlib-v4
	 image size sigma threshold1 threshold2 aperature)
 (let* ((canny-image (canny image size sigma threshold1 threshold2 aperature))
	(c-matrix
	 (matrix->c-matrix
	  (map-matrix
	   sqrt
	   (euclidean-2d-dt-vals
	    (let ((p (imlib-image->pnm-buffer! canny-image)))
	     (unless (eq? (pnm-buffer-type p) 'color) (fuck-up))
	     (let ((stride (pixfmt->stride (pnm-buffer-pixfmt p)))
		   (red-index (pixfmt->red (pnm-buffer-pixfmt p)))
		   (green-index (pixfmt->green (pnm-buffer-pixfmt p)))
		   (blue-index (pixfmt->blue (pnm-buffer-pixfmt p))))
	      (map-n-vector
	       (lambda (r)
		(map-n-vector
		 (lambda (c)
		  (if (zero? (c-byte-ref
			      (pnm-buffer-buffer p)
			      (+ (* stride (+ (* r (pnm-buffer-width p)) c))
				 red-index)))
		      255
		      0))
		 (pnm-buffer-width p)))
	       (pnm-buffer-height p)))))))))
  (imlib:free canny-image)
  c-matrix))

(define (get-dt-opencv-canny-from-imlib-v5
	 image size sigma threshold1 threshold2 aperature)
 (let* ((canny-image (canny image size sigma threshold1 threshold2 aperature))
	(c-matrix
	 (matrix->c-matrix
	  (c-matrix-dt
	   (let ((p (imlib-image->pnm-buffer! canny-image)))
	    (unless (eq? (pnm-buffer-type p) 'color) (fuck-up))
	    (let ((stride (pixfmt->stride (pnm-buffer-pixfmt p)))
		  (red-index (pixfmt->red (pnm-buffer-pixfmt p)))
		  (green-index (pixfmt->green (pnm-buffer-pixfmt p)))
		  (blue-index (pixfmt->blue (pnm-buffer-pixfmt p))))
	     (map-n-vector
	      (lambda (r)
	       (map-n-vector
		(lambda (c)
		 (if (zero? (c-byte-ref
			     (pnm-buffer-buffer p)
			     (+ (* stride (+ (* r (pnm-buffer-width p)) c))
				red-index)))
		     255
		     0))
		(pnm-buffer-width p)))
	      (pnm-buffer-height p))))))))
  (imlib:free canny-image)
  c-matrix))

(define (get-dt-opencv-canny-from-imlib-v6
	 image size sigma threshold1 threshold2 aperature)
 (let* ((canny-image (canny image size sigma threshold1 threshold2 aperature))
	(c-matrix (imlib-opencv-canny-output->c-matrix canny-image)))
  (imlib:free canny-image)
  ((c-function void ("c_matrix_dt" pointer)) c-matrix)
  c-matrix))

(define free-c-matrix (c-function void ("free_c_matrix" pointer)))

(define allocate-c-oriented-points
 (c-function pointer ("allocate_c_oriented_points" unsigned)))

(define c-oriented-points-set!
 (c-function void ("c_oriented_points_set" pointer unsigned int int double)))

(define (oriented-points->c-oriented-points oriented-points)
 (let ((c-oriented-points
	(allocate-c-oriented-points (length oriented-points))))
  (for-each-indexed
   (lambda (oriented-point i)
    (c-oriented-points-set! c-oriented-points i
			    (x (oriented-point-point oriented-point))
			    (y (oriented-point-point oriented-point))
			    (oriented-point-orientation oriented-point)))
   oriented-points)
  c-oriented-points))

(define (points->c-oriented-points points)
 (let ((c-oriented-points (allocate-c-oriented-points (length points))))
  (for-each-indexed
   (lambda (point i)
    (c-oriented-points-set! c-oriented-points i (x point) (y point) 0.0))
   points)
  c-oriented-points))

(define (qmodel-search-hog-detection)
 (make-hog-detection (vector ((c-function int ("qmodel_search_x")))
			     ((c-function int ("qmodel_search_y"))))
		     ((c-function double ("qmodel_search_score")))))

(define (qmodel-search-v1 qmodel dt
			  x-low x-high x-increment
			  y-low y-high y-increment
			  boundary-dt-threshold)
 ((c-function
   void ("qmodel_search_v1" pointer pointer int int int int int int double))
  (qmodel-boundary-c-oriented-points qmodel)
  dt
  x-low x-high x-increment
  y-low y-high y-increment
  boundary-dt-threshold)
 (qmodel-search-hog-detection))

(define (qmodel-search-v2 qmodel dt
			  x-low x-high x-increment
			  y-low y-high y-increment
			  boundary-dt-threshold alpha)
 ((c-function
   void
   ("qmodel_search_v2" pointer pointer int int int int int int double double))
  (qmodel-boundary-c-oriented-points qmodel)
  dt
  x-low x-high x-increment
  y-low y-high y-increment
  boundary-dt-threshold alpha)
 (qmodel-search-hog-detection))

(define (qmodel-search-v3 qmodel dt orientation
			  x-low x-high x-increment
			  y-low y-high y-increment
			  boundary-dt-threshold orientation-threshold)
 ((c-function void
	      ("qmodel_search_v3"
	       pointer pointer pointer int int int int int int double double))
  (qmodel-boundary-c-oriented-points qmodel)
  dt orientation
  x-low x-high x-increment
  y-low y-high y-increment
  boundary-dt-threshold orientation-threshold)
 (qmodel-search-hog-detection))

(define (qmodel-search-v4 qmodel dt orientation
			  x-low x-high x-increment
			  y-low y-high y-increment
			  boundary-dt-threshold)
 ((c-function
   void
   ("qmodel_search_v4" pointer pointer pointer int int int int int int double))
  (qmodel-boundary-c-oriented-points qmodel)
  dt orientation
  x-low x-high x-increment
  y-low y-high y-increment
  boundary-dt-threshold)
 (qmodel-search-hog-detection))

(define (qmodel-search-v5 qmodel dt
			  x-low x-high x-increment
			  y-low y-high y-increment
			  boundary-dt-threshold interior-dt-threshold alpha)
 ((c-function
   void
   ("qmodel_search_v5"
    pointer pointer pointer int int int int int int double double double))
  (qmodel-boundary-c-oriented-points qmodel)
  (qmodel-interior-c-oriented-points qmodel)
  dt
  x-low x-high x-increment
  y-low y-high y-increment
  boundary-dt-threshold interior-dt-threshold alpha)
 (qmodel-search-hog-detection))

(define (qmodel-search-v6 qmodel dt
			  x-low x-high x-increment
			  y-low y-high y-increment)
 ((c-function void ("qmodel_search_v6" pointer pointer int int int int int int))
  (qmodel-boundary-c-oriented-points qmodel)
  dt
  x-low x-high x-increment
  y-low y-high y-increment)
 (qmodel-search-hog-detection))

(define free-c-oriented-points
 (c-function void ("free_c_oriented_points" pointer)))

(c-define-struct-field "hog_image" "width" int)
(c-define-struct-field "hog_image" "height" int)
(c-define-struct-field "hog_image" "number_of_orientations" int)
(c-define-struct-field "hog_image" "gradients" pointer)

(c-define-struct-field "c_hog_detection" "x" unsigned)
(c-define-struct-field "c_hog_detection" "y" unsigned)
(c-define-struct-field "c_hog_detection" "score" double)

(define (c-hog-detection->hog-detection c-hog-detections)
 (make-hog-detection
  (vector (c-hog-detection-x c-hog-detections)
	  (c-hog-detection-y c-hog-detections))
  (c-hog-detection-score c-hog-detections)))

(define (hog-detections c-matrix k)
 (let* ((c-hog-detections (c-hog-detections c-matrix k))
	(hog-detections (map-n (lambda (i)
				(c-hog-detection->hog-detection
				 (+ c-hog-detections
				    (* i (c-sizeof "struct c_hog_detection")))))
			       k)))
  (free c-hog-detections)
  hog-detections))

(define (roi-hog-detections c-matrix k x1 y1 delta)
 (let* ((c-hog-detections (c-roi-hog-detections c-matrix k x1 y1 delta))
	(hog-detections (map-n (lambda (i)
				(c-hog-detection->hog-detection
				 (+ c-hog-detections
				    (* i (c-sizeof "struct c_hog_detection")))))
			       k)))
  (free c-hog-detections)
  hog-detections))

(define (hog-image->c-hog-image-sharing-data! hog-image)
 (let ((c-hog-image (malloc (c-sizeof "struct hog_image"))))
  (c-hog-image-width-set! c-hog-image (hog-image-width hog-image))
  (c-hog-image-height-set! c-hog-image (hog-image-height hog-image))
  (c-hog-image-number-of-orientations-set!
   c-hog-image (hog-image-number-of-orientations hog-image))
  (c-hog-image-gradients-set! c-hog-image (hog-image-buffer hog-image))
  c-hog-image))

(define normalize-c-hog-image!
 (c-function void ("normalize_hog_image" pointer)))

(define (free-shared-c-hog-image hog-image)
 ;; only frees the data that isn't shared with an underlying scheme hog-image
 (free hog-image))

(define (hog-image-descriptor-length hog-image)
 (* (hog-image-number-of-orientations hog-image) 4))

(define (hog-image-ref hog-image x y)
 (when (or (>= x (hog-image-width hog-image))
	   (>= y (hog-image-height hog-image)))
  (panic "index out of bounds"))
 (let ((descriptor-length (hog-image-descriptor-length hog-image)))
  (map-n-vector
   (lambda (i)
    (c-double-ref (+ (hog-image-buffer hog-image)
		     (* c-sizeof-double
			(+ (* (hog-image-width hog-image) y descriptor-length)
			   (* x descriptor-length))))
		  (* i c-sizeof-double)))
   descriptor-length)))

(define (hog-image-set! hog-image x y descriptor)
 (when (or (>= x (hog-image-width hog-image))
	   (>= y (hog-image-height hog-image)))
  (panic "index out of bounds"))
 (let ((descriptor-length (hog-image-descriptor-length hog-image)))
  (for-each-n
   (lambda (i)
    (c-double-set! (+ (hog-image-buffer hog-image)
		      (* c-sizeof-double
			 (+ (* (hog-image-width hog-image) y descriptor-length)
			    (* x descriptor-length))))
		   (* i c-sizeof-double)
		   (vector-ref descriptor i)))
   descriptor-length)))

(define (free-hog-image hog-image) (free (hog-image-buffer hog-image)))

(define (image->hog-image image pitch number-of-orientations)
 (let* ((pnm-buffer (image->pnm-buffer! image))
        (hog-image
         ;; TODO Technically this is wrong, as it includes the alpha channel as
	 ;; a potential feature, but it should be uniform anyway.
         ((c-function pointer ("hog" pointer int int int int int))
          (pnm-buffer-buffer pnm-buffer)
          (pnm-buffer-height pnm-buffer) (pnm-buffer-width pnm-buffer)
          (pixfmt->stride (pnm-buffer-pixfmt pnm-buffer))
          pitch number-of-orientations))
        (height (- (exact-floor (/ (pnm-buffer-height pnm-buffer) pitch)) 2))
        (width (- (exact-floor (/ (pnm-buffer-width pnm-buffer) pitch)) 2)))
  (free-pnm-buffer! pnm-buffer)
  (make-hog-image hog-image width height pitch number-of-orientations)))

(define (descriptor->image descriptor half-hog-size detection?)
 (let* ((size (+ (* 2 half-hog-size) 1))
	(image (imlib-create-image size size)))
  (imlib-context-set-image! image)
  (imlib-context-set-anti-alias! #t)
  (imlib-context-set-color! 0 0 0 255)
  (imlib-image-fill-rectangle 0 0 size size)
  (for-each-n
   (lambda (orientation)
    (let ((intensity
	   (exact-round
	    (* 255
	       (map-reduce-n
		+
		0
		(lambda (i)
		 (vector-ref
		  descriptor
		  (+ (* (quotient (vector-length descriptor) 4) i)
		     orientation)))
		4))))
	  (p1 (map-vector
	       exact-round
	       (v+ (m*v (rotation-matrix-2d
			 (degrees->radians
			  (/ (* orientation 180)
			     (quotient (vector-length descriptor) 4))))
			(vector 0 half-hog-size))
		   (vector half-hog-size half-hog-size))))
	  (p2 (map-vector
	       exact-round
	       (v+ (m*v (rotation-matrix-2d
			 (degrees->radians
			  (/ (* orientation 180)
			     (quotient (vector-length descriptor) 4))))
			(vector 0 (- half-hog-size)))
		   (vector half-hog-size half-hog-size)))))
     (if detection?
	 (imlib-context-set-color! intensity 0 0 255)
	 (imlib-context-set-color! intensity intensity intensity 255))
     (imlib-image-draw-line (x p1) (y p1) (x p2) (y p2))))
   (quotient (vector-length descriptor) 4))
  image))

(define (hog-image->image hog-image half-hog-size)
 (let* ((size (+ (* 2 half-hog-size) 1))
        (image (imlib-create-image (* size (hog-image-width hog-image))
                                   (* size (hog-image-height hog-image)))))
  (imlib-context-set-image! image)
  (imlib-context-set-anti-alias! #t)
  (imlib-context-set-color! 0 0 0 255)
  (imlib-image-fill-rectangle 0 0
			      (* size (hog-image-width hog-image))
                              (* size (hog-image-height hog-image)))
  (for-each-n
   (lambda (x)
    (for-each-n
     (lambda (y)
      (let ((descriptor-image
	     (descriptor->image
	      (hog-image-ref hog-image x y) half-hog-size #f)))
       (imlib-context-set-image! image)
       (imlib-blend-image-onto-image
	descriptor-image 0 0 0 size size (* size x) (* size y) size size)
       (imlib-free-images-and-decache (list descriptor-image))))
     (hog-image-height hog-image)))
   (hog-image-width hog-image))
  image))

(define (hog-detection->image
	 hog-image half-hog-size hog-descriptors hog-detection)
 (let* ((size (+ (* 2 half-hog-size) 1))
        (image (imlib-create-image (* size (hog-image-width hog-image))
                                   (* size (hog-image-height hog-image)))))
  (imlib-context-set-image! image)
  (imlib-context-set-anti-alias! #t)
  (imlib-context-set-color! 0 0 0 255)
  (imlib-image-fill-rectangle 0 0
			      (* size (hog-image-width hog-image))
                              (* size (hog-image-height hog-image)))
  (for-each-n
   (lambda (x1)
    (for-each-n
     (lambda (y1)
      (let ((descriptor-image
	     (descriptor->image
	      (hog-image-ref hog-image x1 y1)
	      half-hog-size
	      (some (lambda (hog-descriptor)
		     (and (= x1
			     (+ (x (hog-detection-point hog-detection))
				(hog-descriptor-x hog-descriptor)))
			  (= y1
			     (+ (y (hog-detection-point hog-detection))
				(hog-descriptor-y hog-descriptor)))))
		    hog-descriptors))))
       (imlib-context-set-image! image)
       (imlib-blend-image-onto-image
	descriptor-image 0 0 0 size size (* size x1) (* size y1) size size)
       (imlib-free-images-and-decache (list descriptor-image))))
     (hog-image-height hog-image)))
   (hog-image-width hog-image))
  image))

(define (show-hog-image hog-image)
 (let ((rendered-image (hog-image->image hog-image 7)))
  (show-image rendered-image)
  (imlib:free rendered-image)))

(define (show-hog-detection hog-image hog-descriptors hog-detection)
 (let ((rendered-image
	(hog-detection->image hog-image 7 hog-descriptors hog-detection)))
  (show-image rendered-image)
  (imlib:free rendered-image)))

(define (show-hog-image-from-file
	 filename pitch number-of-orientations normalized?)
 (let* ((image (imlib:load! filename))
        (hog-image (image->hog-image image pitch number-of-orientations))
	(c-hog-image (hog-image->c-hog-image-sharing-data! hog-image)))
  (when normalized? (normalize-c-hog-image! c-hog-image))
  (free c-hog-image)
  (let ((rendered-image (hog-image->image hog-image 7)))
   (show-image rendered-image)
   (imlib:free image)
   (free-hog-image hog-image)
   (imlib:free rendered-image))))

(define (hog-descriptors->hog-descriptor-model hog-descriptors)
 (let ((numbers-of-orientations
	(map (lambda (hog-descriptor)
	      (quotient
	       (vector-length (hog-descriptor-gradients hog-descriptor)) 4))
	     hog-descriptors)))
  (unless (= (length (remove-duplicates numbers-of-orientations)) 1)
   (panic "different numbers of orientations"))
  (let ((hog-descriptor-model
	 (allocate-hog-descriptor-model
	  (length hog-descriptors) (first numbers-of-orientations))))
   (for-each-indexed
    (lambda (hog-descriptor i)
     (set-hog-descriptor-model-x!
      hog-descriptor-model i (hog-descriptor-x hog-descriptor))
     (set-hog-descriptor-model-y!
      hog-descriptor-model i (hog-descriptor-y hog-descriptor))
     (for-each-n
      (lambda (index)
       (set-hog-descriptor-model-gradient!
	hog-descriptor-model i index
	(vector-ref (hog-descriptor-gradients hog-descriptor) index)))
      (vector-length (hog-descriptor-gradients hog-descriptor))))
    hog-descriptors)
   hog-descriptor-model)))

(define (hog-descriptors-box hog-descriptors pitch)
 (let* ((min-x (- (* pitch
		     (map-reduce min infinity hog-descriptor-x hog-descriptors))
		  (quotient pitch 2)))
	(max-x (+ (* pitch
		     (map-reduce
		      max minus-infinity hog-descriptor-x hog-descriptors))
		  (quotient pitch 2)))
	(min-y (- (* pitch
		     (map-reduce min infinity hog-descriptor-y hog-descriptors))
		  (quotient pitch 2)))
	(max-y (+ (* pitch
		     (map-reduce
		      max minus-infinity hog-descriptor-y hog-descriptors))
		  (quotient pitch 2))))
  (make-line-segment (vector min-x min-y) (vector max-x max-y))))

(define (hog-descriptors->image hog-descriptors half-hog-size)
 (let* ((size (+ (* 2 half-hog-size) 1))
	(box (hog-descriptors-box hog-descriptors size))
	(width (- (x (q box)) (x (p box))))
	(height (- (y (q box)) (y (p box))))
	(image (imlib-create-image width height)))
  (imlib-context-set-image! image)
  (imlib-context-set-anti-alias! #t)
  (imlib-context-set-color! 0 0 0 255)
  (imlib-image-fill-rectangle 0 0 width height)
  (for-each-indexed
   (lambda (hog-descriptor i)
    (let ((descriptor-image
	   (descriptor->image
	    (hog-descriptor-gradients hog-descriptor) half-hog-size #f)))
     (imlib-context-set-image! image)
     (imlib-blend-image-onto-image
      descriptor-image 0
      0 0 size size
      (- (* size (hog-descriptor-x hog-descriptor)) (x (p box)) half-hog-size)
      (- (* size (hog-descriptor-y hog-descriptor)) (y (p box)) half-hog-size)
      size size)
     (imlib-free-images-and-decache (list descriptor-image))))
   hog-descriptors)
  image))

(define (show-hog-descriptors hog-descriptors)
 ;; needs work: somewhere there is an off by one error
 ;; needs work: why gap in middle
 ;; needs work: alpha blend
 (let* ((image (hog-descriptors->image hog-descriptors 20)))
  (show-image image)
  (imlib:free image)))
