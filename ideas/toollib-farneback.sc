(MODULE TOOLLIB-FARNEBACK)

(include "QobiScheme-AD.sch")
(include "toollib-c-macros.sch")
(include "toollib-farneback.sch")
(c-include "Imlib2.h")
(c-include "toollib-farneback-c.h")
(c-ffi:add-custom-type imlib-image pointer make-imlib-image imlib-image-handle)

(define c-run-farneback-on-video
 (c-function void ("run_farneback_on_video"
		   pointer pointer pointer pointer double int int int int double)))

(define c-run-farneback-on-imlib
 (c-function void ("run_farneback_on_imlib"
		   imlib-image imlib-image pointer int float int int int int double)))

(define c-farneback-avg-flow-magnitude-in-box
 (c-function float ("farneback_avg_flow_magnitude_in_box"
		    pointer int int int int int)))

(define c-compute-farneback-integral-flow-magnitude
 (c-function void ("compute_farneback_integral_flow_magnitude"
		   pointer pointer int int)))

(define c-compute-farneback-integral-flow
 (c-function void ("compute_farneback_integral_flow"
		   pointer pointer int int)))

(define c-average-flow-magnitude-in-rect
 (c-function float ("average_flow_magnitude_in_rect"
		    pointer int int int int int int)))

(define c-average-flow-in-rect
 (c-function void ("average_flow_in_rect"
		   pointer int int int int int int pointer)))

(define copy-flow
 (c-function void ("copy_flow"
		   pointer pointer int int)))

(define (run-farneback-on-imlib imlib-image1
				imlib-image2
				prev-c-flow
				pyr-scale
				levels
				winsize
				iterations
				poly-n
				poly-sigma)
 (let* ((width (imlib:width imlib-image1))
	(height (imlib:height imlib-image1))
	(flow-mat ((c-function pointer ("malloc" int))
		   (* height width 2 c-sizeof-float))))
  (if prev-c-flow
      (copy-flow prev-c-flow
		 flow-mat
		 width
		 height))
  (c-run-farneback-on-imlib imlib-image1
			    imlib-image2
			    flow-mat
			    (if prev-c-flow 1 0)
			    pyr-scale
			    levels
			    winsize
			    iterations
			    poly-n
			    poly-sigma)
  flow-mat))

(define (compute-farneback-integral-flow-magnitude flow-pointer
						   width
						   height)
 (let* ((integral-flow-magnitude-mat ((c-function pointer ("malloc" int))
				      (* height width c-sizeof-float))))
  
  (c-compute-farneback-integral-flow-magnitude flow-pointer
					       integral-flow-magnitude-mat
					       width
					       height)
  integral-flow-magnitude-mat))

(define (compute-farneback-integral-flow flow-pointer
					 width
					 height)
 (let* ((integral-flow-mat ((c-function pointer ("malloc" int))
			    (* height 2 width c-sizeof-float))))
  (c-compute-farneback-integral-flow flow-pointer
				     integral-flow-mat
				     width
				     height)
  integral-flow-mat))

(define (average-flow-in-rect integral-flow-pointer
			      width
			      height
			      x1
			      y1
			      x2
			      y2)
 (let* ((output (malloc (* c-sizeof-float 2)))
	(foo (c-average-flow-in-rect integral-flow-pointer
				     width
				     height
				     x1
				     y1
				     x2
				     y2
				     output))
	(out-vector (c-inexact-array->vector output c-sizeof-float 2 #t)))
  (free output)
  out-vector))

(define (run-farneback-integral-on-imlib imlib-image1
					 imlib-image2
					 prev-c-flow
					 pyr-scale
					 levels
					 winsize
					 iterations
					 poly-n
					 poly-sigma)
 (let* ((flow (run-farneback-on-imlib imlib-image1
				      imlib-image2
				      prev-c-flow
				      pyr-scale
				      levels
				      winsize
				      iterations
				      poly-n
				      poly-sigma)))
  (list flow
	(compute-farneback-integral-flow-magnitude flow
						   (imlib:width imlib-image1)
						   (imlib:height imlib-image1))
	(compute-farneback-integral-flow flow
					 (imlib:width imlib-image1)
					 (imlib:height imlib-image1)))))

(define (run-farneback-on-video video-pathname
				pyr-scale
				levels
				winsize
				iterations
				poly-n
				poly-sigma
				use-prev?)
 ;; suggested arguments: (run-farneback-on-video "videopathname" .5 5 8 20 5 1.1)
 ;; allocates memory and trusts that whoever uses the output pointer list will free them
 (let* ((previous-im (make-imlib-image #f))
	(next-im (make-imlib-image #f))
	(flow-movie '()))
  (for-each-imlib-frame-from-video-indexed
   (lambda (frame index image)
    (when (= index 0)
     (set-imlib-image-handle! previous-im (imlib-image-handle image)))
    (when (= index 1)
     (set-imlib-image-handle! next-im (imlib-image-handle image)))
    (when (> index 1)
     (imlib:free-and-decache previous-im)
     (set-imlib-image-handle! previous-im (imlib-image-handle next-im))
     (set-imlib-image-handle! next-im (imlib-image-handle image))
     )
    (when (> index 0)
     (set! flow-movie (cons (run-farneback-integral-on-imlib previous-im
							     next-im
							     (if (or (null? flow-movie)
								     (not use-prev?))
								 #f
								 (first (first flow-movie)))
							     pyr-scale
							     levels
							     winsize
							     iterations
							     poly-n
							     poly-sigma)
			    flow-movie))))
   (make-stand-alone-video video-pathname))
  (imlib:free-and-decache previous-im)
  (imlib:free-and-decache next-im)
  (reverse flow-movie)))
