(MODULE TOOLLIB-HOG-HMM)
(include "QobiScheme-AD.sch")
(include "toollib-c-macros.sch")
(include "toollib-hog-hmm.sch")
(c-include "toollib-hog-c.h")
(c-include "idealib-c.h")
(c-include "toollib-hog-hmm-c.h")
(c-include "stlib-c.h")

(define-structure scheme-hog-hmm initial-state-distribution transition-matrix states-hog-models sigmoid-threshold objective)

(define-structure scheme-hmm initial-state-distribution transition-matrix states-output-models sigmoid-threshold feature-types feature-lengths bin-lengths objective discrete-min-max)

(define *sigmoid-a* 0)
(define *sigmoid-b* 10)
(define *margin-param* 1)
(define *minimum-state-duration* #f)
(define *detector-cost-weight* 2)
(define *flow-sigmoid-a* .5)
(define *flow-sigmoid-b* 7)

(define (scheme-hmm-states-hog-models scheme-hmm)
 (if (equal? (first (scheme-hmm-feature-types scheme-hmm)) 'hog)
     (x (scheme-hmm-states-output-models scheme-hmm))
     (panic "this hmm doesn't include hog features")))

(define *featuretypes*
 (list 'hog
       'flow-grid
       'flow-magnitude
       'flow-avg-magnitude
       'flow-avg-orientation
       'aspect-ratio
       'daspect-ratio/dframe
       'velocity-magnitude
       'velocity-orientation
       'acceleration-magnitude
       'acceleration-orientation
       'area
       'darea/dframe
       'augmented-flow-grid))

(define (feature-type->int feature-type)
 (case feature-type
  ((hog)
   0)
  ((flow-grid)
   1)
  ((flow-magnitude)
   2)
  ((flow-avg-magnitude)
   3)
  ((flow-avg-orientation)
   4)
  ((aspect-ratio)
   5)
  ((daspect-ratio/dframe)
   6)
  ((velocity-magnitude)
   7)
  ((velocity-orientation)
   8)
  ((acceleration-magnitude)
   9)
  ((acceleration-orientation)
   10)
  ((area)
   11)
  ((darea/dframe)
   12)
  ((augmented-flow-grid)
   13)))

(define *model-types*
 (list 'dot
       'gaussian
       'radial
       'discrete))

(define (model-type->int model-type)
 (case model-type
  ((dot)
   0)
  ((gaussian)
   1)
  ((radial)
   2)
  ((discrete)
   3)))

(define (model-type feature-type)
 (case feature-type
  ((hog)
   'dot)
  ((flow-grid)
   'dot)
  ((flow-magnitude)
   'discrete)
  ((flow-avg-magnitude)
   'discrete)
  ((flow-avg-orientation)
   'discrete)
  ((aspect-ratio)
   'discrete)
  ((daspect-ratio/dframe)
   'discrete)
  ((velocity-magnitude)
   'discrete)
  ((velocity-orientation)
   'discrete)
  ((acceleration-magnitude)
   'discrete)
  ((acceleration-orientation)
   'discrete)
  ((area)
   'discrete)
  ((darea/dframe)
   'discrete)
  ((augmented-flow-grid)
   'dot)))

;; (define (old-compute-features-min-max video-paths track-models track-numbers width height)
;;  (let* ((data  (map (lambda (video-path track-model track-number)
;; 		     (extract-features video-path track-model track-number #f #t
;; 				       width
;; 				       height
;; 				       (list 'flow-magnitude
;; 					     'flow-avg-magnitude
;; 					     'flow-avg-orientation
;; 					     'aspect-ratio
;; 					     'daspect-ratio/dframe
;; 					     'velocity-magnitude
;; 					     'velocity-orientation
;; 					     'acceleration-magnitude
;; 					     'acceleration-orientation
;; 					     'area
;; 					     'darea/dframe)))
;; 		    video-paths track-models track-numbers))
;; 	(fs (map-vector (lambda (f-vs) (join (vector->list (map-vector vector->list f-vs))))
;; 			(transpose (list->vector data)))))
;;   (transpose (vector (map-vector minimum fs)
;; 		     (map-vector maximum fs)))))

(define (compute-features-min-max videos-fvvs feature-types)
 (let ((features-videos-fvs (transpose (list->vector videos-fvvs))))
  (vector (map-vector
	   (lambda (feature-videos-fvs feature-type)
	    (if (equal? (dtrace "feature type:"(model-type feature-type)) 'discrete)
		(minimum-vector (map-vector minimum-vector feature-videos-fvs))
		#f))
	   features-videos-fvs feature-types)
	  (map-vector
	   (lambda (feature-videos-fvs  feature-type)
	    (if (equal? (model-type feature-type) 'discrete)
		(maximum-vector (map-vector maximum-vector feature-videos-fvs))
		#f))
	   features-videos-fvs  feature-types))))


(define *features-min-max*
`#(,`#(0.268238919793703 1.811986676291995)
     ,`#(-0.05373012624880946 0.05642578416720112)
     ,`#(0. 18.69820600729543)
     ,`#(-3.141583870440497 3.141592653589793)
     ,`#(0. 2.705756223013338)
     ,`#(-3.141589184138924 3.141592653589793)
     ,`#(0.1311048135149885 6.699234299587097)
     ,`#(-0.2557860959632547 0.3331705925832544)))

(define (discretize-feature f f-min f-max bins)

 (cond
  ((<= f f-min)
     0)
  ((>= f f-max)
   (exact-round (- bins 1)))
  (else
  (exact-floor (* (/ (- f f-min) (- f-max f-min)) bins)))))

(define (random-in-range min max)
(+ (* (random-real) (- max min)) min))

(define (random-sum0-unit-vector len)
 (let* ((v (unit (map-n-vector (lambda (x) (* 2 (- (random-real) .5))) len)))
	(s (/ (reduce-vector + v 0) len))
	(v2 (unit (map-vector (lambda (x) (- x s)) v))))
	;;(s2 (reduce-vector + v2 0)))
  v2))

(define (normalize-sum0 v)
 (let* ((s (/ (reduce-vector + v 0) (vector-length v))))
  (unit (map-vector (lambda (x) (- x s)) v))))


(define *unit-initialize-output?* #f)
(define *pure-negative-initialize-output?* #f)

(define (random-output-parameter-matrix model-types feature-lengths bin-lengths)
 (map-vector
  (lambda (type feature-length bin-length)
   (case type
    ((dot)
     (if *pure-negative-initialize-output?*
	 (unit (map-n-vector
	   (lambda (j)
	    -1);;(- (random-real) 1));;(* 2 (- (random-real) .5)))
	   feature-length))
     (if *unit-initialize-output?*
	 (random-sum0-unit-vector feature-length)
	 (unit
	  (map-n-vector
	   (lambda (j)
	    (* 2 (- (random-real) .5)));;(- (random-real) 1));;(* 2 (- (random-real) .5)))
	   feature-length))))
     )
    ((gaussian)
     (if (not (equal? feature-length 1))
	 (panic "")
	 (vector (random-real) ;; mean in [0 1]
		 (+ (random-real) 5)))) ;;variance in [1 2]
    ((radial)
     (if (not (equal? feature-length 1))
	 (panic "")
     (vector (- (* (random-real) 2 pi) pi) ;; mean in [-pi pi]
	     (random-real))))
    ((discrete)
     (if (not (equal? feature-length 1))
	 (panic "")
	 (normalize (map-n-vector (lambda (i) (random-real)) bin-length))))))
  model-types feature-lengths bin-lengths))

(define (uniform-output-parameter-matrix model-types feature-lengths bin-lengths)
 (map-vector
  (lambda (type feature-length bin-length)
   (case type
    ((dot)
     (unit
      (map-n-vector
       (lambda (j)
	-1)
       feature-length)))
    ((gaussian)
     (if (not (equal? feature-length 1))
	 (panic "")
	 (vector (random-real) ;; mean in [0 1]
		 (+ (random-real) 5)))) ;;variance in [1 2]
    ((radial)
     (if (not (equal? feature-length 1))
	 (panic "")
     (vector (- (* (random-real) 2 pi) pi) ;; mean in [-pi pi]
	     (random-real))))
    ((discrete)
     (if (not (equal? feature-length 1))
	 (panic "")
	 (normalize (map-n-vector (lambda (i) 1) bin-length))))))
  model-types feature-lengths bin-lengths))

(define hog (c-function pointer ("hog" pointer int int int int int)))

(define (vector-clip v) (map-vector (lambda (e) (if (< e 1e-150) 1e-150 e)) v))

(define (normalize v)
 (let ((sum (reduce-vector + v 0)))
  (map-vector (lambda (e)
	       (/ e sum))
	      v)))

(define (imlib-image->hog-image image pitch number-of-orientations)
 (imlib-context-set-image! image)
 (let* ((pnm-buffer (make-pnm-buffer (imlib:data-ptr-read-only image)
                                     (imlib:width image)
                                     (imlib:height image)
                                     "BGR0"
                                     8
                                     'color))
        (hog-image
         ;; TODO Technically this is wrong, as it includes the alpha channel as
	 ;; a potential feature, but it should be uniform anyway.
         (hog
          (pnm-buffer-buffer pnm-buffer)
          (pnm-buffer-height pnm-buffer)
	  (pnm-buffer-width pnm-buffer)
          (pixfmt->stride (pnm-buffer-pixfmt pnm-buffer))
          pitch number-of-orientations))
        (height (- (exact-floor (/ (pnm-buffer-height pnm-buffer) pitch)) 2))
        (width (- (exact-floor (/ (pnm-buffer-width pnm-buffer) pitch)) 2)))
 ;; (free-pnm-buffer! pnm-buffer)
  (make-hog-image hog-image width height pitch number-of-orientations)))

(define (generate-random-negative-track video-path positive-tracks max-overlap)
 (let* ((video (ffmpeg-open-video
		(guess-video-extension video-path)))
	(video-width (dtrace "width" (ffmpeg-video-width video)))
	(video-height (dtrace "height" (ffmpeg-video-height video)))
	(min-width (exact-round (* (min video-width video-height) 0.1)))
	(max-width (exact-round (* (min video-width video-height) 0.8)))
	(scale (/ 1280 video-width)))
  (ffmpeg-close-video video)
  (let ((boxes (let loop ((positive-tracks positive-tracks)
	     (random-boxes '()))
   (if (some null? positive-tracks)
       (reverse random-boxes)
   (let ((box
	  (let subloop ((positive-boxes (map first positive-tracks)))
	   (let* ((width (random-in-range min-width max-width))
		  (x1 (random-in-range 0 (- video-width width)))
		  (y1 (random-in-range 0 (- video-height width)))
		  (x2 (+ x1 width))
		  (y2 (+ y1 width))
		  (random-box (make-voc4-detection (* x1 scale)
						   (* y1 scale)
						   (* x2 scale)
						   (* y2 scale)
						   (list (list ))
						   #f -1 -1 -1 "")))
	    (if (some (lambda (positive-box)
		       (> (voc4-detection-intersection-divided-by-union positive-box
									random-box)
			  max-overlap))
		      positive-boxes)
		(begin
		 (dtrace "too much overlap. retrying" "")
		(subloop positive-boxes))
		random-box)))))
    (loop (map rest positive-tracks)
	  (cons box random-boxes)))))))
   (write-voc4-overgenerated-smooth-tracked-box-movie boxes (load-darpa-video (dtrace "writing random track for video" (guess-video-extension video-path))) "random" 0)
   boxes)))

(define (null-box? box)
  (when (not (voc4-detection? box))
   (panic "box is not a box"))
  (or (< (voc4-detection-x2 box) 2)
      (< (voc4-detection-y2 box) 2)
      (< (- (voc4-detection-y2 box) (voc4-detection-y1 box))
	 16)
      (< (- (voc4-detection-x2 box) (voc4-detection-x1 box))
	 16)
      (and (= (voc4-detection-x1 box) -1)
	   (= (voc4-detection-x2 box) 0)
	   (= (voc4-detection-y1 box) 0)
	   (= (voc4-detection-y2 box) 0))
      (and (< (voc4-detection-x1 box) 1)
	   (< (voc4-detection-x2 box) 1)
	   (< (voc4-detection-y1 box) 1)
	   (< (voc4-detection-y2 box) 1))))

;; (define (guess-video-extension video-name)
;;  ;; this guesses the video extension of video paths
;;  (if (file-exists? (string-append video-name ".mov"))
;;      (string-append video-name ".mov")
;;      (if (file-exists? (string-append video-name ".avi"))
;; 	 (string-append video-name ".avi")
;; 	 (if (file-exists? (string-append video-name ".MOV"))
;; 	     (string-append video-name ".MOV")
;; 	     (fuck-up)))))

(define (guess-video-extension video-name)
 ;; this guesses the video extension of video paths
 (if (file-exists? (string-append video-name ".mpg"))
     (string-append video-name ".mpg")
     (if (file-exists? (string-append video-name ".mov"))
	 (string-append video-name ".mov")
	 (if (file-exists? (string-append video-name ".avi"))
	     (string-append video-name ".avi")
	     (if (file-exists? (string-append video-name ".MOV"))
		 (string-append video-name ".MOV")
		 (fuck-up))))))

(define (hog-image->fv hog-image)
 (list->vector
  (join
  (join
   (map-n
    (lambda (i)
     (map-n
      (lambda (j)
       (vector->list (hog-image-ref hog-image i j)))
      (hog-image-width hog-image)))
    (hog-image-height hog-image))))))

(define (hog-image->fv-faster hog-image)
 (let* ((width (hog-image-width hog-image))
	(height (hog-image-height hog-image))
	(fv (make-vector (* width
			    height
			    36)
			 0)))
  (for-each-n
    (lambda (i)
     (for-each-n
      (lambda (j)
       (let ((p (hog-image-ref hog-image i j)))
       (for-each-n
	(lambda (k)
	 (vector-set! fv
		      (+ (* 36 width i) (* 36 j) k)
		      (vector-ref p k)))
	36)))
      width))
    height)
  fv))

(define (hog-image->fv-fastest fv hog-image)
 (let* ((width (hog-image-width hog-image))
	(height (hog-image-height hog-image)))
 (for-each-n
    (lambda (i)
     (for-each-n
      (lambda (j)
       (let ((p (hog-image-ref hog-image j i)))
       (for-each-n
	(lambda (k)
	 (vector-set! fv
		      (+ (* 36 width i) (* 36 j) k)
		      (vector-ref p k)))
	36)))
      width))
    height)
  fv))

(define *foo* 1)

(define (make-voc4-box-a-square box)
 (let* ((y1 (voc4-detection-y1 box))
	(x1 (voc4-detection-x1 box))
	(y2 (voc4-detection-y2 box))
	(x2 (voc4-detection-x2 box))
	(box-width (- x2 x1))
	(box-height (- y2 y1))
	(box-center-x (+ x1 (/ box-width 2)))
	(box-center-y (+ y1 (/ box-height 2)))
	(square-width (max box-width box-height))
	(x (- box-center-x (/ square-width 2)))
	(y (- box-center-y (/ square-width 2)))
	(new-box (deep-copy box)))
  (set-voc4-detection-x1! new-box x)
  (set-voc4-detection-y1! new-box y)
  (set-voc4-detection-x2! new-box (+ x square-width))
  (set-voc4-detection-y2! new-box (+ y square-width))
  new-box))

(define (invalid-box? box width height)
 (if (or (null-box? box)
	 (let ((y1 (exact-round
		    (* (voc4-detection-y1 box)
		       (/ width 1280))))
	       (x1 (exact-round
		    (* (voc4-detection-x1 box)
		       (/ width 1280))))
	   (y2 (exact-round
		(* (voc4-detection-y2 box)
		   (/ width 1280))))
	   (x2 (exact-round
		(* (voc4-detection-x2 box)
		   (/ width 1280)))))
	  (or (>= x1 (- width 16))
	      (>= y1 (- height 16))
	      (< x2 16)
	      (< y2 16))))
     #t;;(dtrace "invalid!" #t)
     #f))

(define (squarify-voc4-detection box)
 (let* ((y1 (voc4-detection-y1 box))
	(x1 (voc4-detection-x1 box))
	(y2 (voc4-detection-y2 box))
	(x2 (voc4-detection-x2 box))
	(box-width (- x2 x1))
	(box-height (- y2 y1))
	(box-center-x (+ x1 (/ box-width 2)))
	(box-center-y (+ y1 (/ box-height 2)))
	(square-width (max box-width box-height))
	(x (- box-center-x (/ square-width 2)))
	(y (- box-center-y (/ square-width 2))))
  (make-voc4-detection x
		       y
		       (+ x square-width)
		       (+ y square-width)
		       '()
		       -1 (voc4-detection-strength box) -1 -1 -1)))

(define (cached-feature-pathname video-path track-model track-number
				 type cropped-width flow-grid-size)
(cond ((equal? type 'hog)
       (format #f "~a/cached-~a-~a-~a-~a.sc"
	       video-path type cropped-width
	       track-model track-number))
      ((equal? type 'flow-grid)
       (format #f "~a/cached-~a-~a-~a-~a.sc"
	       video-path type flow-grid-size
	       track-model track-number))
      ((equal? type 'augmented-flow-grid)
       (format #f "~a/cached-~a-~a-~a-~a.sc"
	       video-path type flow-grid-size
	       track-model track-number))
      (else
       (format #f "~a/cached-~a-~a-~a.sc"
	       video-path type
	       track-model track-number))))

(define (feature-cached? video-path track-model track-number
			 type cropped-width flow-grid-size)
(dtrace "cached?" (and (file-exists? (dtrace "cache path:"(cached-feature-pathname video-path track-model track-number
				 type cropped-width flow-grid-size)))
		       (equal? (dtrace "validity check:"
				       (system-output (format #f "tail -n 1 ~a | grep ')' | wc -l"
						     (cached-feature-pathname video-path track-model track-number
				 type cropped-width flow-grid-size))))
			       (list "1")))))

(define (load-cached-feature  video-path track-model track-number
			      type cropped-width flow-grid-size)

 (read-object-from-file (cached-feature-pathname video-path track-model track-number
				 type cropped-width flow-grid-size)))

(define (cache-feature feature video-path track-model track-number
		       type cropped-width flow-grid-size)
(write-object-to-file
 feature
 (dtrace "caching to:" (cached-feature-pathname video-path track-model track-number
				 type cropped-width flow-grid-size)))
feature)


(define (c-cached-feature-pathname video-path track-model track-number
				 type cropped-width flow-grid-size)
(cond ((equal? type 'hog)
       (format #f "~a/c-cached-~a-~a-~a-~a.sc"
	       video-path type cropped-width
	       track-model track-number))
      ((equal? type 'flow-grid)
       (format #f "~a/c-cached-~a-~a-~a-~a.sc"
	       video-path type flow-grid-size
	       track-model track-number))
      ((equal? type 'augmented-flow-grid)
       (format #f "~a/c-cached-~a-~a-~a-~a.sc"
	       video-path type flow-grid-size
	       track-model track-number))
      (else
       (format #f "~a/c-cached-~a-~a-~a.sc"
	       video-path type
	       track-model track-number))))

(define *caching?* #f)

(define (feature-c-cached? video-path track-model track-number
			 type cropped-width flow-grid-size)
(dtrace "cached?" (and *caching?*
		       (file-exists? (dtrace "cache path:"(c-cached-feature-pathname video-path track-model track-number
				 type cropped-width flow-grid-size))))
		       ))

(define read-c-cache-file-in-c
 (c-function int ("read_c_cache_file" pointer pointer pointer pointer pointer)))

(define (read-c-cache-file file)
 (let* ((data-array-pointer (malloc c-sizeof-long))
	(frames-pointer (malloc c-sizeof-int))
	(feature-length-pointer (malloc c-sizeof-int))
	(orientations-pointer (malloc c-sizeof-int))
	(valid (read-c-cache-file-in-c file data-array-pointer frames-pointer feature-length-pointer orientations-pointer))
	(frames
			(if (= valid 1)
			    (x (c-exact-array->vector frames-pointer c-sizeof-int 1 #t))
			    #f))
	(feature-length
				(if (= valid 1)
				    (x (c-exact-array->vector feature-length-pointer c-sizeof-int 1 #t))
				    #f))
	(orientations
			      (if (= valid 1)
				  (x (c-exact-array->vector orientations-pointer c-sizeof-int 1 #t))
				  #f))
	(data-pointer
			      (if (= valid 1)
				  (x (c-exact-array->vector data-array-pointer c-sizeof-long 1 #t))
				  #f))
	(fvs
	 (if
	  (= valid 1)
	  (if
	   (and (= feature-length 1) (= orientations 1))
	   (c-inexact-array->list data-pointer c-sizeof-double frames #t)
	   (map-n
	    (lambda (frame)
	     (map-n-vector (lambda (orientation)
		   (c-inexact-array->vector (+ data-pointer
					     (* frame feature-length orientations c-sizeof-double)
					     (* feature-length orientation c-sizeof-double))
					     c-sizeof-double feature-length #t))
		  orientations))
	    frames))
	  #f)))
  ;; (dtrace "magnitudes"
	  (map
	   (lambda (frame)
	    (map-vector magnitude frame))
	   fvs);)
  (free frames-pointer)
  (free feature-length-pointer)
  (free orientations-pointer)
  (free data-pointer)
  fvs))

(define write-c-cache-file-in-c
 (c-function int ("write_c_cache_file" pointer pointer int int int)))

(define (write-c-cache-file file fvs frames feature-length orientations)
 (let* ((c-data-pointer  (malloc (* c-sizeof-double frames feature-length orientations)))
	(foo
	 (if (and (= feature-length 1) (= orientations 1))
	     (list->c-inexact-array c-data-pointer fvs c-sizeof-double #t)
	     (for-each-indexed
	      (lambda (frame-fvs frame)
	       (for-each-indexed-vector
		(lambda (fv orientation)
		 (vector->c-inexact-array (exact-round (+ c-data-pointer
					     (* frame feature-length orientations c-sizeof-double)
					     (* feature-length orientation c-sizeof-double)))
					   fv
					  c-sizeof-double #t))
		frame-fvs))
	      fvs)))
	(foo (write-c-cache-file-in-c file c-data-pointer frames feature-length orientations)))
  (free c-data-pointer)))

(define (load-c-cached-feature  video-path track-model track-number
			      type cropped-width flow-grid-size)
(if (feature-c-cached? video-path track-model track-number
			 type cropped-width flow-grid-size)
 (read-c-cache-file (c-cached-feature-pathname video-path track-model track-number
				 type cropped-width flow-grid-size))
 #f))

(define (c-cache-feature feature video-path track-model track-number
		       type cropped-width flow-grid-size)
 ;;(dtrace "" feature)

 (let ((frames (dtrace "frames" (length feature)))
       (orientations (dtrace "os" (if (vector? (first feature))
				      (vector-length (first feature))
				      1)))
       (feature-length (dtrace "len" (if (vector? (first feature))
					 (vector-length (x (first feature)))
					 1))))
(write-c-cache-file
 (dtrace "caching to:" (c-cached-feature-pathname video-path track-model track-number
				 type cropped-width flow-grid-size))
 feature
 frames
 feature-length
 orientations)
feature))


(define *bad* -1e20)

(define (compute-video-hog-fv video-path boxes track-model track-number
			      cropped-width symmetric?)
 (let ((fv (load-c-cached-feature video-path track-model track-number 'hog cropped-width #f)))
  (if fv
      fv
      (c-cache-feature
  (let* ((video (ffmpeg-open-video
		(guess-video-extension video-path)))
	(width (dtrace "width" (ffmpeg-video-width video)))
	(height (dtrace "height" (ffmpeg-video-height video)))
	(cropped-height cropped-width)
	(feature-length (* 36 (sqr (- (exact-round (/ cropped-width 8)) 2))))
	;; (boxes (list->vector (read-voc4-overgenerated-smooth-tracked-boxes
	;; 		      (load-darpa-video (guess-video-extension video-path))
	;; 		      track-model
	;; 		      track-number)))
	(fvv ;;(removeq #f
		      (map-imlib-frame-from-video-indexed
		       (lambda (frame-number frame-index imlib-image)
			(imlib-context-set-image! imlib-image)
			(imlib-image-set-has-alpha! 1)
			(if (invalid-box? (vector-ref boxes frame-index) width height)
			    (begin (imlib:free-and-decache imlib-image)
				   (dtrace "invalid box!:"(vector-ref boxes frame-index))
				   (vector (make-vector feature-length *bad*)
					   (make-vector feature-length *bad*)))
			;;(show-image imlib-image)
			(let* ((box (vector-ref boxes frame-index))
			       (y1 (exact-round
				    (* (voc4-detection-y1 box)
				       (/ width 1280))))
			       (x1 (exact-round
				    (* (voc4-detection-x1 box)
				       (/ width 1280))))
			       (y2 (exact-round
				    (* (voc4-detection-y2 box)
				       (/ width 1280))))
			       (x2 (exact-round
				    (* (voc4-detection-x2 box)
				       (/ width 1280))))
			       ;; (foo (imlib:draw-rectangle
			       ;; 	     imlib-image
			       ;; 	     x1 y1 (- x2 x1) (- y2 y1) `#(0 255 0)))
			       (box-width (- x2 x1))
			       (box-height (- y2 y1))
			       (box-center-x (+ x1 (/ box-width 2)))
			       (box-center-y (+ y1 (/ box-height 2)))
			       (square-width (dtrace "square width" (max box-width box-height)))
			       (x (- box-center-x (/ square-width 2)))
			       (y (- box-center-y (/ square-width 2)))
			       ;; (foo (imlib:draw-rectangle
			       ;; 	     imlib-image
			       ;; 	     x y (+ x square-width) (+ y square-width) `#(0 0 255)))
			       ;; (foo (show-image imlib-image))
			       (p->prime (if (not (invalid-box? box width height))
					     (lambda (p) (vector  (* (- (vector-ref p 0) x) (/ cropped-width square-width))
							      (* (- (vector-ref p 1) y) (/ cropped-width square-width))))))
			       (topleft  (if (not (invalid-box? box width height)) (p->prime (vector 0 0))))
			       (bottom-right  (if (not (invalid-box? box width height)) (p->prime (vector width height))))
			       ;; (image-center (dtrace "image center"(p->prime (vector box-center-x box-center-y))))
			       (cropped (if (not (invalid-box? box width height))
					    (imlib:create cropped-width cropped-width)))
			       (removing-garbage
				(when (and #t (not (invalid-box? box width height)))
				 (imlib-context-set-image! cropped)
				 (imlib-image-set-has-alpha! 1)
				 (imlib:fill-rectangle
				     cropped
				     0 0
				     cropped-width cropped-width
				     `#(0 0 0))))
			       (foo (unless (invalid-box? box width height)
				    (imlib:blend cropped
						 imlib-image
						 #f
						 x
						 y
						 (min square-width (- width x))
						 (min square-width (- height y))
						 0
						 0
						 (min cropped-width (vector-ref bottom-right 0))
						 (min cropped-width (vector-ref bottom-right 1)))))
			       (flipped (if (not (invalid-box? box width height))
					    (if symmetric?
					    (imlib:clone cropped)
					    #f)))
			       (foo (if (not (invalid-box? box width height))(if symmetric?
					(imlib:flip-horizontal flipped)
					#f)))
			       (hog-image (if (not (invalid-box? box width height))
					      (imlib-image->hog-image cropped 8 9)))
			       (hog-image-flipped (if (not (invalid-box? box width height))
						      (if flipped
						      (imlib-image->hog-image flipped 8 9)
						      #f)))
			       (fv (if (not (invalid-box? box width height))
				       (hog-image->fv-faster hog-image)))
			       (fv-flipped (if (not (invalid-box? box width height))
					       (if flipped
					       (hog-image->fv-faster hog-image-flipped)
					       #f))))
			 (dtrace "hog box:" (list x y (+ x square-width) (+ y square-width)))
			 (when #f
			  (imlib:save cropped
				      (format #f "/tmp/cropped~a-~a.png"
					      *foo* (number->padded-string-of-length frame-index 6)))

			  (imlib:save (hog-fvv->hog-image fv cropped-width)
				      (format #f "/tmp/hog~a-~a.png"
					      *foo* (number->padded-string-of-length frame-index 6)))
			  )
			 (imlib:free-and-decache imlib-image)
			 (when (not (invalid-box? box width height))
			  (imlib:free-and-decache cropped)
			  (free-hog-image hog-image)
			  (when flipped
			   (imlib:free-and-decache flipped)
			   (free-hog-image hog-image-flipped)))
			 (if (invalid-box? box width height)
			     (dtrace "invalid box, not using this frame"
				     (vector (make-vector feature-length *bad*)
					     (make-vector feature-length *bad*)))
			     (if (= (magnitude fv) 0)
				 (dtrace "box has zero edge energy!, ignoring it"
					 (vector (make-vector feature-length *bad*)
						 (make-vector feature-length *bad*)))
				 (if flipped
				     (vector (unit fv)
					     (unit fv-flipped))
				     (unit fv)))))))
		       (load-darpa-video (guess-video-extension video-path)))));)
  (dtrace "closing video" "")
  (ffmpeg-close-video video)
  fvv)
  video-path track-model track-number 'hog cropped-width #f))))

(define c-fv-mins-max
 (c-function void ("compute_video_features_min_max" int int pointer pointer pointer pointer)))

(define c-discretize-fvs
 (c-function void ("discretize_fvs" int int pointer pointer pointer pointer pointer)))


(define (compute-c-fv-min-max-in-c c-fvs
				   frames
				   number-of-features
				   feature-lengths)
 (let* ((c-mins (malloc (* c-sizeof-double number-of-features)))
	(c-maxes (malloc (* c-sizeof-double number-of-features)))
	(c-feature-lengths (malloc (* c-sizeof-int number-of-features)))
	(c-feature-lengths (vector->c-exact-array c-feature-lengths
						  feature-lengths
						  c-sizeof-int
						  #f))
	(foo (c-fv-mins-max frames
			    number-of-features
			    c-feature-lengths
			    c-fvs
			    c-mins
			    c-maxes))
	(mins (c-inexact-array->vector c-mins c-sizeof-double number-of-features #t))
	(maxes (c-inexact-array->vector c-maxes c-sizeof-double number-of-features #t)))
  (free c-mins)
  (free c-maxes)
  (free c-feature-lengths)
  (vector mins maxes)))

(define (discretize-fvs-in-c! c-fvs
			     frames
			     number-of-features
			     feature-lengths
			     bin-lengths
			     mins
			     maxes)
 (let* ((c-feature-lengths (malloc (* c-sizeof-int number-of-features)))
	(c-feature-lengths (vector->c-exact-array c-feature-lengths
						  feature-lengths
						  c-sizeof-int
						  #f))
	(c-bin-lengths (malloc (* c-sizeof-int number-of-features)))
	(c-bin-lengths (vector->c-exact-array c-bin-lengths
						  bin-lengths
						  c-sizeof-int
						  #f))
	(c-mins (malloc (* c-sizeof-double number-of-features)))
	(c-mins (vector->c-inexact-array c-mins
						 mins
						 c-sizeof-double
						 #t))
	(c-maxes (malloc (* c-sizeof-double number-of-features)))
	(c-maxes (vector->c-inexact-array c-maxes
					  maxes
					  c-sizeof-double
					  #t))
	(foo (c-discretize-fvs frames
			       number-of-features
			       c-feature-lengths
			       c-bin-lengths
			       c-fvs
			       c-mins
			       c-maxes)))
  (free c-mins)
  (free c-maxes)
  (free c-feature-lengths)
  (free c-bin-lengths)
  #f))


(define (one-track-avg-box-flow-magnitude boxes optical-flow-movie scale)
 (map
 (lambda (box flow)
  (if (null-box? box)
      *bad*
  ;;(dtrace "box" box)
  (let* ((bx1 (bound (voc4-detection-x1 box) 0 1280))
	(by1 (bound (voc4-detection-y1 box) 0 960))
	(bx2 (bound (voc4-detection-x2 box) 0 1280))
	(by2 (bound (voc4-detection-y2 box) 0 960))
	(box-width (- bx2 bx1))
	(box-height (- by2 by1)))

   (magnitude (average-integral-optical-flow-in-c
			   flow
			   (/ (* bx1 scale) 2) (/ (* by1 scale) 2)
			   (/ (* bx2 scale) 2) (/ (* by2 scale) 2))))))
 (but-last boxes) optical-flow-movie))

(define (one-track-avg-box-flow-magnitude-farneback boxes optical-flow-movie width height)

 (map
 (lambda (box flow)
  (if (null-box? box)
      *bad*
      (let* ((bx1 (* (bound (voc4-detection-x1 box) 0 1280) (/ width 1280)))
	     (by1 (* (bound (voc4-detection-y1 box) 0 960) (/ width 1280)))
	     (bx2 (* (bound (voc4-detection-x2 box) 0 1280) (/ width 1280)))
	     (by2 (* (bound (voc4-detection-y2 box) 0 960) (/ width 1280)))
	     (box-width (- bx2 bx1))
	     (box-height (- by2 by1)))
       (c-average-flow-magnitude-in-rect (second flow)
						width
						height
						bx1 by1 bx2 by2)
       )))
 (but-last boxes) optical-flow-movie))

(define (one-track-box-avg-flow-magnitude-farneback boxes optical-flow-movie width height)
 (map
 (lambda (box flow)
  (if (null-box? box)
      *bad*
      (let* ((bx1 (* (bound (voc4-detection-x1 box) 0 1280) (/ width 1280)))
	     (by1 (* (bound (voc4-detection-y1 box) 0 960) (/ width 1280)))
	     (bx2 (* (bound (voc4-detection-x2 box) 0 1280) (/ width 1280)))
	     (by2 (* (bound (voc4-detection-y2 box) 0 960) (/ width 1280)))
	     (box-width (- bx2 bx1))
	     (box-height (- by2 by1)))
       (magnitude (average-flow-in-rect (third flow)
						width
						height
						bx1 by1 bx2 by2))
       )))
 (but-last boxes) optical-flow-movie))

(define (one-track-box-avg-flow-orientation-farneback boxes optical-flow-movie width height)
 (map
 (lambda (box flow)
  (if (null-box? box)
      *bad*
      (let* ((bx1 (* (bound (voc4-detection-x1 box) 0 1280) (/ width 1280)))
	     (by1 (* (bound (voc4-detection-y1 box) 0 960) (/ width 1280)))
	     (bx2 (* (bound (voc4-detection-x2 box) 0 1280) (/ width 1280)))
	     (by2 (* (bound (voc4-detection-y2 box) 0 960) (/ width 1280)))
	     (box-width (- bx2 bx1))
	     (box-height (- by2 by1))
	     (average-flow (average-flow-in-rect (third flow)
						width
						height
						bx1 by1 bx2 by2)))
       (atan (y average-flow) (abs (x average-flow))))))
 (but-last boxes) optical-flow-movie))

(define (map-approximate-rectangle
	 f width height nx ny)
 ;; will make rectangles the right size to have an approximately evenly sized grid
 (let* ((rh (/ height ny))
	(rw (/ width nx)))
  (map-n
   (lambda (x)
    (map-n
     (lambda (y) (f (exact-round (* x rw))
		    (exact-round (* y rh))
		    (exact-round (* (+ x 1) rw))
		    (exact-round (* (+ y 1) rh))))
     ny))
   nx)))

(define (box-flow-grid-farneback box flow width height grid-size)
 (let* ((bx1 (* (voc4-detection-x1 box) (/ width 1280)))
	(by1 (* (voc4-detection-y1 box) (/ width 1280)))
	(bx2 (* (voc4-detection-x2 box) (/ width 1280)))
	(by2 (* (voc4-detection-y2 box) (/ width 1280)))
	(box-width (- bx2 bx1))
	(box-height (- by2 by1))
	(feature-length (* 4 (sqr grid-size)))
	(flow-grid-unnormalized

	  (list->vector
	  (join
	   (join
	 (map-approximate-rectangle
	  (lambda (x1 y1 x2 y2)
	   (if (or (>= (+ x1 bx1) width)
		   (>= (+ y1 by1) height)
		   (<= (+ x2 bx1) 0)
		   (<= (+ y2 by1) 0))
	       (list 0 0 0 0)
	       (let* ((average-flow
		       (average-flow-in-rect (third flow)
					     width
					     height
					     (exact-round (bound (+ x1 bx1) 0 width))
					     (exact-round (bound (+ y1 by1) 0 height))
					     (exact-round (bound (+ x2 bx1) 0 width))
					     (exact-round (bound (+ y2 by1) 0 height))))
		      (flow-x (x average-flow))
		      (flow-y (y average-flow)))
		(list (if (>= flow-x 0) flow-x 0)
		      (if (>= flow-y 0) flow-y 0)
		      (if (<= flow-x 0) (- flow-x) 0)
		      (if (<= flow-y 0) (- flow-y) 0)))))

	  box-width
	  box-height
	  grid-size
	  grid-size)))))
	(flipped-unnormalized

	  (list->vector
	  (join
	   (join
	    (reverse
	    (map-approximate-rectangle
		  (lambda (x1 y1 x2 y2)
		   (if (or (>= (+ x1 bx1) width)
			   (>= (+ y1 by1) height)
			   (<= (+ x2 bx1) 0)
			   (<= (+ y2 by1) 0))
		       (list 0 0 0 0)
		       (let* ((average-flow
			       (average-flow-in-rect (third flow)
						     width
						     height
						     (exact-round (bound (+ x1 bx1) 0 width))
						     (exact-round (bound (+ y1 by1) 0 height))
						     (exact-round (bound (+ x2 bx1) 0 width))
						     (exact-round (bound (+ y2 by1) 0 height))))
			      (flow-x (x average-flow))
			      (flow-y (y average-flow)))
			(list (if (<= flow-x 0) (- flow-x) 0)
			      (if (>= flow-y 0) flow-y 0)
			      (if (>= flow-x 0) flow-x 0)
			      (if (<= flow-y 0) (- flow-y) 0)))))

		  box-width
		  box-height
		  grid-size
		  grid-size))))))
	  (flow-grid (if (> (magnitude flow-grid-unnormalized) 0)
			 (unit flow-grid-unnormalized)
			 (make-vector feature-length *bad*)
			 ))
	  (flipped (if (> (magnitude flipped-unnormalized) 0)
		       (unit flipped-unnormalized)
		       (make-vector feature-length *bad*))))
  (dtrace "flow grid box: " (list bx1 by1 bx2 by2))
  (and flow-grid flipped)
      (vector flow-grid
	  flipped)
      ))

(define (augmented-box-flow-grid-farneback box flow width height grid-size)
 (let* ((bx1 (* (voc4-detection-x1 box) (/ width 1280)))
	(by1 (* (voc4-detection-y1 box) (/ width 1280)))
	(bx2 (* (voc4-detection-x2 box) (/ width 1280)))
	(by2 (* (voc4-detection-y2 box) (/ width 1280)))
	(box-width (- bx2 bx1))
	(box-height (- by2 by1))
	(feature-length (* 4 (sqr grid-size)))
	(flow-grid-unnormalized

	  (list->vector
	  (join
	   (join
	 (map-approximate-rectangle
	  (lambda (x1 y1 x2 y2)
	   (if (or (>= (+ x1 bx1) width)
		   (>= (+ y1 by1) height)
		   (<= (+ x2 bx1) 0)
		   (<= (+ y2 by1) 0))
	       (list 1 1 0 0 0 0)
	       (let* ((average-flow
		       (average-flow-in-rect (third flow)
					     width
					     height
					     (exact-round (bound (+ x1 bx1) 0 width))
					     (exact-round (bound (+ y1 by1) 0 height))
					     (exact-round (bound (+ x2 bx1) 0 width))
					     (exact-round (bound (+ y2 by1) 0 height))))
		      (flow-x (x average-flow))
		      (flow-y (y average-flow))
		      (abs-x (abs flow-x))
		      (abs-y (abs flow-y))
		      (sig-x (sigmoid abs-x *flow-sigmoid-a* *flow-sigmoid-b*))
		      (sig-y (sigmoid abs-y *flow-sigmoid-a* *flow-sigmoid-b*)))
		(list (- 1 sig-x)
		      (- 1 sig-y)
		      (if (>= flow-x 0) sig-x 0)
		      (if (>= flow-y 0) sig-y 0)
		      (if (<= flow-x 0) sig-x 0)
		      (if (<= flow-y 0) sig-y 0)))))

	  box-width
	  box-height
	  grid-size
	  grid-size)))))
	(flipped-unnormalized

	  (list->vector
	  (join
	   (join
	    (reverse
	    (map-approximate-rectangle
		  (lambda (x1 y1 x2 y2)
		   (if (or (>= (+ x1 bx1) width)
			   (>= (+ y1 by1) height)
			   (<= (+ x2 bx1) 0)
			   (<= (+ y2 by1) 0))
		       (list 1 1 0 0 0 0)
		       (let* ((average-flow
			       (average-flow-in-rect (third flow)
						     width
						     height
						     (exact-round (bound (+ x1 bx1) 0 width))
						     (exact-round (bound (+ y1 by1) 0 height))
						     (exact-round (bound (+ x2 bx1) 0 width))
						     (exact-round (bound (+ y2 by1) 0 height))))
			      (flow-x (x average-flow))
			      (flow-y (y average-flow))
			      (abs-x (abs flow-x))
			      (abs-y (abs flow-y))
			      (sig-x (sigmoid abs-x *flow-sigmoid-a* *flow-sigmoid-b*))
			      (sig-y (sigmoid abs-y *flow-sigmoid-a* *flow-sigmoid-b*)))
			(list (- 1 sig-x)
			      (- 1 sig-y)
			      (if (<= flow-x 0) sig-x 0)
			      (if (>= flow-y 0) sig-y 0)
			      (if (>= flow-x 0) sig-x 0)
			      (if (<= flow-y 0) sig-y 0)))))

		  box-width
		  box-height
		  grid-size
		  grid-size))))))
	  (flow-grid (if (> (magnitude flow-grid-unnormalized) 0)
			 (unit flow-grid-unnormalized)
			 (make-vector feature-length *bad*)
			 ))
	  (flipped (if (> (magnitude flipped-unnormalized) 0)
		       (unit flipped-unnormalized)
		       (make-vector feature-length *bad*))))
  (dtrace "flow grid box: " (list bx1 by1 bx2 by2))
  (and flow-grid flipped)
      (vector flow-grid
	  flipped)
      ))

(define (one-track-flow-grid-farneback boxes optical-flow-movie width height grid-size)
 (map
 (lambda (box flow)
  (if (null-box? box)
      (vector (make-vector (* 4 (sqr grid-size)) *bad*)
	      (make-vector (* 4 (sqr grid-size)) *bad*))
      (let* ((square-box (squarify-voc4-detection box)))
       (box-flow-grid-farneback square-box flow width height grid-size))))
 (but-last boxes) optical-flow-movie))

(define (one-track-augmented-flow-grid-farneback boxes optical-flow-movie width height grid-size)
 (map
 (lambda (box flow)
  (if (null-box? box)
      (vector (make-vector (* 4 (sqr grid-size)) *bad*)
	      (make-vector (* 4 (sqr grid-size)) *bad*))
      (let* ((square-box (squarify-voc4-detection box)))
       (augmented-box-flow-grid-farneback square-box flow width height grid-size))))
 (but-last boxes) optical-flow-movie))

(define (extract-common-features2 video-path track-model track-number
				  boxes lookahead optical-flow-movie width height grid-size feature-types)
 (let* ((flow-grid (if (member 'flow-grid feature-types)
		       (if (feature-c-cached? video-path track-model track-number
					'flow-grid #f grid-size)
		       (load-c-cached-feature video-path track-model track-number
					    'flow-grid #f grid-size)
		       (if optical-flow-movie
			   (c-cache-feature (one-track-flow-grid-farneback
					     boxes optical-flow-movie width height grid-size)
					   video-path track-model track-number
					'flow-grid #f grid-size)

			   #f))
		       #f))
	(augmented-flow-grid (if (member 'augmented-flow-grid feature-types)
		       (if (feature-c-cached? video-path track-model track-number
					'augmented-flow-grid #f grid-size)
		       (load-c-cached-feature video-path track-model track-number
					    'augmented-flow-grid #f grid-size)
		       (if optical-flow-movie
			   (c-cache-feature (one-track-augmented-flow-grid-farneback
					     boxes optical-flow-movie width height grid-size)
					   video-path track-model track-number
					'augmented-flow-grid #f grid-size)

			   #f))
		       #f))
	(flow-magnitude
	 (if (member 'flow-magnitude feature-types)
	 (if (feature-c-cached? video-path track-model track-number
					     'flow-magnitude #f grid-size)
			    (load-c-cached-feature video-path track-model track-number
						 'flow-magnitude #f grid-size)
			    (if optical-flow-movie
				(c-cache-feature (one-track-avg-box-flow-magnitude-farneback boxes optical-flow-movie width height)
					        video-path track-model track-number
					'flow-magnitude #f grid-size)
				#f))
	 #f))
	(flow-avg-magnitude
	 (if (member 'flow-avg-magnitude feature-types)
	     (if (feature-c-cached? video-path track-model track-number
					     'flow-avg-magnitude #f grid-size)
			    (load-c-cached-feature video-path track-model track-number
						 'flow-avg-magnitude #f grid-size)
			    (if optical-flow-movie
				(c-cache-feature (one-track-box-avg-flow-magnitude-farneback boxes optical-flow-movie width height)
					        video-path track-model track-number
					'flow-avg-magnitude #f grid-size)
				#f))
	     #f))
	(flow-avg-orientation
	 (if (member 'flow-avg-orientation feature-types)
	     (if (feature-c-cached? video-path track-model track-number
						   'flow-avg-orientation #f grid-size)
				  (load-c-cached-feature video-path track-model track-number
						       'flow-avg-orientation #f grid-size)
				  (if optical-flow-movie
				      (c-cache-feature (one-track-box-avg-flow-orientation-farneback boxes optical-flow-movie width height)
						     video-path track-model track-number
						     'flow-avg-orientation #f grid-size)
				      #f))
	     #f))
	(position (map voc4-detection-center boxes))
	(position-x (map x position))
	(position-y (map y position))
	(aspect-ratio (map voc4-detection-aspect-ratio boxes))
	(velocity (feature-finite-difference
		   (map vector position-x position-y) lookahead))
	(acceleration (feature-finite-difference velocity lookahead))
	(area (map voc4-detection-area (map make-voc4-box-a-square boxes))))
  (list ;;position-x position-y we dont want these
        flow-grid
	flow-magnitude
	flow-avg-magnitude
	flow-avg-orientation
	aspect-ratio
	(feature-finite-difference aspect-ratio lookahead)
	(map magnitude velocity) (map vector-orientation velocity)
	(map magnitude acceleration) (map vector-orientation acceleration)
	area (feature-finite-difference area lookahead)
	augmented-flow-grid)))

(define (extract-features video-path
			  boxes
			  track-model
			  track-number
			  cropped-width
			  flow-grid-size
			  symmetric?
			  badwidth
			  badheight
			  ;;flow-scale ;; this should be (/ (width-of-video-on-which-flow-was-computed) 1280)
			  chosen-feature-types);; optical-flow-movie optical-flow-movie-scale)
 (dtrace "feature types:" chosen-feature-types)
 (let* ((boxes ;;(dtrace "boxes"
		       (if (not boxes)
		   (read-voc4-overgenerated-smooth-tracked-boxes
			  (load-darpa-video (guess-video-extension video-path))
			  track-model
			  track-number)
		   boxes));;)
	(video (ffmpeg-open-video
		(guess-video-extension video-path)))
	(width (dtrace "width" (ffmpeg-video-width video)))
	(height (dtrace "height" (ffmpeg-video-height video)))
	(foo (ffmpeg-close-video video))
	(optical-flow-movie
	 (if (some (lambda (type) (and (not (feature-c-cached?
					     video-path track-model track-number
					     type cropped-width flow-grid-size))
				       (or (equal? type 'flow-grid)
					   (equal? type 'augmented-flow-grid)
					   (equal? type 'flow-magnitude)
					   (equal? type 'flow-avg-magnitude)
					   (equal? type 'flow-avg-orientation))))
			 chosen-feature-types)
	     (run-farneback-on-video (dtrace "computing flow on:" video-path)
				     .5 5 8 20 5 1.1 #t)
	     ;; (read-optical-flow-movie-in-c
	     ;; 		  (load-darpa-video
	     ;; 		   (guess-video-extension video-path)))
	     #f))
	(features-unaligned
	 (list->vector
	  (map
	   list->vector
	   (removeq
	    #f
	    (map (lambda (feature feature-type)
		  (if (some (lambda (type) (equal? type feature-type)) chosen-feature-types)
		      (if (some (lambda (used-type)
				 (or (equal? used-type 'flow-grid)
				     (equal? used-type 'augmented-flow-grid)
				     (equal? used-type 'flow-magnitude)
				     (equal? used-type 'flow-avg-magnitude)
				     (equal? used-type 'flow-avg-orientation)))
				chosen-feature-types)
			  (if
			   (or (equal? feature-type 'flow-grid)
			       (equal? feature-type 'augmented-flow-grid)
			       (equal? feature-type 'flow-magnitude)
			       (equal? feature-type 'flow-avg-magnitude)
			       (equal? feature-type 'flow-avg-orientation))
			      feature (rest feature))
			  feature)
		      #f))
		 (cons
		  (if (some (lambda (type) (equal? type 'hog))
			    chosen-feature-types)
		      (begin
		       (dtrace "computing hog features for video:" video-path)
		       (compute-video-hog-fv video-path
					     (list->vector boxes)
					     track-model
					     track-number
					     cropped-width
					     symmetric?))
		      #f)

		  (extract-common-features2
		   ;; (remove-if
		   ;;  null-box?
		   ;;  boxes)
		   video-path
		   track-model
		   track-number
		   boxes
		    2
		   optical-flow-movie
		   width
		   height
		   flow-grid-size
		   chosen-feature-types))
		 *featuretypes*)))))
	(foo (dtrace "feature lengths:" (map-vector vector-length features-unaligned)))
	(features (transpose
		   (list-of-lists->matrix
		    (remove-if
		     (lambda (frame)
		      (some (lambda (f) (or (equal? f *bad*) (equal? f #f) (and (vector? f)
										(vector? (x f))
										(equal? (x (x f)) *bad*))))
			    frame))
		     (matrix->list-of-lists
		      (transpose features-unaligned)))))))
 ;; (unless
    (dtrace "unaligned=features?" (equal? features-unaligned features))
  ;; (dtrace "unaligned" features-unaligned))
  (when optical-flow-movie
   (for-each (lambda (flow)
	(for-each free flow))
       optical-flow-movie))
  features))

;; (define (extract-and-discretize-features video-path
;; 			  track-model
;; 			  track-number
;; 			  cropped-width
;; 			  symmetric?
;; 			  width
;; 			  height
;; 			  ;;flow-scale ;; this should be (/ (width-of-video-on-which-flow-was-computed) 1280)
;; 			  chosen-feature-types
;; 			  discrete-min-max);; optical-flow-movie optical-flow-movie-scale)
;;  (let* ((boxes (read-voc4-overgenerated-smooth-tracked-boxes
;; 			  (load-darpa-video (guess-video-extension video-path))
;; 			  track-model
;; 			  track-number))
;; 	(optical-flow-movie
;; 	 (if (some (lambda (type)
;; 		    (or (equal? type 'flow-magnitude)
;; 			(equal? type 'flow-avg-magnitude)
;; 			(equal? type 'flow-avg-orientation)))
;; 		   chosen-feature-types)
;; 	     (run-farneback-on-video (dtrace "computing flow on:" video-path)
;; 				     .5 5 8 20 5 1.1)
;; 	     ;; (read-optical-flow-movie-in-c
;; 	     ;; 		  (load-darpa-video
;; 	     ;; 		   (guess-video-extension video-path)))
;; 	     #f)))
;;  (list->vector
;;   (map
;;    list->vector
;;    (removeq
;;     #f
;;     (map (lambda (feature feature-type)
;; 	  (if (some (lambda (type) (equal? type feature-type)) chosen-feature-types)
;; 	      (if (some (lambda (used-type)
;; 			 (or (equal? used-type 'flow-magnitude)
;; 			     (equal? used-type 'flow-avg-magnitude)
;; 			     (equal? used-type 'flow-avg-orientation)))
;; 			chosen-feature-types)
;; 		  (if (or (equal? feature-type 'flow-magnitude)
;; 			  (equal? feature-type 'flow-avg-magnitude)
;; 			  (equal? feature-type 'flow-avg-orientation))
;; 		      feature (rest feature))
;; 		  feature)
;; 	      #f))

;; 	  ;; (if (some (lambda (type) (equal? type feature-type)) chosen-feature-types)
;; 	  ;;     feature
;; 	  ;;     #f))

;; 	 (cons
;; 	   (if (some (lambda (type) (equal? type 'hog))
;; 			 chosen-feature-types)
;; 		   (begin
;; 		    (dtrace "computing hog features for video:" video-path)
;; 		    (compute-video-hog-fv video-path
;; 					  track-model
;; 					  track-number
;; 					  cropped-width
;; 					  symmetric?))
;; 		   #f)
;; 	   (map-indexed
;; 	    (lambda (fs i)
;; 	     (map (lambda (f)
;; 		   (discretize-feature f
;; 				       (matrix-ref discrete-min-max i 0)
;; 				       (matrix-ref discrete-min-max i 1)
;; 				       10))
;; 		  fs))
;; 	    (extract-common-features2
;; 	     (remove-if
;; 	      null-box?
;; 	      (read-voc4-overgenerated-smooth-tracked-boxes
;; 	       (load-darpa-video (guess-video-extension video-path))
;; 	       track-model
;; 	       track-number))
;; 	     2
;; 	     optical-flow-movie
;; 	     width
;; 	     height)))
;; 	 *featuretypes*))))))

(define (discretize-features video-fvvs
			     chosen-feature-types
			     discrete-min-max);; optical-flow-movie optical-flow-movie-scale)
 (map-vector (lambda (feature feature-type discrete-min discrete-max)
	      (if (equal? (model-type feature-type) 'discrete)
	      (map-vector (lambda (f)
			   (discretize-feature f
				       discrete-min
				       discrete-max
				       10))
			  feature)
	      feature))
	     video-fvvs chosen-feature-types (x discrete-min-max) (y discrete-min-max)))

(define (features->matrix-of-matrices fvs feature-types)
 (map-vector
  (lambda (frames-feature feature-type)
   (map-vector
    (lambda (frame-feature)
     (if (or (equal? feature-type 'hog)
	     (equal? feature-type 'flow-grid)
	     (equal? feature-type 'augmented-flow-grid))
	 frame-feature
	 (vector (vector frame-feature))))
    frames-feature))
    fvs
    feature-types))

(define (hog-fvv->hog-image fvv cropped-width min max half-hog-size)
 (let* (;;(dummy-image (imlib:create cropped-width cropped-width))
	;;(dummy-hog-image (imlib-image->hog-image dummy-image 8 9))
	(width (- (/ cropped-width 8) 2)));;(hog-image-width dummy-hog-image)))

  (model-hog-vector->image
   (shape-matrix
    (shape-matrix
     fvv
     36)
    width)
   half-hog-size
   min
   max)))

(define (hog-vector-width hog-vector) (vector-length hog-vector))

(define (hog-vector-height hog-vector) (vector-length (x hog-vector)))


(define (model-descriptor->image descriptor half-hog-size detection? min max)
 (let* ((size (+ (* 2 half-hog-size) 1))
	(image (imlib-create-image size size)))
  (imlib-context-set-image! image)
  (imlib-context-set-anti-alias! #t)
  (imlib-context-set-color! 0 0 0 255)
  (imlib-image-fill-rectangle 0 0 size size)
  (for-each-n
   (lambda (orientation)
    (let* (;; (s (reduce-vector + descriptor 0))
	  ;; (i (map-reduce-n
	  ;; 	+
	  ;; 	0
	  ;; 	(lambda (i)
	  ;; 	 (/ (vector-ref
	  ;; 	  descriptor
	  ;; 	  (+ (* (quotient (vector-length descriptor) 4) i)
	  ;; 	     orientation)) (* max 4)))
	  ;; 	4))
	  ;; (f (/ i s))
	  ;; (intensity
	  ;;  (exact-round
	  ;;   (* 255
	  ;;      (* i f))))
	  (intensity
	   (exact-round
	    (* 255
	       (map-reduce-n
	  	+
	  	0
	  	(lambda (i)
	  	 (/ (vector-ref
	  	  descriptor
	  	  (+ (* (quotient (vector-length descriptor) 4) i)
	  	     orientation)) (* max 4)))
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

 (define (model-hog-vector->image hog-vector half-hog-size min max)
 (let* ((size (+ (* 2 half-hog-size) 1))
        (image (imlib-create-image (* size (hog-vector-width hog-vector))
                                   (* size (hog-vector-height hog-vector)))))
  (imlib-context-set-image! image)
  (imlib-context-set-anti-alias! #t)
  (imlib-context-set-color! 0 0 0 255)
  (imlib-image-fill-rectangle 0 0
			      (* size (hog-vector-width hog-vector))
                              (* size (hog-vector-height hog-vector)))
  (for-each-n
   (lambda (x)
    (for-each-n
     (lambda (y)
      (let ((descriptor-image
	     (model-descriptor->image
	      (matrix-ref hog-vector x y) half-hog-size #f min max)))
       (imlib-context-set-image! image)
       (imlib-blend-image-onto-image
	descriptor-image 0 0 0 size size (* size x) (* size y) size size)
       (imlib-free-images-and-decache (list descriptor-image))))
     (hog-vector-height hog-vector)))
   (hog-vector-width hog-vector))
  image))

 (define (hog-vector->image hog-vector half-hog-size)
 (let* ((size (+ (* 2 half-hog-size) 1))
        (image (imlib-create-image (* size (hog-vector-width hog-vector))
                                   (* size (hog-vector-height hog-vector)))))
  (imlib-context-set-image! image)
  (imlib-context-set-anti-alias! #t)
  (imlib-context-set-color! 0 0 0 255)
  (imlib-image-fill-rectangle 0 0
			      (* size (hog-vector-width hog-vector))
                              (* size (hog-vector-height hog-vector)))
  (for-each-n
   (lambda (x)
    (for-each-n
     (lambda (y)
      (let ((descriptor-image
	     (descriptor->image
	      (matrix-ref hog-vector x y) half-hog-size #f)))
       (imlib-context-set-image! image)
       (imlib-blend-image-onto-image
	descriptor-image 0 0 0 size size (* size x) (* size y) size size)
       (imlib-free-images-and-decache (list descriptor-image))))
     (hog-vector-height hog-vector)))
   (hog-vector-width hog-vector))
  image))

(define (flow-descriptor->image descriptor half-hog-size detection? min max)
 (let* ((size (+ (* 2 half-hog-size) 1))
	(image (imlib-create-image size size)))
  (imlib-context-set-image! image)
  (imlib-context-set-anti-alias! #t)
  (imlib-context-set-color! 0 0 0 255)
  (imlib-image-fill-rectangle 0 0 size size)
  (for-each-n
   (lambda (orientation)
    (let* ((intensity
	   (exact-round
	    (* 255
	       (/ (vector-ref
		descriptor
		orientation)
		  max))))
	  (p1;; (map-vector
	      ;; exact-round
	       (vector half-hog-size half-hog-size));;)
	  (p2 ;;(map-vector
	      ;; exact-round
	       (v+ (m*v (rotation-matrix-2d
			 (degrees->radians
			  (/ (* orientation 360)
			     (vector-length descriptor))))
			(vector (* half-hog-size .95) 0))
		   (vector half-hog-size half-hog-size)));;)
	  (vp1p2 (v- p2 p1))
	  (normal (vector (- (y vp1p2)) (x vp1p2)))
	  (unit-normal (v/k normal (magnitude normal)))
	  (unit-p2p1 (v/k vp1p2 (- (magnitude vp1p2))))
	  (arrow-point1 (v+ p2
			    (k*v 2;; (/ half-hog-size 2)
				 (v+ unit-p2p1 unit-normal))))
	  (arrow-point2 (v+ p2
			    (k*v 2;; (/ half-hog-size 2)
				 (v- unit-p2p1 unit-normal)))))
     (imlib-context-set-color! 0 intensity 0 255)
     (imlib-image-draw-line (exact-round (x p1))
			    (exact-round (y p1))
			    (exact-round (x p2))
			    (exact-round (y p2)))
     ;; (imlib-image-draw-line (+ (x p1) 0.5) (y p1) (+ (x p2) 0.5) (y p2))
     ;; (imlib-image-draw-line (- (x p1) 0.5) (y p1) (- (x p2) 0.5) (y p2))
     ;; (imlib-image-draw-line (x p1) (+ (y p1) 0.5) (x p2) (+ (y p2) 0.5))
     ;; (imlib-image-draw-line (x p1) (- (y p1) 0.5) (x p2) (- (y p2) 0.5))
     (imlib-image-draw-line ;image
		      ;;color
		      (exact-round (x p2))
		      (exact-round (y p2))
		      (exact-round (x arrow-point1))
		      (exact-round (y arrow-point1)))
     (imlib-image-draw-line ;;image
		      ;;color
		      (exact-round (x p2))
		      (exact-round (y p2))
		      (exact-round (x arrow-point2))
		      (exact-round (y arrow-point2)))
     (imlib-image-draw-line ;;image
		      ;;color
		      (exact-round (x arrow-point1))
		      (exact-round (y arrow-point1))
		      (exact-round (x arrow-point2))
		      (exact-round (y arrow-point2)))))
 (vector-length descriptor))
  image))

(define (augmented-flow-descriptor->image descriptor half-hog-size detection? min max)
 (let* ((size (+ (* 2 half-hog-size) 1))
	(image (imlib-create-image size size)))
  (imlib-context-set-image! image)
  (imlib-context-set-anti-alias! #t)
  (imlib-context-set-color! 0 0 0 255)
  (imlib-image-fill-rectangle 0 0 size size)
  (for-each-n
   (lambda (orientation1)
    (when (> orientation1 1)
    (let* ((orientation (- orientation1 2))
	   (intensity
	   (exact-round
	    (* 255
	       (/ (vector-ref
		descriptor
		orientation1)
		  max))))
	  (p1;; (map-vector
	      ;; exact-round
	       (vector half-hog-size half-hog-size));;)
	  (p2 ;;(map-vector
	      ;; exact-round
	       (v+ (m*v (rotation-matrix-2d
			 (degrees->radians
			  (/ (* orientation 360)
			     4)))
			(vector (* half-hog-size .95) 0))
		   (vector half-hog-size half-hog-size)));;)
	  (vp1p2 (v- p2 p1))
	  (normal (vector (- (y vp1p2)) (x vp1p2)))
	  (unit-normal (v/k normal (magnitude normal)))
	  (unit-p2p1 (v/k vp1p2 (- (magnitude vp1p2))))
	  (arrow-point1 (v+ p2
			    (k*v 2;; (/ half-hog-size 2)
				 (v+ unit-p2p1 unit-normal))))
	  (arrow-point2 (v+ p2
			    (k*v 2;; (/ half-hog-size 2)
				 (v- unit-p2p1 unit-normal)))))
     (imlib-context-set-color! 0 intensity 0 255)
     (imlib-image-draw-line (exact-round (x p1))
			    (exact-round (y p1))
			    (exact-round (x p2))
			    (exact-round (y p2)))
     ;; (imlib-image-draw-line (+ (x p1) 0.5) (y p1) (+ (x p2) 0.5) (y p2))
     ;; (imlib-image-draw-line (- (x p1) 0.5) (y p1) (- (x p2) 0.5) (y p2))
     ;; (imlib-image-draw-line (x p1) (+ (y p1) 0.5) (x p2) (+ (y p2) 0.5))
     ;; (imlib-image-draw-line (x p1) (- (y p1) 0.5) (x p2) (- (y p2) 0.5))
     (imlib-image-draw-line ;image
		      ;;color
		      (exact-round (x p2))
		      (exact-round (y p2))
		      (exact-round (x arrow-point1))
		      (exact-round (y arrow-point1)))
     (imlib-image-draw-line ;;image
		      ;;color
		      (exact-round (x p2))
		      (exact-round (y p2))
		      (exact-round (x arrow-point2))
		      (exact-round (y arrow-point2)))
     (imlib-image-draw-line ;;image
		      ;;color
		      (exact-round (x arrow-point1))
		      (exact-round (y arrow-point1))
		      (exact-round (x arrow-point2))
		      (exact-round (y arrow-point2))))))
 (vector-length descriptor))
  image))

 (define (flow-grid-fv->image flow-grid-fv grid-width grid-height half-hog-size min max)
 (let* ((size (+ (* 2 half-hog-size) 1))
        (image (imlib-create-image (* size grid-width)
                                   (* size grid-height))))
  (imlib-context-set-image! image)
  (imlib-context-set-anti-alias! #t)
  (imlib-context-set-color! 0 0 0 255)
  (imlib-image-fill-rectangle 0 0
			     (* size grid-width)
                                   (* size grid-height))

  (for-each-indexed-vector
   (lambda (column x)
    (for-each-indexed-vector
     (lambda (d y)
      (let ((descriptor-image
	     (flow-descriptor->image
	      d half-hog-size #f min max)))
       (imlib-context-set-image! image)
       (imlib-blend-image-onto-image
	descriptor-image 0 0 0 size size (* size x) (* size y) size size)
       (imlib-free-images-and-decache (list descriptor-image))))
     (shape-matrix column 4)))
   (shape-matrix flow-grid-fv (* grid-width 4)))
  image))

(define (augmented-flow-grid-fv->image flow-grid-fv grid-width grid-height half-hog-size min max)
 (let* ((size (+ (* 2 half-hog-size) 1))
        (image (imlib-create-image (* size grid-width)
                                   (* size grid-height))))
  (imlib-context-set-image! image)
  (imlib-context-set-anti-alias! #t)
  (imlib-context-set-color! 0 0 0 255)
  (imlib-image-fill-rectangle 0 0
			     (* size grid-width)
                                   (* size grid-height))

  (for-each-indexed-vector
   (lambda (column x)
    (for-each-indexed-vector
     (lambda (d y)
      (let ((descriptor-image
	     (augmented-flow-descriptor->image
	      d half-hog-size #f min max)))
       (imlib-context-set-image! image)
       (imlib-blend-image-onto-image
	descriptor-image 0 0 0 size size (* size x) (* size y) size size)
       (imlib-free-images-and-decache (list descriptor-image))))
     (shape-matrix column 6)))
   (shape-matrix flow-grid-fv (* grid-width 6)))
  image))

(define (hog-and-flow-fvs->image hog-fv cropped-width hog-min hog-max
				 flow-grid-fv grid-width grid-height
				 flow-min flow-max half-hog-size)
 (let* ((image (hog-fvv->hog-image hog-fv cropped-width hog-min hog-max half-hog-size))
	(half-flow-size (* half-hog-size (/ (- (/ cropped-width 8) 2) grid-width))))
  (let* ((size (+ (* 2 half-flow-size) 1))
	 ;; (image (imlib-create-image (* size grid-width)
	 ;; 			    (* size grid-height)))
	 )
   (imlib-context-set-image! image)
   (imlib-context-set-anti-alias! #t)
   ;; (imlib-context-set-color! 0 0 0 255)
   ;; (imlib-image-fill-rectangle 0 0
   ;; 			       (* size grid-width)
   ;; 			       (* size grid-height))

   (for-each-indexed-vector
    (lambda (column xx)
     (for-each-indexed-vector
      (lambda (d yy)

	(imlib-context-set-image! image)
	(for-each-n
   (lambda (orientation)
    (let* ((intensity
	   (exact-round
	    (* 255
	       (/ (vector-ref
		d
		orientation)
		  flow-max))))
	  (p1 (v+ (map-vector
	       exact-round
	       (vector half-flow-size half-flow-size))
		  (vector (* xx size) (* yy size))))
	  (p2 (v+ (map-vector
	       exact-round
	       (v+ (m*v (rotation-matrix-2d
			 (degrees->radians
			  (/ (* orientation 360)
			     (vector-length d))))
			(vector (* half-flow-size .85) 0))
		   (vector half-flow-size half-flow-size)))
		  (vector (* xx size) (* yy size))))
	  (vp1p2 (v- p2 p1))
	  (normal (vector (- (y vp1p2)) (x vp1p2)))
	  (unit-normal (v/k normal (magnitude normal)))
	  (unit-p2p1 (v/k vp1p2 (- (magnitude vp1p2))))
	  (arrow-point1 (v+ p2
			    (k*v (/ half-flow-size 5) (v+ unit-p2p1 unit-normal))))
	  (arrow-point2 (v+ p2
			    (k*v (/ half-flow-size 5) (v- unit-p2p1 unit-normal)))))
     (imlib-context-set-color! 0 intensity 0 80)
     (imlib-image-draw-line (x p1) (y p1) (x p2) (y p2))
     (imlib-image-draw-line ;image
		      ;;color
		      (x p2)
		      (y p2)
		      (x arrow-point1)
		      (y arrow-point1))
     (imlib-image-draw-line ;;image
		      ;;color
		      (x p2)
		      (y p2)
		      (x arrow-point2)
		      (y arrow-point2))
     (imlib-image-draw-line ;;image
		      ;;color
		      (x arrow-point1)
		      (y arrow-point1)
		      (x arrow-point2)
		      (y arrow-point2))))
 (vector-length d))
	;; (imlib-blend-image-onto-image
	;;  descriptor-image 128 0 0 size size (* size x) (* size y) size size)
	;; (imlib-free-images-and-decache (list descriptor-image))
	)
      (shape-matrix column 4)))
    (shape-matrix flow-grid-fv (* grid-width 4)))
   image)))

(define (hog-and-augmented-flow-fvs->image hog-fv cropped-width hog-min hog-max
				 flow-grid-fv grid-width grid-height
				 flow-min flow-max half-hog-size)
 (let* ((image (hog-fvv->hog-image hog-fv cropped-width hog-min hog-max half-hog-size))
	(half-flow-size (* half-hog-size (/ (- (/ cropped-width 8) 2) grid-width))))
  (let* ((size (+ (* 2 half-flow-size) 1))
	 ;; (image (imlib-create-image (* size grid-width)
	 ;; 			    (* size grid-height)))
	 )
   (imlib-context-set-image! image)
   (imlib-context-set-anti-alias! #t)
   ;; (imlib-context-set-color! 0 0 0 255)
   ;; (imlib-image-fill-rectangle 0 0
   ;; 			       (* size grid-width)
   ;; 			       (* size grid-height))

   (for-each-indexed-vector
    (lambda (column xx)
     (for-each-indexed-vector
      (lambda (d yy)

       (imlib-context-set-image! image)
       (for-each-n
	(lambda (orientation1)
	 (when (> orientation1 1)
	  (let* ((orientation (- orientation1 2))
		 (intensity
		  (exact-round
		   (* 255
		      (/ (vector-ref
			  d
			  orientation1)
			 flow-max))))
		 (p1 (v+ (map-vector
			  exact-round
			  (vector half-flow-size half-flow-size))
			 (vector (* xx size) (* yy size))))
		 (p2 (v+ (map-vector
			  exact-round
			  (v+ (m*v (rotation-matrix-2d
				    (degrees->radians
				     (/ (* orientation 360)
					4)))
				   (vector (* half-flow-size .85) 0))
			      (vector half-flow-size half-flow-size)))
			 (vector (* xx size) (* yy size))))
		 (vp1p2 (v- p2 p1))
		 (normal (vector (- (y vp1p2)) (x vp1p2)))
		 (unit-normal (v/k normal (magnitude normal)))
		 (unit-p2p1 (v/k vp1p2 (- (magnitude vp1p2))))
		 (arrow-point1 (v+ p2
				   (k*v (/ half-flow-size 5) (v+ unit-p2p1 unit-normal))))
		 (arrow-point2 (v+ p2
				   (k*v (/ half-flow-size 5) (v- unit-p2p1 unit-normal)))))
	   (imlib-context-set-color! 0 intensity 0 80)
	   (imlib-image-draw-line (x p1) (y p1) (x p2) (y p2))
	   (imlib-image-draw-line ;image
	    ;;color
	    (x p2)
	    (y p2)
	    (x arrow-point1)
	    (y arrow-point1))
	   (imlib-image-draw-line ;;image
	    ;;color
	    (x p2)
	    (y p2)
	    (x arrow-point2)
	    (y arrow-point2))
	   (imlib-image-draw-line ;;image
	    ;;color
	    (x arrow-point1)
	    (y arrow-point1)
	    (x arrow-point2)
	    (y arrow-point2)))))
	 (vector-length d))
	;; (imlib-blend-image-onto-image
	;;  descriptor-image 128 0 0 size size (* size x) (* size y) size size)
	;; (imlib-free-images-and-decache (list descriptor-image))
	)
       (shape-matrix column 6)))
     (shape-matrix flow-grid-fv (* grid-width 6)))
    image)))

 ;; (define (hog-vector->image hog-vector half-hog-size)
 ;; (let* ((size (+ (* 2 half-hog-size) 1))
 ;;        (image (imlib-create-image (* size (hog-vector-width hog-vector))
 ;;                                   (* size (hog-vector-height hog-vector)))))
 ;;  (imlib-context-set-image! image)
 ;;  (imlib-context-set-anti-alias! #t)
 ;;  (imlib-context-set-color! 0 0 0 255)
 ;;  (imlib-image-fill-rectangle 0 0
 ;; 			      (* size (hog-vector-width hog-vector))
 ;;                              (* size (hog-vector-height hog-vector)))
 ;;  (for-each-n
 ;;   (lambda (x)
 ;;    (for-each-n
 ;;     (lambda (y)
 ;;      (let ((descriptor-image
 ;; 	     (descriptor->image
 ;; 	      (matrix-ref hog-vector x y) half-hog-size #f)))
 ;;       (imlib-context-set-image! image)
 ;;       (imlib-blend-image-onto-image
 ;; 	descriptor-image 0 0 0 size size (* size x) (* size y) size size)
 ;;       (imlib-free-images-and-decache (list descriptor-image))))
 ;;     (hog-vector-height hog-vector)))
 ;;   (hog-vector-width hog-vector))
 ;;  image))

;; (define (visualize-scheme-hmm scheme-hog-hmm cropped-width scale)
;;  (map-vector show-image (map-vector (lambda (state-hog-model)
;; 				     (hog-fvv->hog-image (v/k (unit (vector-clip state-hog-model))
;; 							      (/ 1 scale))
;; 							 cropped-width))
;; 				    (scheme-hmm-states-hog-models scheme-hog-hmm))))

(define (hog-vector->hog-descriptors hv)
 (join
  (vector->list
  (map-indexed-vector
  (lambda (row i)
   (vector->list
    (map-indexed-vector
    (lambda (column j)
     (make-hog-descriptor (* i 1) (* j 1) column))
    row)))
  hv))))

(define (scheme-hmm->states-hog-descriptors hmm cropped-width)
 (let* ((states-output-models (scheme-hmm-states-output-models hmm)))
  (map-vector
   (lambda (output-models)
    (hog-vector->hog-descriptors
     (shape-matrix
      (shape-matrix
       (x output-models)
       36)
      (exact-round (- (/ cropped-width 8) 2)))))
    states-output-models)))

(define (run-descriptors-as-detector-on-video descriptors
					      modelname
					      videopath)
(let ((darpa-video (load-darpa-video videopath)))
 (write-voc4-boxes-movie
  (map-imlib-frame-from-video-indexed
   (lambda (frame index image)
    (let* ((width (dtrace "width" (imlib:width image)))
	   (detections (fast-scaled-dalal-and-triggs-detections
			descriptors image 8 9 .5 2 30 #f 100)))
     (for-each (lambda (d)
		(let ((y1 (exact-round
			   (/ (voc4-detection-y1 d)
			      (/ width 1280))))
		      (x1 (exact-round
			   (/ (voc4-detection-x1 d)
			      (/ width 1280))))
		      (y2 (exact-round
			   (/ (voc4-detection-y2 d)
			      (/ width 1280))))
		      (x2 (exact-round
			   (/ (voc4-detection-x2 d)
			      (/ width 1280)))))
		 (set-voc4-detection-x1! d x1)
		 (set-voc4-detection-y1! d y1)
		 (set-voc4-detection-x2! d x2)
		 (set-voc4-detection-y2! d y2)))
	       detections)
     detections))
   darpa-video)
  darpa-video modelname)))

(define (logrithmic-interpolation min max n)
 ;; min*x^n=max. find x = (max/min)^(1/n)
 (let* ((x (expt (/ max min) (/ 1.0 (- n 1)))))
  (map-n
   (lambda (i)
    (* min (expt x i)))
   n)))

(define (models-fast-scaled-dalal-and-triggs-detections
	 models-hog-descriptors image
	 pitch number-of-orientations
	 min-scale max-scale number-of-scales normalized? top-k)
 (let* ((scales (logrithmic-interpolation min-scale max-scale number-of-scales))
	(hog-pyramid
	 (compute-hog-pyramid-at-scales image scales
			      pitch number-of-orientations))
	(flipped-image (let ((im (imlib:clone image)))
			(imlib:flip-horizontal im)
			im))
	(flipped-hog-pyramid (compute-hog-pyramid-at-scales flipped-image scales
			      pitch number-of-orientations))
	(models-detections
	 (map-indexed
	  (lambda (hog-descriptors i)
	   (dtrace "model" i)
	   (let* ((box (hog-descriptors-box hog-descriptors pitch))
		  (hog-descriptor-model
		   (hog-descriptors->hog-descriptor-model hog-descriptors))
		  (width (- (x (q box)) (x (p box))))
		  (height (- (y (q box)) (y (p box))))

		  (detections '()))
	    (for-each
	     (lambda (hog-image flipped-hog-image scale)
	      (let* ((c-hog-image (hog-image->normalized-c-hog-image-sharing-data!
				   hog-image normalized?))
		     (c-matrix (hog-convolve hog-descriptor-model c-hog-image))
		     (original-hog-detections (hog-detections c-matrix top-k))
		     (flipped-c-hog-image (hog-image->normalized-c-hog-image-sharing-data!
				   flipped-hog-image normalized?))
		     (flipped-c-matrix (hog-convolve hog-descriptor-model flipped-c-hog-image))
		     (flipped-hog-detections (hog-detections c-matrix top-k))
		     (all-hog-detections (append original-hog-detections flipped-hog-detections)))
	       (set! detections
		     (append
		      (map (lambda (hog-detection)
			    (let ((x1 (x (hog-detection-point hog-detection)))
				  (y1 (y (hog-detection-point hog-detection)))
				  (score (hog-detection-score hog-detection)))
			     (voc4-scale-abs
			      (make-voc4-detection (+ (* (+ x1 1) pitch) (x (p box)))
						   (+ (* (+ y1 1) pitch) (y (p box)))
						   (+ (* (+ x1 1) pitch) (x (q box)))
						   (+ (* (+ y1 1) pitch) (y (q box)))
						   '()
						   0
						   score
						   0
						   0
						   "model")
			      (/ scale))))
			   all-hog-detections)
		      detections))
	       (free-c-matrix c-matrix)
	       (free c-hog-image)
	       (free-c-matrix flipped-c-matrix)
	       (free flipped-c-hog-image)))
	     (hog-pyramid-hog-images hog-pyramid)
	     (hog-pyramid-hog-images flipped-hog-pyramid)
	     (hog-pyramid-scales hog-pyramid))
	    (free-hog-descriptor-model hog-descriptor-model)
	    (take top-k (sort detections > voc4-detection-strength))))
	  models-hog-descriptors)))
  (free-hog-pyramid hog-pyramid)
  (free-hog-pyramid flipped-hog-pyramid)
  models-detections))

(define (run-hmms-as-detectors-on-video hmms
					modelnames
					videopath
					cropped-width)
(let* ((darpa-video (load-darpa-video videopath))
       (states (vector-length (scheme-hmm-initial-state-distribution (first hmms))))
       (models-descriptors
	(join
	 (map (lambda (hmm)
	      (vector->list (scheme-hmm->states-hog-descriptors hmm cropped-width)))
	     hmms)))
       (models-detections
	(map-imlib-frame-from-video-indexed
	 (lambda (frame index image)
	  (let* ((width (dtrace "width" (imlib:width image)))
		 (models-detections (models-fast-scaled-dalal-and-triggs-detections
				     models-descriptors image 8 9 .3 2 20 #f 50)))
	   (for-each
	    (lambda (detections)
	     (for-each (lambda (d)
			(let ((y1 (exact-round
				   (/ (voc4-detection-y1 d)
				      (/ width 1280))))
			      (x1 (exact-round
				   (/ (voc4-detection-x1 d)
				      (/ width 1280))))
			      (y2 (exact-round
				   (/ (voc4-detection-y2 d)
				      (/ width 1280))))
			      (x2 (exact-round
				   (/ (voc4-detection-x2 d)
				      (/ width 1280)))))
			 (set-voc4-detection-x1! d x1)
			 (set-voc4-detection-y1! d y1)
			 (set-voc4-detection-x2! d x2)
			 (set-voc4-detection-y2! d y2)))
		       detections))
	    models-detections)
	   models-detections))
	 darpa-video))
       (hmms-states-detections (shape-matrix (list->vector (transpose-list-of-lists models-detections))
								      states)))

 (for-each-vector
  (lambda (hmm-states-detections modelname)
   (for-each-indexed-vector
    (lambda (state-detections i)
     (write-voc4-boxes-movie state-detections darpa-video (format #f "~a-~a" modelname i)))
    hmm-states-detections))
  hmms-states-detections (list->vector modelnames))
 hmms-states-detections))

(define (simple-hog-hmm-viterbi hmm
				states-boxes-movies
				coherency-weight)
 (let* ((tracks (join
		 (map-indexed
		  (lambda (state-boxes-movie state)
		   (map (lambda (box)
			 (list (vector box (+ (log (sigmoid (voc4-detection-strength box) *sigmoid-a* *sigmoid-b*))
					(log (vector-ref (scheme-hmm-initial-state-distribution hmm) state)))
				       state)))
			(first state-boxes-movie)))
		  states-boxes-movies))))
  (let loop ((states-boxes-movies (map rest states-boxes-movies))
	     (tracks tracks)
	     (i 0))
   (dtrace "frame" i)
   (if (some (lambda (boxes-movie)
	      (null? boxes-movie))
	     states-boxes-movies)
       (maximump tracks (lambda (track) (if (equal? (z (first track))
						    (- (length states-boxes-movies) 1))
					    (y (first track))
					    minus-infinity)))
       (loop (map rest states-boxes-movies)
	     (let* ((current-boxes (join (map-indexed
					  (lambda (state-boxes-movie state)
					   (map (lambda (box)
						 (vector box
							 (log (sigmoid (voc4-detection-strength box) *sigmoid-a* *sigmoid-b*))
							 state))
						(first state-boxes-movie)))
					  states-boxes-movies)))
		    (new-tracks
		     (map
		      (lambda (current-box)
		       (let* ((scores
			       (map
				(lambda (track)
				 (+ (y (first track))
				    (y current-box)
				    (log (matrix-ref (scheme-hmm-transition-matrix hmm)
						     (z (first track))
						     (z current-box)))
				    (* coherency-weight
				       (let ((overlap (log (+ .01 (voc4-detection-intersection-divided-by-union
				    	     (x current-box) (x (first track))))))
					     (dist (distance (voc4-detection-center (x (first track)))
							     (voc4-detection-center (x current-box))))
					     (l (list-mean (list (sqrt (voc4-detection-area (x current-box)))
								 (sqrt (voc4-detection-area (x (first track))))))))
					(log (sigmoid (- dist) (- l) (/ 10 l)))
						      ))

				    ))
				tracks))
			      (score (maximum scores))
			      (track
			       (cons
				(vector (x current-box) score (z current-box))
				(list-ref tracks
					  (position score scores)))))
			track))
		      current-boxes)))
	      new-tracks)
	     (+ i 1))))))

(define (classify-video-with-simple-hog-event-tracker hmms-path
						      video-path
						      verbs
						      cropped-width
						      sigmoid-a
						      sigmoid-b
						      coherence-weight)
 (set! *sigmoid-a* sigmoid-a)
 (set! *sigmoid-b* sigmoid-b)
 (let* ((hmms (read-object-from-file hmms-path))
	(foo (run-hmms-as-detectors-on-video hmms verbs video-path cropped-width))
	(models-tracks (map
			(lambda (hmm verb)
			 (let* ((boxes-movies
				 (map-n
				  (lambda (i)
				   (read-voc4-detector-boxes (load-darpa-video video-path)
							     (format #f "~a-~a" verb i)))
				  (vector-length (scheme-hmm-initial-state-distribution hmm))))
				(track (simple-hog-hmm-viterbi hmm boxes-movies coherence-weight)))
			  (write-voc4-overgenerated-smooth-tracked-box-movie (reverse (map x track))
									     (load-darpa-video video-path)
									     verb
									     0)
			  track))
			hmms verbs)))
  (dtrace "firsts:" (map first models-tracks))
  (second (maximump (map list models-tracks verbs) (lambda (x) (y (first (first x))))))))

;; (define (generate-detection-lattices hmms
;; 				     video-path
;; 				     verbs
;; 				     cropped-with
;; 				     width
;; 				     height
;; 				     sigmoid-a
;; 				     sigmoid-b
;; 				     feature-types
;; 				     bin-lengths)
;;  (set! *sigmoid-a* sigmoid-a)
;;  (set! *sigmoid-b* sigmoid-b)
;;  (let* ((hmms-states (map (lambda (hmm)
;; 			   (vector-length (scheme-hmm-initial-state-distribution hmm)))
;; 			  hmms))
;; 	(optical-flow-movie
;; 	 (if (some (lambda (type) (equal? type 'flow-magnitude))
;; 			 chosen-feature-types)
;; 	     (run-farneback-on-video (dtrace "computing flow on:" video-path)
;; 				     .5 5 8 20 5 1.1)
;; 	     #f))
;; 	(hmms-states-detections (run-hmms-as-detectors-on-video hmms
;; 								verbs
;; 								(dtrace "running detectors on:"
;; 									video-path)
;; 								cropped-width)))
;;   (map (lambda (hmm hmm-states-detections)




;;  )



(define (log-univariate-gaussian2 x mu sigma)
 (- (* -0.5 (sqr (/ (- x mu) sigma))) (log (* sigma sqrt-two-pi))))

(define (lbessi02 x)
 (if (< (sqrt (sqr x)) 3.75)
     (let ((y (sqr (/ x 3.75))))
      (log (+ 1.0
	      (* y
		 (+ 3.5156229
		    (* y
		       (+ 3.0899424
			  (* y
			     (+ 1.2067492
				(* y
				   (+ 0.2659732
				      (* y
					 (+ 0.360768e-1
					    (* y 0.45813e-2))))))))))))))
     (let* ((ax (sqrt (sqr x)))
	    (y (/ 3.75 ax)))
      (+ (- ax (* 0.5 (log ax)))
	 (log
	  (+
	   0.39894228
	   (* y
	      (+
	       0.1328592e-1
	       (* y
		  (+
		   0.225319e-2
		   (* y
		      (+
		       -0.157565e-2
		       (* y
			  (+
			   0.916281e-2
			   (* y
			      (+
			       -0.2057706e-1
			       (* y
				  (+
				   0.2635537e-1
				   (* y
				      (+
				       -0.1647633e-1
				       (* y 0.392377e-2)))))))))))))))))))))

(define (log-von-mises2 x mean kappa)
 (- (* kappa (cos (- x mean))) log-two-pi (lbessi02 kappa)))

(define (dtrace-primal s x)
 (display s)
 (display " ")
 (display (primal* x))
 (newline)
 x)

(define (log-output-likelihoods features model-types states-output-models sigmoid-thresh sigmoid-tau symmetric?)
 (map-vector ;;loop over states
  (lambda (state-output-models)
   (map-n-vector ;; loop over frames
    (lambda (i)
     (reduce-vector
      +
      (map-vector ;; loop over feature types
      (lambda (fvs model model-type)
       (case model-type
	((gaussian)
	 (log-univariate-gaussian2 (vector-ref fvs i)
				  (x model)
				  (if (< (y model) .01)
				      (smooth-max (list .01 (y model)) .01)
				      (y model))))
	((radial)
	 (log-von-mises2 (vector-ref fvs i)
			(x model)
			(y model)))

	((discrete)
	 (log (vector-ref model
	      (exact-round (vector-ref fvs i)))))
	((dot)
	 (log (sigmoid (if symmetric?
			   (maximum (list (dot model
					       (x (vector-ref fvs i)))
					  (dot model
					       (y (vector-ref fvs i)))))
			   (dot (unit model)
				(vector-ref fvs i)))
		       sigmoid-thresh
		       sigmoid-tau)))
	(else (fuck-up))))
      features
      state-output-models
      model-types)
      0))
    (vector-length (x features))))
  states-output-models))


(define (log-output-likelihoods-features features model-types states-output-models sigmoid-thresh sigmoid-tau symmetric?)
 (map-vector ;;loop over states
  (lambda (state-output-models)
   (map-n-vector ;; loop over frames
    (lambda (i)
     (map-vector ;; loop over feature types
      (lambda (fvs model model-type)
       (case model-type
	((gaussian)
	 (log-univariate-gaussian2 (vector-ref fvs i)
				  (x model)
				  (if (< (y model) .01)
				      (smooth-max (list .01 (y model)) .01)
				      (y model))))
	((radial)
	 (log-von-mises2 (vector-ref fvs i)
			(x model)
			(y model)))

	((discrete)
	 (log (vector-ref model
	      (exact-round (vector-ref fvs i)))))
	((dot)
	 (log (sigmoid (if symmetric?
			   (maximum (list (dot model
					       (x (vector-ref fvs i)))
					  (dot model
					       (y (vector-ref fvs i)))))
			   (dot (unit model)
				(vector-ref fvs i)))
		       sigmoid-thresh
		       sigmoid-tau)))
	(else (fuck-up))))
      features
      state-output-models
      model-types))
    (vector-length (x features))))
  states-output-models))

(define (scheme-hmm-calc-log-likelihood initial-state-distribution
					transition-matrix
					model-types
					states-output-models
					features
					sigmoid-thresh
					sigmoid-tau
					symmetric?)
 (let* ((states-output-log-likelihoods (log-output-likelihoods features
							       model-types
							       states-output-models
							       sigmoid-thresh
							       sigmoid-tau
							       symmetric?))
	(alphas (calc-alphas (map-vector log initial-state-distribution)
			     states-output-log-likelihoods
			     (map-vector (lambda (row)
					  (map-vector log row))
					 transition-matrix)))
	(result
	 ;; only use the alpha from the last state because we are forcing it to pass through it at the end.
	 ;; divide by the number of frames to make scores of videos of different length comparable
	 (/ (vector-ref (last alphas) (- (vector-length (first alphas)) 1))
	    (length alphas))))
;;  (dtrace "result:" (primal* result))
  result
  ))

(define (scheme-hog-hmm-calc-log-likelihood initial-state-distribution
					    transition-matrix
					    states-hog-models
					    hog-fvvs
					    sigmoid-thresh
					    sigmoid-tau
					    symmetric?)
 (let* ((states-output-log-distributions
	 (map-vector
	  (lambda (state-hog-model)
	   (map-vector
	    (lambda (hog-fvv)
	     (let ((score (if symmetric?
			      (maximum (list (dot (unit state-hog-model)
						  (x hog-fvv))
					     (dot (unit state-hog-model)
						  (y hog-fvv))))
			      (dot (unit state-hog-model)
				   hog-fvv))))

	     (log (sigmoid score
			   sigmoid-thresh
			   sigmoid-tau))))
	    hog-fvvs))
	  states-hog-models))
	(alphas (calc-alphas (map-vector log initial-state-distribution)
			     states-output-log-distributions
			     (map-vector (lambda (row)
					  (map-vector log row))
					 transition-matrix))))
  ;; only use the alpha from the last state because we are forcing it to pass through it at the end.
  ;; divide by the number of frames to make scores of videos of different length comparable
  (/ (vector-ref (last alphas) (- (vector-length (first alphas)) 1))
     (length alphas))
  ))

(define *using-old-hog-hmm* #f)
(define (calc-log-likelihood initial-state-distribution
			     transition-matrix
			     model-types
			     states-output-models
			     features
			     sigmoid-thresh
			     sigmoid-tau
			     symmetric?)
 (dtrace "about to calc-log-likelihood" model-types)
 (dtrace "time:" (system-output "date"))
 (if *using-old-hog-hmm*
     (scheme-hog-hmm-calc-log-likelihood initial-state-distribution
					 transition-matrix
					 states-output-models
					 features
					 sigmoid-thresh
					 sigmoid-tau
					 symmetric?)
     (scheme-hmm-calc-log-likelihood initial-state-distribution
					 transition-matrix
					 model-types
					 states-output-models
					 features
					 sigmoid-thresh
					 sigmoid-tau
					 symmetric?)))

(define (calc-alphas initial-state-distribution
		     states-output-log-distributions
		     transition-matrix)
 (let loop ((prev-alphas (map-vector
			  (lambda (initial-state-l state-output-ls)
			   (+ initial-state-l (x state-output-ls)))
			  initial-state-distribution
			  states-output-log-distributions))
	    (t 1))
  (if (>= t  (vector-length (x states-output-log-distributions)))
      (list prev-alphas)
      (let*
	((alphas (map-indexed-vector
		  (lambda (state-output-ls j)
		   (+
		    (reduce-vector
		     my-add-exp
		     (map-indexed-vector
		      (lambda (alpha i)
		       (+ alpha (matrix-ref
				 transition-matrix
				 i j)))
		      prev-alphas)
		     minus-infinity)
		    (vector-ref state-output-ls t)))
		  states-output-log-distributions)))
       (cons prev-alphas (loop alphas (+ t 1)))))))

(define (calc-betas initial-state-distribution
		    states-output-log-distributions
		    transition-matrix)
 (reverse
  (let loop ((prev-betas (map-n-vector (lambda (i) 1)
				      (vector-length initial-state-distribution)))
	    (t (- (vector-length (x states-output-log-distributions))
		  2)))
  (if (< t 0)
      (list prev-betas)
      (let*
	((betas (map-indexed-vector
		  (lambda (state-output-ls i)
		    (reduce-vector
		     my-add-exp
		     (map-indexed-vector
		      (lambda (beta j)
		       (+ beta
			  (matrix-ref
			   transition-matrix
			   i j)
			  (vector-ref state-output-ls (+ t 1))))
		      prev-betas)
		     minus-infinity))
		  states-output-log-distributions)))
       (cons prev-betas (loop betas (- t 1))))))))

(define (calc-gammas alphas betas)
 (map (lambda (frame-alphas frame-betas)
       (let ((denominator
	      (reduce-vector my-add-exp
			     (map-vector (lambda (alpha beta)
					  (+ alpha beta))
					 frame-alphas frame-betas)
			     minus-infinity)))
       (map-vector (lambda (alpha beta)
		    (- (+ alpha beta)
		       denominator))
		   frame-alphas frame-betas)))
      alphas betas))


(define (alphas-bar-t alphas-t-minus-1
		      alphas-bar-t
		      initial-state-vector
		      initial-state-vector-bar
		      transition-matrix
		      states-output-probabilities-t
		      transition-matrix-bar
		      states-hog-xs-t
		      states-hog-weights
		      hog-weights-bar
		      sigmoid-a
		      sigmoid-b
		      t)
 ;;(dtrace "t" t)
 ;;(dtrace "initial state vector:" initial-state-vector)
 (let ((alphas-bar-t-minus-1 (make-vector (vector-length alphas-bar-t) 0)))
  (if (= t 0)
      (begin
       (map-indexed-vector
	(lambda (init-bar i)
	 (vector-set! initial-state-vector-bar i init-bar))
	     (compute-initial-state-distribution-bar alphas-bar-t
						     states-output-probabilities-t))
       (map-n-vector
	(lambda (state-j)
	 (let* ((hog-xs-t (vector-ref states-hog-xs-t state-j))
	       (hog-weights-bar-t
		(compute-hog-weights-bar
		 (compute-sigmoid-x-bar (dtrace "btj"(* (vector-ref initial-state-vector state-j)
					   (vector-ref alphas-bar-t state-j)))
					(dot (unit (vector-ref states-hog-weights state-j))
					     hog-xs-t)
					;;hog-xs-t
					sigmoid-a
					sigmoid-b)
		 hog-xs-t)))
	  (vector-set! hog-weights-bar
	  	       state-j
	  	       (map-vector + hog-weights-bar-t
	  			   (vector-ref hog-weights-bar state-j)))
	  ))
	(vector-length alphas-bar-t)))
 (for-each-n
  (lambda (state-j)
   ;;(dtrace "j" state-j)
   (let* ((hog-xs-t (vector-ref states-hog-xs-t state-j))
	  (s (reduce + (map-n (lambda (state-i) (* (vector-ref alphas-t-minus-1 state-i)
						(matrix-ref transition-matrix state-i state-j)))
			   (vector-length alphas-t-minus-1)) 0))

	  (s-bar (* (vector-ref alphas-bar-t state-j)
		    (vector-ref states-output-probabilities-t state-j)))

	  (hog-weights-bar-t
	   (compute-hog-weights-bar
	    (compute-sigmoid-x-bar (dtrace "btj"(* s (vector-ref alphas-bar-t state-j)))
				    (dot (unit (vector-ref states-hog-weights state-j))
				    	hog-xs-t)
				   ;;hog-xs-t
				   sigmoid-a
				   sigmoid-b)
	    hog-xs-t)))
    (vector-set! hog-weights-bar
		 state-j
		 (map-vector + hog-weights-bar-t (vector-ref hog-weights-bar state-j)))

    ;; (update-hog-weights-bar (* s (vector-ref alphas-bar-t state-j))
    ;; 			    hog-weights-bar
    ;; 			    xs)
    ;;(dtrace "alphas-bar-t-1 pre:" alphas-bar-t-minus-1)
    (for-each-n
     (lambda (state-i)
      ;;(dtrace "i j" (list state-i state-j))
      (vector-set! alphas-bar-t-minus-1
		   state-i
		   (+ (vector-ref alphas-bar-t-minus-1 state-i)
		      (* s-bar (matrix-ref transition-matrix state-i state-j))))
      (matrix-set! transition-matrix-bar
		   state-i
		   state-j
		   (+ (matrix-ref transition-matrix-bar state-i state-j)
		      (* s-bar (vector-ref alphas-t-minus-1 state-i))))
;;      (dtrace "transition bar:" transition-matrix-bar)
      alphas-bar-t-minus-1)
     (vector-length alphas-bar-t))))
  (vector-length alphas-bar-t)))
 alphas-bar-t-minus-1))

(define (compute-initial-state-distribution-bar alphas-0-bar
						states-output-probabilities-0)
 ;; (dtrace "initial bar"
	 (map-n-vector
	  (lambda (state-i)
	   (* (vector-ref alphas-0-bar state-i)
	      (vector-ref states-output-probabilities-0 state-i)))
	  (vector-length alphas-0-bar)));;)

(define (clean-compute-alphas-bar alphas
				  final-alphas-bar
				  states-output-probabilities
				  transition-matrix
				  states
				  frames)
 (list->vector
  (reverse
   (cons
   final-alphas-bar
   (let loop ((t (- frames 1))
	      (alphas-t+1-bar final-alphas-bar))
    (if (>= t 0)
	(let ((alphas-t-bar
	       (map-n-vector
		(lambda (i)
		 (reduce-vector +
				(map-n-vector (lambda (j)
					       (* (vector-ref alphas-t+1-bar j)
						  (matrix-ref states-output-probabilities j t)
						  (matrix-ref transition-matrix i j)))
					      states)
				0))
		states)))
	 (cons alphas-t-bar
	       (loop (- t 1)
		     alphas-t-bar)))
	'()))))))

(define (compute-aij-bar alphas
			 alphas-bar
			 output-probabilities
			 states
			 frames)
 (map-n-vector
  (lambda (i)
   (map-n-vector
    (lambda (j)
     (reduce-vector + (map-n-vector
		       (lambda (t)
			(* (matrix-ref output-probabilities j (+ t 1))
			   (matrix-ref alphas-bar (+ t 2) j)
			   (matrix-ref alphas t i)))
		       (- frames 1))
		    0))
    states))
  states))

(define (compute-initial-vector-bar alphas
				    alphas-bar
				    output-probabilities
				    states)

 (map-n-vector
  (lambda (i)
   (* (matrix-ref alphas-bar 0 i)
      (matrix-ref output-probabilities i 0)))
  states))

(define (compute-initial-vector-bar2 alphas
				    alphas-bar
				    output-probabilities
				    states)

 (map-n-vector
  (lambda (i)
   (* (matrix-ref alphas-bar 01 i)
      (matrix-ref output-probabilities i 0)))
  states))

(define (compute-btj-bar alphas
			alphas-bar
			initial-vector
			transition-matrix
			states
			frames)
 (map-n-vector
  (lambda (t)
   (if (= t 0)
       (map-n-vector
	(lambda (j)
	 (* (matrix-ref alphas-bar 1 j)
	    (vector-ref initial-vector j)))
	states)
       (map-n-vector
	(lambda (j)
	 (* (matrix-ref alphas-bar (+ t 1) j)
	    (reduce-vector + (map-n-vector (lambda (i)
					    (* (matrix-ref transition-matrix i j)
					       (matrix-ref alphas (- t 1) i)))
					   states)
			   0)))
	states)))
  frames))

(define (compute-output-params-bar btj-bar
				   fvs
				   normalized-states-hog-models
				   states-output-models
				   states-xs
				   states-hog-dots
				   states-features-log-likelihoods
				   states
				   frames
				   feature-types
				   model-types
				   model-lengths
				   bin-lengths
				   normalize?)
 (transpose
  (map-vector
  (lambda (feature-type model-type model-length bin-length i)
   (case model-type
    ((dot)
     (let* ((unnormalized (compute-hog-params-bar btj-bar
				states-xs
				states-hog-dots
				states-features-log-likelihoods
				model-length ;;hog-length
				states
				frames)))
      (if normalize?
	  (map-vector (lambda (state-hog state-hog-bar)
		       (compute-unit-x-bar state-hog-bar state-hog))
		      normalized-states-hog-models
		      unnormalized)
	  unnormalized)))
    ((discrete)
     (let* ((unnormalized (dtrace "unnormalized discrete-bar"(compute-discrete-params-bar btj-bar
				  fvs
				  states-features-log-likelihoods
				  bin-length
				  states
				  frames
				  i))))
      (dtrace "normalized discrete-bar:"(map-vector (lambda (state-models model-bar)
		       (compute-normalize-bar model-bar (vector-ref state-models i)))
		      states-output-models
		      unnormalized))))
    (else
     (panic "feature type not yet supported"))))
  feature-types model-types model-lengths bin-lengths (enumerate-vector (vector-length feature-types)))))

(define (compute-discrete-params-bar btj-bar
				  fvs
				  states-features-log-likelihoods
				  bin-length
				  states
				  frames
				  feature-index)
 (map-n-vector
  (lambda (j)
   (reduce-vector
    v+
    (map-n-vector
     (lambda (t)
      (let* ((discrete-btj (* (matrix-ref btj-bar t j)
			      (exp (- (reduce-vector + (matrix-ref states-features-log-likelihoods j t) 0)
				      (vector-ref (matrix-ref states-features-log-likelihoods j t) feature-index))))))
      (map-n-vector
       (lambda (b)
	(if (equal? (matrix-ref fvs feature-index t)
		    b)
	    discrete-btj
	    0))
       bin-length)))
     frames)
    (make-vector bin-length 0)))
  states))

(define (compute-hog-params-bar btj-bar
				states-xs
				states-hog-dots
				states-features-log-likelihoods
				hog-length
				states
				frames)
;; (panic "arbitrary")
 (map-n-vector
  (lambda (j)
   (newline)
   (reduce-vector v+ (map-n-vector
		      (lambda (t)
		       (compute-hog-weights-bar
			(compute-sigmoid-x-bar
			 (* (matrix-ref btj-bar
				     t
				     j)

				    (exp
				     (reduce-vector
				      +
				      (subvector (matrix-ref states-features-log-likelihoods j t)
						 1
						 (vector-length (matrix-ref states-features-log-likelihoods j t)))
				      0)))

			 (matrix-ref states-hog-dots
				     j
				     t)
			 *sigmoid-a* ;; todo this shouldn't be global, but since i dont use this function it low priority
			 *sigmoid-b*)
			(matrix-ref states-xs j t)))
		      frames)
		  (make-vector hog-length 0)))
  states))


(define (compute-hog-weights-bar sigmoid-x-bar
				 xs)
 (map-indexed-vector
  (lambda (x i)
   (* x sigmoid-x-bar))
  xs))

(define (compute-sigmoid-x-bar sig-bar x a b)
 (let* ((w1 (* (- b) (- x a)))
	(w2 (exp w1))
	(w3  (+ 1 w2))
	(w3-bar (* sig-bar (- (/ 1 (sqr w3)))))
	(w2-bar (* w3-bar w2))
	(x-bar (* -1 b w2-bar)))
  x-bar))

(define (compute-unit-x-bar xs-bar xs)
 (let* ((w1 (reduce-vector + (map-vector sqr xs) 0))
	(w2 (sqrt w1))
	(w2-bars (map-vector (lambda (x-bar x) (* x-bar x (- (/ 1 w1)))) xs-bar xs))
	(w1-bars (map-vector (lambda (w2-bar) (* w2-bar .5 (sqrt (/ 1 w1)))) w2-bars))
	(w1-bars-sum (reduce-vector + w1-bars 0)))
  (v+
   (map-vector
    (lambda (x x-bar w1-bar)
     (/ x-bar w2))
    xs xs-bar w1-bars)
   (map-vector
    (lambda (x)
     (* 2 x w1-bars-sum));;(reduce-vector + (map-vector (lambda (w1-bar) w1-bar) w1-bars) 0))
    xs))))

(define (compute-normalize-bar xs-bar xs)
 (let* ((w1 (reduce-vector + xs 0))
	(w1-bars (map-vector (lambda (x x-bar) (/ (* x-bar x) (- (sqr w1)))) xs xs-bar))
	(w1-bars-sum (reduce-vector + w1-bars ;; (map-vector (lambda (w1-bar) w1-bar) w1-bars)
		    0)))
  (v+
   (map-vector
    (lambda (x x-bar)
     (/ x-bar w1))
    xs xs-bar)
   (map-vector
    (lambda (x)
     w1-bars-sum)
    xs))))

(define (test-manual-derivative)
 (define initial-state-vector (vector 1 0 0))
 (define transition-matrix (vector (vector .7 .3 0) (vector 0 .7 .3) (vector 0 0 1)))
 (define xs (vector (vector 1 1)
		    (vector 1 1)
		    (vector 1 -1)
		    (vector 1 -1)
		    (vector -1 -1)
		    (vector -1 -1)))
 (define state-models (vector (vector 1 1) (vector 1 -1) (vector -1 -1)))
 (define states-output-likelihood (map-vector
				   (lambda (state-model)
				    (map-vector
				     (lambda (d)
				      (sigmoid (dot (unit state-model) d) 0 1))
				     xs))
				   state-models))
 (define states-output-log-likelihood (map-vector
				   (lambda (state-model)
				    (map-vector
				     (lambda (d)
				      (log (sigmoid (dot (unit state-model) d) 0 1)))
				     xs))
				   state-models))
 (define log-alphas  (calc-alphas (map-vector log initial-state-vector)
			     states-output-log-likelihood
			     (map-vector (lambda (row)
					  (map-vector log row))
					 transition-matrix)))
 (define alphas (map (lambda (a) (map-vector exp a)) log-alphas))
 (define transition-matrix-bar (Vector 0 0 0))
 (define initial-state-vector-bar (Vector 0 0 0))
 (define trans-bar (vector (Vector 0 0 0) (Vector 0 0 0) (Vector 0 0 0)))
 (define hog-weights-bar (make-vector 3 (make-vector 2 0)))
 (define alphas-bar
  (let loop
    ((alphas-bar-t+1 (vector 0 0 1))
     (t (- (vector-length xs) 1)))
   (if (>= t 0)
       (cons alphas-bar-t+1
	     (loop (alphas-bar-t (if (> t 0) (list-ref alphas (- t 1)) #F)
				 alphas-bar-t+1
				 initial-state-vector
				 initial-state-vector-bar
				 transition-matrix
				 (map-vector
				  (lambda (ps)
				   (vector-ref ps t))
				  states-output-likelihood)
				 trans-bar
				 (vector-ref xs t)
				 state-models
				 hog-weights-bar
				 0 1
				 t)
		   (- t 1)))
       '())))
 (define grad (vector (compute-normalize-bar initial-state-vector-bar initial-state-vector)
		      (map-vector (lambda (row row-bar)
				   (compute-normalize-bar row-bar row))
				  transition-matrix trans-bar)
		      (map-vector (lambda (state-hog state-hog-bar)
				   (compute-unit-x-bar state-hog-bar state-hog))
				  state-models hog-weights-bar))))
(define *normalize?* #t)

(define (manual-likelihood-gradient initial-state-vector
				    transition-matrix
				    fvs
				    states-output-models
				    feature-types
				    feature-lengths
				    bin-lengths)
 (let* ((states (vector-length initial-state-vector))
	(frames (vector-length (x fvs)))
	(model-types (map-vector model-type feature-types))
	(normalized-initial-state-vector (normalize initial-state-vector))
	(normalized-transition-matrix (map-vector normalize transition-matrix))
	(normalized-states-hog-models (map-vector unit (map-vector x states-output-models)))
	(normalized-log-initial-state-vector (map-vector log normalized-initial-state-vector))
	(normalized-log-transition-matrix (map-vector (lambda (row)
					       (map-vector log row))
					      normalized-transition-matrix))
	(zero-log-likelihood-vector (map-n-vector (lambda (t) 0) (vector-length (x fvs))))
	(states-features-log-likelihoods (dtrace "output likelihoods features:"(log-output-likelihoods-features fvs
									 model-types
									 states-output-models
									 *sigmoid-a*
									 *sigmoid-b*
									 #t)))
	(non-hog-states-output-log-likelihood
	 (cond
	  ((and (equal? (x feature-types) 'hog) (>= (vector-length fvs) 2))
	     (log-output-likelihoods (subvector fvs 1 (vector-length fvs))
	  			     (subvector model-types 1 (vector-length feature-types))
	  			     (map-vector (lambda (s)
	  					  (subvector s 1 (vector-length s)))
	  					 states-output-models)
	  			     *sigmoid-a*
	  			     *sigmoid-b*
	  			     #t))
	  ((equal? (x feature-types) 'hog)
	   (map-n-vector (lambda (s)
			  zero-log-likelihood-vector)
			 states))
	  (else
	   (log-output-likelihoods fvs
	  			     model-types
	  			     states-output-models
	  			     *sigmoid-a*
	  			     *sigmoid-b*
	  			     #t)))
	 )
	(states-hog-dots-and-lr (if (equal? (x feature-types) 'hog)
				 (map-vector
				 (lambda (state-model)
				  (map-vector
				   (lambda (d)
				    (let* ((o (dot state-model (x d)))
					   (f (dot state-model (y d))))
				     (if (> o f)
					 (vector o (x d))
					 (vector f (y d)))))
				   (x fvs))) ;;take only the first feature, which should be hog
				 normalized-states-hog-models)
				 #f))
	(states-hog-dots (if (equal? (x feature-types) 'hog)
			     (map-vector (lambda (s) (map-vector x s)) states-hog-dots-and-lr)
			     #f))
	(states-output-likelihood (if (equal? (x feature-types) 'hog)
				      (map-vector
				       (lambda (s)
					(map-vector (lambda (d) (sigmoid d *sigmoid-a* *sigmoid-b*)) s))
				       states-hog-dots)
				  (map-n-vector
				   (lambda (s)
				    (map-n-vector (lambda (t) 1) (vector-length (x fvs))))
				   states)))
	(states-output-log-likelihood (dtrace "output logl"(map-vector v+ (map-vector
						      (lambda (s)
						       (map-vector log s)) states-output-likelihood)
						  non-hog-states-output-log-likelihood)))
	(states-xs (map-vector (lambda (s) (map-vector y s)) states-hog-dots-and-lr))
	(log-alphas  (dtrace "alphas:"(calc-alphas normalized-log-initial-state-vector
				  states-output-log-likelihood
				  normalized-log-transition-matrix)))
	(alphas (map (lambda (a) (map-vector exp a)) log-alphas))
	(log-alphas-bar
	 (dtrace
	  "log-aphas-bar:"
	  (clean-compute-alphas-bar-logspace
	   log-alphas
	   (vector-append (make-vector (- states 1) minus-infinity)
			  (vector  (- (+ (vector-ref (last log-alphas) (- states 1)) (log (length log-alphas))))))
	   states-output-log-likelihood
	   normalized-log-transition-matrix
	   states
	   frames)))
	(clean-initial-state-vector-bar
	 (dtrace "initial-bar"(compute-initial-vector-bar2-logspace log-alphas
					       log-alphas-bar
					       states-output-log-likelihood
					       states)))
	(aij-bar (dtrace "aijbar:"(compute-aij-bar-logspace (list->vector log-alphas)
				      log-alphas-bar
				      states-output-log-likelihood
				      states
				      frames)))
	(btj-bar (dtrace "btjbar:"(compute-btj-bar-logspace (list->vector log-alphas)
					       log-alphas-bar
					       normalized-log-initial-state-vector
					       normalized-log-transition-matrix
					       states
					       frames)))
	(output-params-bar (compute-output-params-bar btj-bar
						      fvs
						      normalized-states-hog-models
						      states-output-models
						      states-xs
						      states-hog-dots
						      states-features-log-likelihoods
						      states
						      frames
						      feature-types
						      model-types
						      feature-lengths
						      bin-lengths
						      *normalize?*)))
  (if *normalize?*
      (vector-append
       (dtrace "norminitbar:"(compute-normalize-bar  clean-initial-state-vector-bar normalized-initial-state-vector))
       (dtrace "normaijbar:" (reduce-vector vector-append
		      (map-vector (lambda (row row-bar)
		    (compute-normalize-bar row-bar row))
		   normalized-transition-matrix
		   aij-bar) `#()))
	      (reduce-vector vector-append
			     (reduce-vector vector-append output-params-bar `#())
			     `#())
	      (vector 0 0) ;; arbitrarily set sigmoid params gradient to zero
	      )
      (vector clean-initial-state-vector-bar aij-bar output-params-bar ;; clean-hog-weights-bar
	      ))))

(define (AD-likelihood-gradient initial-state-vector1
				transition-matrix1
				fvs;;xs
				states-output-models1)
 (display "FOOOOOO")
 (let* ((params (vector-append (normalize initial-state-vector1)
			       (reduce-vector vector-append (map-vector (lambda (row) (normalize row)) transition-matrix1) `#())
			       (reduce-vector vector-append (map-vector (lambda (model) (unit model)) states-output-models1) `#())))
	(hog-length (vector-length (x (x (x fvs)))))
	(gradient-function
	 (gradient-r
	  (lambda (params)
	   (let* ((states (vector-length initial-state-vector1))
		  (initial-state-vector (if *normalize?*
					    (normalize (subvector params 0 states))
					    (subvector params 0 states)))
		  (transition-matrix (if *normalize?*
					 (map-vector (lambda (row)
						      (normalize row))
						     (shape-matrix (subvector params states (+ states (sqr states))) states))
					 (shape-matrix (subvector params states (+ states (sqr states))) states)))
		  (states-output-models
		   (if *normalize?*
		       (map-vector unit (shape-matrix
					 (subvector params (+ states (sqr states)) (+ states (sqr states) (* states hog-length)))
					 hog-length))
		       (shape-matrix
			(subvector params (+ states (sqr states)) (+ states (sqr states) (* states hog-length)))
			hog-length)))
		  (states-output-log-likelihood
		   (map-vector
		    (lambda (state-model)
		     (map-vector
		      (lambda (d)
		       (maximum (list (log (sigmoid (dot state-model
							 (x d)) *sigmoid-a* *sigmoid-b*))
				      (log (sigmoid (dot state-model
							 (y d)) *sigmoid-a* *sigmoid-b*))))
		       )
		      (x fvs)))
		    states-output-models))
		  (log-alphas  (calc-alphas (map-vector log initial-state-vector)
					    states-output-log-likelihood
					    (map-vector (lambda (row)
					    		 (map-vector log row))
					    		transition-matrix)
					    ))
		  (alphas (map (lambda (a) (map-vector exp a)) log-alphas))
		  (result (/ (vector-ref (last log-alphas) (- states 1))
			     (length alphas))))
	   (dtrace "likelihood:" (primal* result))
	   result
	   )))))
  (gradient-function params)))

;;(define states 3) (define frames 4) (define width 120) (define hog-length (* 36 (sqr (- (/ width 8) 2)))) (define initial-matrix (map-n-vector (lambda (i) (random-real)) states)) (define transition-matrix (map-n-vector (lambda (i) (map-n-vector (lambda (j)  (random-real)) states)) states)) (define states-hog-models (map-n-vector (lambda (i) (map-n-vector (lambda (j) (random-real)) hog-length)) states)) (define data (extract-features "/aux/dpbarret/upgraded-purdue-mindseye-release-t19jul2011/simple-motions/classification-videos/long-multitask-trainset-bend-001030-001120" "manual2" 0 width #t (list 'hog))) (define baz (time "ad:~a" (lambda () (define bar (ad-likelihood-gradient initial-matrix transition-matrix data states-hog-models))))) (define barbaz (time "manual~a:" (lambda () (define foo (manual-likelihood-gradient initial-matrix transition-matrix data states-hog-models)))))

;;(define states 3) (define frames 4) (define hog-length 3) (define initial-matrix (map-n-vector (lambda (i) (random-real)) states)) (define initial-matrix (Vector 1 0.001 0.001)) (define transition-matrix (map-n-vector (lambda (i) (map-n-vector (lambda (j)  (random-real)) states)) states)) (define states-hog-models (map-n-vector (lambda (i) (map-n-vector (lambda (j) (random-real)) hog-length)) states)) (define data (vector (map-n-vector (lambda (i) (map-n-vector (lambda (j) (map-n-vector (lambda (k) (random-real)) hog-length)) 2)) frames))) (define bar (ad-likelihood-gradient initial-matrix transition-matrix data states-hog-models)) (define foo (manual-likelihood-gradient initial-matrix transition-matrix data states-hog-models))

;;; begin code for converting between scheme-hog-hmm structure and params vector

(define (params->initial-state-distribution params states restricted?)
 (let ((distribution (subvector params 0 states)))
  (if restricted?
      (vector-append (vector 1) (map-n-vector (lambda (i) 1e-300) (- states 1)))
      distribution)))

(define (params->transition-matrix params states restricted?)
(let ((transition-matrix (shape-matrix (subvector params
			  states (+ states (* states states)))
	       states)))
 (if restricted?
     (map-indexed-vector (lambda (row i)
		  (map-indexed-vector (lambda (e j)
			       (if (or (= i j)
				       (= (+ i 1) j))
				   e
				   1e-300))
				      row))
			 transition-matrix)

     transition-matrix)))

(define (params->states-hog-models params states hog-vector-length)
 (shape-matrix (subvector params
			  (+ states (* states states))
			  (+ (+ states (* states states))
			     (* hog-vector-length states)))
	       hog-vector-length))

(define (compute-state-output-models-lengths model-types feature-lengths bin-lengths)
 (map-vector (lambda (type feature-length bin-length)
				(cond
				 ((equal? type 'dot)
				  feature-length)
				 ((equal? type 'discrete)
						     bin-length)
				 (else 2)))
			       model-types
			       feature-lengths
			       bin-lengths))

(define (minimum-vector v)
 (let ((m infinity)
       (len (vector-length v)))
  (let loop
    ((i 0)
     (m m))
   (if (>= i len)
       m
       (loop (+ i 1)
	     (min m (vector-ref v i)))))))

(define (maximum-vector v)
 (let ((m minus-infinity)
       (len (vector-length v)))
  (let loop
    ((i 0)
     (m m))
   (if (>= i len)
       m
       (loop (+ i 1)
	     (max m (vector-ref v i)))))))

(define (params->states-output-models params states model-types feature-lengths bin-lengths)
 (let* ((model-lengths (compute-state-output-models-lengths model-types feature-lengths bin-lengths))
	(state-output-model-length
	 (reduce-vector + model-lengths
			0)))
	(map-vector (lambda (state-params)
		     (let loop ((i 0)
				(start 0)
				(state-output-models '()))
		      (if (>= i (vector-length model-types))
			  (list->vector (reverse state-output-models))
			  (loop (+ i 1)
				(+ start (vector-ref model-lengths i))
				(cons (subvector state-params start (+ start (vector-ref model-lengths i)))
				state-output-models)))))
		    (shape-matrix (subvector params
					     (+ states (* states states))
					     (+ (+ states (* states states))
						(* states state-output-model-length)))
				  state-output-model-length))))

(define (normalize-states-output-models states-output-models model-types)
 (map-vector
  (lambda (state-output-models)
   (map-vector
    (lambda (model model-type)
     (case model-type
       ((dot)
	(unit model))
       ((gaussian)
	 (vector (x model)
		 (max .01 (y model))))
       ((radial)
	 model)
       ((discrete)
	 (normalize model))
       (else
	(panic (format #f "~a is not a valid model-type" model-type)))))
    state-output-models
    model-types))
  states-output-models))

(define (params->sigmoid-threshold params states model-types feature-lengths bin-lengths )
 (vector-ref params (+ (+ states (* states states))
		       (* states (reduce-vector
				  +
				  (compute-state-output-models-lengths model-types feature-lengths bin-lengths)
				  0)))))

(define (params->sigmoid-tau params states model-types feature-lengths bin-lengths)
 (vector-ref params (+ (+ states (* states states))
		       (* states (reduce-vector
				  +
				  (compute-state-output-models-lengths model-types feature-lengths bin-lengths)
				  0))
		       1)))

(define (scheme-hmm->params hmm)
 (hmm-vectors->params (scheme-hmm-initial-state-distribution hmm)
		      (scheme-hmm-transition-matrix hmm)
		      (scheme-hmm-states-output-models hmm)
		      (scheme-hmm-sigmoid-threshold hmm)
		      *sigmoid-b*))

(define (params->scheme-hmm params
			    states
			    restricted?
			    feature-types
			    feature-lengths
			    bin-lengths)
 (let ((model-types (map-vector model-type feature-types)))
 (make-scheme-hmm (params->initial-state-distribution params states restricted?)
		  (params->transition-matrix params states restricted?)
		  (params->states-output-models params states model-types feature-lengths bin-lengths)
		  (params->sigmoid-threshold params states model-types feature-lengths bin-lengths)
		  feature-types
		  feature-lengths
		  bin-lengths
		  #f
		  #f)))

(define (hmm-vectors->params initial-state-distribution
			     transition-matrix
			     states-output-models
			     sigmoid-thresh
			     sigmoid-tau)
     (vector-append
      initial-state-distribution
      (reduce-vector vector-append transition-matrix (vector))
      (reduce-vector vector-append (reduce-vector vector-append states-output-models (vector)) (vector))
      (vector sigmoid-thresh sigmoid-tau)))

(define (hmm-vectors->params-length initial-state-distribution
				    transition-matrix
				    states-output-models
				    )
 (+ (vector-length initial-state-distribution)
    (sqr (vector-length initial-state-distribution))
    (* (vector-length initial-state-distribution)
       (reduce-vector + (map-vector vector-length (x states-output-models)) 0))
    2))

(define (compute-video-likelihood-scheme-hog-hmm scheme-hog-hmm
						 hog-fvvs
						 symmetric?)
 (calc-log-likelihood (dtrace "initial:"(scheme-hog-hmm-initial-state-distribution scheme-hog-hmm))
		      (dtrace "transition:"(scheme-hog-hmm-transition-matrix scheme-hog-hmm))
		      #f
		      (dtrace "hog models:"(scheme-hog-hmm-states-hog-models scheme-hog-hmm))
		      hog-fvvs
		      (scheme-hog-hmm-sigmoid-threshold scheme-hog-hmm)
		      *sigmoid-b*
		      symmetric?))

(define (compute-video-likelihood-scheme-hmm scheme-hmm
					     features
					     symmetric?)
 (calc-log-likelihood (scheme-hmm-initial-state-distribution scheme-hmm)
		      (scheme-hmm-transition-matrix scheme-hmm)
		      (map-vector model-type (scheme-hmm-feature-types scheme-hmm))
		      (scheme-hmm-states-output-models scheme-hmm)
		      features
		      (scheme-hog-hmm-sigmoid-threshold scheme-hmm)
		      *sigmoid-b*
		      symmetric?))

(define (video-likelihood-params params
				 hog-fvvs
				 states
				 model-types
				 feature-lengths
				 bin-lengths
				 symmetric?
				 restricted?
				 weighted?)
 (let* ((initial-state-distribution (params->initial-state-distribution params states restricted?))
	(transition-matrix (params->transition-matrix params states restricted?))
	(states-output-models (params->states-output-models params states model-types feature-lengths bin-lengths))
	(sigmoid-thresh (params->sigmoid-threshold params states model-types feature-lengths bin-lengths))
	(sigmoid-tau *sigmoid-b*)
	(normalized-initial-state-distribution (v/k initial-state-distribution
						    (reduce-vector
						     +
						     initial-state-distribution
						     0)))
	(normalized-transition-matrix (map-vector (lambda (row)
						   (v/k row
							(reduce-vector
							 +
							 row
							 0)))
						  transition-matrix))
	(normalized-states-output-models (map-vector
				   (lambda (state-output-models)
				    (map-vector (lambda (model model-type)
						 (cond ((equal? model-type 'dot)
							(unit model))
						       ((equal? model-type 'discrete)
							(normalize model))
						       (else model)))
						state-output-models
						model-types))
				   states-output-models)))
  (calc-log-likelihood normalized-initial-state-distribution
		       normalized-transition-matrix
		       model-types
		       normalized-states-output-models
		       hog-fvvs
		       sigmoid-thresh
		       sigmoid-tau
		       symmetric?)))

(define (single-video-cost-gradient-params states
					   params
					   hog-fvvs
					   model-types
					   feature-lengths
					   bin-lengths
					   symmetric?
					   restricted?)
 ;; (dtrace " single video cost-gradient params args:" (list states
 ;; 					   params
 ;; 					   hog-fvvs
 ;; 					   model-types
 ;; 					   feature-lengths
 ;; 					   bin-lengths
 ;; 					   symmetric?
 ;; 					   restricted?))
 (let ((grad-function
	(gradient-r
	 (lambda (params)
	  (let* ((initial-state-distribution (params->initial-state-distribution params states restricted?))
		 (transition-matrix (params->transition-matrix params states restricted?))
		 (states-output-models (params->states-output-models params states model-types feature-lengths bin-lengths))
		 (sigmoid-thresh *sigmoid-a*)
		 (sigmoid-tau *sigmoid-b*)
		 (normalized-initial-state-distribution (v/k initial-state-distribution
							     (reduce-vector
							      +
							      initial-state-distribution
							      0)))
		 (normalized-transition-matrix (map-vector (lambda (row)
							    (v/k row
								 (reduce-vector
								  +
								  row
								  0)))
							   transition-matrix))
		 (normalized-output-models (map-vector
					    (lambda (state-output-models)
					     (map-vector (lambda (model model-type)
							  (cond ((equal? model-type 'dot)
								 (unit model))
								((equal? model-type 'discrete)
								 (normalize model))
								(else model)))
							 state-output-models
							 model-types))
					    states-output-models))
		 (like (calc-log-likelihood normalized-initial-state-distribution
				normalized-transition-matrix
				model-types
				normalized-output-models
				hog-fvvs
				sigmoid-thresh
				sigmoid-tau
				symmetric?)))
	   (dtrace "adlike:" (primal* like))
	   like)))))
       (grad-function params)))

(define (svm-style-cost-params classes-params
			       classes-videos-hog-fvvs
			       states
			       model-types
			       feature-lengths
			       bin-lengths
			       symmetric?
			       restricted?
			       weighted?)
 (let* ((classes-videos-hmm-classes-likelihoods
	 (map (lambda (videos-hog-fvvs)
	       (map (lambda (hog-fvvs)
		     (map (lambda (params)
			   (dtrace "video-likelihood:"
				   (video-likelihood-params params
						    hog-fvvs
						    states
						    model-types
						    feature-lengths
						    bin-lengths
						    symmetric?
						    restricted?
						    weighted?)))
			  classes-params))
		    videos-hog-fvvs))
	      classes-videos-hog-fvvs))
	(classes-videos-costs
	 (map-indexed
	  (lambda (class-videos-hmm-classes-likelihoods class)
	   (map (lambda (video-hmm-classes-likelihoods)
		 (let* ((correct-likelihood (list-ref video-hmm-classes-likelihoods
						      class))
			(maximum-incorrect-likelihood
			 (maximum (list-remove video-hmm-classes-likelihoods class))))
		  (dtrace "video cost" (if (> correct-likelihood (+ maximum-incorrect-likelihood *margin-param*))
		      0
		      (sqr (- (+ maximum-incorrect-likelihood *margin-param*) correct-likelihood))))))
		class-videos-hmm-classes-likelihoods))
	  classes-videos-hmm-classes-likelihoods)))
  (reduce + (join classes-videos-costs) 0)))


(define (svm-style-cost-gradient-parameters classes-params
					    states
					    classes-videos-hog-fvvs
					    model-types
					    feature-lengths
					    bin-lengths
					    symmetric?
					    restricted?
					    weighted?)
 (let* ((classes (enumerate (length classes-params)))
	(classes-videos-hmm-classes-likelihoods
	 (map (lambda (videos-hog-fvvs)
	       (map (lambda (hog-fvvs)
		     (map (lambda (params)
			   (video-likelihood-params params
						    hog-fvvs
						    states
						    model-types
						    feature-lengths
						    bin-lengths
						    symmetric?
						    restricted?
						    weighted?))
			  classes-params))
		    videos-hog-fvvs))
	      classes-videos-hog-fvvs))
	(classes-videos-costs-with-labels
	 (map-indexed
	  (lambda (class-videos-hmm-classes-likelihoods class)
	   (map (lambda (video-hmm-classes-likelihoods)
		 (let* ((correct-likelihood (list-ref video-hmm-classes-likelihoods
						      class))
			(maximum-incorrect-likelihood
			 (maximum (list-remove video-hmm-classes-likelihoods class)))
			(p (position maximum-incorrect-likelihood video-hmm-classes-likelihoods)))
		  (dtrace "video labeled cost" (if (> correct-likelihood (+ maximum-incorrect-likelihood *margin-param*))
		      (list 0 (list class p))
		      (list (- (+ maximum-incorrect-likelihood *margin-param*) correct-likelihood)
			    (list class p))))))
		class-videos-hmm-classes-likelihoods))
	  classes-videos-hmm-classes-likelihoods))
	(hmms-gradients
	 (map (lambda (class-videos-costs-with-labels
		       class
		       params
		       class-videos-hog-fvvs)
	       (let* ((positive-gradients
		       (removeq #f
				(map (lambda (hog-fvvs video-costs-with-labels)
			     (if (>= (first video-costs-with-labels) 0)
				 (begin (dtrace "computing positive gradient" "")
					(k*v (* 2 (first video-costs-with-labels))
					     (single-video-cost-gradient-params states
									   params
									   hog-fvvs
									   model-types
									   feature-lengths
									   bin-lengths
									   symmetric?
									   restricted?)))
				 #f))
				     class-videos-hog-fvvs
				     class-videos-costs-with-labels)))
		      (negative-gradients
		       (join (map
			      (lambda (class-videos-costs-with-labels
				       class-videos-hog-fvvs)
			       (removeq
				#f
				(map
				 (lambda (video-cost-with-labels
					  hog-fvvs)
				  (dtrace "class (cost labels)" (list class video-cost-with-labels))
				  (if (and (> (first video-cost-with-labels) 0)
					   (= (second (second video-cost-with-labels))
					      class))
				      (begin (dtrace "computing negative gradient" "")
					     (k*v (* 2 (first video-cost-with-labels))
						  (single-video-cost-gradient-params states
										params
										hog-fvvs
										model-types
										feature-lengths
										bin-lengths
										symmetric?
										restricted?)))
				      #f))
				 class-videos-costs-with-labels
				 class-videos-hog-fvvs)))
			      classes-videos-costs-with-labels
			      classes-videos-hog-fvvs))))
		(v- (reduce v+ positive-gradients
			    (map-n-vector
			     (lambda (i) 0)
			     (vector-length params)))
		    (reduce v+ negative-gradients
			    (map-n-vector
			     (lambda (i) 0)
			     (vector-length params))))))
	      classes-videos-costs-with-labels
	      classes
	      classes-params
	      classes-videos-hog-fvvs)))
  hmms-gradients))

(define (multiclass-svm-style-hog-hmm-gradient-descent states
						       classes
						       classes-videos-hog-fvvs
						       iterations
						       outpath
						       feature-types
						       feature-lengths
						       bin-lengths
						       symmetric?
						       restricted?
						       weighted?
						       step-size)
 (let* ((model-types (map-vector model-type feature-types))
	(hog-length (vector-length (if symmetric?
				       (x (x (first (first classes-videos-hog-fvvs))))
				       (x (first (first classes-videos-hog-fvvs))))))
	(classes-initial-state-distributions
	 (map (lambda (class)
	       (vector-append (vector 1)
			(map-n-vector
			 (lambda (i) 1e-100)
			 (- states 1))))
	      classes))
	(classes-transition-matrices
	 (map (lambda (class)
	       (map-n-vector
		(lambda (from-state)
		 (map-n-vector
		  (lambda (to-state)
		   (cond
		    ((equal? from-state to-state)
		     .97)
		    ((equal? (+ from-state 1)
			     to-state)
		     .03)
		    (else 1e-100)))
		  states))
		states))
	      classes))
	(classes-states-output-models
	 (map (lambda (class)
	       (map-n-vector
		(lambda (i)
		 (random-output-parameter-matrix model-types feature-lengths bin-lengths)
		 )
		states))
	      classes))
	(classes-params
	 (map (lambda (initial-state-distribution
		       transition-matrix
		       states-hog-models)
	       (hmm-vectors->params initial-state-distribution
				     transition-matrix
				     states-hog-models
				     *sigmoid-a*
				     *sigmoid-b*))
	      classes-initial-state-distributions
	      classes-transition-matrices
	      classes-states-output-models)))
  (let loop ((classes-params classes-params)
	     (i 0)
	     (prev-classes-initial-state-distributions classes-initial-state-distributions)
	     (prev-classes-transition-matrices classes-transition-matrices)
	     (prev-classes-states-output-models classes-states-output-models)
	     (prev-classes-sigmoid-threshold (map (lambda (class) *sigmoid-a*) classes))
	     (prev-objective (svm-style-cost-params classes-params
						    classes-videos-hog-fvvs
						    states
						    model-types
						    feature-lengths
						    bin-lengths
						    symmetric?
						    restricted?
						    weighted?)))
   (write-object-to-file
    (map (lambda (prev-initial-state-distribution
		  prev-transition-matrix
		  prev-states-hog-models
		  prev-sigmoid-threshold)
	  (make-scheme-hmm prev-initial-state-distribution
			   prev-transition-matrix
			   prev-states-hog-models
			   prev-sigmoid-threshold
			   feature-types
			   feature-lengths
			   bin-lengths
			   prev-objective
			   #f))
	 prev-classes-initial-state-distributions
	 prev-classes-transition-matrices
	 prev-classes-states-output-models
	 prev-classes-sigmoid-threshold)
    (if restricted?
	(format #f "~a-~a-restricted.sc" outpath i)
	(format #f "~a-~a.sc" outpath i)))
   (dtrace "prev-objective-function:" prev-objective)
   (if (> i iterations)
       classes-params
       (let* (;;(g (grad params))
	      (gs (svm-style-cost-gradient-parameters classes-params
						     states
						     classes-videos-hog-fvvs
						     model-types
						     feature-lengths
						     bin-lengths
						     symmetric?
						     restricted?
						     weighted?)))
	(let loop2 ((step-size step-size))
	 (let* ((new-classes-params
		 (map (lambda (g params)
		       (v+ params (k*v step-size g)))
		      gs classes-params))
		(new-classes-initial-state-distributions
		 (map (lambda (new-params)
		       (normalize
			(vector-clip
			 (params->initial-state-distribution new-params states restricted?))))
		      new-classes-params))
		(new-classes-transition-matrices
		 (map (lambda (new-params)
		       (map-vector
			(lambda (row)
			 (normalize (vector-clip row)))
			(params->transition-matrix new-params states restricted?)))
		      new-classes-params))
		(new-classes-states-output-models
		 (map (lambda (new-params)
		       (params->states-output-models new-params states model-types feature-lengths bin-lengths))
		      new-classes-params))
		(new-classes-sigmoid-threshold
		 (map (lambda (new-params)
		       (params->sigmoid-threshold
			new-params states model-types feature-lengths bin-lengths))
		      new-classes-params))
		(normalized-new-classes-params
		 (map (lambda (new-initial-state-distribution
			       new-transition-matrix
			       new-states-output-models
			       new-sigmoid-threshold)
		       (hmm-vectors->params new-initial-state-distribution
					    new-transition-matrix
					    new-states-output-models
					    new-sigmoid-threshold
					    *sigmoid-b*))
		      new-classes-initial-state-distributions
		      new-classes-transition-matrices
		      new-classes-states-output-models
		      new-classes-sigmoid-threshold))
	       (new-objective (dtrace "new objective:"
				      (svm-style-cost-params normalized-new-classes-params
							     classes-videos-hog-fvvs
							     states
							     model-types
							     feature-lengths
							     bin-lengths
							     symmetric?
							     restricted?
							     weighted?))))
	  (cond ((< step-size .000000001)
		 (loop classes-params
		       (+ i 1000)
		       prev-classes-initial-state-distributions
		       prev-classes-transition-matrices
		       prev-classes-states-output-models
		       prev-classes-sigmoid-threshold
		       prev-objective))
		((< new-objective prev-objective)
		 (loop normalized-new-classes-params
		       (+ i 1)
		       new-classes-initial-state-distributions
		       new-classes-transition-matrices
		       new-classes-states-output-models
		       new-classes-sigmoid-threshold
		       new-objective))
		(else
		 (loop2 (/ step-size 10)))))))))))

(define (classify-with-scheme-hmms verbs-scheme-hog-hmms
				       verbs-videos-hog-fvvs
				       symmetric?)
 (let* ((verbs-videos-likelihoods
	 (dtrace "likelihoods:"(map-indexed (lambda (verb-videos-hog-fvvs i)
		       (format #t "class ~a videos:" i) (newline)
	       (map (lambda (video-hog-fvvs)
		     (map (lambda (scheme-hog-hmm)

			   (dtrace "" (compute-video-likelihood-scheme-hmm scheme-hog-hmm
								    video-hog-fvvs
								    symmetric?)))
			  verbs-scheme-hog-hmms))
		    verb-videos-hog-fvvs))
	      verbs-videos-hog-fvvs)))
	(correct
	 (map-indexed (lambda (verb-videos-likelihoods verb-index)
		       (map (lambda (video-likelihoods)
			     (let* ((highest (maximum video-likelihoods))
				    (p (position highest video-likelihoods)))
			      (if (= p verb-index)
				  1
				  0)))
			    verb-videos-likelihoods))
		      verbs-videos-likelihoods))
	(number-correct (reduce + (join correct) 0))
	(accuracy (/ number-correct (length (join verbs-videos-hog-fvvs)))))

  (dtrace "number correct:" number-correct)
  (dtrace "out of: " (length (join verbs-videos-hog-fvvs)))
  (dtrace "accuracy: " accuracy)
  (list verbs-videos-likelihoods
	correct
	accuracy)))

(define (classify-with-scheme-hmms-c verbs-scheme-hmms
				     verbs-videos-fvvs
				     verbs-videos-c-fvvs
				     symmetric?)

 (let* ((preallocated-hmm-pointers (preallocate-c-hmm-arrays
				    (vector-length (scheme-hmm-transition-matrix (first verbs-scheme-hmms)))
				   (vector-length (scheme-hmm-feature-lengths (first verbs-scheme-hmms)))
				   (scheme-hmm-states-output-models (first verbs-scheme-hmms))
				   (vector-length (scheme-hmm->params (first verbs-scheme-hmms)))))
	(verbs-videos-likelihoods
	 (map (lambda (verb-videos-fvvs verb-videos-c-fvvs i)
		       (format #t "class ~a videos:" i) (newline)
		       (map (lambda (video-fvvs c-fvvs)
			     (map (lambda (hmm)
				   (copy-hmm-data-into-precallocated-c-pointers
				    (scheme-hmm-initial-state-distribution hmm)
				    (scheme-hmm-transition-matrix hmm)
				    (scheme-hmm-states-output-models hmm)
				    (scheme-hmm-feature-types hmm)
				    (scheme-hmm-feature-lengths hmm)
				    (scheme-hmm-bin-lengths hmm)
				    (vector-ref preallocated-hmm-pointers 0)
				    (vector-ref preallocated-hmm-pointers 1)
				    (vector-ref preallocated-hmm-pointers 2)
				    (vector-ref preallocated-hmm-pointers 3)
				    (vector-ref preallocated-hmm-pointers 4)
				    (vector-ref preallocated-hmm-pointers 5)
				    (vector-ref preallocated-hmm-pointers 6)
				    (vector-ref preallocated-hmm-pointers 7))
				   (x (faster-preallocated-hog-hmm-derivative-c-wrapper
				       (scheme-hmm-initial-state-distribution hmm)
				       (scheme-hmm-transition-matrix hmm)
				       video-fvvs
				       (scheme-hmm-states-output-models hmm)
				       (scheme-hmm-feature-types hmm)
				       (scheme-hmm-feature-lengths hmm)
				       (scheme-hmm-bin-lengths hmm)
				       (scheme-hmm-sigmoid-threshold hmm)
				       *sigmoid-b*
				       c-fvvs
				       (vector-ref preallocated-hmm-pointers 0)
				       (vector-ref preallocated-hmm-pointers 1)
				       (vector-ref preallocated-hmm-pointers 2)
				       (vector-ref preallocated-hmm-pointers 3)
				       (vector-ref preallocated-hmm-pointers 4)
				       (vector-ref preallocated-hmm-pointers 5)
				       (vector-ref preallocated-hmm-pointers 6)
				       (vector-ref preallocated-hmm-pointers 7)
				       #f))
				   )
				  verbs-scheme-hmms))
			    verb-videos-fvvs verb-videos-c-fvvs))
		      verbs-videos-fvvs verbs-videos-c-fvvs (enumerate (length verbs-videos-fvvs))))
	(verbs-videos-states-probablilities
	 (map (lambda (verb-videos-fvvs verb-videos-c-fvvs i)
		       (format #t "class ~a videos:" i) (newline)
		       (map (lambda (video-fvvs c-fvvs)
			     (map (lambda (hmm)
				   (copy-hmm-data-into-precallocated-c-pointers
				    (scheme-hmm-initial-state-distribution hmm)
				    (scheme-hmm-transition-matrix hmm)
				    (scheme-hmm-states-output-models hmm)
				    (scheme-hmm-feature-types hmm)
				    (scheme-hmm-feature-lengths hmm)
				    (scheme-hmm-bin-lengths hmm)
				    (vector-ref preallocated-hmm-pointers 0)
				    (vector-ref preallocated-hmm-pointers 1)
				    (vector-ref preallocated-hmm-pointers 2)
				    (vector-ref preallocated-hmm-pointers 3)
				    (vector-ref preallocated-hmm-pointers 4)
				    (vector-ref preallocated-hmm-pointers 5)
				    (vector-ref preallocated-hmm-pointers 6)
				    (vector-ref preallocated-hmm-pointers 7))
				   (z (faster-preallocated-hog-hmm-derivative-c-wrapper
				       (scheme-hmm-initial-state-distribution hmm)
				       (scheme-hmm-transition-matrix hmm)
				       video-fvvs
				       (scheme-hmm-states-output-models hmm)
				       (scheme-hmm-feature-types hmm)
				       (scheme-hmm-feature-lengths hmm)
				       (scheme-hmm-bin-lengths hmm)
				       (scheme-hmm-sigmoid-threshold hmm)
				       *sigmoid-b*
				       c-fvvs
				       (vector-ref preallocated-hmm-pointers 0)
				       (vector-ref preallocated-hmm-pointers 1)
				       (vector-ref preallocated-hmm-pointers 2)
				       (vector-ref preallocated-hmm-pointers 3)
				       (vector-ref preallocated-hmm-pointers 4)
				       (vector-ref preallocated-hmm-pointers 5)
				       (vector-ref preallocated-hmm-pointers 6)
				       (vector-ref preallocated-hmm-pointers 7)
				       #f))
				   )
				  verbs-scheme-hmms))
			    verb-videos-fvvs verb-videos-c-fvvs))
		      verbs-videos-fvvs verbs-videos-c-fvvs (enumerate (length verbs-videos-fvvs))))
	;;(panic "arbitrary")
	(correct
	 (map-indexed (lambda (verb-videos-likelihoods verb-index)
		       (map (lambda (video-likelihoods)
			     (let* ((highest (maximum video-likelihoods))
				    (p (position highest video-likelihoods)))
			      (if (= p verb-index)
				  1
				  0)))
			    verb-videos-likelihoods))
		      verbs-videos-likelihoods))
	(number-correct (reduce + (join correct) 0))
	(accuracy (/ number-correct (length (join verbs-videos-fvvs)))))

  (dtrace "number correct:" number-correct)
  (dtrace "out of: " (length (join verbs-videos-fvvs)))
  (dtrace "accuracy: " accuracy)
  (list verbs-videos-likelihoods
	correct
	accuracy)))


(define (new-classify-with-scheme-hmms-c verbs-scheme-hmms
				     verbs-videos-fvvs
				     verbs-videos-c-fvvs
				     symmetric?
				     verbs-videos-labels
				     verbs)

 (let* ((preallocated-hmm-pointers (preallocate-c-hmm-arrays
				    (vector-length (scheme-hmm-transition-matrix (first verbs-scheme-hmms)))
				   (vector-length (scheme-hmm-feature-lengths (first verbs-scheme-hmms)))
				   (scheme-hmm-states-output-models (first verbs-scheme-hmms))
				   (vector-length (scheme-hmm->params (first verbs-scheme-hmms)))))
	(verbs-videos-likelihoods
	 (map (lambda (;;verb-videos-fvvs
		       verb-videos-c-fvvs i)
		       (format #t "class ~a videos:" i) (newline)
		       (map (lambda (;;video-fvvs
				     c-fvvs)
			     (map (lambda (hmm)
				   (copy-hmm-data-into-precallocated-c-pointers
				    (scheme-hmm-initial-state-distribution hmm)
				    (scheme-hmm-transition-matrix hmm)
				    (scheme-hmm-states-output-models hmm)
				    (scheme-hmm-feature-types hmm)
				    (scheme-hmm-feature-lengths hmm)
				    (scheme-hmm-bin-lengths hmm)
				    (vector-ref preallocated-hmm-pointers 0)
				    (vector-ref preallocated-hmm-pointers 1)
				    (vector-ref preallocated-hmm-pointers 2)
				    (vector-ref preallocated-hmm-pointers 3)
				    (vector-ref preallocated-hmm-pointers 4)
				    (vector-ref preallocated-hmm-pointers 5)
				    (vector-ref preallocated-hmm-pointers 6)
				    (vector-ref preallocated-hmm-pointers 7))
				   (x (faster-preallocated-hog-hmm-derivative-c-wrapper
				       (scheme-hmm-initial-state-distribution hmm)
				       (scheme-hmm-transition-matrix hmm)
				       #f;;video-fvvs
				       (scheme-hmm-states-output-models hmm)
				       (scheme-hmm-feature-types hmm)
				       (scheme-hmm-feature-lengths hmm)
				       (scheme-hmm-bin-lengths hmm)
				       (scheme-hmm-sigmoid-threshold hmm)
				       *sigmoid-b*
				       c-fvvs
				       (vector-ref preallocated-hmm-pointers 0)
				       (vector-ref preallocated-hmm-pointers 1)
				       (vector-ref preallocated-hmm-pointers 2)
				       (vector-ref preallocated-hmm-pointers 3)
				       (vector-ref preallocated-hmm-pointers 4)
				       (vector-ref preallocated-hmm-pointers 5)
				       (vector-ref preallocated-hmm-pointers 6)
				       (vector-ref preallocated-hmm-pointers 7)
				       #f))
				   )
				  verbs-scheme-hmms))
			   ;; verb-videos-fvvs
			    verb-videos-c-fvvs))
		      ;;verbs-videos-fvvs
		      verbs-videos-c-fvvs (enumerate (length verbs-videos-c-fvvs))))
	(verbs-videos-states-probablilities
	 (map (lambda (;;verb-videos-fvvs
		       verb-videos-c-fvvs i)
		       (format #t "class ~a videos:" i) (newline)
		       (map (lambda (;;video-fvvs
				     c-fvvs)
			     (map (lambda (hmm)
				   (copy-hmm-data-into-precallocated-c-pointers
				    (scheme-hmm-initial-state-distribution hmm)
				    (scheme-hmm-transition-matrix hmm)
				    (scheme-hmm-states-output-models hmm)
				    (scheme-hmm-feature-types hmm)
				    (scheme-hmm-feature-lengths hmm)
				    (scheme-hmm-bin-lengths hmm)
				    (vector-ref preallocated-hmm-pointers 0)
				    (vector-ref preallocated-hmm-pointers 1)
				    (vector-ref preallocated-hmm-pointers 2)
				    (vector-ref preallocated-hmm-pointers 3)
				    (vector-ref preallocated-hmm-pointers 4)
				    (vector-ref preallocated-hmm-pointers 5)
				    (vector-ref preallocated-hmm-pointers 6)
				    (vector-ref preallocated-hmm-pointers 7))
				   (faster-preallocated-hog-hmm-derivative-c-wrapper
				       (scheme-hmm-initial-state-distribution hmm)
				       (scheme-hmm-transition-matrix hmm)
				       #f;;video-fvvs
				       (scheme-hmm-states-output-models hmm)
				       (scheme-hmm-feature-types hmm)
				       (scheme-hmm-feature-lengths hmm)
				       (scheme-hmm-bin-lengths hmm)
				       (scheme-hmm-sigmoid-threshold hmm)
				       *sigmoid-b*
				       c-fvvs
				       (vector-ref preallocated-hmm-pointers 0)
				       (vector-ref preallocated-hmm-pointers 1)
				       (vector-ref preallocated-hmm-pointers 2)
				       (vector-ref preallocated-hmm-pointers 3)
				       (vector-ref preallocated-hmm-pointers 4)
				       (vector-ref preallocated-hmm-pointers 5)
				       (vector-ref preallocated-hmm-pointers 6)
				       (vector-ref preallocated-hmm-pointers 7)
				       #f)
				   )
				  verbs-scheme-hmms))
			    ;;verb-videos-fvvs
			    verb-videos-c-fvvs))
		      ;;verbs-videos-fvvs
		      verbs-videos-c-fvvs (enumerate (length verbs-videos-c-fvvs))))
	(correct
	 (map (lambda (verb-videos-likelihoods verb-videos-labels)
		       (map (lambda (video-likelihoods label)
			     (let* ((highest (maximum video-likelihoods))
				    (p (position highest video-likelihoods)))
			      (dtrace "video labeled as:" (list-ref verbs p))
			      (if (equal? (list-ref verbs p) label)
				  1
				  0)))
			    verb-videos-likelihoods verb-videos-labels))
		      verbs-videos-likelihoods verbs-videos-labels))
	(confusion
	 (map (lambda (verb-videos-likelihoods verb-videos-labels)
		       (map (lambda (video-likelihoods label)
			     (let* ((highest (maximum video-likelihoods))
				    (p (position highest video-likelihoods)))
			      (dtrace "video labeled as:" (list-ref verbs p))
			      (list (list-ref verbs p) label)
				  ))
			    verb-videos-likelihoods verb-videos-labels))
		      verbs-videos-likelihoods verbs-videos-labels))
	(number-correct (reduce + (join correct) 0))
	(accuracy (/ number-correct (length (join verbs-videos-c-fvvs)))))

  (dtrace "number correct:" number-correct)
  (dtrace "out of: " (length (join verbs-videos-c-fvvs)))
  (dtrace "accuracy: " accuracy)
  (list verbs-videos-likelihoods
	correct
	accuracy
	confusion
	verbs-videos-states-probablilities)))

(define (classify-with-scheme-hmms-with-slaves verbs-scheme-hog-hmms
						   video-labels
						   symmetric?)
 (let* ((videos-likelihoods (dtrace "videos-likelihoods:"(transpose-list-of-lists
			     (map (lambda (scheme-hog-hmm)
				   (dtrace "slave-output:"(compute-videos-likelihood-with-slaves scheme-hog-hmm)))
				  verbs-scheme-hog-hmms))))
	(correct
	 (map (lambda (video-likelihoods video-label)
		       (dtrace "(video likes, true label)" (list video-likelihoods video-label))
			     (let* ((highest (maximum video-likelihoods))
				    (p (position highest video-likelihoods)))
			      (if (= p video-label)
				  1
				  0)))

		      videos-likelihoods
		      video-labels))
	(number-correct (reduce + correct 0))
	(accuracy (/ number-correct (length video-labels))))
  (write-object-to-file (list videos-likelihoods video-labels) "/tmp/tmp-videos-likelihoods.sc")
  (dtrace "number correct:" number-correct)
  (dtrace "out of: " (length video-labels))
  (dtrace "accuracy: " accuracy)
  (list videos-likelihoods
	correct
	accuracy)))

;;; begin section for dealing with slave processes through network

(define *slave-videos-fvvs* #f)
(define *slave-symmetric?* #t)
(define *slave-restricted?* #f)
(define *slave-likelihoods* (vector #f))
(define *slave-gradients* (vector #f))
(define *slave-compute-likelihood?* #f)
(define *slave-compute-gradient?* #f)
(define *slave-compute-specific-gradients?* #f)
(define *server-in-fds* #f)
(define *server-in-ports* #f)
(define *server-out-ports* #f)
(define *slave-time-to-die?* #f)
(define *current-hog-hmm* #f)
(define *scheme-hog-hmm-path* #f)
(define *server-in-1-fd* #f)
(define *server-in-1* #f)
(define *server-out-1* #f)
(define *scheme-hog-hmms* #f)
(define *scheme-hog-hmms-path* #f)
(define *video-indeces* #f)
(define *slave-servers* '())
(define *slave-hmm-path* #f)
(define *slave-hmms-path* #f)
(define *slave-videos-c-fvs* #f)
(define *slave-preallocated-hmm-pointers* #f)
(define *slave-gradient-length* #f)

;; (define (set-up-slave! videos-pathnames
;; 		       tracks
;; 		       track-models
;; 		       cropped-width
;; 		       feature-types
;; 		       symmetric?
;; 		       restricted?
;; 		       port
;; 		       slave-id
;; 		       master-hostname
;; 		       master-port)
;;  (dtrace "videos-pathnames:" videos-pathnames)
;;  (dtrace "tracks:" tracks)
;;  (dtrace "track-models:" track-models)
;;  (dtrace "feature-types" feature-types)
;;  (set! *slave-symmetric?* symmetric?)
;;  (set! *slave-restricted?* restricted?)
;; (non-loop-server port)
;; (wait-for-message *server-in-1* *server-out-1* *server-in-1-fd*)
;; (display "about to connect to master server...") (newline)
;; (connect-to-other master-hostname master-port)
;; (dtrace "videopathnames:" videos-pathnames)
;; (display "computing features:") (newline)
;; (set! *slave-videos-fvvs*
;;        (map (lambda (video track track-model)
;; 	      ;;(list->vector (compute-video-hog-fv video track-model track cropped-width symmetric?))
;; 	     (extract-features video track-model track cropped-width symmetric? #f #f (vector->list (map-vector string->symbol feature-types)))) ;;needs work: flow scale set to #f do to laziness
;; 	     videos-pathnames tracks track-models))
;; (set! *slave-videos-c-fvs*
;;       (map (lambda (video-fvs)
;; 	    (fvs->c-fvs video-fvs (map-vector string->symbol feature-types)))
;; 	   *slave-videos-fvvs*))
;; (display "done computing features") (newline)
;; ;;(dtrace "features:" *slave-videos-fvvs*)
;; (let loop ()

;;  ;;(display "1")
;;  (wait-for-message *server-in-1* *server-out-1* *server-in-1-fd*)

;;  ;;(display "2") (newline)
;;  (when *slave-time-to-die?*
;;   (newline) (display "time to die :(") (newline)
;;   (exit))
;;  ;;(display "2")
;;  (when (and *slave-compute-likelihood?*)
;;   (set! *current-hog-hmm* (read-object-from-file *scheme-hog-hmm-path*))
;;   (when (and  (dtrace "t1"(equal? *slave-preallocated-hmm-pointers* #f))
;; 	     (dtrace "t2"(not (equal? *current-hog-hmm* #f))))
;;    (dtrace "preallocating" "")
;;   (set! *slave-gradient-length* (hmm-vectors->params-length
;; 			   (scheme-hmm-initial-state-distribution *current-hog-hmm*)
;; 			   (scheme-hmm-transition-matrix *current-hog-hmm*)
;; 			   (scheme-hmm-states-output-models *current-hog-hmm*)))
;;   (set! *slave-preallocated-hmm-pointers*
;; 	(preallocate-c-hmm-arrays
;; 	 (vector-length (scheme-hmm-initial-state-distribution *current-hog-hmm*))
;; 	 (vector-length (scheme-hmm-feature-lengths *current-hog-hmm*))
;; 	 (scheme-hmm-states-output-models *current-hog-hmm*)
;; 	 *slave-gradient-length*))
;;   (dtrace "done preallocating" ""))
;;   (display "computing likelihood...") (newline)
;;   (let ((likes
;; 	 (map (lambda (c-fvs fvs)
;; 	       (x (preallocated-hog-hmm-derivative-c-wrapper
;; 		   (scheme-hmm-initial-state-distribution *current-hog-hmm*)
;; 		   (scheme-hmm-transition-matrix *current-hog-hmm*)
;; 		   fvs
;; 		   (scheme-hmm-states-output-models *current-hog-hmm*)
;; 		   (scheme-hmm-feature-types *current-hog-hmm*)
;; 		   (scheme-hmm-feature-lengths *current-hog-hmm*)
;; 		   (scheme-hmm-bin-lengths *current-hog-hmm*)
;; 		   (scheme-hmm-sigmoid-threshold *current-hog-hmm*)
;; 		   *sigmoid-b*
;; 		   c-fvs
;; 		   (vector-ref *slave-preallocated-hmm-pointers* 0)
;; 		   (vector-ref *slave-preallocated-hmm-pointers* 1)
;; 		   (vector-ref *slave-preallocated-hmm-pointers* 2)
;; 		   (vector-ref *slave-preallocated-hmm-pointers* 3)
;; 		   (vector-ref *slave-preallocated-hmm-pointers* 4)
;; 		   (vector-ref *slave-preallocated-hmm-pointers* 5)
;; 		   (vector-ref *slave-preallocated-hmm-pointers* 6)
;; 		   (vector-ref *slave-preallocated-hmm-pointers* 7)
;; 		   #f)))

;; 	      ;; (compute-video-likelihood-scheme-hmm  *current-hog-hmm*
;; 	      ;; 					    hog-fvvs
;; 	      ;; 					    *slave-symmetric?*))
;; 	      *slave-videos-c-fvs* *slave-videos-fvvs*)))
;;    (dtrace "done computing likelihood" (system-output "date"))
;;    (send-likelihood-result likes 0 slave-id)
;;    (display "done sending back the likelihood") (newline)
;;    (set! *slave-compute-likelihood?* #f)))
;;  ;;(display "5")
;;  (when *slave-compute-gradient?*
;;   (display "computing gradient...") (newline)
;;   (set! *current-hog-hmm* (read-object-from-file *scheme-hog-hmm-path*))
;;   (let ((gradients
;; 	 (map (lambda (hog-fvvs)
;; 	       (dtrace "about to compute a gradient at time:" (system-output "date"))
;; 	       (let*
;; 	       ((gradient (manual-likelihood-gradient (scheme-hmm-initial-state-distribution *current-hog-hmm*)
;; 					   (scheme-hmm-transition-matrix *current-hog-hmm*)
;; 					   hog-fvvs
;; 					   (scheme-hmm-states-output-models *current-hog-hmm*)
;; 					   (scheme-hmm-feature-types *current-hog-hmm*)
;; 					   (scheme-hmm-feature-lengths *current-hog-hmm*)
;; 					   (scheme-hmm-bin-lengths *current-hog-hmm*))))
;; 	        (dtrace "finished computing a gradient at time:" (system-output "date"))
;; 		gradient))

;; 	      *slave-videos-fvvs*)))
;;    (dtrace "done computing gradient at time" (system-output "date"))
;;    (send-gradient-result gradients 0 slave-id)
;;    (display "done sending back the gradient at time" (system-output "date"))
;;    (set! *slave-compute-gradient?* #f)))
;;  (when (and *slave-compute-specific-gradients?* *slave-preallocated-hmm-pointers*)
;;   (display "computing gradient...") (newline)
;;   (set! *scheme-hog-hmms* (read-object-from-file *scheme-hog-hmms-path*))
;;   (let ((gradients
;; 	 (map (lambda ( index)
;; 	       (let ((hmm (list-ref *scheme-hog-hmms* index)))
;; 		(dtrace "about to compute a c-gradient at time:" (system-output "date"))
;; 	       (let*
;; 	       ((gradient
;; 		 (y (preallocated-hog-hmm-derivative-c-wrapper
;; 		     (scheme-hmm-initial-state-distribution hmm)
;; 		     (scheme-hmm-transition-matrix hmm)
;; 		     (list-ref *slave-videos-fvvs* index)
;; 		     (scheme-hmm-states-output-models hmm)
;; 		     (scheme-hmm-feature-types hmm)
;; 		     (scheme-hmm-feature-lengths hmm)
;; 		     (scheme-hmm-bin-lengths hmm)
;; 		     (scheme-hmm-sigmoid-threshold hmm)
;; 		     *sigmoid-b*
;; 		     (list-ref *slave-videos-c-fvs* index)
;; 		     (vector-ref *slave-preallocated-hmm-pointers* 0)
;; 		     (vector-ref *slave-preallocated-hmm-pointers* 1)
;; 		     (vector-ref *slave-preallocated-hmm-pointers* 2)
;; 		     (vector-ref *slave-preallocated-hmm-pointers* 3)
;; 		     (vector-ref *slave-preallocated-hmm-pointers* 4)
;; 		     (vector-ref *slave-preallocated-hmm-pointers* 5)
;; 		     (vector-ref *slave-preallocated-hmm-pointers* 6)
;; 		     (vector-ref *slave-preallocated-hmm-pointers* 7)
;; 		     #t))))
;; 	       (dtrace "finished computing a gradient at time:" (system-output "date"))
;; 		gradient)))
;; 	      ;;*scheme-hog-hmms*
;; 	      *video-indeces*)))

;;    (dtrace "done computing gradient at time" (system-output "date"))
;;    (send-gradient-result gradients 0 slave-id)
;;    (dtrace "done sending back the gradient at time" (system-output "date"))
;;    (set! *slave-compute-specific-gradients?* #f)
;;    (set! *scheme-hog-hmms* #f)
;;    (set! *video-indeces* #f)))
;;  (interruptible-usleep 100000)
;;   (loop)))

(define-service 'compute-hmm-likelihood
 (lambda (scheme-hog-hmm-path)
  (set! *scheme-hog-hmm-path* scheme-hog-hmm-path)
  (set! *slave-compute-likelihood?* #t)))

(define-service 'compute-hmm-gradient
 (lambda (scheme-hog-hmm-path)
  (set! *scheme-hog-hmm-path* scheme-hog-hmm-path)
  (set! *slave-compute-gradient?* #t)))

(define-service 'compute-specific-hmms-gradients-on-videos
 (lambda (in)
  (display "recieved specific gradients request:") (newline)
    (let ((scheme-hog-hmms-path (first in))
	(video-indeces (second in)))
  (set! *scheme-hog-hmms-path* scheme-hog-hmms-path)
  (set! *video-indeces* video-indeces)
  (set! *slave-compute-specific-gradients?* #t))))

(define-service 'foo (lambda (in) (display in) 'thanks))

(define-service 'send-likelihood-result
 (lambda (in)
  (vector-set! *slave-likelihoods* (first in) (second in))))

(define-service 'send-gradient-result
 (lambda (in)
  (vector-set! *slave-gradients* (first in) (second in))))

(define-service 'die
 (lambda (in)
  (display "time to die!") (newline)
  (set! *slave-time-to-die?* #t) 'goodbye))


(define (non-loop-server port)
 (set-up-server port)
 (dtrace "waiting for connection 1" "")
 (accept-connection)
 (set! *server-in-1-fd* (get-socketfd))
 (set! *server-in-1* (make-file-port (get-in) "r"))
 (set! *server-out-1* (make-file-port (get-out) "w"))
 (dtrace "input and output ports created"
	 (list *server-in-1*
	       *server-out-1*
	       )))

(define (accept-and-setup-connection port i)
  (dtrace "waiting for connection" "")
  (accept-connection)
  (vector-set! *server-in-fds* i (get-socketfd))
  (vector-set! *server-in-ports* i (make-file-port (get-in) "r"))
  (vector-set! *server-out-ports* i (make-file-port (get-out) "w"))
  (dtrace "input and output ports created"
	  (list (vector-ref *server-in-ports* i)
		(vector-ref *server-out-ports* i))))

(define (connect-to-other hostname i)
 (define-server hostname i)
 (set! *servers* (append (rest *servers*) (list (first *servers*))))
 (let ((server (last *servers*)))

  (open-connection-to-server (server-hostname server) (server-port server))
  (set-server-input-port! server (make-file-port (get-in) "r"))
  (set-server-output-port! server (make-file-port (get-out) "w"))
  (dtrace (format #f "servers= ~a connection opened, now sending a message to servers[~a], which should be ~a:" *servers* i hostname) server)
  ;;*servers*)
 ;;(send-message i)
 ;;(dtrace "message sent" "")
 ))

(define (send-message i)
 (let ((server (list-ref *servers* i)))
  (deresult (invoke-on (dtrace "sending message to server:" server) 'foo 'hello))))

(define (send-likelihood-request i hmm)
;; (write-object-to-file hmm *slave-hmm-path*) not here, that would be slow!
 (let ((server (list-ref *servers* i)))
  (deresult (invoke-on (dtrace "sending likelihood request to server:" server) 'compute-hmm-likelihood *slave-hmm-path*))))

(define (send-gradient-request i hmm)
;; (write-object-to-file hmm *slave-hmm-path*) not here, that would be slow!
 (let ((server (list-ref *servers* i)))
  (deresult (invoke-on (dtrace "sending gradient request to server:" server) 'compute-hmm-gradient *slave-hmm-path*))))

(define (send-specific-gradient-request i hmms indeces)
 ;;(write-object-to-file hmms *slave-hmms-path*) not here, that would be slow!
 (let ((server (list-ref *servers* i)))
  (deresult (invoke-on (dtrace "sending gradient request to server:" server)
		       'compute-specific-hmms-gradients-on-videos
		      (list *slave-hmms-path* indeces)))))

(define (send-likelihood-result like i slave-id)
 (dtrace "like:" like)
 (let ((server (list-ref *servers* i)))
   (deresult (invoke-on (dtrace "sending likelihood-result to server:" server) 'send-likelihood-result (list slave-id like)))))

(define (send-gradient-result gradient i slave-id)
;; (dtrace "gradient:" gradient)
 (let ((server (list-ref *servers* i)))
   (deresult (invoke-on (dtrace "sending gradient-result to server:" server) 'send-gradient-result (list slave-id gradient)))))

(define (send-kill-command i)
 (let ((server (list-ref *servers* i)))
  (deresult (invoke-on (dtrace "sending kill command to server:" server) 'die 'sorry))))


(define (wait-for-message input-port output-port fd)
  (when (> (socket-bytes-available fd) 0)
   (let ((request (read input-port)))
   ;;(dtrace "request" request)
   (when (eof-object? request) ((cdr (assq 'shutdown *services*))))
   (write
    (list (apply (cdr (assq (first request) *services*)) (rest request)))
    output-port))
  (flush-buffer output-port) (list input-port output-port)))

(define (test-slave-interaction)
 (connect-to-other "save" 3601)
 (non-loop-server 3600)
 (define hmms (read-object-from-file "/net/save/aux/dpbarret/hog-hmms/multiclass-test-hallway-set0-step-size-0.01-109-restricted.sc"))
 (send-likelihood-request 0 (first hmms))
(let loop ()
 (interruptible-usleep 100000)
 (wait-for-message  *server-in-1* *server-out-1* *server-in-1-fd*)
 (dtrace "likes:" *slave-likelihoods*)
(if (dtrace "likelihood:" (vector-ref *slave-likelihoods* 0))
    #t
    (loop)))

(send-gradient-request 0 (first hmms))
(let loop ()
 (interruptible-usleep 100000)
 (wait-for-message  *server-in-1* *server-out-1* *server-in-1-fd*)
 (if (dtrace "gradient:" (vector-ref *slave-gradients* 0))
    #t
    (loop))))

(define (prepare-list l)
 (cons "list" (map (lambda (e)
		    (format "\"~a\"" e))
		   l)))

(define (prepare-vector l)
 (cons "vector"
		(vector->list (map-vector (lambda (e)
		    (format "\"~a\"" e))
		   l))))

(define (prepare-symbol-list l)
 (cons "list" (map (lambda (e)
		    (format "'~a" e))
		   l)))

(define (create-and-connect-to-slaves servers
				      videos-pathnames
				      tracks
				      track-models
				      cropped-width
				      feature-types
				      symmetric?
				      restricted?
				      master-hostname
				      master-port)
 (let* ((servers-free-cpus (get-approximate-free-server-cpus servers))
	(usable-cpus (dtrace "usable:" (map (lambda (cpus)
			   (exact-round (* .85 cpus))) ;; pretty arbitrary way to not use all cpus
			  servers-free-cpus)))
	(total-processes (dtrace "total procs:"(reduce + usable-cpus 0)))
	(videos-groups (dtrace "videos-groups:" (split-into total-processes (dtrace "videos:" videos-pathnames))))
	(track-models-groups (split-into total-processes track-models))
	(tracks-groups (split-into total-processes tracks)))
(set! *server-in-fds* (list->vector (map (lambda (g)
					  #f)
					 videos-groups)))
(set! *server-in-ports* (list->vector (map (lambda (g)
					  #f)
					 videos-groups)))
(set! *server-out-ports* (list->vector (map (lambda (g)
					  #f)
					 videos-groups)))
(set! *slave-likelihoods* (list->vector (map (lambda (g)
					  #f)
					 videos-groups)))
(set! *slave-gradients* (list->vector (map (lambda (g)
					  #f)
					 videos-groups)))
(set! *slave-servers* servers)
  (let loop ((servers servers)
	     (servers-cpus usable-cpus)
	     (videos-groups videos-groups)
	     (track-models-groups track-models-groups)
	     (tracks-groups tracks-groups)
	     (slave-id 0))
   (dtrace "args:" (list servers
			 servers-cpus
			 videos-groups
			 track-models-groups
			 tracks-groups
			 slave-id))
   (if (null? videos-groups)
       '()
       (let* ((slave-command
	       ;(dtrace "command:"
	       (format #f
		       "(load \"/home/dpbarret/darpa-collaboration/pose-retraining/felz-baum-welch-train.sc\")  (set-up-slave! ~a ~a ~a ~a ~a ~a ~a ~a ~a \"~a\" ~a) :n :n :n :n :b (exit)"
		       (prepare-list (first videos-groups))
		       (prepare-list (first tracks-groups))
		       (prepare-list (first track-models-groups))
		       cropped-width
		       (prepare-vector feature-types)
		       symmetric?
		       restricted?
		       (+ master-port 1 slave-id)
		       slave-id
		       master-hostname
		       master-port));)
	      (out (format #f "/aux/dpbarret/hog-hmms/slave-output-~a.out" slave-id))
	      (err (format #f "/aux/dpbarret/hog-hmms/slave-output-~a.err" slave-id))
	      (job (create-dsci-job2 slave-command out err))
	      (servers (if (>= (first servers-cpus) 1)
			   servers
			   (rest servers)))
	      (servers-cpus (if (>= (first servers-cpus) 1)
				(cons (- (first servers-cpus) 1)
				      (rest servers-cpus))
				(rest servers-cpus)))
	      )
	(spawn-jobs (list job)
		    (list (first servers))
		    (list out)
		    (list err))
	(connect-to-other (first servers) (+ master-port 1 slave-id))
	(accept-and-setup-connection master-port slave-id)
	(loop servers
	      servers-cpus
	      (rest videos-groups)
	      (rest track-models-groups)
	      (rest tracks-groups)
	      (+ slave-id 1)))))
videos-groups))

(define (kill-slaves)
 (for-each-n (lambda (i)
	      (send-kill-command i))
	     (vector-length *slave-likelihoods*))
 (for-each (lambda (server)
	    (close-input-port (server-input-port server))
	    (close-output-port (server-output-port server))
	    (set-server-invocation! server #f)
	    (set-server-input-port! server #f)
	    (set-server-output-port! server #f))
	   *servers*)
 (set! *servers* '()))

(define (compute-videos-likelihood-with-slaves scheme-hmm)
(for-each (lambda (server)
      (write-object-to-file scheme-hmm (format "/net/~a/~a" server *slave-hmm-path*)))
     *slave-servers*)
(dtrace "about to actually send out the gradient requests" (system-output "date"))
 (for-each-n (lambda (i)
	      (vector-set! *slave-likelihoods* i #f)
	      (send-likelihood-request i scheme-hmm))
	(vector-length *slave-likelihoods*))
 (let loop ()
  (if (some (lambda (like) (equal? like #f))
	    (vector->list *slave-likelihoods*))
      (begin
       (interruptible-usleep 100000)
       (dtrace "waiting for results loop" (system-output "date"))
       (for-each-n
       (lambda (i)
	(wait-for-message (vector-ref *server-in-ports* i)
			  (vector-ref *server-out-ports* i)
			  (vector-ref *server-in-fds* i)))
       (vector-length *slave-likelihoods*))
       (loop))
      #t))
(join (vector->list *slave-likelihoods*)))

(define (compute-videos-gradient-with-slaves scheme-hmm)
(for-each (lambda (server)
      (write-object-to-file scheme-hmm (format "/net/~a/~a" server *slave-hmm-path*)))
     *slave-servers*)
 (for-each-n (lambda (i)
	      (vector-set! *slave-gradients* i #f)
	      (send-gradient-request i scheme-hmm))
	(vector-length *slave-gradients*))
 (let loop ()
  (if (some (lambda (like) (equal? like #f))
	    (vector->list *slave-gradients*))
      (begin
       (for-each-n
       (lambda (i)
	(wait-for-message (vector-ref *server-in-ports* i)
			  (vector-ref *server-out-ports* i)
			  (vector-ref *server-in-fds* i)))
       (vector-length *slave-gradients*))
       (loop))
      #t))
(join (vector->list *slave-gradients*)))

(define (compute-specific-videos-gradients-with-slaves hmms
						       slaves-scheme-hog-hmms
						       slaves-indeces)
 (for-each (lambda (server)
      (write-object-to-file hmms
			    (format "/net/~a/~a" server *slave-hmms-path*)))
     *slave-servers*)
 (dtrace "foo5" "")
 (for-each-n (lambda (i)
	      (vector-set! *slave-likelihoods* i '()))
	     (vector-length *slave-likelihoods*))
 (dtrace "about to actually send out the gradient requests" (system-output "date"))
 (for-each (lambda (slave-hmms slave-indeces i)
	      (vector-set! *slave-gradients* i #f)
	      (send-specific-gradient-request i slave-hmms slave-indeces))
	   slaves-scheme-hog-hmms
	   slaves-indeces
	   (enumerate (length slaves-indeces)))
 (dtrace "sent all gradient requests" (system-output "date"))
 (let loop ()
  (if (some (lambda (like) (equal? like #f))
	    (vector->list *slave-gradients*))
      (begin
       (dtrace "waiting for results loop" (system-output "date"))
       (interruptible-usleep 10000)
       (for-each-n
       (lambda (i)
	(wait-for-message (vector-ref *server-in-ports* i)
			  (vector-ref *server-out-ports* i)
			  (vector-ref *server-in-fds* i)))
       (vector-length *slave-gradients*))
       (loop))
      #t))
 (vector->list *slave-gradients*))

(define (multiclass-svm-style-hog-hmm-gradient-descent-with-slaves states
								   classes
								   video-labels
								   slaves-videos
								   iterations
								   outpath
								   feature-types
								   feature-lengths
								   bin-lengths
								   symmetric?
								   restricted?
								   weighted?
								   step-factor
								   starting-iteration
								   starting-classes-hmms)
 (let* ((model-types (map-vector model-type feature-types))
	(classes-initial-state-distributions
	 (if starting-classes-hmms
	     (map scheme-hmm-initial-state-distribution starting-classes-hmms)
	     (map (lambda (class)
		   (vector-append (vector 1)
				  (map-n-vector
				   (lambda (i) 1e-100)
				   (- states 1))))
		  classes)))
	(classes-transition-matrices
	 (if starting-classes-hmms
	     (map scheme-hmm-transition-matrix starting-classes-hmms)
	     (map (lambda (class)
		   (map-n-vector
		    (lambda (from-state)
		     (map-n-vector
		      (lambda (to-state)
		       (cond
			((equal? from-state to-state)
			 .97)
			((equal? (+ from-state 1)
				 to-state)
			 .03)
			(else 1e-100)))
		      states))
		    states))
		  classes)))
	(classes-states-output-models
	 (if starting-classes-hmms
	     (map scheme-hmm-states-output-models starting-classes-hmms)
	     (map (lambda (class)
		   (map-n-vector (lambda (i)
				  (random-output-parameter-matrix model-types feature-lengths bin-lengths))
				 states))
		  classes)))
	(classes-params
	 (map (lambda (initial-state-distribution
		       transition-matrix
		       states-hog-models)
	       (hmm-vectors->params initial-state-distribution
				     transition-matrix
				     states-hog-models
				     *sigmoid-a*
				     *sigmoid-b*))
	      classes-initial-state-distributions
	      classes-transition-matrices
	      classes-states-output-models)))
  (let loop ((step-factor step-factor)
	     (classes-params classes-params)
	     (i (if starting-iteration
		    starting-iteration
		    0))
	     (prev-classes-initial-state-distributions classes-initial-state-distributions)
	     (prev-classes-transition-matrices classes-transition-matrices)
	     (prev-classes-states-output-models classes-states-output-models)
	     (prev-classes-sigmoid-threshold (map (lambda (class) *sigmoid-a*) classes))
	     (prev-objective (svm-style-cost-params-with-slaves classes-params
								video-labels
								states
								feature-types
								feature-lengths
								bin-lengths
								symmetric?
								restricted?
								weighted?)))
   (write-object-to-file (list step-factor i) "/tmp/step-factor.sc")
   (write-object-to-file
    (map (lambda (prev-initial-state-distribution
		  prev-transition-matrix
		  prev-states-hog-models
		  prev-sigmoid-threshold)
	  (make-scheme-hmm prev-initial-state-distribution
			   prev-transition-matrix
			   prev-states-hog-models
			   prev-sigmoid-threshold
			   feature-types
			   feature-lengths
			   bin-lengths
			   prev-objective
			   #f))
	 prev-classes-initial-state-distributions
	 prev-classes-transition-matrices
	 prev-classes-states-output-models
	 prev-classes-sigmoid-threshold)
    (if restricted?
	(format #f "~a-~a-restricted.sc" outpath i)
	(format #f "~a-~a.sc" outpath i)))
   (dtrace "prev-objective-function:" prev-objective)
   (if (> i iterations)
       classes-params
       (let* ((gs (svm-style-cost-gradient-parameters-with-slaves classes-params
								  states
								  video-labels
								  slaves-videos
								  feature-types
								  feature-lengths
								  bin-lengths
								  symmetric?
								  restricted?
								  weighted?)))
	(write-object-to-file (map magnitude gs) "/tmp/gradient-magnitudes.sc")
	(let loop2 ((step-factor step-factor))
	 (let* ((new-classes-params
		 (map (lambda (g params)
		       (dtrace "gradient magnitude:" (magnitude g))
		       (v+ params (k*v step-factor g)))
		      gs classes-params))
		(new-classes-initial-state-distributions
		 (map (lambda (new-params)
		       (normalize
			(vector-clip
			 (params->initial-state-distribution new-params states restricted?))))
		      new-classes-params))
		(new-classes-transition-matrices
		 (map (lambda (new-params)
		       (map-vector
			(lambda (row)
			 (normalize (vector-clip row)))
			(params->transition-matrix new-params states restricted?)))
		      new-classes-params))
		(new-classes-states-output-models
		 (map (lambda (new-params)
		       (params->states-output-models new-params states model-types feature-lengths bin-lengths))
		      new-classes-params))
		(new-classes-sigmoid-threshold
		 (map (lambda (new-params)
		       (params->sigmoid-threshold
			new-params states model-types feature-lengths bin-lengths))
		      new-classes-params))
		(normalized-new-classes-params
		 (map (lambda (new-initial-state-distribution
			       new-transition-matrix
			       new-states-output-models
			       new-sigmoid-threshold)
		       (hmm-vectors->params new-initial-state-distribution
					    new-transition-matrix
					    new-states-output-models
					    new-sigmoid-threshold
					    *sigmoid-b*))
		      new-classes-initial-state-distributions
		      new-classes-transition-matrices
		      new-classes-states-output-models
		      new-classes-sigmoid-threshold))
	       (new-objective (dtrace "new objective:"
				      (svm-style-cost-params-with-slaves normalized-new-classes-params
									 video-labels
									 states
									 feature-types
									 feature-lengths
									 bin-lengths
									 symmetric?
									 restricted?
									 weighted?))))
	  (cond ((< step-factor .00000000001)
		 (loop step-factor
		       classes-params
		       (+ i 1000)
		       prev-classes-initial-state-distributions
		       prev-classes-transition-matrices
		       prev-classes-states-output-models
		       prev-classes-sigmoid-threshold
		       prev-objective))
		((< new-objective prev-objective)
		 (loop (* step-factor 1.2)
		       normalized-new-classes-params
		       (+ i 1)
		       new-classes-initial-state-distributions
		       new-classes-transition-matrices
		       new-classes-states-output-models
		       new-classes-sigmoid-threshold
		       new-objective))
		(else
		 (loop2 (/ step-factor 2)))))))))))

(define (svm-style-cost-params-with-slaves classes-params
					   videos-labels
					   states
					   feature-types
					   feature-lengths
					   bin-lengths
					   symmetric?
					   restricted?
					   weighted?)
 (let* ((videos-hmms-likelihoods
	 (transpose-list-of-lists
	  (map (lambda (params)
	       (compute-videos-likelihood-with-slaves
		(params->scheme-hmm params
				    states
				    restricted?
				    feature-types
				    feature-lengths
				    bin-lengths)))
	       classes-params)))
	(classes-videos-hmm-classes-likelihoods
	 (map (Lambda (c) (map first c))
	      (transitive-equivalence-classesp (lambda (a b) (equal? (second a) (second b)))
					  (map (lambda (video-likes label)
						(list video-likes label))
					       videos-hmms-likelihoods
					       videos-labels))))
	(classes-videos-costs
	 (map-indexed
	  (lambda (class-videos-hmm-classes-likelihoods class)
	   (map (lambda (video-hmm-classes-likelihoods)
		 (let* ((correct-likelihood (list-ref video-hmm-classes-likelihoods
						      class))
			(maximum-incorrect-likelihood
			 (maximum (list-remove video-hmm-classes-likelihoods class))))
		  (dtrace "video cost" (if (> correct-likelihood (+ maximum-incorrect-likelihood *margin-param*))
		      0
		      (sqr (- (+ maximum-incorrect-likelihood *margin-param*) correct-likelihood))))))
		class-videos-hmm-classes-likelihoods))
	  classes-videos-hmm-classes-likelihoods)))
  (reduce + (join classes-videos-costs) 0)))

(define (svm-style-cost-gradient-parameters-with-slaves
	 classes-params
	 states
	 videos-labels
	 slaves-videos
	 feature-types
	 feature-lengths
	 bin-lengths
	 symmetric?
	 restricted?
	 weighted?)
 (let* ((classes (enumerate (length classes-params)))
	(hmms 	(map (lambda (params)
		      (params->scheme-hmm params
					      states
					      restricted?
					      feature-types
					      feature-lengths
					      bin-lengths))
		     classes-params))
	(videos-hmms-likelihoods
	 (transpose-list-of-lists
	  (map (lambda (hmm)
	       (compute-videos-likelihood-with-slaves hmm))
	      hmms)))
	(classes-videos-hmm-classes-likelihoods
	 (map  (Lambda (c) (map first c))
	      (transitive-equivalence-classesp (lambda (a b) (equal? (second a) (second b)))
					  (map (lambda (video-likes label)
						(list video-likes label))
					       videos-hmms-likelihoods
					       videos-labels))))
	(classes-videos-costs-with-labels
	 (map
	  (lambda (class-videos-hmm-classes-likelihoods class hmm)
	   (map (lambda (video-hmm-classes-likelihoods)
		 (let* ((correct-likelihood (list-ref video-hmm-classes-likelihoods
						      class))
			(maximum-incorrect-likelihood
			 (maximum (list-remove video-hmm-classes-likelihoods class)))
			(p (position maximum-incorrect-likelihood video-hmm-classes-likelihoods)))
		  (if (> correct-likelihood (+ maximum-incorrect-likelihood *margin-param*))
		      (list 0 (list class p) (list #f #f))
		      (list (- (+ maximum-incorrect-likelihood *margin-param*) correct-likelihood)
			    (list class p)
			    (list hmm (list-ref hmms p))))))
		class-videos-hmm-classes-likelihoods))
	  classes-videos-hmm-classes-likelihoods
	  classes
	  hmms))
	(videos-costs-with-labels
	 (join classes-videos-costs-with-labels))
	(slaves-videos-costs-with-labels (split-into (length slaves-videos) videos-costs-with-labels))
	(slaves-hmms-and-indeces

		 (map
		  (lambda (slave-videos-costs-with-labels)
		   (join
		    (removeq
		     #f
		     (map-indexed
		     (lambda (video-cost-with-label i)
		      (if (= (first video-cost-with-label) 0)
			  #f
			  (list (list (first (third video-cost-with-label)) i (first (second video-cost-with-label)) 1 (first video-cost-with-label))
				(list (second (third video-cost-with-label)) i (second (second video-cost-with-label)) -1 (first video-cost-with-label)))))
		     slave-videos-costs-with-labels))))
		  slaves-videos-costs-with-labels))
	(slaves-hmms (map (lambda (slave-hmms-and-indeces)
			   (map first slave-hmms-and-indeces))
			  slaves-hmms-and-indeces))
	(slaves-indeces (map (lambda (slave-hmms-and-indeces)
			   (map second slave-hmms-and-indeces))
			  slaves-hmms-and-indeces))
	(slaves-classes (map (lambda (slave-hmms-and-indeces)
			   (map third slave-hmms-and-indeces))
			  slaves-hmms-and-indeces))
	(slaves-signs (map (lambda (slave-hmms-and-indeces)
			   (map fourth slave-hmms-and-indeces))
			  slaves-hmms-and-indeces))
	(slaves-costs (map (lambda (slave-hmms-and-indeces)
			   (map fifth slave-hmms-and-indeces))
			  slaves-hmms-and-indeces))
	(slaves-gradients (compute-specific-videos-gradients-with-slaves hmms slaves-hmms slaves-indeces))
	(slaves-labeled-gradients
	 (join
	  (map (lambda (slave-gradients slave-classes slave-signs slave-costs)
	       (map (lambda (gradient class sign cost)
		     (list gradient class sign cost))
		    slave-gradients
		    slave-classes
		    slave-signs
		    slave-costs))
	      slaves-gradients
	      slaves-classes
	      slaves-signs
	      slaves-costs)))
	(hmms-labeled-gradients
	 (sort (transitive-equivalence-classesp
		(lambda (a b) (equal? (second a) (second b)))
		slaves-labeled-gradients)
	       < (lambda (e) (second (first e)))))
	(hmms-positive-gradients
	 (map (lambda (hmm-labeled-gradients)
	       (reduce v+
		       (removeq #f
				(map (lambda (labeled-gradient)
				      (if (= (third labeled-gradient) -1)
					  #f
					  (k*v (* 2 (fourth labeled-gradient))
					       (first labeled-gradient))))
				     hmm-labeled-gradients))
		       (map-n-vector (lambda (i) 0) (vector-length (first (first hmm-labeled-gradients))))))
	      hmms-labeled-gradients))
	(hmms-negative-gradients
	 (map (lambda (hmm-labeled-gradients)
	       (reduce v+
		       (removeq #f
				(map (lambda (labeled-gradient)
				      (if (= (third labeled-gradient) 1)
					  #f
					  (k*v (* 2 (fourth labeled-gradient))
					       (first labeled-gradient))))
				     hmm-labeled-gradients))
		       (map-n-vector (lambda (i) 0) (vector-length (first (first hmm-labeled-gradients))))))
	      hmms-labeled-gradients))
	(hmms-gradients (map (lambda (pos neg)
			      (v- pos neg))
			     hmms-positive-gradients
			     hmms-negative-gradients)))
  hmms-gradients))

;;; begin section of code which allows use of smooth max for computing the margin for a particular video

(define (smooth-max l t) (* t (log (reduce + (map (lambda (e) (exp (/ e t))) l) 0))))
(define (smooth-min l t) (* -1 t (log (reduce + (map (lambda (e) (exp (/ (- e) t))) l) 0))))

(define (smooth-max-z l t z) (+ (* t (log (reduce + (map (lambda (e) (exp (/ (- e z) t))) l) 0))) z))
(define (smooth-min-z l t z) (+ (* -1 t (log (reduce + (map (lambda (e) (exp (/ (- (- e z)) t))) l) 0))) z))

(define (list-avg l)
 (/ (reduce + l 0) (length l)))

(define (smooth-max-avg l t)
	 (let ((avg (list-avg l)))
	  (smooth-max-z l t avg)))

(define (smooth-min-avg l t)
	 (let ((avg (list-avg l)))
	  (smooth-min-z l t avg)))

(define (smooth-max-approx l t)
 (let* ((max (maximum l))
	(l2 (map (lambda (e)
		  (if (< e (- max (* 100 t)))
		      (- max (* 100 t))
		      e))
		 l)))
  (smooth-max-avg l2 t)))

(define (smooth-min-approx l t)
 (let* ((min (minimum l))
	(l2 (map (lambda (e)
		  (if (> e (+ min (* 100 t)))
		      (+ min (* 100 t))
		      e))
		 l)))
  (smooth-min-avg l2 t)))

(define *smooth-max-param* .1)

(define dsmooth-max (gradient-r (lambda (v) (smooth-max (vector->list v) *smooth-max-param*))))
(define dsmooth-min (gradient-r (lambda (v) (smooth-min (vector->list v) *smooth-max-param*))))
(define dsmooth-max-approx (gradient-r (lambda (v) (smooth-max-approx (vector->list v) *smooth-max-param*))))
(define dsmooth-min-approx (gradient-r (lambda (v) (smooth-min-approx (vector->list v) *smooth-max-param*))))

(define (dsmooth-max/dparams scores score dscore/dparams t)
 (k*v (/ (exp (/ score t))
       (reduce + (map (lambda (s) (exp (/ s t))) scores) 0))
    dscore/dparams))

(define (indeces-of-x-weight x f1 f2 l)
 (let* ((sorted (sort l > f1)))
  ;;(dtrace "" sorted)
  (let loop ((l sorted)
	     (sum 0)
	     (i 0))
   (if (null? l)
       '()
       (if (> sum x)
	   '()
	   (cons (f2 (first l)) (loop (rest l) (+ sum (f1 (first l))) (+ i 1))))))))

(define (svm-style-cost-params-with-slaves-smooth
	 classes-params
	 videos-labels
	 states
	 feature-types
	 feature-lengths
	 bin-lengths
	 symmetric?
	 restricted?
	 weighted?)
 (let* ((videos-hmms-likelihoods
	 (transpose-list-of-lists
	  (map (lambda (params)
	       (compute-videos-likelihood-with-slaves
		(params->scheme-hmm params
					states
					restricted?
					feature-types
					feature-lengths
					bin-lengths)))
	      classes-params)))
	(classes-videos-hmm-classes-likelihoods
	 (dtrace "classes videos classes likelihoods:"(map (Lambda (c) (map first c))
	      (transitive-equivalence-classesp (lambda (a b) (equal? (second a) (second b)))
					  (map (lambda (video-likes label)
						(list video-likes label))
					       videos-hmms-likelihoods
					       videos-labels)))))
	(foo (dtrace "??" ""))
	(classes-videos-costs
	 (map-indexed
	  (lambda (class-videos-hmm-classes-likelihoods class)
	   (dtrace "class:" class)
	   (map (lambda (video-hmm-classes-likelihoods)
		 (let* ((correct-likelihood (dtrace "correct"(list-ref video-hmm-classes-likelihoods
						      class)))
			(maximum-incorrect-likelihood
			 (dtrace "smooth-max" (smooth-max-approx (list-remove video-hmm-classes-likelihoods class)
				     *smooth-max-param*))))
		  (dtrace "video cost" (if (> correct-likelihood (+ maximum-incorrect-likelihood *margin-param*))
		      0
		      (sqr (- (+ maximum-incorrect-likelihood *margin-param*) correct-likelihood))))))
		class-videos-hmm-classes-likelihoods))
	  classes-videos-hmm-classes-likelihoods))
	(foo (dtrace "???" "")))
  (list (reduce + (join classes-videos-costs) 0)
	classes-videos-hmm-classes-likelihoods)))

(define (svm-style-cost-params-c-smooth-slower
	 classes-params
	 preallocated-hmm-pointers
	 classes-videos-fvvs
	 classes-videos-c-fvvs
	 states
	 feature-types
	 feature-lengths
	 bin-lengths
	 symmetric?
	 restricted?)
 (let* ((classes-videos-hmm-classes-likelihoods
	 (map
	  (lambda (videos-fvvs videos-c-fvvs)
	   (map
	    (lambda (fvvs c-fvvs)
	     (map
	      (lambda (params)
	       (x (preallocated-hog-hmm-derivative-c-wrapper
			   (params->initial-state-distribution params states restricted?)
			   (params->transition-matrix params states restricted?)
			   fvvs
			   (params->states-output-models params states (map-vector model-type feature-types) feature-lengths bin-lengths)
			   feature-types
			   feature-lengths
			   bin-lengths
			   (params->sigmoid-threshold params states (map-vector model-type feature-types) feature-lengths bin-lengths);;sigmoid a
			   (params->sigmoid-tau params states (map-vector model-type feature-types) feature-lengths bin-lengths);;*sigmoid-b*
			   c-fvvs
			   (vector-ref preallocated-hmm-pointers 0)
			   (vector-ref preallocated-hmm-pointers 1)
			   (vector-ref preallocated-hmm-pointers 2)
			   (vector-ref preallocated-hmm-pointers 3)
			   (vector-ref preallocated-hmm-pointers 4)
			   (vector-ref preallocated-hmm-pointers 5)
			   (vector-ref preallocated-hmm-pointers 6)
			   (vector-ref preallocated-hmm-pointers 7)
			   #f)))
	      classes-params))
	    videos-fvvs
	    videos-c-fvvs))
	  classes-videos-fvvs
	  classes-videos-c-fvvs))
	(foo (dtrace "??" ""))
	(classes-videos-costs
	 (map-indexed
	  (lambda (class-videos-hmm-classes-likelihoods class)
	   (dtrace "class:" class)
	   (map (lambda (video-hmm-classes-likelihoods)
		 (let* ((correct-likelihood (dtrace "correct"(list-ref video-hmm-classes-likelihoods
						      class)))
			(maximum-incorrect-likelihood
			 (dtrace "smooth-max" (smooth-max-approx (list-remove video-hmm-classes-likelihoods class)
				     *smooth-max-param*))))
		  (dtrace "video cost" (if (> correct-likelihood (+ maximum-incorrect-likelihood *margin-param*))
		      0
		      (sqr (- (+ maximum-incorrect-likelihood *margin-param*) correct-likelihood))))))
		class-videos-hmm-classes-likelihoods))
	  classes-videos-hmm-classes-likelihoods))
	(foo (dtrace "???" "")))
  (list (reduce + (join classes-videos-costs) 0)
	classes-videos-hmm-classes-likelihoods)))

(define (create-flat-hmm-video-pointer-cross-product classes-videos-c-fvvs
						     classes-params
						     classes-videos-hmm-gradient-weights
						     classes-preallocated-hmm-pointers
						     preallocated-flattened-c-pointers
						     states
						     feature-types
						     feature-lengths
						     bin-lengths
						     symmetric?
						     restricted?)
 (for-each
  (lambda (params preallocated-hmm-pointers)
   (copy-hmm-data-into-precallocated-c-pointers
    (params->initial-state-distribution params states restricted?)
    (params->transition-matrix params states restricted?)
    (params->states-output-models params states (map-vector model-type feature-types) feature-lengths bin-lengths)
    feature-types
    feature-lengths
    bin-lengths
    (vector-ref preallocated-hmm-pointers 0)
    (vector-ref preallocated-hmm-pointers 1)
    (vector-ref preallocated-hmm-pointers 2)
    (vector-ref preallocated-hmm-pointers 3)
    (vector-ref preallocated-hmm-pointers 4)
    (vector-ref preallocated-hmm-pointers 5)
    (vector-ref preallocated-hmm-pointers 6)
    (vector-ref preallocated-hmm-pointers 7)))
  classes-params
  classes-preallocated-hmm-pointers)

 (let* ((flattened-c-feature-types (vector-ref preallocated-flattened-c-pointers 0))
	(flattened-c-model-types (vector-ref preallocated-flattened-c-pointers 1))
	(flattened-c-feature-lengths (vector-ref preallocated-flattened-c-pointers 2))
	(flattened-c-bin-lengths (vector-ref preallocated-flattened-c-pointers 3))
	(flattened-c-initial-state-vector (vector-ref preallocated-flattened-c-pointers 4))
	(flattened-c-transition-matrix (vector-ref preallocated-flattened-c-pointers 5))
	(flattened-c-states-output-models (vector-ref preallocated-flattened-c-pointers 6))
	(flattened-c-fvs (vector-ref preallocated-flattened-c-pointers 7))
	(flattened-c-frames (vector-ref preallocated-flattened-c-pointers 8))
	(flattened-c-weights (vector-ref preallocated-flattened-c-pointers 11))
	(flattened-c-hmm-indeces (vector-ref preallocated-flattened-c-pointers 12))
	(hmms-classes-videos-weights (if classes-videos-hmm-gradient-weights
				      (transpose-list-of-lists
				      (map
				       (lambda (class-videos-hmm-weights)
					(transpose-list-of-lists
					 class-videos-hmm-weights))
				        classes-videos-hmm-gradient-weights))
				      #f))
	(flattened-weights1 (if classes-videos-hmm-gradient-weights
			       (join (join(map-indexed
			    (lambda (hmm-classes-videos-weights i)
			     (map-indexed
			      (lambda (class-videos-weights j)
			       (map-indexed
				(lambda (video-weight k)
				 (list video-weight i j k))
				class-videos-weights))
			      hmm-classes-videos-weights))
			    hmms-classes-videos-weights)))
			       #f))
	(flattened-weights (if classes-videos-hmm-gradient-weights
			       (map first  flattened-weights1)
			       #f))
	(hmms-classes-videos-info
	 (map-indexed
	  (lambda (preallocated-pointers i)
	   (map-indexed
	    (lambda (class-videos-c-fvvs j)
	     (map-indexed
	      (lambda (c-fvvs k)
	       (list preallocated-pointers c-fvvs i j k))
	      class-videos-c-fvvs))
	    classes-videos-c-fvvs))
	  classes-preallocated-hmm-pointers))
	(flattened-info
	 (join (join hmms-classes-videos-info)))
	(flattened-hmm-pointers (map first flattened-info))
	(flattened-feature-types (map (lambda (x) (vector-ref x 0))
				      flattened-hmm-pointers))
	(flattened-model-types (map (lambda (x) (vector-ref x 1))
				    flattened-hmm-pointers))
	(flattened-feature-lengths (map (lambda (x) (vector-ref x 2))
					flattened-hmm-pointers))
	(flattened-bin-lengths (map (lambda (x) (vector-ref x 3))
				    flattened-hmm-pointers))
	(flattened-initial-state-vector (map (lambda (x) (vector-ref x 4))
					     flattened-hmm-pointers))
	(flattened-transition-matrix (map (lambda (x) (vector-ref x 5))
					  flattened-hmm-pointers))
	;; (flattened-gradient (map (lambda (x) (vector-ref x 6))
	;; 			 flattened-hmm-pointers))
	(flattened-states-output-models-and-pointers (map (lambda (x) (vector-ref x 7))
							  flattened-hmm-pointers))
	(flattened-states-output-models (map first flattened-states-output-models-and-pointers))

	(flattened-fvs (map (lambda (a) (x (second a))) flattened-info))
	(flattened-frames (map (lambda (a) (y (second a))) flattened-info))
	(flattened-ijk (map (lambda (x) (sublist x 2 5)) flattened-info))
	(foo (if classes-videos-hmm-gradient-weights
		 (dtrace "ijk equal?" (equal? flattened-ijk (map (lambda (x) (sublist x 1 4))
							     flattened-weights1)))))

	(flattened-c-feature-types (list->c-exact-array
				    flattened-c-feature-types flattened-feature-types c-sizeof-long #f))
	(flattened-c-model-types (list->c-exact-array
				  flattened-c-model-types flattened-model-types c-sizeof-long #f))
	(flattened-c-feature-lengths (list->c-exact-array
				  flattened-c-feature-lengths flattened-feature-lengths c-sizeof-long #f))
	(flattened-c-bin-lengths (list->c-exact-array
				  flattened-c-bin-lengths flattened-bin-lengths c-sizeof-long #f))
	(flattened-c-initial-state-vector (list->c-exact-array
				  flattened-c-initial-state-vector flattened-initial-state-vector c-sizeof-long #f))
	(flattened-c-transition-matrix (list->c-exact-array
				  flattened-c-transition-matrix flattened-transition-matrix c-sizeof-long #f))
	;; (flattened-c-gradient (list->c-exact-array
	;; 			  flattened-c-gradient flattened-gradient c-sizeof-long #f))
	(flattened-c-states-output-models (list->c-exact-array
				  flattened-c-states-output-models flattened-states-output-models c-sizeof-long #f))
	(flattened-c-fvs (list->c-exact-array
				  flattened-c-fvs flattened-fvs c-sizeof-long #f))
	(flattened-c-frames  (list->c-exact-array
				  flattened-c-frames flattened-frames c-sizeof-int #f))
	(flattened-c-weights (if classes-videos-hmm-gradient-weights
				 (list->c-inexact-array
				  flattened-c-weights flattened-weights c-sizeof-double #f)
				 #f))
	(flattened-c-hmm-indeces (list->c-exact-array
				  flattened-c-hmm-indeces (map first flattened-ijk) c-sizeof-int #t)))

	;; (unflattened-info
	;;  (map (lambda (x) (transitive-equivalence-classesp
	;;   (lambda (a b) (equal? (fourth a) (fourth b))) x))
	;;  (transitive-equivalence-classesp (lambda (a b) (equal? (third a) (third b)))
	;; 				  flattened-info)))

  ;;(dtrace "unflattend = original?" (equal? hmms-classes-videos-info unflattened-info))
  ;;(dtrace "flattened:" flattened-info)
  flattened-ijk))


(define (unflatten flat ijk)
 (map (lambda (x)
       (map (lambda (y) (map first y)) x))
      (map (lambda (x)
       (transitive-equivalence-classesp
	(lambda (a b) (equal? (third a) (third b))) x))
      (transitive-equivalence-classesp
       (lambda (a b) (equal? (second a) (second b)))
       (map cons flat ijk)))))


 (define (unflatten-gradients flat ijk)
 (map (lambda (x)
        (map (lambda (y) (list->vector (map first y))) x))
      (map (lambda (x)
       (transitive-equivalence-classesp
	(lambda (a b) (equal? (third a) (third b))) x))
      (transitive-equivalence-classesp
       (lambda (a b) (equal? (second a) (second b)))
       (map cons flat ijk)))))

(define (svm-style-cost-params-threaded-c-smooth
	 classes-params
	 classes-preallocated-hmm-pointers
	 preallocated-flattened-c-pointers
	 classes-videos-fvvs
	 classes-videos-c-fvvs
	 states
	 feature-types
	 feature-lengths
	 bin-lengths
	 symmetric?
	 restricted?)
 (let* (;;(preallocated-hmm-pointers (first classes-preallocated-hmm-pointers))
	(ijk
	 (create-flat-hmm-video-pointer-cross-product
	  classes-videos-c-fvvs
	  classes-params
	  #f
	  classes-preallocated-hmm-pointers
	  preallocated-flattened-c-pointers
	  states
	  feature-types
	  feature-lengths
	  bin-lengths
	  symmetric?
	  restricted?))
	(model-types (map-vector model-type feature-types))
	(model-lengths (compute-state-output-models-lengths model-types feature-lengths bin-lengths))
	(state-output-model-length
	 (reduce-vector + model-lengths
			0))
	(total-output-models-length (* states state-output-model-length))
	(gradient-length (+ states (* states states) total-output-models-length 2))
	(foo (dtrace "running paralell code..." ""))
	(flat-likelihoods (x (threaded-hog-hmm-derivative-c-wrapper (length classes-params)
								    states
								    gradient-length
								    (length ijk)
								    preallocated-flattened-c-pointers
								    (vector-length feature-types)
								    0;;sigmoid-a NEEDS WORK HARD CODED
								    10;;sigmoid-b NEEDS WORK HARD CODED
								    #f
								    )))
	(foo (dtrace "finished paralell code" ""))
	(hmm-classes-classes-videos-likelihoods (unflatten flat-likelihoods ijk))
	;;(foo (dtrace "starting non-threaded:" ""))
	;; (hmm-classes-classes-videos-likelihoods
	;;  (map
	;;   (lambda (params)
	;;    (copy-hmm-data-into-precallocated-c-pointers (params->initial-state-distribution params states restricted?)
	;; 	   (params->transition-matrix params states restricted?)
	;; 	   (params->states-output-models params states (map-vector model-type feature-types) feature-lengths bin-lengths)
	;; 	   feature-types
	;; 	   feature-lengths
	;; 	   bin-lengths
	;; 	   (vector-ref preallocated-hmm-pointers 0)
	;; 	   (vector-ref preallocated-hmm-pointers 1)
	;; 	   (vector-ref preallocated-hmm-pointers 2)
	;; 	   (vector-ref preallocated-hmm-pointers 3)
	;; 	   (vector-ref preallocated-hmm-pointers 4)
	;; 	   (vector-ref preallocated-hmm-pointers 5)
	;; 	   (vector-ref preallocated-hmm-pointers 6)
	;; 	   (vector-ref preallocated-hmm-pointers 7))
	;;    (map
	;;     (lambda ( videos-c-fvvs)
	;;      (map
	;;       (lambda ( c-fvvs)
	;;        (x (faster-preallocated-hog-hmm-derivative-c-wrapper
	;; 	   (params->initial-state-distribution params states restricted?)
	;; 	   (params->transition-matrix params states restricted?)
	;; 	   #f;;fvvs
	;; 	   (params->states-output-models params states (map-vector model-type feature-types) feature-lengths bin-lengths)
	;; 	   feature-types
	;; 	   feature-lengths
	;; 	   bin-lengths
	;; 	   (params->sigmoid-threshold params states (map-vector model-type feature-types) feature-lengths bin-lengths);;sigmoid a
	;; 	   (params->sigmoid-tau params states (map-vector model-type feature-types) feature-lengths bin-lengths);;*sigmoid-b* ;; sigmoid b
	;; 	   c-fvvs
	;; 	   (vector-ref preallocated-hmm-pointers 0)
	;; 	   (vector-ref preallocated-hmm-pointers 1)
	;; 	   (vector-ref preallocated-hmm-pointers 2)
	;; 	   (vector-ref preallocated-hmm-pointers 3)
	;; 	   (vector-ref preallocated-hmm-pointers 4)
	;; 	   (vector-ref preallocated-hmm-pointers 5)
	;; 	   (vector-ref preallocated-hmm-pointers 6)
	;; 	   (vector-ref preallocated-hmm-pointers 7)
	;; 	   #f)))
	;;       ;;videos-fvvs
	;;       videos-c-fvvs))
	;;     ;;classes-videos-fvvs
	;;     classes-videos-c-fvvs))
	;;   classes-params))
	;; (foo (dtrace "threaded=?non-threaded:" (equal? (dtrace "non-threaded:"hmm-classes-classes-videos-likelihoods) (dtrace "threaded:" threaded-hmm-classes-classes-videos-likelihoods))))
	;; (foo (dtrace "max r:" (maximum (map / (join (join threaded-hmm-classes-classes-videos-likelihoods))
	;; 	  (join (join hmm-classes-classes-videos-likelihoods))))))
	;; (foo (dtrace "min r:" (minimum (map / (join (join threaded-hmm-classes-classes-videos-likelihoods))
	;; 	  (join (join hmm-classes-classes-videos-likelihoods))))))
	(classes-videos-hmm-classes-likelihoods (map transpose-list-of-lists (transpose-list-of-lists hmm-classes-classes-videos-likelihoods)))
	;;(foo (dtrace "??" ""))
	(classes-videos-costs
	 (map-indexed
	  (lambda (class-videos-hmm-classes-likelihoods class)
	   ;;(dtrace "class:" class)
	   (map (lambda (video-hmm-classes-likelihoods)
		 (let* ((correct-likelihood (list-ref video-hmm-classes-likelihoods
						      class))
			(maximum-incorrect-likelihood
			 (smooth-max-approx (list-remove video-hmm-classes-likelihoods class)
				     *smooth-max-param*)))
		  (if (> correct-likelihood (+ maximum-incorrect-likelihood *margin-param*))
		      0
		      (sqr (- (+ maximum-incorrect-likelihood *margin-param*) correct-likelihood)))))
		class-videos-hmm-classes-likelihoods))
	  classes-videos-hmm-classes-likelihoods))
	)
  (list (reduce + (join classes-videos-costs) 0)
	classes-videos-hmm-classes-likelihoods)))

(define (svm-style-cost-params-c-smooth
	 classes-params
	 preallocated-hmm-pointers
	 classes-videos-fvvs
	 classes-videos-c-fvvs
	 states
	 feature-types
	 feature-lengths
	 bin-lengths
	 symmetric?
	 restricted?)
 (let* ((hmm-classes-classes-videos-likelihoods
	 (map
	  (lambda (params)
	   (copy-hmm-data-into-precallocated-c-pointers (params->initial-state-distribution params states restricted?)
		   (params->transition-matrix params states restricted?)
		   (params->states-output-models params states (map-vector model-type feature-types) feature-lengths bin-lengths)
		   feature-types
		   feature-lengths
		   bin-lengths
		   (vector-ref preallocated-hmm-pointers 0)
		   (vector-ref preallocated-hmm-pointers 1)
		   (vector-ref preallocated-hmm-pointers 2)
		   (vector-ref preallocated-hmm-pointers 3)
		   (vector-ref preallocated-hmm-pointers 4)
		   (vector-ref preallocated-hmm-pointers 5)
		   (vector-ref preallocated-hmm-pointers 6)
		   (vector-ref preallocated-hmm-pointers 7))
	   (map
	    (lambda ( videos-c-fvvs)
	     (map
	      (lambda ( c-fvvs)
	       (x (faster-preallocated-hog-hmm-derivative-c-wrapper
		   (params->initial-state-distribution params states restricted?)
		   (params->transition-matrix params states restricted?)
		   #f;;fvvs
		   (params->states-output-models params states (map-vector model-type feature-types) feature-lengths bin-lengths)
		   feature-types
		   feature-lengths
		   bin-lengths
		   (params->sigmoid-threshold params states (map-vector model-type feature-types) feature-lengths bin-lengths);;sigmoid a
		   (params->sigmoid-tau params states (map-vector model-type feature-types) feature-lengths bin-lengths);;*sigmoid-b* ;; sigmoid b
		   c-fvvs
		   (vector-ref preallocated-hmm-pointers 0)
		   (vector-ref preallocated-hmm-pointers 1)
		   (vector-ref preallocated-hmm-pointers 2)
		   (vector-ref preallocated-hmm-pointers 3)
		   (vector-ref preallocated-hmm-pointers 4)
		   (vector-ref preallocated-hmm-pointers 5)
		   (vector-ref preallocated-hmm-pointers 6)
		   (vector-ref preallocated-hmm-pointers 7)
		   #f)))
	      ;;videos-fvvs
	      videos-c-fvvs))
	    ;;classes-videos-fvvs
	    classes-videos-c-fvvs))
	  classes-params))
	(classes-videos-hmm-classes-likelihoods (map transpose-list-of-lists (transpose-list-of-lists hmm-classes-classes-videos-likelihoods)))
	(foo (dtrace "??" ""))
	(classes-videos-costs
	 (map-indexed
	  (lambda (class-videos-hmm-classes-likelihoods class)
	   (dtrace "class:" class)
	   (map (lambda (video-hmm-classes-likelihoods)
		 (let* ((correct-likelihood (dtrace "correct"(list-ref video-hmm-classes-likelihoods
						      class)))
			(maximum-incorrect-likelihood
			 (dtrace "smooth-max" (smooth-max-approx (list-remove video-hmm-classes-likelihoods class)
				     *smooth-max-param*))))
		  (dtrace "video cost" (if (> correct-likelihood (+ maximum-incorrect-likelihood *margin-param*))
		      0
		      (sqr (- (+ maximum-incorrect-likelihood *margin-param*) correct-likelihood))))))
		class-videos-hmm-classes-likelihoods))
	  classes-videos-hmm-classes-likelihoods))
	(foo (dtrace "???" "")))
  (list (reduce + (join classes-videos-costs) 0)
	classes-videos-hmm-classes-likelihoods)))


(define (create-flat-hmm-video-pointer-cross-product-with-negatives
	 classes-videos-c-fvvs
	 classes-negative-c-fvvs
	 classes-params
	 classes-posneg-videos-weights
	 classes-preallocated-hmm-pointers
	 preallocated-flattened-c-pointers
	 states
	 feature-types
	 feature-lengths
	 bin-lengths
	 symmetric?
	 restricted?)
 (for-each
  (lambda (params preallocated-hmm-pointers)
   (copy-hmm-data-into-precallocated-c-pointers
    (params->initial-state-distribution params states restricted?)
    (params->transition-matrix params states restricted?)
    (params->states-output-models params states (map-vector model-type feature-types) feature-lengths bin-lengths)
    feature-types
    feature-lengths
    bin-lengths
    (vector-ref preallocated-hmm-pointers 0)
    (vector-ref preallocated-hmm-pointers 1)
    (vector-ref preallocated-hmm-pointers 2)
    (vector-ref preallocated-hmm-pointers 3)
    (vector-ref preallocated-hmm-pointers 4)
    (vector-ref preallocated-hmm-pointers 5)
    (vector-ref preallocated-hmm-pointers 6)
    (vector-ref preallocated-hmm-pointers 7)))
  classes-params
  classes-preallocated-hmm-pointers)

 (let* ((flattened-c-feature-types (vector-ref preallocated-flattened-c-pointers 0))
	(flattened-c-model-types (vector-ref preallocated-flattened-c-pointers 1))
	(flattened-c-feature-lengths (vector-ref preallocated-flattened-c-pointers 2))
	(flattened-c-bin-lengths (vector-ref preallocated-flattened-c-pointers 3))
	(flattened-c-initial-state-vector (vector-ref preallocated-flattened-c-pointers 4))
	(flattened-c-transition-matrix (vector-ref preallocated-flattened-c-pointers 5))
	(flattened-c-states-output-models (vector-ref preallocated-flattened-c-pointers 6))
	(flattened-c-fvs (vector-ref preallocated-flattened-c-pointers 7))
	(flattened-c-frames (vector-ref preallocated-flattened-c-pointers 8))
	(flattened-c-weights (vector-ref preallocated-flattened-c-pointers 11))
	(flattened-c-hmm-indeces (vector-ref preallocated-flattened-c-pointers 12))
	(hmms-classes-videos-weights classes-posneg-videos-weights;;#f
				     ;; (if classes-videos-hmm-gradient-weights
				     ;;  (transpose-list-of-lists
				     ;;  (map
				     ;;   (lambda (class-videos-hmm-weights)
				     ;; 	(transpose-list-of-lists
				     ;; 	 class-videos-hmm-weights))
				     ;;    classes-videos-hmm-gradient-weights))
				     ;;  #f)

				     )
	(flattened-weights1 #f
			    ;; (if classes-videos-hmm-gradient-weights
			    ;;    (join (join(map-indexed
			    ;; (lambda (hmm-classes-videos-weights i)
			    ;;  (map-indexed
			    ;;   (lambda (class-videos-weights j)
			    ;;    (map-indexed
			    ;; 	(lambda (video-weight k)
			    ;; 	 (list video-weight i j k))
			    ;; 	class-videos-weights))
			    ;;   hmm-classes-videos-weights))
			    ;; hmms-classes-videos-weights)))
			    ;;    #f)
			    )
	(flattened-weights (if  classes-posneg-videos-weights
			       (join (join hmms-classes-videos-weights))
			   ;; (if classes-videos-hmm-gradient-weights
			   ;;     (map first  flattened-weights1)
			   ;;     #f)
			   ))
	(hmms-classes-videos-info
	 (map
	  (lambda (preallocated-pointers class-videos-c-fvvs class-negative-c-fvvs i)
	   (list
	    (map-indexed
	     (lambda (c-fvvs k)
	      (list preallocated-pointers c-fvvs i 0 k))
	     class-videos-c-fvvs)
	    (map-indexed
	     (lambda (c-fvvs k)
	      (list preallocated-pointers c-fvvs i 1 k))
	     class-negative-c-fvvs)))
	  classes-preallocated-hmm-pointers
	  classes-videos-c-fvvs
	  classes-negative-c-fvvs
	  (enumerate (length classes-videos-c-fvvs))))

	(flattened-info
	 (join (join hmms-classes-videos-info)))
	(flattened-hmm-pointers (map first flattened-info))
	(flattened-feature-types (map (lambda (x) (vector-ref x 0))
				      flattened-hmm-pointers))
	(flattened-model-types (map (lambda (x) (vector-ref x 1))
				    flattened-hmm-pointers))
	(flattened-feature-lengths (map (lambda (x) (vector-ref x 2))
					flattened-hmm-pointers))
	(flattened-bin-lengths (map (lambda (x) (vector-ref x 3))
				    flattened-hmm-pointers))
	(flattened-initial-state-vector (map (lambda (x) (vector-ref x 4))
					     flattened-hmm-pointers))
	(flattened-transition-matrix (map (lambda (x) (vector-ref x 5))
					  flattened-hmm-pointers))
	;; (flattened-gradient (map (lambda (x) (vector-ref x 6))
	;; 			 flattened-hmm-pointers))
	(flattened-states-output-models-and-pointers (map (lambda (x) (vector-ref x 7))
							  flattened-hmm-pointers))
	(flattened-states-output-models (map first flattened-states-output-models-and-pointers))

	(flattened-fvs (map (lambda (a) (x (second a))) flattened-info))
	(flattened-frames (map (lambda (a) (y (second a))) flattened-info))
	(flattened-ijk (map (lambda (x) (sublist x 2 5)) flattened-info))
	;; (foo (if classes-posneg-videos-weights
	;; 	 (dtrace "ijk equal?" (equal? flattened-ijk (map (lambda (x) (sublist x 1 4))
	;; 						     flattened-weights1)))))

	(flattened-c-feature-types (list->c-exact-array
				    flattened-c-feature-types flattened-feature-types c-sizeof-long #f))
	(flattened-c-model-types (list->c-exact-array
				  flattened-c-model-types flattened-model-types c-sizeof-long #f))
	(flattened-c-feature-lengths (list->c-exact-array
				  flattened-c-feature-lengths flattened-feature-lengths c-sizeof-long #f))
	(flattened-c-bin-lengths (list->c-exact-array
				  flattened-c-bin-lengths flattened-bin-lengths c-sizeof-long #f))
	(flattened-c-initial-state-vector (list->c-exact-array
				  flattened-c-initial-state-vector flattened-initial-state-vector c-sizeof-long #f))
	(flattened-c-transition-matrix (list->c-exact-array
				  flattened-c-transition-matrix flattened-transition-matrix c-sizeof-long #f))
	;; (flattened-c-gradient (list->c-exact-array
	;; 			  flattened-c-gradient flattened-gradient c-sizeof-long #f))
	(flattened-c-states-output-models (list->c-exact-array
				  flattened-c-states-output-models flattened-states-output-models c-sizeof-long #f))
	(flattened-c-fvs (list->c-exact-array
				  flattened-c-fvs flattened-fvs c-sizeof-long #f))
	(flattened-c-frames  (list->c-exact-array
				  flattened-c-frames flattened-frames c-sizeof-int #f))
	(flattened-c-weights (if classes-posneg-videos-weights
				 (list->c-inexact-array
				  flattened-c-weights flattened-weights c-sizeof-double #f)
				 #f))
	(flattened-c-hmm-indeces (list->c-exact-array
				  flattened-c-hmm-indeces (map first flattened-ijk) c-sizeof-int #t)))

	;; (unflattened-info
	;;  (map (lambda (x) (transitive-equivalence-classesp
	;;   (lambda (a b) (equal? (fourth a) (fourth b))) x))
	;;  (transitive-equivalence-classesp (lambda (a b) (equal? (third a) (third b)))
	;; 				  flattened-info)))

  ;;(dtrace "unflattend = original?" (equal? hmms-classes-videos-info unflattened-info))
  ;;(dtrace "flattened:" flattened-info)
  flattened-ijk))

(define (detector-cost-params-threaded-c-smooth
	 classes-params
	 classes-preallocated-hmm-pointers
	 preallocated-flattened-c-pointers
	 classes-videos-fvvs
	 classes-videos-c-fvvs
	 classes-negative-videos-c-fvvs
	 states
	 feature-types
	 feature-lengths
	 bin-lengths
	 symmetric?
	 restricted?)
 (let* ((preallocated-hmm-pointers (first classes-preallocated-hmm-pointers))
	(scale-factor (dtrace "detector-cost scale factor"
			      (* *detector-cost-weight*
				 (/ (length (join classes-videos-c-fvvs)) 1;; (length classes-params)
				    ))))
	(ijk (create-flat-hmm-video-pointer-cross-product-with-negatives
	      classes-videos-c-fvvs
	      classes-negative-videos-c-fvvs
	      classes-params
	      #f;;classes-videos-hmm-gradient-weights
	      classes-preallocated-hmm-pointers
	      preallocated-flattened-c-pointers
	      states
	      feature-types
	      feature-lengths
	      bin-lengths
	      symmetric?
	      restricted?))
	(model-types (map-vector model-type feature-types))
	(model-lengths (compute-state-output-models-lengths model-types feature-lengths bin-lengths))
	(state-output-model-length
	 (reduce-vector + model-lengths
			0))
	(total-output-models-length (* states state-output-model-length))
	(gradient-length (+ states (* states states) total-output-models-length 2))
	(foo (dtrace "running paralell code..." ""))
	(flat-likelihoods (x (threaded-hog-hmm-derivative-c-wrapper (length classes-params)
								    states
								    gradient-length
								    (length ijk)
								    preallocated-flattened-c-pointers
								    (vector-length feature-types)
								    0;;sigmoid-a NEEDS WORK HARD CODED
								    10;;sigmoid-b NEEDS WORK HARD CODED
								    #f
								    )))
	(foo (dtrace "finished paralell code" ""))
	(hmms-posneg-videos-likelihoods (unflatten flat-likelihoods ijk))
	(hmms-positive-class-videos-likelihoods (map first hmms-posneg-videos-likelihoods))
	(hmms-negative-class-videos-likelihoods (map second hmms-posneg-videos-likelihoods))
	;; (hmms-positive-class-videos-likelihoods-unthreaded
	;;  (dtrace "positive detector likelihoods"
	;; 	 (map
	;;   (lambda (params class-videos-c-fvvs)
	;;    (copy-hmm-data-into-precallocated-c-pointers (params->initial-state-distribution params states restricted?)
	;; 	   (params->transition-matrix params states restricted?)
	;; 	   (params->states-output-models params states (map-vector model-type feature-types) feature-lengths bin-lengths)
	;; 	   feature-types
	;; 	   feature-lengths
	;; 	   bin-lengths
	;; 	   (vector-ref preallocated-hmm-pointers 0)
	;; 	   (vector-ref preallocated-hmm-pointers 1)
	;; 	   (vector-ref preallocated-hmm-pointers 2)
	;; 	   (vector-ref preallocated-hmm-pointers 3)
	;; 	   (vector-ref preallocated-hmm-pointers 4)
	;; 	   (vector-ref preallocated-hmm-pointers 5)
	;; 	   (vector-ref preallocated-hmm-pointers 6)
	;; 	   (vector-ref preallocated-hmm-pointers 7))
	;;    (map
	;;       (lambda ( c-fvvs)
	;;        (x (faster-preallocated-hog-hmm-derivative-c-wrapper
	;; 	   (params->initial-state-distribution params states restricted?)
	;; 	   (params->transition-matrix params states restricted?)
	;; 	   #f;;fvvs
	;; 	   (params->states-output-models params states (map-vector model-type feature-types) feature-lengths bin-lengths)
	;; 	   feature-types
	;; 	   feature-lengths
	;; 	   bin-lengths
	;; 	   (params->sigmoid-threshold params states (map-vector model-type feature-types) feature-lengths bin-lengths);;sigmoid a
	;; 	   (params->sigmoid-tau params states (map-vector model-type feature-types) feature-lengths bin-lengths);;*sigmoid-b* ;; sigmoid b
	;; 	   c-fvvs
	;; 	   (vector-ref preallocated-hmm-pointers 0)
	;; 	   (vector-ref preallocated-hmm-pointers 1)
	;; 	   (vector-ref preallocated-hmm-pointers 2)
	;; 	   (vector-ref preallocated-hmm-pointers 3)
	;; 	   (vector-ref preallocated-hmm-pointers 4)
	;; 	   (vector-ref preallocated-hmm-pointers 5)
	;; 	   (vector-ref preallocated-hmm-pointers 6)
	;; 	   (vector-ref preallocated-hmm-pointers 7)
	;; 	   #f)))
	;;       ;;videos-fvvs
	;;       class-videos-c-fvvs))
	;;     ;;classes-videos-fvvs
	;;   classes-params classes-videos-c-fvvs)))
	;; (hmms-negative-class-videos-likelihoods-unthreaded
	;;  ;; (dtrace "negative detector likelihoods:"
	;; 	 (map
	;;   (lambda (params class-videos-c-fvvs)
	;;    (copy-hmm-data-into-precallocated-c-pointers (params->initial-state-distribution params states restricted?)
	;; 	   (params->transition-matrix params states restricted?)
	;; 	   (params->states-output-models params states (map-vector model-type feature-types) feature-lengths bin-lengths)
	;; 	   feature-types
	;; 	   feature-lengths
	;; 	   bin-lengths
	;; 	   (vector-ref preallocated-hmm-pointers 0)
	;; 	   (vector-ref preallocated-hmm-pointers 1)
	;; 	   (vector-ref preallocated-hmm-pointers 2)
	;; 	   (vector-ref preallocated-hmm-pointers 3)
	;; 	   (vector-ref preallocated-hmm-pointers 4)
	;; 	   (vector-ref preallocated-hmm-pointers 5)
	;; 	   (vector-ref preallocated-hmm-pointers 6)
	;; 	   (vector-ref preallocated-hmm-pointers 7))
	;;    (map
	;;       (lambda ( c-fvvs)
	;;        (x (faster-preallocated-hog-hmm-derivative-c-wrapper
	;; 	   (params->initial-state-distribution params states restricted?)
	;; 	   (params->transition-matrix params states restricted?)
	;; 	   #f;;fvvs
	;; 	   (params->states-output-models params states (map-vector model-type feature-types) feature-lengths bin-lengths)
	;; 	   feature-types
	;; 	   feature-lengths
	;; 	   bin-lengths
	;; 	   (params->sigmoid-threshold params states (map-vector model-type feature-types) feature-lengths bin-lengths);;sigmoid a
	;; 	   (params->sigmoid-tau params states (map-vector model-type feature-types) feature-lengths bin-lengths);;*sigmoid-b* ;; sigmoid b
	;; 	   c-fvvs
	;; 	   (vector-ref preallocated-hmm-pointers 0)
	;; 	   (vector-ref preallocated-hmm-pointers 1)
	;; 	   (vector-ref preallocated-hmm-pointers 2)
	;; 	   (vector-ref preallocated-hmm-pointers 3)
	;; 	   (vector-ref preallocated-hmm-pointers 4)
	;; 	   (vector-ref preallocated-hmm-pointers 5)
	;; 	   (vector-ref preallocated-hmm-pointers 6)
	;; 	   (vector-ref preallocated-hmm-pointers 7)
	;; 	   #f)))
	;;       ;;videos-fvvs
	;;       class-videos-c-fvvs))
	;;     ;;classes-videos-fvvs
	;;   classes-params classes-negative-videos-c-fvvs))
	;;)

	(foo (dtrace "computed paralell scores for detector cost" ""))
	(classes-positive-smooth-mins
	 (map (lambda (hmm-positive-class-videos-likelihoods)
		(smooth-min-approx hmm-positive-class-videos-likelihoods *smooth-max-param*))
	      hmms-positive-class-videos-likelihoods))
	(classes-negative-smooth-maxes
	 (map (lambda (hmm-negative-class-videos-likelihoods)
		(smooth-max-approx hmm-negative-class-videos-likelihoods *smooth-max-param*))
	      hmms-negative-class-videos-likelihoods))
	(classes-costs (map (lambda (class-positive-smooth-min class-negative-smooth-max)
			     (-	class-negative-smooth-max
				class-positive-smooth-min
				))

			    classes-positive-smooth-mins
			    classes-negative-smooth-maxes)))

  (list (* (smooth-max-approx classes-costs *smooth-max-param*) scale-factor)
	#f
	(list hmms-positive-class-videos-likelihoods
	      hmms-negative-class-videos-likelihoods))))

(define (detector-cost-params-c-smooth
	 classes-params
	 preallocated-hmms-pointers
	 classes-videos-fvvs
	 classes-videos-c-fvvs
	 classes-negative-videos-c-fvvs
	 states
	 feature-types
	 feature-lengths
	 bin-lengths
	 symmetric?
	 restricted?)
 (let* ((preallocated-hmm-pointers (first preallocated-hmms-pointers))
	(scale-factor (dtrace "detector-cost scale factor"
			      (* *detector-cost-weight*
				 (/ (length (join classes-videos-c-fvvs)) (length classes-params)))))
	(hmms-positive-class-videos-likelihoods
	 (dtrace "positive detector likelihoods"
		 (map
	  (lambda (params class-videos-c-fvvs)
	   (copy-hmm-data-into-precallocated-c-pointers (params->initial-state-distribution params states restricted?)
		   (params->transition-matrix params states restricted?)
		   (params->states-output-models params states (map-vector model-type feature-types) feature-lengths bin-lengths)
		   feature-types
		   feature-lengths
		   bin-lengths
		   (vector-ref preallocated-hmm-pointers 0)
		   (vector-ref preallocated-hmm-pointers 1)
		   (vector-ref preallocated-hmm-pointers 2)
		   (vector-ref preallocated-hmm-pointers 3)
		   (vector-ref preallocated-hmm-pointers 4)
		   (vector-ref preallocated-hmm-pointers 5)
		   (vector-ref preallocated-hmm-pointers 6)
		   (vector-ref preallocated-hmm-pointers 7))
	   (map
	      (lambda ( c-fvvs)
	       (x (faster-preallocated-hog-hmm-derivative-c-wrapper
		   (params->initial-state-distribution params states restricted?)
		   (params->transition-matrix params states restricted?)
		   #f;;fvvs
		   (params->states-output-models params states (map-vector model-type feature-types) feature-lengths bin-lengths)
		   feature-types
		   feature-lengths
		   bin-lengths
		   (params->sigmoid-threshold params states (map-vector model-type feature-types) feature-lengths bin-lengths);;sigmoid a
		   (params->sigmoid-tau params states (map-vector model-type feature-types) feature-lengths bin-lengths);;*sigmoid-b* ;; sigmoid b
		   c-fvvs
		   (vector-ref preallocated-hmm-pointers 0)
		   (vector-ref preallocated-hmm-pointers 1)
		   (vector-ref preallocated-hmm-pointers 2)
		   (vector-ref preallocated-hmm-pointers 3)
		   (vector-ref preallocated-hmm-pointers 4)
		   (vector-ref preallocated-hmm-pointers 5)
		   (vector-ref preallocated-hmm-pointers 6)
		   (vector-ref preallocated-hmm-pointers 7)
		   #f)))
	      ;;videos-fvvs
	      class-videos-c-fvvs))
	    ;;classes-videos-fvvs
	  classes-params classes-videos-c-fvvs)))
	(hmms-negative-class-videos-likelihoods
	 ;; (dtrace "negative detector likelihoods:"
		 (map
	  (lambda (params class-videos-c-fvvs)
	   (copy-hmm-data-into-precallocated-c-pointers (params->initial-state-distribution params states restricted?)
		   (params->transition-matrix params states restricted?)
		   (params->states-output-models params states (map-vector model-type feature-types) feature-lengths bin-lengths)
		   feature-types
		   feature-lengths
		   bin-lengths
		   (vector-ref preallocated-hmm-pointers 0)
		   (vector-ref preallocated-hmm-pointers 1)
		   (vector-ref preallocated-hmm-pointers 2)
		   (vector-ref preallocated-hmm-pointers 3)
		   (vector-ref preallocated-hmm-pointers 4)
		   (vector-ref preallocated-hmm-pointers 5)
		   (vector-ref preallocated-hmm-pointers 6)
		   (vector-ref preallocated-hmm-pointers 7))
	   (map
	      (lambda ( c-fvvs)
	       (x (faster-preallocated-hog-hmm-derivative-c-wrapper
		   (params->initial-state-distribution params states restricted?)
		   (params->transition-matrix params states restricted?)
		   #f;;fvvs
		   (params->states-output-models params states (map-vector model-type feature-types) feature-lengths bin-lengths)
		   feature-types
		   feature-lengths
		   bin-lengths
		   (params->sigmoid-threshold params states (map-vector model-type feature-types) feature-lengths bin-lengths);;sigmoid a
		   (params->sigmoid-tau params states (map-vector model-type feature-types) feature-lengths bin-lengths);;*sigmoid-b* ;; sigmoid b
		   c-fvvs
		   (vector-ref preallocated-hmm-pointers 0)
		   (vector-ref preallocated-hmm-pointers 1)
		   (vector-ref preallocated-hmm-pointers 2)
		   (vector-ref preallocated-hmm-pointers 3)
		   (vector-ref preallocated-hmm-pointers 4)
		   (vector-ref preallocated-hmm-pointers 5)
		   (vector-ref preallocated-hmm-pointers 6)
		   (vector-ref preallocated-hmm-pointers 7)
		   #f)))
	      ;;videos-fvvs
	      class-videos-c-fvvs))
	    ;;classes-videos-fvvs
	  classes-params classes-negative-videos-c-fvvs))
	;;)


	(classes-positive-smooth-mins
	 (map (lambda (hmm-positive-class-videos-likelihoods)
		(smooth-min-approx hmm-positive-class-videos-likelihoods *smooth-max-param*))
	      hmms-positive-class-videos-likelihoods))
	(classes-negative-smooth-maxes
	 (map (lambda (hmm-negative-class-videos-likelihoods)
		(smooth-max-approx hmm-negative-class-videos-likelihoods *smooth-max-param*))
	      hmms-negative-class-videos-likelihoods))
	(classes-costs (map (lambda (class-positive-smooth-min class-negative-smooth-max)
			     (-	class-negative-smooth-max
				class-positive-smooth-min
				))

			    classes-positive-smooth-mins
			    classes-negative-smooth-maxes)))

  (list (* (reduce + classes-costs 0) scale-factor)
	#f
	(list hmms-positive-class-videos-likelihoods
	      hmms-negative-class-videos-likelihoods))))

(define (mle-cost-params-c
	 classes-params
	 preallocated-hmm-pointers
	 classes-videos-fvvs
	 classes-videos-c-fvvs
	 states
	 feature-types
	 feature-lengths
	 bin-lengths
	 symmetric?
	 restricted?)
 (let* ((hmm-classes-videos-likelihoods
	 (map
	  (lambda (params videos-fvvs videos-c-fvvs)
	   (copy-hmm-data-into-precallocated-c-pointers (params->initial-state-distribution params states restricted?)
		   (params->transition-matrix params states restricted?)
		   (params->states-output-models params states (map-vector model-type feature-types) feature-lengths bin-lengths)
		   feature-types
		   feature-lengths
		   bin-lengths
		   (vector-ref preallocated-hmm-pointers 0)
		   (vector-ref preallocated-hmm-pointers 1)
		   (vector-ref preallocated-hmm-pointers 2)
		   (vector-ref preallocated-hmm-pointers 3)
		   (vector-ref preallocated-hmm-pointers 4)
		   (vector-ref preallocated-hmm-pointers 5)
		   (vector-ref preallocated-hmm-pointers 6)
		   (vector-ref preallocated-hmm-pointers 7))

	     (map
	      (lambda (fvvs c-fvvs)
	       (x (faster-preallocated-hog-hmm-derivative-c-wrapper
		   (params->initial-state-distribution params states restricted?)
		   (params->transition-matrix params states restricted?)
		   fvvs
		   (params->states-output-models params states (map-vector model-type feature-types) feature-lengths bin-lengths)
		   feature-types
		   feature-lengths
		   bin-lengths
		   (params->sigmoid-threshold params states (map-vector model-type feature-types) feature-lengths bin-lengths);;sigmoid a
		   (params->sigmoid-tau params states (map-vector model-type feature-types) feature-lengths bin-lengths);;*sigmoid-b* ;; sigmoid b
		   c-fvvs
		   (vector-ref preallocated-hmm-pointers 0)
		   (vector-ref preallocated-hmm-pointers 1)
		   (vector-ref preallocated-hmm-pointers 2)
		   (vector-ref preallocated-hmm-pointers 3)
		   (vector-ref preallocated-hmm-pointers 4)
		   (vector-ref preallocated-hmm-pointers 5)
		   (vector-ref preallocated-hmm-pointers 6)
		   (vector-ref preallocated-hmm-pointers 7)
		   #f)))
	      videos-fvvs
	      videos-c-fvvs))
	  classes-params
	  classes-videos-fvvs
	  classes-videos-c-fvvs)))
  (list (- (reduce + (join hmm-classes-videos-likelihoods) 0))
	hmm-classes-videos-likelihoods)))


(define (svm-style-cost-params-full-AD
	 classes-params
	 preallocated-hmm-pointers ;; unused, but ill keep it to keep the args the same
	 classes-videos-fvvs
	 classes-videos-c-fvvs
	 states
	 feature-types
	 feature-lengths
	 bin-lengths
	 symmetric?
	 restricted?)
 (let* ((params-length (vector-length (first classes-params)))
	(like
	 (lambda (ps1)
	  (let* ((ps (vector->list (shape-matrix ps1 params-length)))
		 (classes-videos-hmm-classes-likelihoods
		  (map
		   (lambda (videos-fvvs videos-c-fvvs)
		    (map
		     (lambda (fvvs c-fvvs)
		      (map
		       (lambda (params)

			(video-likelihood-params params
						 fvvs
						 states
						 (map-vector model-type feature-types)
						 feature-lengths
						 bin-lengths
						 symmetric?
						 restricted?
						 #f))
		       ps))
		     videos-fvvs
		     videos-c-fvvs))
		   classes-videos-fvvs
		   classes-videos-c-fvvs))
		 (classes-videos-costs
		  (map-indexed
		   (lambda (class-videos-hmm-classes-likelihoods class)
		    (dtrace "class:" class)
		    (map (lambda (video-hmm-classes-likelihoods)
			  (let* ((correct-likelihood (list-ref video-hmm-classes-likelihoods
										class))
				 (maximum-incorrect-likelihood
				  (smooth-max-approx (list-remove video-hmm-classes-likelihoods class)
									  *smooth-max-param*)))
			   (if (> correct-likelihood (+ maximum-incorrect-likelihood *margin-param*))
						    0
						    (sqr (- (+ maximum-incorrect-likelihood *margin-param*) correct-likelihood)))))
			 class-videos-hmm-classes-likelihoods))
		   classes-videos-hmm-classes-likelihoods)))
	   (reduce + (join classes-videos-costs) 0))))
	(g (gradient-r like)))
  (list (like (reduce-vector vector-append (list->vector classes-params) `#()))
	(g (reduce-vector vector-append (list->vector classes-params) `#())))))

(define (mle-cost-gradient-parameters-c
	 classes-videos-hmm-classes-likelihoods
	 classes-videos-fvvs
	 classes-videos-c-fvvs
	 preallocated-hmm-pointers
	 classes-params
	 states
	 feature-types
	 feature-lengths
	 bin-lengths
	 symmetric?
	 restricted?)
 (let* ((classes (enumerate (length classes-params)))
	(hmms 	(map (lambda (params)
		      (params->scheme-hmm params
					  states
					  restricted?
					  feature-types
					  feature-lengths
					  bin-lengths))
		     classes-params))
	(classes-videos-hmm-gradients
	 (map
	  (lambda (class-videos-hmm-classes-likelihoods class hmm class-videos-fvvs class-videos-c-fvvs)
	   (map (lambda (video-hmm-classes-likelihoods video-fvvs video-c-fvvs)
		 (y (preallocated-hog-hmm-derivative-c-wrapper
		     (scheme-hmm-initial-state-distribution hmm)
		     (scheme-hmm-transition-matrix hmm)
		     video-fvvs
		     (scheme-hmm-states-output-models hmm)
		     feature-types
		     feature-lengths
		     bin-lengths
		     (scheme-hmm-sigmoid-threshold hmm)
		     *sigmoid-b* ;; sigmoid b
		     video-c-fvvs
		     (vector-ref preallocated-hmm-pointers 0)
		     (vector-ref preallocated-hmm-pointers 1)
		     (vector-ref preallocated-hmm-pointers 2)
		     (vector-ref preallocated-hmm-pointers 3)
		     (vector-ref preallocated-hmm-pointers 4)
		     (vector-ref preallocated-hmm-pointers 5)
		     (vector-ref preallocated-hmm-pointers 6)
		     (vector-ref preallocated-hmm-pointers 7)
		     #t)))
		class-videos-hmm-classes-likelihoods
		class-videos-fvvs
		class-videos-c-fvvs))
	  classes-videos-hmm-classes-likelihoods
	  classes
	  hmms
	  classes-videos-fvvs
	  classes-videos-c-fvvs))
	(zero-vector (map-n-vector (lambda (i) 0) (vector-length (first classes-params))))
	(hmms-gradients
	 (map
	  (lambda (class-videos-hmm-gradients)
	   (reduce
	    v+
	    class-videos-hmm-gradients
	    zero-vector))
	 classes-videos-hmm-gradients)))
  hmms-gradients))

(define (svm-style-cost-gradient-parameters-threaded-c-smooth
	 classes-videos-hmm-classes-likelihoods
	 classes-videos-fvvs
	 classes-videos-c-fvvs
	 classes-preallocated-hmm-pointers
	 preallocated-flattened-c-pointers
	 classes-params
	 states
	 feature-types
	 feature-lengths
	 bin-lengths
	 symmetric?
	 restricted?)
 (let* ((preallocated-hmm-pointers (first classes-preallocated-hmm-pointers))
	(classes (enumerate (length classes-params)))
	(hmms 	(map (lambda (params)
		      (params->scheme-hmm params
					  states
					  restricted?
					  feature-types
					  feature-lengths
					  bin-lengths))
		     classes-params))
	(classes-videos-hmm-gradient-weights
	 (map
	  (lambda (class-videos-hmm-classes-likelihoods class hmm class-videos-c-fvvs)
	   (map (lambda (video-hmm-classes-likelihoods video-c-fvvs)
		 (let* ((correct-likelihood (list-ref video-hmm-classes-likelihoods
						      class))
			(incorrect-scores (list-remove (map-indexed
							(lambda (l i)
							 (list l i))
							video-hmm-classes-likelihoods)
						       class))
			(incorrect-likelihood
			 (smooth-max-approx (map first incorrect-scores) *smooth-max-param*))
			(dsmooth-max/dscores
			 (vector->list
			  (dsmooth-max-approx (list->vector (map first incorrect-scores)))))
			(relevant-incorrect-indeces
			 (indeces-of-x-weight 1
					      third
					      second
					      (map (lambda (s d)
						    (list (first s) (second s) d))
						   incorrect-scores
						   dsmooth-max/dscores)))
			(video-cost-term (- (+ incorrect-likelihood *margin-param*) correct-likelihood)))
		  (if (> correct-likelihood (+ incorrect-likelihood *margin-param*))
		      (map-n (lambda (i) 0) (length hmms))
		      (map-indexed
		       (lambda (hmm i)
			(let* ((likelihood-gradient
				(when #f (y (preallocated-hog-hmm-derivative-c-wrapper
				    (scheme-hmm-initial-state-distribution hmm)
				    (scheme-hmm-transition-matrix hmm)
				    #f;;video-fvvs
				    (scheme-hmm-states-output-models hmm)
				    feature-types
				    feature-lengths
				    bin-lengths
				    (scheme-hmm-sigmoid-threshold hmm)
				    *sigmoid-b* ;; sigmoid b
				    video-c-fvvs
				    (vector-ref preallocated-hmm-pointers 0)
				    (vector-ref preallocated-hmm-pointers 1)
				    (vector-ref preallocated-hmm-pointers 2)
				    (vector-ref preallocated-hmm-pointers 3)
				    (vector-ref preallocated-hmm-pointers 4)
				    (vector-ref preallocated-hmm-pointers 5)
				    (vector-ref preallocated-hmm-pointers 6)
				    (vector-ref preallocated-hmm-pointers 7)
				    #t))))
			       (likelihood-gradient-AD
				(when #f
				 (single-video-cost-gradient-params states
								   (scheme-hmm->params hmm)
								   #f;;video-fvvs
								   (map-vector model-type feature-types)
								   feature-lengths
								   bin-lengths
								   symmetric?
								   restricted?)))
			       (weight (* -2
					  video-cost-term
					  (if (= i class)
					      -1
					      (list-ref dsmooth-max/dscores
							(if (> i class)
							    (- i 1)
							    i))))))
			 weight))
		       hmms))))
		class-videos-hmm-classes-likelihoods
		;;class-videos-fvvs
		class-videos-c-fvvs))
	  classes-videos-hmm-classes-likelihoods
	  classes
	  hmms
	  ;;classes-videos-fvvs
	  classes-videos-c-fvvs))
	(ijk
	 (create-flat-hmm-video-pointer-cross-product
	  classes-videos-c-fvvs
	  classes-params
	  classes-videos-hmm-gradient-weights
	  classes-preallocated-hmm-pointers
	  preallocated-flattened-c-pointers
	  states
	  feature-types
	  feature-lengths
	  bin-lengths
	  symmetric?
	  restricted?))
	(model-types (map-vector model-type feature-types))
	(model-lengths (compute-state-output-models-lengths model-types feature-lengths bin-lengths))
	(state-output-model-length
	 (reduce-vector + model-lengths
			0))
	(total-output-models-length (* states state-output-model-length))
	(gradient-length (+ states (* states states) total-output-models-length 2))
	(foo (dtrace "running paralell code:" ""))
	(c-output (threaded-hog-hmm-derivative-c-wrapper (length hmms)
								  states
								 gradient-length
								  (length ijk)
								 preallocated-flattened-c-pointers
								 (vector-length feature-types)
								 0;;sigmoid-a NEEDS WORK HARD CODED
								 10;;sigmoid-b NEEDS WORK HARD CODED
								 #t
								 ))
	(flat-gradients (y c-output))
	(final-hmms-gradients (z c-output))
	(foo (dtrace "finished paralell code" ""))
;;	(foo (dtrace "foo1" ""))
	;; (jki (map (lambda (i-j-k)
	;; 	   (list (second i-j-k) (third i-j-k) (first i-j-k)))
	;; 	  ijk))
	;; (threaded-classes-videos-hmm-gradients (unflatten-gradients flat-gradients jki))
	;; ;;(foo (dtrace "foo2" ""))
	;; ;; (foo (dtrace "foo3" (list (length classes-videos-hmm-gradient-weights)
	;; ;; 			  (length classes-videos-hmm-raw-gradients))))
	;; ;; (foo (dtrace "multiplying by weights" ""))
	;; ;; (threaded-classes-videos-hmm-gradients
	;; ;;  (map
	;; ;;   (lambda (class-videos-hmm-weights class-videos-hmm-gradients)

	;; ;;    (map
	;; ;;     (lambda (video-weights video-gradients)

	;; ;;      (map-vector (lambda (w g)
	;; ;; 	   (if w
	;; ;; 	       (k*v w g)
	;; ;; 	       #f))
	;; ;; 	  video-weights (list->vector video-gradients)))
	;; ;;     class-videos-hmm-weights class-videos-hmm-gradients))
	;; ;;   classes-videos-hmm-gradient-weights classes-videos-hmm-raw-gradients))
	;; (foo (dtrace "foo4" ""))
	;; (non-threaded-classes-videos-hmm-gradients
	;;  (map
	;;   (lambda (class-videos-hmm-classes-likelihoods class hmm class-videos-c-fvvs)
	;;    (map (lambda (video-hmm-classes-likelihoods video-c-fvvs)
	;; 	 (let* ((correct-likelihood (list-ref video-hmm-classes-likelihoods
	;; 					      class))
	;; 		(incorrect-scores (list-remove (map-indexed
	;; 						(lambda (l i)
	;; 						 (list l i))
	;; 						video-hmm-classes-likelihoods)
	;; 					       class))
	;; 		(incorrect-likelihood
	;; 		 (smooth-max-approx (map first incorrect-scores) *smooth-max-param*))
	;; 		(dsmooth-max/dscores
	;; 		 (vector->list
	;; 		  (dsmooth-max-approx (list->vector (map first incorrect-scores)))))
	;; 		(relevant-incorrect-indeces
	;; 		 (indeces-of-x-weight 1
	;; 				      third
	;; 				      second
	;; 				      (map (lambda (s d)
	;; 					    (list (first s) (second s) d))
	;; 					   incorrect-scores
	;; 					   dsmooth-max/dscores)))
	;; 		(video-cost-term (- (+ incorrect-likelihood *margin-param*) correct-likelihood)))
	;; 	  (if (> correct-likelihood (+ incorrect-likelihood *margin-param*))
	;; 	      (map-n-vector (lambda (i) #f) (length hmms))
	;; 	      (map-indexed-vector
	;; 	       (lambda (hmm i)
	;; 		(let* ((likelihood-gradient
	;; 			(y (preallocated-hog-hmm-derivative-c-wrapper
	;; 			    (scheme-hmm-initial-state-distribution hmm)
	;; 			    (scheme-hmm-transition-matrix hmm)
	;; 			    #f;;video-fvvs
	;; 			    (scheme-hmm-states-output-models hmm)
	;; 			    feature-types
	;; 			    feature-lengths
	;; 			    bin-lengths
	;; 			    (scheme-hmm-sigmoid-threshold hmm)
	;; 			    *sigmoid-b* ;; sigmoid b
	;; 			    video-c-fvvs
	;; 			    (vector-ref preallocated-hmm-pointers 0)
	;; 			    (vector-ref preallocated-hmm-pointers 1)
	;; 			    (vector-ref preallocated-hmm-pointers 2)
	;; 			    (vector-ref preallocated-hmm-pointers 3)
	;; 			    (vector-ref preallocated-hmm-pointers 4)
	;; 			    (vector-ref preallocated-hmm-pointers 5)
	;; 			    (vector-ref preallocated-hmm-pointers 6)
	;; 			    (vector-ref preallocated-hmm-pointers 7)
	;; 			    #t)))
	;; 		       (likelihood-gradient-AD
	;; 			(when #f
	;; 			 (single-video-cost-gradient-params states
	;; 							   (scheme-hmm->params hmm)
	;; 							   #f;;video-fvvs
	;; 							   (map-vector model-type feature-types)
	;; 							   feature-lengths
	;; 							   bin-lengths
	;; 							   symmetric?
	;; 							   restricted?)))
	;; 		       (weight (* -2
	;; 				  video-cost-term
	;; 				  (if (= i class)
	;; 				      -1
	;; 				      (list-ref dsmooth-max/dscores
	;; 						(if (> i class)
	;; 						    (- i 1)
	;; 						    i))))))
	;; 		 (k*v weight likelihood-gradient)))
	;; 	       (list->vector hmms)))))
	;; 	class-videos-hmm-classes-likelihoods
	;; 	;;class-videos-fvvs
	;; 	class-videos-c-fvvs))
	;;   classes-videos-hmm-classes-likelihoods
	;;   classes
	;;   hmms
	;;   ;;classes-videos-fvvs
	;;   classes-videos-c-fvvs))
	;; (foo (dtrace "threadedgradient=?non-threaded-gradient"
	;; 	     (equal? threaded-classes-videos-hmm-gradients non-threaded-classes-videos-hmm-gradients)))
	;; (foo (dtrace "total minimum ratio:"
	;; 	    (minimum
	;; 	      (map
	;; 	       (lambda (ts ns)
	;; 		(minimum-vector
	;; 		 (map-vector
	;; 		  (lambda (t n)
	;; 		   (minimum-vector
	;; 		    (map-vector
	;; 		     (lambda (a b) (if (= a b) 1 (/ a b)))
	;; 		     t n)))
	;; 		  ts ns)))
	;; 		  (join  threaded-classes-videos-hmm-gradients)
	;; 		  (join  non-threaded-classes-videos-hmm-gradients)))))
	;; (foo (dtrace "total maximum ratio:" (maximum
	;; 				     (map
	;; 				      (lambda (ts ns)
	;; 				       (maximum-vector
	;; 				       (map-vector
	;; 					 (lambda (t n)
	;; 					  (maximum-vector
	;; 					   (map-vector
	;; 					    (lambda (a b) (if (= a b) 1 (/ a b)))
	;; 					    t n)))
	;; 					 ts ns)))
	;; 				      (join threaded-classes-videos-hmm-gradients)
	;; 				      (join non-threaded-classes-videos-hmm-gradients)))))

	;; (zero-vector (map-n-vector (lambda (i) 0) (vector-length (first classes-params))))
	;; (foo (dtrace "adding up weighted gradients" ""))
	;; (hmms-gradients
	;;  (map-n
	;;   (lambda (i)
	;;    (reduce
	;;     v+
	;;     (removeq
	;;      #f
	;;      (join
	;;       (map
	;;        (lambda (class-videos-hmm-gradients)
	;; 	(map
	;; 	 (lambda (video-hmm-gradients)
	;; 	  (vector-ref video-hmm-gradients i))
	;; 	 class-videos-hmm-gradients))
	;;        threaded-classes-videos-hmm-gradients)))
	;;     zero-vector))
	;;   (length hmms)))
	;; (non-threaded-hmms-gradients
	;;  (map-n
	;;   (lambda (i)
	;;    (reduce
	;;     v+
	;;     (removeq
	;;      #f
	;;      (join
	;;       (map
	;;        (lambda (class-videos-hmm-gradients)
	;; 	(map
	;; 	 (lambda (video-hmm-gradients)
	;; 	  (vector-ref video-hmm-gradients i))
	;; 	 class-videos-hmm-gradients))
	;;        non-threaded-classes-videos-hmm-gradients)))
	;;     zero-vector))
	;;   (length hmms)))
	;; (foo (dtrace "final/non-threaded min ratio:" (minimum (map (lambda (nc tc)
	;; 							    (minimum-vector
	;; 							     (map-vector
	;; 							      (lambda (a b) (if (= a b) 1 (/ a b)))
	;; 							      tc nc)))
	;; 							   non-threaded-hmms-gradients
	;; 							   final-hmms-gradients))))
	;; (foo (dtrace "final/non-threaded max ratio:" (maximum (map (lambda (nc tc)
	;; 							    (maximum-vector
	;; 							     (map-vector
	;; 							      (lambda (a b) (if (= a b) 1 (/ a b)))
	;; 							      tc nc)))
	;; 							   non-threaded-hmms-gradients
	;; 							   final-hmms-gradients))))
	)
  final-hmms-gradients))

(define (svm-style-cost-gradient-parameters-c-smooth
	 classes-videos-hmm-classes-likelihoods
	 classes-videos-fvvs
	 classes-videos-c-fvvs
	 preallocated-hmm-pointers
	 classes-params
	 states
	 feature-types
	 feature-lengths
	 bin-lengths
	 symmetric?
	 restricted?)
 (let* ((classes (enumerate (length classes-params)))
	(hmms 	(map (lambda (params)
		      (params->scheme-hmm params
					  states
					  restricted?
					  feature-types
					  feature-lengths
					  bin-lengths))
		     classes-params))
	(classes-videos-hmm-gradients
	 (map
	  (lambda (class-videos-hmm-classes-likelihoods class hmm class-videos-c-fvvs)
	   (map (lambda (video-hmm-classes-likelihoods video-c-fvvs)
		 (let* ((correct-likelihood (list-ref video-hmm-classes-likelihoods
						      class))
			(incorrect-scores (list-remove (map-indexed
							(lambda (l i)
							 (list l i))
							video-hmm-classes-likelihoods)
						       class))
			(incorrect-likelihood
			 (smooth-max-approx (map first incorrect-scores) *smooth-max-param*))
			(dsmooth-max/dscores
			 (vector->list
			  (dsmooth-max-approx (list->vector (map first incorrect-scores)))))
			(relevant-incorrect-indeces
			 (indeces-of-x-weight 1
					      third
					      second
					      (map (lambda (s d)
						    (list (first s) (second s) d))
						   incorrect-scores
						   dsmooth-max/dscores)))
			(video-cost-term (- (+ incorrect-likelihood *margin-param*) correct-likelihood)))
		  (if (> correct-likelihood (+ incorrect-likelihood *margin-param*))
		      (map-n-vector (lambda (i) #f) (length hmms))
		      (map-indexed-vector
		       (lambda (hmm i)
			(let* ((likelihood-gradient
				(y (preallocated-hog-hmm-derivative-c-wrapper
				    (scheme-hmm-initial-state-distribution hmm)
				    (scheme-hmm-transition-matrix hmm)
				    #f;;video-fvvs
				    (scheme-hmm-states-output-models hmm)
				    feature-types
				    feature-lengths
				    bin-lengths
				    (scheme-hmm-sigmoid-threshold hmm)
				    *sigmoid-b* ;; sigmoid b
				    video-c-fvvs
				    (vector-ref preallocated-hmm-pointers 0)
				    (vector-ref preallocated-hmm-pointers 1)
				    (vector-ref preallocated-hmm-pointers 2)
				    (vector-ref preallocated-hmm-pointers 3)
				    (vector-ref preallocated-hmm-pointers 4)
				    (vector-ref preallocated-hmm-pointers 5)
				    (vector-ref preallocated-hmm-pointers 6)
				    (vector-ref preallocated-hmm-pointers 7)
				    #t)))
			       (likelihood-gradient-AD
				(when #f
				 (single-video-cost-gradient-params states
								   (scheme-hmm->params hmm)
								   #f;;video-fvvs
								   (map-vector model-type feature-types)
								   feature-lengths
								   bin-lengths
								   symmetric?
								   restricted?)))
			       (weight (* -2
					  video-cost-term
					  (if (= i class)
					      -1
					      (list-ref dsmooth-max/dscores
							(if (> i class)
							    (- i 1)
							    i))))))
			 (k*v weight likelihood-gradient)))
		       (list->vector hmms)))))
		class-videos-hmm-classes-likelihoods
		;;class-videos-fvvs
		class-videos-c-fvvs))
	  classes-videos-hmm-classes-likelihoods
	  classes
	  hmms
	  ;;classes-videos-fvvs
	  classes-videos-c-fvvs))
	(zero-vector (map-n-vector (lambda (i) 0) (vector-length (first classes-params))))
	(hmms-gradients
	 (map-n
	  (lambda (i)
	   (reduce
	    v+
	    (removeq
	     #f
	     (join
	      (map
	       (lambda (class-videos-hmm-gradients)
		(map
		 (lambda (video-hmm-gradients)
		  (vector-ref video-hmm-gradients i))
		 class-videos-hmm-gradients))
	       classes-videos-hmm-gradients)))
	    zero-vector))
	  (length hmms))))
  hmms-gradients))

(define (detector-cost-gradient-parameters-c-smooth
	 hmms-positive-class-videos-likelihoods
	 hmms-negative-class-videos-likelihoods
	 classes-videos-fvvs
	 classes-videos-c-fvvs
	 classes-negative-c-fvvs
	 preallocated-hmms-pointers
	 classes-params
	 states
	 feature-types
	 feature-lengths
	 bin-lengths
	 symmetric?
	 restricted?)
 (let* ((preallocated-hmm-pointers (first preallocated-hmms-pointers))
	(scale-factor (dtrace "detector-cost scale factor"
			      (* *detector-cost-weight*
				 (/ (length (join classes-videos-c-fvvs))  (length classes-params)
				 ))))
	(classes (enumerate (length classes-params)))
	(zero-vector (map-n-vector (lambda (i) 0) (vector-length (first classes-params))))
	(hmms 	(map (lambda (params)
		      (params->scheme-hmm params
					  states
					  restricted?
					  feature-types
					  feature-lengths
					  bin-lengths))
		     classes-params))
	(hmms-gradients
	 (map
	  (lambda (hmm
		   positive-videos-likelihoods
		   negative-videos-likelihoods
		   positive-videos-c-fvvs
		   negative-videos-c-fvvs)
	   (let*
	     ((positive-videos-weights
	       (vector->list (dsmooth-min-approx (list->vector positive-videos-likelihoods))))
	      (negative-videos-weights
	       (vector->list (dsmooth-max-approx (list->vector negative-videos-likelihoods))))
	      (positive-videos-gradients
	       (map (lambda (video-c-fvvs)
		     (y (preallocated-hog-hmm-derivative-c-wrapper
				    (scheme-hmm-initial-state-distribution hmm)
				    (scheme-hmm-transition-matrix hmm)
				    #f;;video-fvvs
				    (scheme-hmm-states-output-models hmm)
				    feature-types
				    feature-lengths
				    bin-lengths
				    (scheme-hmm-sigmoid-threshold hmm)
				    *sigmoid-b* ;; sigmoid b
				    video-c-fvvs
				    (vector-ref preallocated-hmm-pointers 0)
				    (vector-ref preallocated-hmm-pointers 1)
				    (vector-ref preallocated-hmm-pointers 2)
				    (vector-ref preallocated-hmm-pointers 3)
				    (vector-ref preallocated-hmm-pointers 4)
				    (vector-ref preallocated-hmm-pointers 5)
				    (vector-ref preallocated-hmm-pointers 6)
				    (vector-ref preallocated-hmm-pointers 7)
				    #t)))
		    positive-videos-c-fvvs))
	      (negative-videos-gradients
	       (map (lambda (video-c-fvvs)
		     (y (preallocated-hog-hmm-derivative-c-wrapper
				    (scheme-hmm-initial-state-distribution hmm)
				    (scheme-hmm-transition-matrix hmm)
				    #f;;video-fvvs
				    (scheme-hmm-states-output-models hmm)
				    feature-types
				    feature-lengths
				    bin-lengths
				    (scheme-hmm-sigmoid-threshold hmm)
				    *sigmoid-b* ;; sigmoid b
				    video-c-fvvs
				    (vector-ref preallocated-hmm-pointers 0)
				    (vector-ref preallocated-hmm-pointers 1)
				    (vector-ref preallocated-hmm-pointers 2)
				    (vector-ref preallocated-hmm-pointers 3)
				    (vector-ref preallocated-hmm-pointers 4)
				    (vector-ref preallocated-hmm-pointers 5)
				    (vector-ref preallocated-hmm-pointers 6)
				    (vector-ref preallocated-hmm-pointers 7)
				    #t)))
		    negative-videos-c-fvvs)))
	      (k*v
	       scale-factor
	       (v-
	       (reduce v+
		       (map (lambda (gradient weight)
			     (k*v weight gradient))
			    positive-videos-gradients
			    positive-videos-weights)
		       zero-vector)
	       (reduce v+
		       (map (lambda (gradient weight)
			     (k*v weight gradient))
			    negative-videos-gradients
			    negative-videos-weights)
		       zero-vector)
	       ))

	   ))
	  hmms
	  hmms-positive-class-videos-likelihoods
	  hmms-negative-class-videos-likelihoods
	  classes-videos-c-fvvs
	  classes-negative-c-fvvs)))
  hmms-gradients))


(define (detector-cost-gradient-parameters-threaded-c-smooth
	 hmms-positive-class-videos-likelihoods
	 hmms-negative-class-videos-likelihoods
	 classes-videos-fvvs
	 classes-videos-c-fvvs
	 classes-negative-c-fvvs
	 preallocated-hmms-pointers
	 preallocated-flattened-c-pointers
	 classes-params
	 states
	 feature-types
	 feature-lengths
	 bin-lengths
	 symmetric?
	 restricted?)
 (let* ((preallocated-hmm-pointers (first preallocated-hmms-pointers))
	(scale-factor (dtrace "detector-cost scale factor"
			      (* *detector-cost-weight*
				 (/ (length (join classes-videos-c-fvvs)) 1 ;; (length classes-params)
				    ))))
	(classes (enumerate (length classes-params)))
	(zero-vector (map-n-vector (lambda (i) 0) (vector-length (first classes-params))))
	(hmms 	(map (lambda (params)
		      (params->scheme-hmm params
					  states
					  restricted?
					  feature-types
					  feature-lengths
					  bin-lengths))
		     classes-params))
	(classes-positive-smooth-mins
	 (map (lambda (hmm-positive-class-videos-likelihoods)
		(smooth-min-approx hmm-positive-class-videos-likelihoods *smooth-max-param*))
	      hmms-positive-class-videos-likelihoods))
	(classes-negative-smooth-maxes
	 (map (lambda (hmm-negative-class-videos-likelihoods)
		(smooth-max-approx hmm-negative-class-videos-likelihoods *smooth-max-param*))
	      hmms-negative-class-videos-likelihoods))
	(classes-costs (map (lambda (class-positive-smooth-min class-negative-smooth-max)
			     (-	class-negative-smooth-max
				class-positive-smooth-min
				))

			    classes-positive-smooth-mins
			    classes-negative-smooth-maxes))
	(classes-weights (vector->list (dsmooth-max-approx (list->vector classes-costs))))

	(classes-posneg-videos-weights
	 (map (lambda (positive-videos-likelihoods
		       negative-videos-likelihoods
		       class-weight)
	       (list (vector->list (k*v (* class-weight scale-factor) (dsmooth-min-approx (list->vector positive-videos-likelihoods))))
		     (vector->list (k*v (* class-weight (- scale-factor)) (dsmooth-max-approx (list->vector negative-videos-likelihoods))))))
	      hmms-positive-class-videos-likelihoods
	      hmms-negative-class-videos-likelihoods
	      classes-weights))

	(ijk (create-flat-hmm-video-pointer-cross-product-with-negatives
	      classes-videos-c-fvvs
	      classes-negative-c-fvvs
	      classes-params
	      classes-posneg-videos-weights
	      preallocated-hmms-pointers
	      preallocated-flattened-c-pointers
	      states
	      feature-types
	      feature-lengths
	      bin-lengths
	      symmetric?
	      restricted?))
	(model-types (map-vector model-type feature-types))
	(model-lengths (compute-state-output-models-lengths model-types feature-lengths bin-lengths))
	(state-output-model-length
	 (reduce-vector + model-lengths
			0))
	(total-output-models-length (* states state-output-model-length))
	(gradient-length (+ states (* states states) total-output-models-length 2))
	(foo (dtrace "running paralell code:" ""))
	(c-output (threaded-hog-hmm-derivative-c-wrapper (length hmms)
								  states
								 gradient-length
								  (length ijk)
								 preallocated-flattened-c-pointers
								 (vector-length feature-types)
								 0;;sigmoid-a NEEDS WORK HARD CODED
								 10;;sigmoid-b NEEDS WORK HARD CODED
								 #t
								 ))
	(flat-gradients (y c-output))
	(final-hmms-gradients (z c-output))
	;; (hmms-gradients
	;;  (map
	;;   (lambda (hmm
	;; 	   positive-videos-likelihoods
	;; 	   negative-videos-likelihoods
	;; 	   positive-videos-c-fvvs
	;; 	   negative-videos-c-fvvs)
	;;    (let*
	;;      ((positive-videos-weights
	;;        (vector->list (dsmooth-min-approx (list->vector positive-videos-likelihoods))))
	;;       (negative-videos-weights
	;;        (vector->list (dsmooth-max-approx (list->vector negative-videos-likelihoods))))
	;;       (positive-videos-gradients
	;;        (map (lambda (video-c-fvvs)
	;; 	     (y (preallocated-hog-hmm-derivative-c-wrapper
	;; 			    (scheme-hmm-initial-state-distribution hmm)
	;; 			    (scheme-hmm-transition-matrix hmm)
	;; 			    #f;;video-fvvs
	;; 			    (scheme-hmm-states-output-models hmm)
	;; 			    feature-types
	;; 			    feature-lengths
	;; 			    bin-lengths
	;; 			    (scheme-hmm-sigmoid-threshold hmm)
	;; 			    *sigmoid-b* ;; sigmoid b
	;; 			    video-c-fvvs
	;; 			    (vector-ref preallocated-hmm-pointers 0)
	;; 			    (vector-ref preallocated-hmm-pointers 1)
	;; 			    (vector-ref preallocated-hmm-pointers 2)
	;; 			    (vector-ref preallocated-hmm-pointers 3)
	;; 			    (vector-ref preallocated-hmm-pointers 4)
	;; 			    (vector-ref preallocated-hmm-pointers 5)
	;; 			    (vector-ref preallocated-hmm-pointers 6)
	;; 			    (vector-ref preallocated-hmm-pointers 7)
	;; 			    #t)))
	;; 	    positive-videos-c-fvvs))
	;;       (negative-videos-gradients
	;;        (map (lambda (video-c-fvvs)
	;; 	     (y (preallocated-hog-hmm-derivative-c-wrapper
	;; 			    (scheme-hmm-initial-state-distribution hmm)
	;; 			    (scheme-hmm-transition-matrix hmm)
	;; 			    #f;;video-fvvs
	;; 			    (scheme-hmm-states-output-models hmm)
	;; 			    feature-types
	;; 			    feature-lengths
	;; 			    bin-lengths
	;; 			    (scheme-hmm-sigmoid-threshold hmm)
	;; 			    *sigmoid-b* ;; sigmoid b
	;; 			    video-c-fvvs
	;; 			    (vector-ref preallocated-hmm-pointers 0)
	;; 			    (vector-ref preallocated-hmm-pointers 1)
	;; 			    (vector-ref preallocated-hmm-pointers 2)
	;; 			    (vector-ref preallocated-hmm-pointers 3)
	;; 			    (vector-ref preallocated-hmm-pointers 4)
	;; 			    (vector-ref preallocated-hmm-pointers 5)
	;; 			    (vector-ref preallocated-hmm-pointers 6)
	;; 			    (vector-ref preallocated-hmm-pointers 7)
	;; 			    #t)))
	;; 	    negative-videos-c-fvvs)))
	      ;; (k*v
	      ;;  scale-factor
	      ;;  (v-
	      ;;  (reduce v+
	      ;; 	       (map (lambda (gradient weight)
	      ;; 		     (k*v weight gradient))
	      ;; 		    positive-videos-gradients
	      ;; 		    positive-videos-weights)
	      ;; 	       zero-vector)
	      ;;  (reduce v+
	      ;; 	       (map (lambda (gradient weight)
	      ;; 		     (k*v weight gradient))
	      ;; 		    negative-videos-gradients
	      ;; 		    negative-videos-weights)
	      ;; 	       zero-vector)
	;;        ))

	;;    ))
	;;   hmms
	;;   hmms-positive-class-videos-likelihoods
	;;   hmms-negative-class-videos-likelihoods
	;;   classes-videos-c-fvvs
	;;   classes-negative-c-fvvs))
	)
  final-hmms-gradients))

(define (svm-style-cost-gradient-parameters-with-slaves-smooth
	 classes-videos-hmm-classes-likelihoods
	 classes-params
	 states
	 videos-labels
	 slaves-videos
	 feature-types
	 feature-lengths
	 bin-lengths
	 symmetric?
	 restricted?
	 weighted?)
 (let* ((classes (enumerate (length classes-params)))
	(hmms 	(map (lambda (params)
		      (params->scheme-hmm params
					      states
					      restricted?
					      feature-types
					      feature-lengths
					      bin-lengths))
		     classes-params))
	(classes-videos-costs-with-labels
	 (map
	  (lambda (class-videos-hmm-classes-likelihoods class hmm)
	   (map (lambda (video-hmm-classes-likelihoods)
		 (let* ((correct-likelihood (list-ref video-hmm-classes-likelihoods
						      class))
			(incorrect-scores (list-remove (map-indexed
							(lambda (l i)
							 (list l i))
							video-hmm-classes-likelihoods)
						       class))
			(incorrect-likelihood
			 (smooth-max-approx (map first incorrect-scores) *smooth-max-param*))
			(dsmooth-max/dscores
						     (vector->list
						      (dsmooth-max-approx (list->vector (map first incorrect-scores)))))
			(relevant-incorrect-indeces
			 (indeces-of-x-weight .9
					      third
					      second
					      (map (lambda (s d)
						    (list (first s) (second s) d))
						   incorrect-scores
						   dsmooth-max/dscores))))
		  (if (> correct-likelihood (+ incorrect-likelihood *margin-param*))
		      (list 0 (list class p) (list #f #f))
		      (list (- (+ incorrect-likelihood *margin-param*) correct-likelihood)
			    (list class relevant-incorrect-indeces)
			    (list hmm (map (lambda (i) (list-ref hmms i))
					   relevant-incorrect-indeces))
			    (list -1 (map (lambda (i)
					   (list-ref dsmooth-max/dscores
						     (if (> i class)
							 (- i 1)
							 i)))
					  relevant-incorrect-indeces))))))
		class-videos-hmm-classes-likelihoods))
	  classes-videos-hmm-classes-likelihoods
	  classes
	  hmms))
	(foo (dtrace "foo1" ""))
	(videos-costs-with-labels
	 (join classes-videos-costs-with-labels))
	(slaves-videos-costs-with-labels
	 (split-into (length slaves-videos) videos-costs-with-labels))
	(foo (dtrace "foo2" ""))
	(slaves-hmms-and-indeces
	 (map
	  (lambda (slave-videos-costs-with-labels)
	   (join
	    (removeq
	     #f
	     (map-indexed
	      (lambda (video-cost-with-label i)
	       (if (= (first video-cost-with-label) 0)
		   #f
		   (cons (list (first (third video-cost-with-label))
			       i
			       (first (second video-cost-with-label))
			       1
			       (first video-cost-with-label)
			       (first (fourth video-cost-with-label))) ;; -1
			 (map (lambda (hmm nclass dm/ds)
			       (list hmm
				     i
				     nclass
				     -1
				     (first video-cost-with-label)
				     dm/ds))
			      (second (third video-cost-with-label))
			      (second (second video-cost-with-label))
			      (second (fourth video-cost-with-label)))
			 )))
	      slave-videos-costs-with-labels))))
	  slaves-videos-costs-with-labels))
	(foo (dtrace "foo3" ""))
	(slaves-hmms (map (lambda (slave-hmms-and-indeces)
			   (map first slave-hmms-and-indeces))
			  slaves-hmms-and-indeces))
	(slaves-indeces (map (lambda (slave-hmms-and-indeces)
			   (map second slave-hmms-and-indeces))
			  slaves-hmms-and-indeces))
	(slaves-classes (map (lambda (slave-hmms-and-indeces)
			   (map third slave-hmms-and-indeces))
			  slaves-hmms-and-indeces))
	(slaves-signs (map (lambda (slave-hmms-and-indeces)
			   (map fourth slave-hmms-and-indeces))
			  slaves-hmms-and-indeces))
	(slaves-costs (map (lambda (slave-hmms-and-indeces)
			   (map fifth slave-hmms-and-indeces))
			  slaves-hmms-and-indeces))
	(slaves-dm/ds (map (lambda (slave-hmms-and-indeces)
			   (map sixth slave-hmms-and-indeces))
			  slaves-hmms-and-indeces))
	(foo (dtrace "foo4" ""))
	(slaves-gradients (compute-specific-videos-gradients-with-slaves hmms slaves-hmms slaves-indeces))
	(foo (dtrace "got the gradients" ""))
	(slaves-labeled-gradients
	 (join
	  (map (lambda (slave-gradients slave-classes slave-signs slave-costs slave-dm/ds)
	       (map (lambda (gradient class sign cost dm/ds)
		     (list gradient class sign cost dm/ds))
		    slave-gradients
		    slave-classes
		    slave-signs
		    slave-costs
		    slave-dm/ds))
	      slaves-gradients
	      slaves-classes
	      slaves-signs
	      slaves-costs
	      slaves-dm/ds)))
	(zero-vector (map-n-vector (lambda (i) 0)
				   (vector-length (first (first slaves-labeled-gradients)))))
	(labeled-zero-gradients (map-n
				 (lambda (i)
				  (list zero-vector i 1 0 0))
				 (length classes-params)))
	(hmms-labeled-gradients
	 (sort (transitive-equivalence-classesp
		(lambda (a b) (equal? (second a) (second b)))
		(append slaves-labeled-gradients
			labeled-zero-gradients))
	       < (lambda (e) (second (first e)))))
	(hmms-gradients (map (lambda (hmm-videos-gradients)
			      (reduce v+
				      (map (lambda (hmm-video-gradient)
					    (k*v (* -2 ;; the negative is so that when we take a step the cost will decrease, not increase
						    (fourth hmm-video-gradient)
						    (fifth hmm-video-gradient))
						 (first hmm-video-gradient)))
					   hmm-videos-gradients)
				      zero-vector))
			     hmms-labeled-gradients)))
  hmms-gradients))

(define *svm-style?* #t)

(define (cost-params classes-params
		     preallocated-hmm-pointers
		     classes-videos-fvvs
		     classes-videos-c-fvvs
		     states
		     feature-types
		     feature-lengths
		     bin-lengths
		     symmetric?
		     restricted?)
 (cond ((equal? *svm-style?* #t)
	(svm-style-cost-params-c-smooth classes-params
					preallocated-hmm-pointers
					classes-videos-fvvs
					classes-videos-c-fvvs
					states
					feature-types
					feature-lengths
					bin-lengths
					symmetric?
					restricted?))
       (else
	(mle-cost-params-c classes-params
					preallocated-hmm-pointers
					classes-videos-fvvs
					classes-videos-c-fvvs
					states
					feature-types
					feature-lengths
					bin-lengths
					symmetric?
					restricted?))))
(define *cost-function-modes*
 (list 'mle
       'svm-style
       'detector-style
       'svm+detector))

(define *cost-function-style* 'svm-style)

(define (cost-params-with-negatives
	 classes-params
	 preallocated-hmm-pointers
	 preallocated-flattened-c-pointers
	 classes-videos-fvvs
	 classes-videos-c-fvvs
	 classes-negative-c-fvvs
	 states
	 feature-types
	 feature-lengths
	 bin-lengths
	 symmetric?
	 restricted?)
 (case *cost-function-style*
  ((threaded-svm-style)
   (dtrace "computing svm cost with threads" "")
   (append (svm-style-cost-params-threaded-c-smooth classes-params
						    preallocated-hmm-pointers
						    preallocated-flattened-c-pointers
						    classes-videos-fvvs
						    classes-videos-c-fvvs
						    states
						    feature-types
						    feature-lengths
						    bin-lengths
						    symmetric?
						    restricted?)
	   (list (list #f #f))))
  ((threaded-detector-style)
   (detector-cost-params-threaded-c-smooth
	 classes-params
	 preallocated-hmm-pointers
	 preallocated-flattened-c-pointers
	 classes-videos-fvvs
	 classes-videos-c-fvvs
	 classes-negative-c-fvvs
	 states
	 feature-types
	 feature-lengths
	 bin-lengths
	 symmetric?
	 restricted?))
  ((threaded-svm+detector)
    (let ((svm-style-cost
	   (svm-style-cost-params-threaded-c-smooth
	    classes-params
	    preallocated-hmm-pointers
	    preallocated-flattened-c-pointers
	    classes-videos-fvvs
	    classes-videos-c-fvvs
	    states
	    feature-types
	    feature-lengths
	    bin-lengths
	    symmetric?
	    restricted?))
	  (detector-style-cost
	   (detector-cost-params-threaded-c-smooth
	    classes-params
	    preallocated-hmm-pointers
	    preallocated-flattened-c-pointers
	    classes-videos-fvvs
	    classes-videos-c-fvvs
	    classes-negative-c-fvvs
	    states
	    feature-types
	    feature-lengths
	    bin-lengths
	    symmetric?
	    restricted?)))
     (list (+ (dtrace "svm-component of cost:" (first svm-style-cost))
	     (dtrace "detector-component of cost:" (first detector-style-cost)))
	  (second svm-style-cost) ;; all the scores needed to compute classification acc
	  (third detector-style-cost) ;; all the scores needed to compute detection acc
	  )))
  ((svm-style)
   (dtrace "computing svm cost" "")
   (append (svm-style-cost-params-c-smooth classes-params
				   preallocated-hmm-pointers
				   classes-videos-fvvs
				   classes-videos-c-fvvs
				   states
				   feature-types
				   feature-lengths
				   bin-lengths
				   symmetric?
				   restricted?)
	   (list (list #f #f))))
  ((mle)
   (dtrace "computing mle cost" "")
   (append (mle-cost-params-c classes-params
			      preallocated-hmm-pointers
			      classes-videos-fvvs
			      classes-videos-c-fvvs
		      states
		      feature-types
		      feature-lengths
		      bin-lengths
		      symmetric?
		      restricted?)
	   (list (list #f #f))))
   ((detector-style)
    (dtrace "computing detector cost" "")
   (detector-cost-params-c-smooth
	 classes-params
	 preallocated-hmm-pointers
	 classes-videos-fvvs
	 classes-videos-c-fvvs
	 classes-negative-c-fvvs
	 states
	 feature-types
	 feature-lengths
	 bin-lengths
	 symmetric?
	 restricted?))
  ((svm+detector)
   (dtrace "computing svm+detector cost" "")
   (let* ((svm-style-cost
	   (svm-style-cost-params-c-smooth classes-params
				   preallocated-hmm-pointers
				   classes-videos-fvvs
				   classes-videos-c-fvvs
				   states
				   feature-types
				   feature-lengths
				   bin-lengths
				   symmetric?
				   restricted?))
	  (detector-style-cost
	   (detector-cost-params-c-smooth
	    classes-params
	    preallocated-hmm-pointers
	    classes-videos-fvvs
	    classes-videos-c-fvvs
	    classes-negative-c-fvvs
	    states
	    feature-types
	    feature-lengths
	    bin-lengths
	    symmetric?
	    restricted?)))
    (list (+ (dtrace "svm-component of cost:" (first svm-style-cost))
	     (dtrace "detector-component of cost:" (first detector-style-cost)))
	  (second svm-style-cost) ;; all the scores needed to compute classification acc
	  (third detector-style-cost) ;; all the scores needed to compute detection acc
	  )))))

(define (gradient-params likelihoods
			 classes-videos-fvvs
			 classes-videos-c-fvvs
			 preallocated-hmm-pointers
			 classes-params
			 states
			 feature-types
			 feature-lengths
			 bin-lengths
			 symmetric?
			 restricted?)
 (cond ((equal? *svm-style?* #t)
	(svm-style-cost-gradient-parameters-c-smooth likelihoods
						     classes-videos-fvvs
						     classes-videos-c-fvvs
						     preallocated-hmm-pointers
						     classes-params
						     states
						     feature-types
						     feature-lengths
						     bin-lengths
						     symmetric?
						     restricted?))
       (else
	(mle-cost-gradient-parameters-c likelihoods
					classes-videos-fvvs
					classes-videos-c-fvvs
					preallocated-hmm-pointers
					classes-params
					states
					feature-types
					feature-lengths
					bin-lengths
					symmetric?
					restricted?))))

(define (gradient-params-with-negatives likelihoods
					positive-likelihoods
					negative-likelihoods
					classes-videos-fvvs
					classes-videos-c-fvvs
					classes-negative-c-fvvs
					preallocated-hmm-pointers
					preallocated-flattened-c-pointers
					classes-params
					states
					feature-types
					feature-lengths
					bin-lengths
					symmetric?
					restricted?)
 (case *cost-function-style*
  ((threaded-svm-style)
   (svm-style-cost-gradient-parameters-threaded-c-smooth likelihoods
						classes-videos-fvvs
						classes-videos-c-fvvs
						preallocated-hmm-pointers
						preallocated-flattened-c-pointers
						classes-params
						states
						feature-types
						feature-lengths
						bin-lengths
						symmetric?
						restricted?))
  ((threaded-detector-style)
   (detector-cost-gradient-parameters-threaded-c-smooth positive-likelihoods
					       negative-likelihoods
						classes-videos-fvvs
						classes-videos-c-fvvs
						classes-negative-c-fvvs
						preallocated-hmm-pointers
						preallocated-flattened-c-pointers
						classes-params
						states
						feature-types
						feature-lengths
						bin-lengths
						symmetric?
						restricted?))
  ((threaded-svm+detector)
   (let ((svm-gradient (svm-style-cost-gradient-parameters-threaded-c-smooth likelihoods
						classes-videos-fvvs
						classes-videos-c-fvvs
						preallocated-hmm-pointers
						preallocated-flattened-c-pointers
						classes-params
						states
						feature-types
						feature-lengths
						bin-lengths
						symmetric?
						restricted?))
	 (detector-gradient (detector-cost-gradient-parameters-threaded-c-smooth positive-likelihoods
					       negative-likelihoods
						classes-videos-fvvs
						classes-videos-c-fvvs
						classes-negative-c-fvvs
						preallocated-hmm-pointers
						preallocated-flattened-c-pointers
						classes-params
						states
						feature-types
						feature-lengths
						bin-lengths
						symmetric?
						restricted?)))
    (map v+ svm-gradient detector-gradient)))
  ((svm-style)
   (dtrace "computing svm gradient" "")
   (svm-style-cost-gradient-parameters-c-smooth likelihoods
						classes-videos-fvvs
						classes-videos-c-fvvs
						preallocated-hmm-pointers
						classes-params
						states
						feature-types
						feature-lengths
						bin-lengths
						symmetric?
						restricted?))
  ((mle)
   (dtrace "computing mle gradient" "")
   (mle-cost-gradient-parameters-c likelihoods
				   classes-videos-fvvs
				   classes-videos-c-fvvs
				   preallocated-hmm-pointers
				   classes-params
				   states
				   feature-types
				   feature-lengths
				   bin-lengths
				   symmetric?
				   restricted?))
  ((detector-style)
   (dtrace "computing detector gradient" "")
   (detector-cost-gradient-parameters-c-smooth positive-likelihoods
					       negative-likelihoods
						classes-videos-fvvs
						classes-videos-c-fvvs
						classes-negative-c-fvvs
						preallocated-hmm-pointers
						classes-params
						states
						feature-types
						feature-lengths
						bin-lengths
						symmetric?
						restricted?))
  ((svm+detector)
   (dtrace "computing svm+detector gradient" "")
   (let* ((svm-gradient
	   (svm-style-cost-gradient-parameters-c-smooth likelihoods
						classes-videos-fvvs
						classes-videos-c-fvvs
						preallocated-hmm-pointers
						classes-params
						states
						feature-types
						feature-lengths
						bin-lengths
						symmetric?
						restricted?))
	  (detector-gradient
	   (detector-cost-gradient-parameters-c-smooth positive-likelihoods
						       negative-likelihoods
						classes-videos-fvvs
						classes-videos-c-fvvs
						classes-negative-c-fvvs
						preallocated-hmm-pointers
						classes-params
						states
						feature-types
						feature-lengths
						bin-lengths
						symmetric?
						restricted?)))
    (map v+ svm-gradient detector-gradient)))))

(define (multiclass-svm-style-hog-hmm-gradient-descent-with-slaves-smooth states
								   classes
								   video-labels
								   slaves-videos
								   iterations
								   outpath
								   feature-types
								   feature-lengths
								   bin-lengths
								   symmetric?
								   restricted?
								   weighted?
								   step-factor
								   starting-iteration
								   starting-classes-hmms)
 (let* ((model-types (map-vector model-type feature-types))
	(classes-initial-state-distributions
	 (if starting-classes-hmms
	     (map scheme-hmm-initial-state-distribution starting-classes-hmms)
	     (map (lambda (class)
		   (vector-append (vector 1)
				  (map-n-vector
				   (lambda (i) 1e-100)
				   (- states 1))))
		  classes)))
	(classes-transition-matrices
	 (if starting-classes-hmms
	     (map scheme-hmm-transition-matrix starting-classes-hmms)
	     (map (lambda (class)
		   (map-n-vector
		    (lambda (from-state)
		     (map-n-vector
		      (lambda (to-state)
		       (cond
			((equal? from-state to-state)
			 .97)
			((equal? (+ from-state 1)
				 to-state)
			 .03)
			(else 1e-100)))
		      states))
		    states))
		  classes)))
	(classes-states-output-models
	 (if starting-classes-hmms
	     (map scheme-hmm-states-output-models starting-classes-hmms)
	     (map (lambda (class)
		   (normalize-states-output-models
		    (map-n-vector (lambda (i)
				   (random-output-parameter-matrix model-types feature-lengths bin-lengths))
				 states)
		    model-types))
		  classes)))
	(classes-params
	 (map (lambda (initial-state-distribution
		       transition-matrix
		       states-hog-models)
	       (hmm-vectors->params initial-state-distribution
				     transition-matrix
				     states-hog-models
				     *sigmoid-a*
				     *sigmoid-b*))
	      classes-initial-state-distributions
	      classes-transition-matrices
	      classes-states-output-models))
	(state-output-model-length
	 (reduce-vector +
		 (compute-state-output-models-lengths model-types feature-lengths bin-lengths)
		 0))
	(output-mask (vector-append
		   (map-n-vector
		    (lambda (i)
		     0)
		    (* states (+ states 1)))
		   (map-n-vector
		    (lambda (i)
		     1)
		    (* states state-output-model-length))
		   (vector 0 0)
		   ))
	(states-mask (vector-append
		      (map-n-vector
		       (lambda (i)
			1)
		       (* states (+ states 1)))
		      (map-n-vector
		       (lambda (i)
			0)
		       (* states state-output-model-length))
		      (vector 0 0)
		      )))
(let loop ((hog-step-factor step-factor)
	     (states-step-factor step-factor)
	     (mode 'hog-mode)
	     (classes-params classes-params)
	     (i (if starting-iteration
		    starting-iteration
		    0))
	     (prev-classes-initial-state-distributions classes-initial-state-distributions)
	     (prev-classes-transition-matrices classes-transition-matrices)
	     (prev-classes-states-output-models classes-states-output-models)
	     (prev-classes-sigmoid-threshold (map (lambda (class) *sigmoid-a*) classes))
	     (prev-objective (svm-style-cost-params-with-slaves-smooth classes-params
								       video-labels
								       states
								       feature-types
								       feature-lengths
								       bin-lengths
								       symmetric?
								       restricted?
								       weighted?)))
 (write-object-to-file (list mode hog-step-factor states-step-factor i) "/tmp/step-factor2.sc")
   (write-object-to-file
    (map (lambda (prev-initial-state-distribution
		  prev-transition-matrix
		  prev-states-hog-models
		  prev-sigmoid-threshold)
	  (make-scheme-hmm prev-initial-state-distribution
			   prev-transition-matrix
			   prev-states-hog-models
			   prev-sigmoid-threshold
			   feature-types
			   feature-lengths
			   bin-lengths
			   prev-objective
			   #f))
	 prev-classes-initial-state-distributions
	 prev-classes-transition-matrices
	 prev-classes-states-output-models
	 prev-classes-sigmoid-threshold)
    (if restricted?
	(format #f "~a-~a-restricted.sc" outpath i)
	(format #f "~a-~a.sc" outpath i)))
   (dtrace "prev-objective-function:" (first prev-objective))
   (if (> i iterations)
       classes-params
       (let* ((gs (svm-style-cost-gradient-parameters-with-slaves-smooth (second prev-objective)
								  classes-params
								  states
								  video-labels
								  slaves-videos
								  feature-types
								  feature-lengths
								  bin-lengths
								  symmetric?
								  restricted?
								  weighted?)))
	(write-object-to-file (map magnitude gs) "/tmp/gradient-magnitudes2.sc")
	(write-object-to-file gs "/tmp/gradients.sc")
	(let loop2 ((step-factor (case mode
				  ((hog-mode)
				   hog-step-factor)
				  ((states-mode)
				   states-step-factor)))
		    (inner-i 0))
	 (dtrace "inner i" inner-i)
	 (let* ((new-classes-params
		 (map (lambda (g params)
		       (dtrace "gradient magnitude:" (magnitude g))
		       (case mode
			((hog-mode)
			 (v+ params (k*v step-factor (map-vector (lambda (x y)
								      (* x y))
								     output-mask g))))
			((states-mode)
			 (v+ params (k*v step-factor (map-vector (lambda (x y)
								      (* x y))
								     states-mask g))))))
		      gs classes-params))
		(new-classes-initial-state-distributions
		 (map (lambda (new-params)
		       (normalize
			(vector-clip
			 (params->initial-state-distribution new-params states restricted?))))
		      new-classes-params))
		(new-classes-transition-matrices
		 (map (lambda (new-params)
		       (map-vector
			(lambda (row)
			 (normalize (vector-clip row)))
			(params->transition-matrix new-params states restricted?)))
		      new-classes-params))
		(new-classes-states-output-models
		 (map (lambda (new-params)
		       (normalize-states-output-models
			(params->states-output-models new-params states model-types feature-lengths bin-lengths)
			model-types))
		      new-classes-params))
		(new-classes-sigmoid-threshold
		 (map (lambda (new-params)
		       (params->sigmoid-threshold
			new-params states model-types feature-lengths bin-lengths))
		      new-classes-params))
		(normalized-new-classes-params
		 (map (lambda (new-initial-state-distribution
			       new-transition-matrix
			       new-states-hog-models
			       new-sigmoid-threshold)
		       (hmm-vectors->params new-initial-state-distribution
					    new-transition-matrix
					    new-states-hog-models
					    new-sigmoid-threshold
					    *sigmoid-b*))
		      new-classes-initial-state-distributions
		      new-classes-transition-matrices
		      new-classes-states-output-models
		      new-classes-sigmoid-threshold))
	       (new-objective
				      (svm-style-cost-params-with-slaves-smooth normalized-new-classes-params
										video-labels
										states
										feature-types
										feature-lengths
										bin-lengths
										symmetric?
										restricted?
										weighted?)))
	  (cond ((and (< hog-step-factor 1e-18)
		      (< states-step-factor 1e-18)
		      (> (first new-objective) (first prev-objective)))
		 (loop hog-step-factor
		       states-step-factor
		       mode
		       classes-params
		       (+ i 100000)
		       prev-classes-initial-state-distributions
		       prev-classes-transition-matrices
		       prev-classes-states-output-models
		       prev-classes-sigmoid-threshold
		       prev-objective))
		((and (< inner-i 1)
		      (> (first new-objective) (first prev-objective)))
		 (loop2 (/ step-factor 2)
			(+ inner-i 1)))
		((equal? mode 'hog-mode)
		 (if (< (first new-objective) (first prev-objective))
		 (loop (* step-factor 1.5)
		       states-step-factor
		       'hog-mode
		       normalized-new-classes-params
		       (+ i 1)
		       new-classes-initial-state-distributions
		       new-classes-transition-matrices
		       new-classes-states-output-models
		       new-classes-sigmoid-threshold
		       new-objective)
		 (loop (/ step-factor 2)
		       states-step-factor
		       'states-mode
		       classes-params
		       (+ i 1)
		       prev-classes-initial-state-distributions
		       prev-classes-transition-matrices
		       prev-classes-states-output-models
		       prev-classes-sigmoid-threshold
		       prev-objective)))
		((equal? mode 'states-mode)
		 (if (< (first new-objective) (first prev-objective))
		 (loop hog-step-factor
		       (* step-factor 1.5)
		       'states-mode
		       normalized-new-classes-params
		       (+ i 1)
		       new-classes-initial-state-distributions
		       new-classes-transition-matrices
		       new-classes-states-output-models
		       new-classes-sigmoid-threshold
		       new-objective)
		 (loop hog-step-factor
		       (/ step-factor 2)
		       'hog-mode
		       classes-params
		       (+ i 1)
		       prev-classes-initial-state-distributions
		       prev-classes-transition-matrices
		       prev-classes-states-output-models
		       prev-classes-sigmoid-threshold
		       prev-objective)))
		(else
		 (panic (format #f "unknown step mode: ~a" mode))
		 '()))
	  )))))
))

(define (gt-discrete-distribution-update distribution gradient d)
 (normalize (map-vector (lambda (x g) (* x (+ g d))) distribution gradient)))

(define (my-gt-discrete-distribution-update distribution gradient step-factor)
 (let* ((scaled-gradient (k*v step-factor gradient))
	(smallest (minimum-vector scaled-gradient))
	(d (if (< smallest 0) (- .1 smallest) .1)))
 (vector-clip (gt-discrete-distribution-update  distribution scaled-gradient d))))

(define (restrict-row row r)
 (normalize
  (map-indexed-vector
   (lambda (e i)
    (if (or (= i r)
	    (= (- i 1) r))
	e
	1e-300))
   row)))


(define *preallocated-hmm-pointers* #f)

(define (multiclass-svm-style-hog-hmm-gradient-descent-c-smooth states
								classes
								classes-videos-fvvs
								classes-videos-c-fvvs
								iterations
								outpath
								feature-types
								feature-lengths
								bin-lengths
								symmetric?
								restricted?
								step-factor
								starting-iteration
								starting-classes-hmms)
 (dtrace "made it into the gradient descent function" '())

 (let* ((model-types (map-vector model-type feature-types))
	(classes-initial-state-distributions
	 (if starting-classes-hmms
	     (map scheme-hmm-initial-state-distribution starting-classes-hmms)
	     (map (lambda (class)
		   (normalize (vector-append (vector 1)
					     (map-n-vector
					      (lambda (i) 1e-100)
					      (- states 1)))))
		  classes)))
	(classes-transition-matrices
	 (if starting-classes-hmms
	     (map scheme-hmm-transition-matrix starting-classes-hmms)
	     (map (lambda (class)
		   (map-n-vector
		    (lambda (from-state)
		     (normalize
		      (map-n-vector
		       (lambda (to-state)
			(cond
			 ((equal? from-state to-state)
			  .94)
			 ((equal? (+ from-state 1)
				  to-state)
			  .05)
			 ((< to-state from-state)
			  .01)
			 (else 1e-100)))
		       states)))
		    states))
		  classes)))
	(classes-states-output-models
	 (if starting-classes-hmms
	     (map scheme-hmm-states-output-models starting-classes-hmms)
	     (map (lambda (class)
		   (normalize-states-output-models
		    (map-n-vector (lambda (i)
				   (random-output-parameter-matrix
				    model-types feature-lengths bin-lengths))
				  states)
		    model-types))
		  classes)))
	(foo (dtrace "map vector length states-output-models:" (map-vector vector-length (first classes-states-output-models))))
	(classes-params
	 (map (lambda (initial-state-distribution
		       transition-matrix
		       states-output-models)
	       (hmm-vectors->params initial-state-distribution
				    transition-matrix
				    states-output-models
				    *sigmoid-a*
				    *sigmoid-b*))
	      classes-initial-state-distributions
	      classes-transition-matrices
	      classes-states-output-models))
	(state-output-model-length
	 (reduce-vector +
			(compute-state-output-models-lengths model-types feature-lengths bin-lengths)
			0))
	(output-mask (vector-append
		      (map-n-vector
		       (lambda (i)
			0)
		       (* states (+ states 1)))
		      (map-n-vector
		       (lambda (i)
			1)
		       (* states state-output-model-length))
		      (vector 0 0)
		      ))
	(states-mask (vector-append
		      (map-n-vector
		       (lambda (i)
			1)
		       (* states (+ states 1)))
		      (map-n-vector
		       (lambda (i)
			0)
		       (* states state-output-model-length))
		      (vector 0 0)
		      ))
	(preallocated-hmm-pointers
	 (preallocate-c-hmm-arrays states
				   (vector-length feature-lengths)
				   (first classes-states-output-models)
				   (vector-length (first classes-params)))))
  (dtrace "first obj:"(first (cost-params;;(svm-style-cost-params-c-smooth
			      classes-params
			      preallocated-hmm-pointers
			      classes-videos-fvvs
			      classes-videos-c-fvvs
			      states
			      feature-types
			      feature-lengths
			      bin-lengths
			      symmetric?
			      restricted?
			      )))
 ;; (panic "arbitrary panic")
  (let loop ((hog-step-factor step-factor)
	     (states-step-factor step-factor)
	     (mode 'hog-mode)
	     (classes-params classes-params)
	     (i (if starting-iteration
		    starting-iteration
		    0))
	     (prev-classes-initial-state-distributions classes-initial-state-distributions)
	     (prev-classes-transition-matrices classes-transition-matrices)
	     (prev-classes-states-output-models classes-states-output-models)
	     (prev-classes-sigmoid-threshold (map (lambda (class) *sigmoid-a*) classes))
	     (prev-objective (cost-params;;(svm-style-cost-params-c-smooth
			      classes-params
			      preallocated-hmm-pointers
			      classes-videos-fvvs
			      classes-videos-c-fvvs
			      states
			      feature-types
			      feature-lengths
			      bin-lengths
			      symmetric?
			      restricted?
			      )))
   (write-object-to-file (list mode hog-step-factor states-step-factor i) "/tmp/step-factor2.sc")
   (write-object-to-file
    (map (lambda (prev-initial-state-distribution
		  prev-transition-matrix
		  prev-states-hog-models
		  prev-sigmoid-threshold)
	  (make-scheme-hmm prev-initial-state-distribution
			   prev-transition-matrix
			   prev-states-hog-models
			   prev-sigmoid-threshold
			   feature-types
			   feature-lengths
			   bin-lengths
			   prev-objective
			   #f))
	 prev-classes-initial-state-distributions
	 prev-classes-transition-matrices
	 prev-classes-states-output-models
	 prev-classes-sigmoid-threshold)
    (if restricted?
	(format #f "~a-~a-restricted.sc" outpath (modulo i 10))
	(format #f "~a-~a.sc" outpath (modulo i 10))))
   (dtrace "iteration:" i)
   (dtrace "prev-objective-function:" (first prev-objective))
   (when *svm-style?* (dtrace "prev-training accuracy:" (/ (length (removeq #f (join (map-indexed (lambda (cvl c) (map (lambda (vl) (equal? (maximum vl) (list-ref vl c))) cvl)) (second prev-objective))))) (length (join (second prev-objective))))))
   (if (> i iterations)
       classes-params
       (let* ((foo (dtrace "computing gradients..." ""))
	      (gs (gradient-params;;(svm-style-cost-gradient-parameters-c-smooth
		   (second prev-objective)
		   classes-videos-fvvs
		   classes-videos-c-fvvs
		   preallocated-hmm-pointers
		   classes-params
		   states
		   feature-types
		   feature-lengths
		   bin-lengths
		   symmetric?
		   restricted?))
	      (l-and-gs (when #f (svm-style-cost-params-full-AD
			 classes-params
			 preallocated-hmm-pointers ;; unused, but ill keep it to keep the args the same
			 classes-videos-fvvs
			 classes-videos-c-fvvs
			 states
			 feature-types
			 feature-lengths
			 bin-lengths
			 symmetric?
			 restricted?)))
	      (foo (dtrace "done computing gradients..." ""))
	     ;; (foo (panic "intentional panic"))
	      (classes-initial-state-distribution-gradients
	       (map
		(lambda (params-gradient)
		 (params->initial-state-distribution params-gradient
						     states
						     restricted?))
		gs))
	      (classes-transition-matrix-gradients
	       (map
		(lambda (params-gradient)
		 (params->transition-matrix params-gradient
					    states
					    restricted?))
		gs))
	      (classes-states-output-models-gradients
	       (map
		(lambda (params-gradient)
		 (params->states-output-models params-gradient
					       states
					       model-types
					       feature-lengths
					       bin-lengths))
		gs))
	      (foo (dtrace "writing some crap to files..." "")))
	(write-object-to-file (map magnitude gs) "/tmp/gradient-magnitudes2.sc")
	(write-object-to-file gs "/tmp/gradients.sc")
	(let loop2 ((step-factor (case mode
				  ((hog-mode)
				   hog-step-factor)
				  ((states-mode)
				   states-step-factor)))
		    (inner-i 0))
	 (dtrace "inner i" inner-i)
	 (let* ((foo (dtrace "updating+normalizing parameters" ""))
		(new-classes-params
		 (map (lambda (g params)
		       (dtrace "gradient magnitude:" (magnitude g))
		       (case mode
			((hog-mode)
			 (v+ params (k*v step-factor (map-vector (lambda (x y)
								  (* x y))
								 output-mask g))))
			((states-mode)
			 (v+ params (k*v step-factor (map-vector (lambda (x y)
								  (* x y))
								 states-mask g))))))
		      gs classes-params))
		(new-classes-initial-state-distributions
		 (map (lambda (params initial-state-distribution-gradient)
		       (let* ((initial-state-distribution
			       (params->initial-state-distribution params states restricted?))
			      (updated (my-gt-discrete-distribution-update
					initial-state-distribution
					initial-state-distribution-gradient
					step-factor))
			      ;; (scaled (k*v step-factor initial-state-distribution-gradient))
			      ;; (smallest (minimum-vector scaled))
			      ;; (d (if (< smallest 0)
			      ;; 	     (- .1 smallest)
			      ;; 	     .1))
			      ;; (modified2
			      ;;  (vector-clip
			      ;; 	(normalize
			      ;; 	 (map-vector * initial-state-distribution
			      ;; 		     (v+ scaled
			      ;; 			 (make-vector
			      ;; 			  (vector-length initial-state-distribution) d))))))
			      ;; (updated (vector-clip
			      ;; 		(gt-discrete-distribution-update
			      ;; 		 initial-state-distribution
			      ;; 		 initial-state-distribution-gradient
			      ;; 		 d)))
			      )
			(if restricted?
			    (list->vector
			     (cons 1 (map-n (lambda (i) 1e-300) (- (vector-length initial-state-distribution) 1))))
			    (if (equal? mode 'states-mode)
			    ;; (begin
			    ;;  (dtrace "modified/updated:" (map-vector (lambda (a b) (if (= a b) 1 (/ a b))) modified2 updated))
			    ;;  updated)
			    updated
			    initial-state-distribution))))
		      classes-params
		      classes-initial-state-distribution-gradients))
		(new-classes-transition-matrices
		 (map (lambda (params transition-matrix-gradient)
		       (let* ((transition-matrix
			       (params->transition-matrix params states restricted?)))
			(map-vector
			 (lambda (row-params row-gradient r)
			  (let*
			    ((updated-row (my-gt-discrete-distribution-update
					row-params
					row-gradient
					step-factor))
			     (updated-row2 (if restricted?
					       (restrict-row updated-row r)
					       updated-row))
			     ;; (scaled (k*v step-factor row-gradient))
			     ;; (smallest (minimum-vector scaled))
			     ;; (d (if (< smallest 0)
			     ;; 	    (- .1 smallest)
			     ;; 	    .1))
			     ;; (modified2 (map-vector * row-params
			     ;; 			    (v+ scaled
			     ;; 				(make-vector (vector-length row-params) d))))
			     )
			   (if (equal? mode 'states-mode)
			       ;; (vector-clip
			       ;; 	(normalize
			       ;; 	 modified2))
			       (normalize updated-row2)
			       row-params)))
			 transition-matrix transition-matrix-gradient (list->vector (enumerate (vector-length transition-matrix))))))
		      classes-params
		      classes-transition-matrix-gradients))
		;; (new-classes-states-output-models
		;;  (map (lambda (new-params)
		;;        (normalize-states-output-models
		;; 	(params->states-output-models new-params states model-types feature-lengths bin-lengths)
		;; 	model-types))
		;;       new-classes-params))
		(new-classes-states-output-models
		 (map (lambda (class-params class-states-output-models-gradients)
		       (let ((states-output-models (params->states-output-models class-params
										 states
										 model-types
										 feature-lengths
										 bin-lengths)))
			(if (equal? mode 'hog-mode)
			    (normalize-states-output-models
			 (map-vector
			  (lambda (state-output-models state-output-models-gradients)
			   (map-vector
			    (lambda (output-model gradient model-type)
			     (cond
			      ((equal? model-type 'dot)
			       (v+ output-model (k*v step-factor gradient)))
			      ((equal? model-type 'discrete)
			       (my-gt-discrete-distribution-update output-model
								   gradient
								   step-factor))
			      (else
			       (panic (format #f "model type ~a not yet supported" model-type)))))
			    state-output-models state-output-models-gradients model-types))
			  states-output-models class-states-output-models-gradients)
			 model-types)
			    states-output-models)))
		      classes-params classes-states-output-models-gradients))
		(foo (dtrace "map vector length states-output-models:" (map-vector vector-length (first new-classes-states-output-models))))
		(new-classes-sigmoid-threshold
		 (map (lambda (new-params)
		       (params->sigmoid-threshold
			new-params states model-types feature-lengths bin-lengths))
		      new-classes-params))
		(normalized-new-classes-params
		 (map (lambda (new-initial-state-distribution
			       new-transition-matrix
			       new-states-hog-models
			       new-sigmoid-threshold)
		       (hmm-vectors->params new-initial-state-distribution
					    new-transition-matrix
					    new-states-hog-models
					    new-sigmoid-threshold
					    *sigmoid-b*))
		      new-classes-initial-state-distributions
		      new-classes-transition-matrices
		      new-classes-states-output-models
		      new-classes-sigmoid-threshold))
		(foo (dtrace "computing new objective..." ""))
		(new-objective (dtrace "new objective:"
				       (cost-params;;(svm-style-cost-params-c-smooth
					normalized-new-classes-params
					preallocated-hmm-pointers
					classes-videos-fvvs
					classes-videos-c-fvvs
					states
					feature-types
					feature-lengths
					bin-lengths
					symmetric?
					restricted?))))
	  (cond ((or (and (< hog-step-factor 1e-10)
		      (< states-step-factor 1e-10)
		      (> (first new-objective) (first prev-objective)))
		     (and (< hog-step-factor 1e-10)
		      (< states-step-factor 1e-10)
		      (> (first new-objective) (- (first prev-objective) 1e-8))))
		 (loop hog-step-factor
		       states-step-factor
		       mode
		       classes-params
		       (+ i 100000)
		       prev-classes-initial-state-distributions
		       prev-classes-transition-matrices
		       prev-classes-states-output-models
		       prev-classes-sigmoid-threshold
		       prev-objective))
		((and (< inner-i 1)
		      (> (first new-objective) (first prev-objective)))
		 (loop2 (/ step-factor 2)
			(+ inner-i 1)))
		((equal? mode 'hog-mode)
		 (if (< (first new-objective) (first prev-objective))
		     (loop (* step-factor 1.5)
			   states-step-factor
			   'hog-mode
			   normalized-new-classes-params
			   (+ i 1)
			   new-classes-initial-state-distributions
			   new-classes-transition-matrices
			   new-classes-states-output-models
			   new-classes-sigmoid-threshold
			   new-objective)
		     (loop (/ step-factor 2)
			   states-step-factor
			   'states-mode
			   classes-params
			   (+ i 1)
			   prev-classes-initial-state-distributions
			   prev-classes-transition-matrices
			   prev-classes-states-output-models
			   prev-classes-sigmoid-threshold
			   prev-objective)))
		((equal? mode 'states-mode)
		 (if (< (first new-objective) (first prev-objective))
		     (loop hog-step-factor
			   (* step-factor 1.5)
			   'states-mode
			   normalized-new-classes-params
			   (+ i 1)
			   new-classes-initial-state-distributions
			   new-classes-transition-matrices
			   new-classes-states-output-models
			   new-classes-sigmoid-threshold
			   new-objective)
		     (loop hog-step-factor
			   (/ step-factor 2)
			   'hog-mode
			   classes-params
			   (+ i 1)
			   prev-classes-initial-state-distributions
			   prev-classes-transition-matrices
			   prev-classes-states-output-models
			   prev-classes-sigmoid-threshold
			   prev-objective)))
		(else
		 (panic "")
		 '())))))))))

(define (multiclass-svm-detector-style-hog-hmm-gradient-descent-c-smooth states
								classes
								classes-videos-fvvs
								classes-videos-c-fvvs
								classes-negative-c-fvvs
								iterations
								outpath
								feature-types
								feature-lengths
								bin-lengths
								discrete-min-max
								symmetric?
								restricted?
								step-factor
								starting-iteration
								starting-classes-hmms)
 (dtrace "made it into the gradient descent function" '())

 (let* ((model-types (map-vector model-type feature-types))
	(classes-initial-state-distributions
	 (if starting-classes-hmms
	     (map scheme-hmm-initial-state-distribution starting-classes-hmms)
	     (map (lambda (class)
		   (normalize (vector-append (vector 1)
					     (map-n-vector
					      (lambda (i) 1e-100)
					      (- states 1)))))
		  classes)))
	(classes-transition-matrices
	 (if starting-classes-hmms
	     (map scheme-hmm-transition-matrix starting-classes-hmms)
	     (map (lambda (class)
		   (map-n-vector
		    (lambda (from-state)
		     (normalize
		      (map-n-vector
		       (lambda (to-state)
			(cond
			 ((equal? from-state to-state)
			  .94)
			 ((equal? (+ from-state 1)
				  to-state)
			  .05)
			 ((< to-state from-state)
			  .01)
			 (else 1e-100)))
		       states)))
		    states))
		  classes)))
	(classes-states-output-models
	 (if starting-classes-hmms
	     (map scheme-hmm-states-output-models starting-classes-hmms)
	     (map (lambda (class)
		   (normalize-states-output-models
		    (map-n-vector (lambda (i)
				   (random-output-parameter-matrix
				    model-types feature-lengths bin-lengths))
				  states)
		    model-types))
		  classes)))
	(classes-params
	 (map (lambda (initial-state-distribution
		       transition-matrix
		       states-output-models)
	       (hmm-vectors->params initial-state-distribution
				    transition-matrix
				    states-output-models
				    *sigmoid-a*
				    *sigmoid-b*))
	      classes-initial-state-distributions
	      classes-transition-matrices
	      classes-states-output-models))
	(state-output-model-length
	 (reduce-vector +
			(compute-state-output-models-lengths model-types feature-lengths bin-lengths)
			0))
	(output-mask (vector-append
		      (map-n-vector
		       (lambda (i)
			0)
		       (* states (+ states 1)))
		      (map-n-vector
		       (lambda (i)
			1)
		       (* states state-output-model-length))
		      (vector 0 0)
		      ))
	(states-mask (vector-append
		      (map-n-vector
		       (lambda (i)
			1)
		       (* states (+ states 1)))
		      (map-n-vector
		       (lambda (i)
			0)
		       (* states state-output-model-length))
		      (vector 0 0)
		      ))
	(preallocated-hmm-pointers
	 (preallocate-c-hmm-arrays states
				   (vector-length feature-lengths)
				   (first classes-states-output-models)
				   (vector-length (first classes-params)))))
  (dtrace "first obj:"(first (cost-params-with-negatives;;detector-cost-params-c-smooth;;(svm-style-cost-params-c-smooth
			      classes-params
			      preallocated-hmm-pointers
			      #f
			      classes-videos-fvvs
			      classes-videos-c-fvvs
			      classes-negative-c-fvvs
			      states
			      feature-types
			      feature-lengths
			      bin-lengths
			      symmetric?
			      restricted?
			      )))
 ;; (panic "arbitrary panic")
  (let loop ((hog-step-factor step-factor)
	     (states-step-factor step-factor)
	     (mode 'hog-mode)
	     (classes-params classes-params)
	     (i (if starting-iteration
		    starting-iteration
		    0))
	     (prev-classes-initial-state-distributions classes-initial-state-distributions)
	     (prev-classes-transition-matrices classes-transition-matrices)
	     (prev-classes-states-output-models classes-states-output-models)
	     (prev-classes-sigmoid-threshold (map (lambda (class) *sigmoid-a*) classes))
	     (prev-objective (cost-params-with-negatives;;detector-cost-params-c-smooth;;cost-params;;(svm-style-cost-params-c-smooth
			      classes-params
			      preallocated-hmm-pointers
			      #f
			      classes-videos-fvvs
			      classes-videos-c-fvvs
			      classes-negative-c-fvvs
			      states
			      feature-types
			      feature-lengths
			      bin-lengths
			      symmetric?
			      restricted?
			      )))
   (write-object-to-file (list mode hog-step-factor states-step-factor i) "/tmp/step-factor2.sc")
   (write-object-to-file
    (map (lambda (prev-initial-state-distribution
		  prev-transition-matrix
		  prev-states-hog-models
		  prev-sigmoid-threshold)
	  (make-scheme-hmm prev-initial-state-distribution
			   prev-transition-matrix
			   prev-states-hog-models
			   prev-sigmoid-threshold
			   feature-types
			   feature-lengths
			   bin-lengths
			   prev-objective
			   discrete-min-max))
	 prev-classes-initial-state-distributions
	 prev-classes-transition-matrices
	 prev-classes-states-output-models
	 prev-classes-sigmoid-threshold)
    (if restricted?
	(format #f "~a-~a-restricted.sc" outpath (modulo i 10))
	(format #f "~a-~a.sc" outpath (modulo i 10))))
   (dtrace "iteration:" i)
   (dtrace "prev-objective-function:" (first prev-objective))
   (when *svm-style?*
    (dtrace "prev-training accuracy:"
	     (/ (length
		 (removeq
		  #f
		  (join
		   (map-indexed
		    (lambda (cvl c)
		     (map
		      (lambda (vl)
		       (equal? (maximum vl) (list-ref vl c)))
		      cvl))
		    (second prev-objective)))))
		(length (join (second prev-objective))))))
   (if (> i iterations)
       classes-params
       (let* ((foo (dtrace "computing gradients..." ""))
	      (gs (gradient-params-with-negatives;;detector-cost-gradient-parameters-c-smooth ;;gradient-params;;(svm-style-cost-gradient-parameters-c-smooth
		   (second prev-objective)
		   (first (third prev-objective))
		   (second (third prev-objective))
		   classes-videos-fvvs
		   classes-videos-c-fvvs
		   classes-negative-c-fvvs
		   preallocated-hmm-pointers
		   #f
		   classes-params
		   states
		   feature-types
		   feature-lengths
		   bin-lengths
		   symmetric?
		   restricted?))
	      (l-and-gs (when #f (svm-style-cost-params-full-AD
			 classes-params
			 preallocated-hmm-pointers ;; unused, but ill keep it to keep the args the same
			 classes-videos-fvvs
			 classes-videos-c-fvvs
			 states
			 feature-types
			 feature-lengths
			 bin-lengths
			 symmetric?
			 restricted?)))
	      (foo (dtrace "done computing gradients..." ""))
	     ;; (foo (panic "intentional panic"))
	      (classes-initial-state-distribution-gradients
	       (map
		(lambda (params-gradient)
		 (params->initial-state-distribution params-gradient
						     states
						     restricted?))
		gs))
	      (classes-transition-matrix-gradients
	       (map
		(lambda (params-gradient)
		 (params->transition-matrix params-gradient
					    states
					    restricted?))
		gs))
	      (classes-states-output-models-gradients
	       (map
		(lambda (params-gradient)
		 (params->states-output-models params-gradient
					       states
					       model-types
					       feature-lengths
					       bin-lengths))
		gs))
	      (foo (dtrace "writing some crap to files..." "")))
	(write-object-to-file (map magnitude gs) "/tmp/gradient-magnitudes2.sc")
	(write-object-to-file gs "/tmp/gradients.sc")
	(let loop2 ((step-factor (case mode
				  ((hog-mode)
				   hog-step-factor)
				  ((states-mode)
				   states-step-factor)))
		    (inner-i 0))
	 (dtrace "inner i" inner-i)
	 (let* ((foo (dtrace "updating+normalizing parameters" ""))
		(new-classes-params
		 (map (lambda (g params)
		       (dtrace "gradient magnitude:" (magnitude g))
		       (case mode
			((hog-mode)
			 (v+ params (k*v step-factor (map-vector (lambda (x y)
								  (* x y))
								 output-mask g))))
			((states-mode)
			 (v+ params (k*v step-factor (map-vector (lambda (x y)
								  (* x y))
								 states-mask g))))))
		      gs classes-params))
		(new-classes-initial-state-distributions
		 (map (lambda (params initial-state-distribution-gradient)
		       (let* ((initial-state-distribution
			       (params->initial-state-distribution params states restricted?))
			      (updated (my-gt-discrete-distribution-update
					initial-state-distribution
					initial-state-distribution-gradient
					step-factor))
			      ;; (scaled (k*v step-factor initial-state-distribution-gradient))
			      ;; (smallest (minimum-vector scaled))
			      ;; (d (if (< smallest 0)
			      ;; 	     (- .1 smallest)
			      ;; 	     .1))
			      ;; (modified2
			      ;;  (vector-clip
			      ;; 	(normalize
			      ;; 	 (map-vector * initial-state-distribution
			      ;; 		     (v+ scaled
			      ;; 			 (make-vector
			      ;; 			  (vector-length initial-state-distribution) d))))))
			      ;; (updated (vector-clip
			      ;; 		(gt-discrete-distribution-update
			      ;; 		 initial-state-distribution
			      ;; 		 initial-state-distribution-gradient
			      ;; 		 d)))
			      )
			(if restricted?
			    (list->vector
			     (cons 1 (map-n (lambda (i) 1e-300) (- (vector-length initial-state-distribution) 1))))
			    (if (equal? mode 'states-mode)
			    ;; (begin
			    ;;  (dtrace "modified/updated:" (map-vector (lambda (a b) (if (= a b) 1 (/ a b))) modified2 updated))
			    ;;  updated)
			    updated
			    initial-state-distribution))))
		      classes-params
		      classes-initial-state-distribution-gradients))
		(new-classes-transition-matrices
		 (map (lambda (params transition-matrix-gradient)
		       (let* ((transition-matrix
			       (params->transition-matrix params states restricted?)))
			(map-vector
			 (lambda (row-params row-gradient r)
			  (let*
			    ((updated-row (my-gt-discrete-distribution-update
					row-params
					row-gradient
					step-factor))
			     (updated-row2 (if restricted?
					       (restrict-row updated-row r)
					       updated-row))
			     ;; (scaled (k*v step-factor row-gradient))
			     ;; (smallest (minimum-vector scaled))
			     ;; (d (if (< smallest 0)
			     ;; 	    (- .1 smallest)
			     ;; 	    .1))
			     ;; (modified2 (map-vector * row-params
			     ;; 			    (v+ scaled
			     ;; 				(make-vector (vector-length row-params) d))))
			     )
			   (if (equal? mode 'states-mode)
			       ;; (vector-clip
			       ;; 	(normalize
			       ;; 	 modified2))
			       (normalize updated-row2)
			       row-params)))
			 transition-matrix transition-matrix-gradient (list->vector (enumerate (vector-length transition-matrix))))))
		      classes-params
		      classes-transition-matrix-gradients))
		;; (new-classes-states-output-models
		;;  (map (lambda (new-params)
		;;        (normalize-states-output-models
		;; 	(params->states-output-models new-params states model-types feature-lengths bin-lengths)
		;; 	model-types))
		;;       new-classes-params))
		(new-classes-states-output-models
		 (map (lambda (class-params class-states-output-models-gradients)
		       (let ((states-output-models (params->states-output-models class-params
										 states
										 model-types
										 feature-lengths
										 bin-lengths)))
			(if (equal? mode 'hog-mode)
			    (normalize-states-output-models
			 (map-vector
			  (lambda (state-output-models state-output-models-gradients)
			   (map-vector
			    (lambda (output-model gradient model-type)
			     (cond
			      ((equal? model-type 'dot)
			       (v+ output-model (k*v step-factor gradient)))
			      ((equal? model-type 'discrete)
			       (my-gt-discrete-distribution-update output-model
								   gradient
								   step-factor))
			      (else
			       (panic (format #f "model type ~a not yet supported" model-type)))))
			    state-output-models state-output-models-gradients model-types))
			  states-output-models class-states-output-models-gradients)
			 model-types)
			    states-output-models)))
		      classes-params classes-states-output-models-gradients))
		(new-classes-sigmoid-threshold
		 (map (lambda (new-params)
		       (params->sigmoid-threshold
			new-params states model-types feature-lengths bin-lengths))
		      new-classes-params))
		(normalized-new-classes-params
		 (map (lambda (new-initial-state-distribution
			       new-transition-matrix
			       new-states-hog-models
			       new-sigmoid-threshold)
		       (hmm-vectors->params new-initial-state-distribution
					    new-transition-matrix
					    new-states-hog-models
					    new-sigmoid-threshold
					    *sigmoid-b*))
		      new-classes-initial-state-distributions
		      new-classes-transition-matrices
		      new-classes-states-output-models
		      new-classes-sigmoid-threshold))
		(foo (dtrace "computing new objective..." ""))
		(new-objective (dtrace "new objective:"
				       (cost-params-with-negatives;;detector-cost-params-c-smooth;;cost-params;;(svm-style-cost-params-c-smooth
					normalized-new-classes-params
					preallocated-hmm-pointers
					#f
					classes-videos-fvvs
					classes-videos-c-fvvs
					classes-negative-c-fvvs
					states
					feature-types
					feature-lengths
					bin-lengths
					symmetric?
					restricted?))))
	  (cond ((or (and (< hog-step-factor 1e-10)
		      (< states-step-factor 1e-10)
		      (> (first new-objective) (first prev-objective)))
		     (and (< hog-step-factor 1e-10)
		      (< states-step-factor 1e-10)
		      (> (first new-objective) (- (first prev-objective) 1e-8))))
		 (loop hog-step-factor
		       states-step-factor
		       mode
		       classes-params
		       (+ i 100000)
		       prev-classes-initial-state-distributions
		       prev-classes-transition-matrices
		       prev-classes-states-output-models
		       prev-classes-sigmoid-threshold
		       prev-objective))
		((and (< inner-i 1)
		      (> (first new-objective) (first prev-objective)))
		 (loop2 (/ step-factor 2)
			(+ inner-i 1)))
		((equal? mode 'hog-mode)
		 (if (< (first new-objective) (first prev-objective))
		     (loop (* step-factor 1.5)
			   states-step-factor
			   'hog-mode
			   normalized-new-classes-params
			   (+ i 1)
			   new-classes-initial-state-distributions
			   new-classes-transition-matrices
			   new-classes-states-output-models
			   new-classes-sigmoid-threshold
			   new-objective)
		     (loop (/ step-factor 2)
			   states-step-factor
			   'states-mode
			   classes-params
			   (+ i 1)
			   prev-classes-initial-state-distributions
			   prev-classes-transition-matrices
			   prev-classes-states-output-models
			   prev-classes-sigmoid-threshold
			   prev-objective)))
		((equal? mode 'states-mode)
		 (if (< (first new-objective) (first prev-objective))
		     (loop hog-step-factor
			   (* step-factor 1.5)
			   'states-mode
			   normalized-new-classes-params
			   (+ i 1)
			   new-classes-initial-state-distributions
			   new-classes-transition-matrices
			   new-classes-states-output-models
			   new-classes-sigmoid-threshold
			   new-objective)
		     (loop hog-step-factor
			   (/ step-factor 2)
			   'hog-mode
			   classes-params
			   (+ i 1)
			   prev-classes-initial-state-distributions
			   prev-classes-transition-matrices
			   prev-classes-states-output-models
			   prev-classes-sigmoid-threshold
			   prev-objective)))
		(else
		 (panic "")
		 '())))))))))


(define (oldmulticlass-svm-detector-style-hog-hmm-gradient-descent-threaded-c-smooth
	 states
	 classes
	 classes-videos-fvvs
	 classes-videos-c-fvvs
	 classes-negative-c-fvvs
	 iterations
	 outpath
	 feature-types
	 feature-lengths
	 bin-lengths
	 discrete-min-max
	 symmetric?
	 restricted?
	 step-factor
	 starting-iteration
	 starting-classes-hmms)
 (dtrace "made it into the gradient descent function" '())

 (let* ((model-types (map-vector model-type feature-types))
	(model-lengths (compute-state-output-models-lengths model-types feature-lengths bin-lengths))
	(state-output-model-length
	 (reduce-vector + model-lengths
			0))
	(total-output-models-length (* states state-output-model-length))
	(gradient-length (+ states (* states states) total-output-models-length 2))
	(classes-initial-state-distributions
	 (if starting-classes-hmms
	     (map scheme-hmm-initial-state-distribution starting-classes-hmms)
	     (map (lambda (class)
		   (normalize (vector-append (vector 1)
					     (map-n-vector
					      (lambda (i) 1e-100)
					      (- states 1)))))
		  classes)))
	(classes-transition-matrices
	 (if starting-classes-hmms
	     (map scheme-hmm-transition-matrix starting-classes-hmms)
	     (map (lambda (class)
		   (map-n-vector
		    (lambda (from-state)
		     (normalize
		      (map-n-vector
		       (lambda (to-state)
			(cond
			 ((equal? from-state to-state)
			  .94)
			 ((equal? (+ from-state 1)
				  to-state)
			  .05)
			 ((< to-state from-state)
			  .01)
			 (else 1e-100)))
		       states)))
		    states))
		  classes)))
	(classes-states-output-models
	 (if starting-classes-hmms
	     (map scheme-hmm-states-output-models starting-classes-hmms)
	     (map (lambda (class)
		   (normalize-states-output-models
		    (map-n-vector (lambda (i)
				   (random-output-parameter-matrix
				    model-types feature-lengths bin-lengths))
				  states)
		    model-types))
		  classes)))
	(classes-params
	 (map (lambda (initial-state-distribution
		       transition-matrix
		       states-output-models)
	       (hmm-vectors->params initial-state-distribution
				    transition-matrix
				    states-output-models
				    *sigmoid-a*
				    *sigmoid-b*))
	      classes-initial-state-distributions
	      classes-transition-matrices
	      classes-states-output-models))
	(state-output-model-length
	 (reduce-vector +
			(compute-state-output-models-lengths model-types feature-lengths bin-lengths)
			0))
	(output-mask (vector-append
		      (map-n-vector
		       (lambda (i)
			0)
		       (* states (+ states 1)))
		      (map-n-vector
		       (lambda (i)
			1)
		       (* states state-output-model-length))
		      (vector 0 0)
		      ))
	(states-mask (vector-append
		      (map-n-vector
		       (lambda (i)
			1)
		       (* states (+ states 1)))
		      (map-n-vector
		       (lambda (i)
			0)
		       (* states state-output-model-length))
		      (vector 0 0)
		      ))
	(classes-preallocated-hmm-pointers
	 (map-n (lambda (i)
		 (preallocate-c-hmm-arrays states
					   (vector-length feature-lengths)
					   (first classes-states-output-models)
					   (vector-length (first classes-params))))
		(length classes-params)))
	(preallocated-flattened-c-pointers (preallocate-flattened-c-pointers (length classes-params)
									     classes-videos-c-fvvs
									     gradient-length)))
  (dtrace "first obj:"(first (cost-params-with-negatives;;detector-cost-params-c-smooth;;(svm-style-cost-params-c-smooth
			      classes-params
			      classes-preallocated-hmm-pointers
			      preallocated-flattened-c-pointers
			      classes-videos-fvvs
			      classes-videos-c-fvvs
			      classes-negative-c-fvvs
			      states
			      feature-types
			      feature-lengths
			      bin-lengths
			      symmetric?
			      restricted?
			      )))
 ;; (panic "arbitrary panic")
  (let loop ((hog-step-factor step-factor)
	     (states-step-factor step-factor)
	     (mode 'hog-mode)
	     (classes-params classes-params)
	     (i (if starting-iteration
		    starting-iteration
		    0))
	     (prev-classes-initial-state-distributions classes-initial-state-distributions)
	     (prev-classes-transition-matrices classes-transition-matrices)
	     (prev-classes-states-output-models classes-states-output-models)
	     (prev-classes-sigmoid-threshold (map (lambda (class) *sigmoid-a*) classes))
	     (prev-objective (cost-params-with-negatives;;detector-cost-params-c-smooth;;cost-params;;(svm-style-cost-params-c-smooth
			      classes-params
			      classes-preallocated-hmm-pointers
			      preallocated-flattened-c-pointers
			      classes-videos-fvvs
			      classes-videos-c-fvvs
			      classes-negative-c-fvvs
			      states
			      feature-types
			      feature-lengths
			      bin-lengths
			      symmetric?
			      restricted?
			      )))
   (write-object-to-file (list mode hog-step-factor states-step-factor i) "/tmp/step-factor2.sc")
   (write-object-to-file
    (map (lambda (prev-initial-state-distribution
		  prev-transition-matrix
		  prev-states-hog-models
		  prev-sigmoid-threshold)
	  (make-scheme-hmm prev-initial-state-distribution
			   prev-transition-matrix
			   prev-states-hog-models
			   prev-sigmoid-threshold
			   feature-types
			   feature-lengths
			   bin-lengths
			   prev-objective
			   discrete-min-max))
	 prev-classes-initial-state-distributions
	 prev-classes-transition-matrices
	 prev-classes-states-output-models
	 prev-classes-sigmoid-threshold)
    (if restricted?
	(format #f "~a-~a-restricted.sc" outpath (modulo i 10))
	(format #f "~a-~a.sc" outpath (modulo i 10))))
   (dtrace "iteration:" i)
   (dtrace "prev-objective-function:" (first prev-objective))
   (when *svm-style?*
    (dtrace "prev-training accuracy:"
	     (/ (length
		 (removeq
		  #f
		  (join
		   (map-indexed
		    (lambda (cvl c)
		     (map
		      (lambda (vl)
		       (equal? (maximum vl) (list-ref vl c)))
		      cvl))
		    (second prev-objective)))))
		(length (join (second prev-objective))))))
   (if (> i iterations)
       classes-params
       (let* ((foo (dtrace "computing gradients..." ""))
	      (gs (gradient-params-with-negatives;;detector-cost-gradient-parameters-c-smooth ;;gradient-params;;(svm-style-cost-gradient-parameters-c-smooth
		   (second prev-objective)
		   (first (third prev-objective))
		   (second (third prev-objective))
		   classes-videos-fvvs
		   classes-videos-c-fvvs
		   classes-negative-c-fvvs
		   classes-preallocated-hmm-pointers
		   preallocated-flattened-c-pointers
		   classes-params
		   states
		   feature-types
		   feature-lengths
		   bin-lengths
		   symmetric?
		   restricted?))
	      (l-and-gs (when #f (svm-style-cost-params-full-AD
			 classes-params
			 classes-preallocated-hmm-pointers ;; unused, but ill keep it to keep the args the same
			 classes-videos-fvvs
			 classes-videos-c-fvvs
			 states
			 feature-types
			 feature-lengths
			 bin-lengths
			 symmetric?
			 restricted?)))
	      (foo (dtrace "done computing gradients..." ""))
	     ;; (foo (panic "intentional panic"))
	      (classes-initial-state-distribution-gradients
	       (map
		(lambda (params-gradient)
		 (params->initial-state-distribution params-gradient
						     states
						     restricted?))
		gs))
	      (classes-transition-matrix-gradients
	       (map
		(lambda (params-gradient)
		 (params->transition-matrix params-gradient
					    states
					    restricted?))
		gs))
	      (classes-states-output-models-gradients
	       (map
		(lambda (params-gradient)
		 (params->states-output-models params-gradient
					       states
					       model-types
					       feature-lengths
					       bin-lengths))
		gs))
	      (foo (dtrace "writing some crap to files..." "")))
	;;(write-object-to-file (map magnitude gs) "/tmp/gradient-magnitudes2.sc")
	;;(write-object-to-file gs "/tmp/gradients.sc")
	(let loop2 ((step-factor (case mode
				  ((hog-mode)
				   hog-step-factor)
				  ((states-mode)
				   states-step-factor)))
		    (inner-i 0))
	 (dtrace "inner i" inner-i)
	 (let* ((foo (dtrace "updating+normalizing parameters" ""))
		(new-classes-params
		 (map (lambda (g params)
		       ;(dtrace "gradient magnitude:" (magnitude g))
		       (case mode
			((hog-mode)
			 (v+ params (k*v step-factor (map-vector (lambda (x y)
								  (* x y))
								 output-mask g))))
			((states-mode)
			 (v+ params (k*v step-factor (map-vector (lambda (x y)
								  (* x y))
								 states-mask g))))))
		      gs classes-params))
		(new-classes-initial-state-distributions
		 (map (lambda (params initial-state-distribution-gradient)
		       (let* ((initial-state-distribution
			       (params->initial-state-distribution params states restricted?))
			      (updated (my-gt-discrete-distribution-update
					initial-state-distribution
					initial-state-distribution-gradient
					step-factor))
			      ;; (scaled (k*v step-factor initial-state-distribution-gradient))
			      ;; (smallest (minimum-vector scaled))
			      ;; (d (if (< smallest 0)
			      ;; 	     (- .1 smallest)
			      ;; 	     .1))
			      ;; (modified2
			      ;;  (vector-clip
			      ;; 	(normalize
			      ;; 	 (map-vector * initial-state-distribution
			      ;; 		     (v+ scaled
			      ;; 			 (make-vector
			      ;; 			  (vector-length initial-state-distribution) d))))))
			      ;; (updated (vector-clip
			      ;; 		(gt-discrete-distribution-update
			      ;; 		 initial-state-distribution
			      ;; 		 initial-state-distribution-gradient
			      ;; 		 d)))
			      )
			(if restricted?
			    (list->vector
			     (cons 1 (map-n (lambda (i) 1e-300) (- (vector-length initial-state-distribution) 1))))
			    (if (equal? mode 'states-mode)
			    ;; (begin
			    ;;  (dtrace "modified/updated:" (map-vector (lambda (a b) (if (= a b) 1 (/ a b))) modified2 updated))
			    ;;  updated)
			    updated
			    initial-state-distribution))))
		      classes-params
		      classes-initial-state-distribution-gradients))
		(new-classes-transition-matrices
		 (map (lambda (params transition-matrix-gradient)
		       (let* ((transition-matrix
			       (params->transition-matrix params states restricted?)))
			(map-vector
			 (lambda (row-params row-gradient r)
			  (let*
			    ((updated-row (my-gt-discrete-distribution-update
					row-params
					row-gradient
					step-factor))
			     (updated-row2 (if restricted?
					       (restrict-row updated-row r)
					       updated-row))
			     ;; (scaled (k*v step-factor row-gradient))
			     ;; (smallest (minimum-vector scaled))
			     ;; (d (if (< smallest 0)
			     ;; 	    (- .1 smallest)
			     ;; 	    .1))
			     ;; (modified2 (map-vector * row-params
			     ;; 			    (v+ scaled
			     ;; 				(make-vector (vector-length row-params) d))))
			     )
			   (if (equal? mode 'states-mode)
			       ;; (vector-clip
			       ;; 	(normalize
			       ;; 	 modified2))
			       (normalize updated-row2)
			       row-params)))
			 transition-matrix transition-matrix-gradient (list->vector (enumerate (vector-length transition-matrix))))))
		      classes-params
		      classes-transition-matrix-gradients))
		;; (new-classes-states-output-models
		;;  (map (lambda (new-params)
		;;        (normalize-states-output-models
		;; 	(params->states-output-models new-params states model-types feature-lengths bin-lengths)
		;; 	model-types))
		;;       new-classes-params))
		(new-classes-states-output-models
		 (map (lambda (class-params class-states-output-models-gradients)
		       (let ((states-output-models (params->states-output-models class-params
										 states
										 model-types
										 feature-lengths
										 bin-lengths)))
			(if (equal? mode 'hog-mode)
			    (normalize-states-output-models
			 (map-vector
			  (lambda (state-output-models state-output-models-gradients)
			   (map-vector
			    (lambda (output-model gradient model-type)
			     (cond
			      ((equal? model-type 'dot)
			       (v+ output-model (k*v step-factor gradient)))
			      ((equal? model-type 'discrete)
			       (my-gt-discrete-distribution-update output-model
								   gradient
								   step-factor))
			      (else
			       (panic (format #f "model type ~a not yet supported" model-type)))))
			    state-output-models state-output-models-gradients model-types))
			  states-output-models class-states-output-models-gradients)
			 model-types)
			    states-output-models)))
		      classes-params classes-states-output-models-gradients))
		(new-classes-sigmoid-threshold
		 (map (lambda (new-params)
		       (params->sigmoid-threshold
			new-params states model-types feature-lengths bin-lengths))
		      new-classes-params))
		(normalized-new-classes-params
		 (map (lambda (new-initial-state-distribution
			       new-transition-matrix
			       new-states-hog-models
			       new-sigmoid-threshold)
		       (hmm-vectors->params new-initial-state-distribution
					    new-transition-matrix
					    new-states-hog-models
					    new-sigmoid-threshold
					    *sigmoid-b*))
		      new-classes-initial-state-distributions
		      new-classes-transition-matrices
		      new-classes-states-output-models
		      new-classes-sigmoid-threshold))
		(foo (dtrace "computing new objective..." ""))
		(new-objective
				       (cost-params-with-negatives;;detector-cost-params-c-smooth;;cost-params;;(svm-style-cost-params-c-smooth
					normalized-new-classes-params
					classes-preallocated-hmm-pointers
					preallocated-flattened-c-pointers
					classes-videos-fvvs
					classes-videos-c-fvvs
					classes-negative-c-fvvs
					states
					feature-types
					feature-lengths
					bin-lengths
					symmetric?
					restricted?)))
	  (cond ((or (and (< hog-step-factor 1e-10)
		      (< states-step-factor 1e-10)
		      (> (first new-objective) (first prev-objective)))
		     (and (< hog-step-factor 1e-10)
		      (< states-step-factor 1e-10)
		      (> (first new-objective) (- (first prev-objective) 1e-8))))
		 (loop hog-step-factor
		       states-step-factor
		       mode
		       classes-params
		       (+ i 100000)
		       prev-classes-initial-state-distributions
		       prev-classes-transition-matrices
		       prev-classes-states-output-models
		       prev-classes-sigmoid-threshold
		       prev-objective))
		((and (< inner-i 1)
		      (> (first new-objective) (first prev-objective)))
		 (loop2 (/ step-factor 2)
			(+ inner-i 1)))
		((equal? mode 'hog-mode)
		 (if (< (first new-objective) (first prev-objective))
		     (loop (* step-factor 1.5)
			   states-step-factor
			   'hog-mode
			   normalized-new-classes-params
			   (+ i 1)
			   new-classes-initial-state-distributions
			   new-classes-transition-matrices
			   new-classes-states-output-models
			   new-classes-sigmoid-threshold
			   new-objective)
		     (loop (/ step-factor 2)
			   states-step-factor
			   'states-mode
			   classes-params
			   (+ i 1)
			   prev-classes-initial-state-distributions
			   prev-classes-transition-matrices
			   prev-classes-states-output-models
			   prev-classes-sigmoid-threshold
			   prev-objective)))
		((equal? mode 'states-mode)
		 (if (< (first new-objective) (first prev-objective))
		     (loop hog-step-factor
			   (* step-factor 1.5)
			   'states-mode
			   normalized-new-classes-params
			   (+ i 1)
			   new-classes-initial-state-distributions
			   new-classes-transition-matrices
			   new-classes-states-output-models
			   new-classes-sigmoid-threshold
			   new-objective)
		     (loop hog-step-factor
			   (/ step-factor 2)
			   'hog-mode
			   classes-params
			   (+ i 1)
			   prev-classes-initial-state-distributions
			   prev-classes-transition-matrices
			   prev-classes-states-output-models
			   prev-classes-sigmoid-threshold
			   prev-objective)))
		(else
		 (panic "")
		 '())))))))))

(define (multiclass-svm-detector-style-hog-hmm-gradient-descent-threaded-c-smooth
	 states
	 classes
	 classes-videos-fvvs
	 classes-videos-c-fvvs
	 classes-negative-c-fvvs
	 test-videos-c-fvvs
	 test-labels
	 iterations
	 outpath
	 feature-types
	 feature-lengths
	 bin-lengths
	 discrete-min-max
	 symmetric?
	 restricted?
	 step-factor
	 starting-iteration
	 starting-classes-hmms)
 (dtrace "made it into the gradient descent function" (list feature-types feature-lengths))

 (let* ((model-types (map-vector model-type feature-types))
	(model-lengths (compute-state-output-models-lengths model-types feature-lengths bin-lengths))
	(state-output-model-length
	 (reduce-vector + model-lengths
			0))
	(total-output-models-length (* states state-output-model-length))
	(gradient-length (+ states (* states states) total-output-models-length 2))
	(classes-initial-state-distributions
	 (if starting-classes-hmms
	     (map scheme-hmm-initial-state-distribution starting-classes-hmms)
	     (map (lambda (class)
		   (normalize (vector-append (vector 1)
					     (map-n-vector
					      (lambda (i) 1e-100)
					      (- states 1)))))
		  classes)))
	(classes-transition-matrices
	 (if starting-classes-hmms
	     (map scheme-hmm-transition-matrix starting-classes-hmms)
	     (map (lambda (class)
		   (map-n-vector
		    (lambda (from-state)
		     (normalize
		      (map-n-vector
		       (lambda (to-state)
			(cond
			 ((equal? from-state to-state)
			  .94)
			 ((equal? (+ from-state 1)
				  to-state)
			  .05)
			 ((< to-state from-state)
			  .01)
			 (else 1e-100)))
		       states)))
		    states))
		  classes)))
	(classes-states-output-models
	 (if starting-classes-hmms
	     (map scheme-hmm-states-output-models starting-classes-hmms)
	     (map (lambda (class)
		   (normalize-states-output-models
		    (map-n-vector (lambda (i)
				   (random-output-parameter-matrix
				    model-types feature-lengths bin-lengths))
				  states)
		    model-types))
		  classes)))
	(classes-params
	 (map (lambda (initial-state-distribution
		       transition-matrix
		       states-output-models)
	       (hmm-vectors->params initial-state-distribution
				    transition-matrix
				    states-output-models
				    *sigmoid-a*
				    *sigmoid-b*))
	      classes-initial-state-distributions
	      classes-transition-matrices
	      classes-states-output-models))
	(state-output-model-length
	 (reduce-vector +
			(compute-state-output-models-lengths model-types feature-lengths bin-lengths)
			0))
	(output-mask (vector-append
		      (map-n-vector
		       (lambda (i)
			0)
		       (* states (+ states 1)))
		      (map-n-vector
		       (lambda (i)
			1)
		       (* states state-output-model-length))
		      (vector 0 0)
		      ))
	(states-mask (vector-append
		      (map-n-vector
		       (lambda (i)
			1)
		       (* states (+ states 1)))
		      (map-n-vector
		       (lambda (i)
			0)
		       (* states state-output-model-length))
		      (vector 0 0)
		      ))
	(classes-preallocated-hmm-pointers
	 (map-n (lambda (i)
		 (preallocate-c-hmm-arrays states
					   (vector-length feature-lengths)
					   (first classes-states-output-models)
					   (vector-length (first classes-params))))
		(length classes-params)))
	(preallocated-flattened-c-pointers (preallocate-flattened-c-pointers-with-negatives
					    (length classes-params)
					    classes-videos-c-fvvs
					    classes-negative-c-fvvs
					    gradient-length)))
  (dtrace "first obj:"(first (cost-params-with-negatives;;detector-cost-params-c-smooth;;(svm-style-cost-params-c-smooth
			      classes-params
			      classes-preallocated-hmm-pointers
			      preallocated-flattened-c-pointers
			      classes-videos-fvvs
			      classes-videos-c-fvvs
			      classes-negative-c-fvvs
			      states
			      feature-types
			      feature-lengths
			      bin-lengths
			      symmetric?
			      restricted?
			      )))
 ;; (panic "arbitrary panic")
  (let loop ((hog-step-factor step-factor)
	     (states-step-factor step-factor)
	     (mode 'hog-mode)
	     (classes-params classes-params)
	     (i (if starting-iteration
		    starting-iteration
		    0))
	     (prev-classes-initial-state-distributions classes-initial-state-distributions)
	     (prev-classes-transition-matrices classes-transition-matrices)
	     (prev-classes-states-output-models classes-states-output-models)
	     (prev-classes-sigmoid-threshold (map (lambda (class) *sigmoid-a*) classes))
	     (prev-objective (cost-params-with-negatives;;detector-cost-params-c-smooth;;cost-params;;(svm-style-cost-params-c-smooth
			      classes-params
			      classes-preallocated-hmm-pointers
			      preallocated-flattened-c-pointers
			      classes-videos-fvvs
			      classes-videos-c-fvvs
			      classes-negative-c-fvvs
			      states
			      feature-types
			      feature-lengths
			      bin-lengths
			      symmetric?
			      restricted?
			      )))
   (when (= (modulo i 20) 0)
    (let* ((test-cost (svm-style-cost-params-c-smooth
		      classes-params
		      (first classes-preallocated-hmm-pointers)
		      #f
		      (list test-videos-c-fvvs)
		      states
		      feature-types
		      feature-lengths
		      bin-lengths
		      symmetric?
		      restricted?
		      ))
	  (test-videos-hmm-likelihoods
	   (dtrace "test likelihoods:" (first (second test-cost))))
	  (test-correct (map (lambda (video-likelihoods label)
			 (let* ((highest (maximum video-likelihoods))
				    (p (position highest video-likelihoods)))
			  (list-ref classes p)
			      (if (equal? (list-ref classes p) label)
				  1
				  0)))
			test-videos-hmm-likelihoods test-labels))
	  (test-confusion (dtrace "(test-label truth):"
				  (map (lambda (video-likelihoods label)
			 (let* ((highest (maximum video-likelihoods))
				    (p (position highest video-likelihoods)))
			      (list-ref classes p)
			      (list (list-ref classes p) label)))
			test-videos-hmm-likelihoods test-labels)))
	  (test-confusion-matrix
	   (map
	    (lambda (truth-event)
	     (map
	      (lambda(test-event)
	       (length (remove-if-not
			(lambda (x)
			 (and (equal? (first x) test-event)
			      (equal? (second x) truth-event)))
			test-confusion)))
	      classes))
	    classes)))
    (dtrace "tested test videos:(correct total percent)" (list (reduce + test-correct 0)
							       (length test-videos-c-fvvs)
							       (/ (reduce + test-correct 0)
							       (length test-videos-c-fvvs))))
    (dtrace "confusion matrix:" "")
    (pp test-confusion-matrix)))
   (write-object-to-file (list mode hog-step-factor states-step-factor i) "/tmp/step-factor2.sc")
   (write-object-to-file
    (map (lambda (prev-initial-state-distribution
		  prev-transition-matrix
		  prev-states-hog-models
		  prev-sigmoid-threshold)
	  (make-scheme-hmm prev-initial-state-distribution
			   prev-transition-matrix
			   prev-states-hog-models
			   prev-sigmoid-threshold
			   feature-types
			   feature-lengths
			   bin-lengths
			   prev-objective
			   discrete-min-max))
	 prev-classes-initial-state-distributions
	 prev-classes-transition-matrices
	 prev-classes-states-output-models
	 prev-classes-sigmoid-threshold)
    (if restricted?
	(format #f "~a-~a-restricted.sc" outpath (modulo i 10))
	(format #f "~a-~a.sc" outpath (modulo i 10))))
   (dtrace "iteration:" i)
   (dtrace "prev-objective-function:" (first prev-objective))
   (when *svm-style?*
    (dtrace "prev-training accuracy:"
	     (/ (length
		 (removeq
		  #f
		  (join
		   (map-indexed
		    (lambda (cvl c)
		     (map
		      (lambda (vl)
		       (equal? (maximum vl) (list-ref vl c)))
		      cvl))
		    (second prev-objective)))))
		(length (join (second prev-objective))))))
   (if (> i iterations)
       classes-params
       (let* ((foo (dtrace "computing gradients..." ""))
	      (gs (gradient-params-with-negatives;;detector-cost-gradient-parameters-c-smooth ;;gradient-params;;(svm-style-cost-gradient-parameters-c-smooth
		   (second prev-objective)
		   (first (third prev-objective))
		   (second (third prev-objective))
		   classes-videos-fvvs
		   classes-videos-c-fvvs
		   classes-negative-c-fvvs
		   classes-preallocated-hmm-pointers
		   preallocated-flattened-c-pointers
		   classes-params
		   states
		   feature-types
		   feature-lengths
		   bin-lengths
		   symmetric?
		   restricted?))
	      (l-and-gs (when #f (svm-style-cost-params-full-AD
			 classes-params
			 classes-preallocated-hmm-pointers ;; unused, but ill keep it to keep the args the same
			 classes-videos-fvvs
			 classes-videos-c-fvvs
			 states
			 feature-types
			 feature-lengths
			 bin-lengths
			 symmetric?
			 restricted?)))
	      (foo (dtrace "done computing gradients..." ""))
	     ;; (foo (panic "intentional panic"))
	      (classes-initial-state-distribution-gradients
	       (map
		(lambda (params-gradient)
		 (params->initial-state-distribution params-gradient
						     states
						     restricted?))
		gs))
	      (classes-transition-matrix-gradients
	       (map
		(lambda (params-gradient)
		 (params->transition-matrix params-gradient
					    states
					    restricted?))
		gs))
	      (classes-states-output-models-gradients
	       (map
		(lambda (params-gradient)
		 (params->states-output-models params-gradient
					       states
					       model-types
					       feature-lengths
					       bin-lengths))
		gs))
	      (foo (dtrace "writing some crap to files..." "")))
	(dtrace "magnitude of initial-distribution gradients:"
		(map magnitude classes-initial-state-distribution-gradients))
	(dtrace "magnitude of transition-matrix gradients:"
		(map (lambda (transition-matrix-row-gradients)
		      (map-vector magnitude transition-matrix-row-gradients))
		    classes-transition-matrix-gradients))
	(dtrace "magnitude of output-model gradients:"
		(map (lambda (class-states-output-models-gradients)
		      (map-vector
		       (lambda (state-features-models-gradients)
			(map-vector magnitude state-features-models-gradients))
		       class-states-output-models-gradients))
		     classes-states-output-models-gradients))
	(dtrace "magnitude of initial-distribution gradients*step-factor:"
		(map (lambda (x) (* x states-step-factor))
		     (map magnitude classes-initial-state-distribution-gradients)))
	(dtrace "magnitude of transition-matrix gradients*step-factor:"
		(map (lambda (transition-matrix-row-gradients)
		      (map-vector (lambda (x) (* x states-step-factor))
		      (map-vector magnitude transition-matrix-row-gradients)))
		    classes-transition-matrix-gradients))
	(dtrace "magnitude of output-model gradients*step-factor:"
		(map (lambda (class-states-output-models-gradients)
		      (map-vector
		       (lambda (state-features-models-gradients)
			(map-vector (lambda (x) (* x hog-step-factor))
				    (map-vector magnitude state-features-models-gradients)))
		       class-states-output-models-gradients))
		     classes-states-output-models-gradients))
	;;(write-object-to-file (map magnitude gs) "/tmp/gradient-magnitudes2.sc")
	;;(write-object-to-file gs "/tmp/gradients.sc")
	(let loop2 ((step-factor (case mode
				  ((hog-mode)
				   hog-step-factor)
				  ((states-mode)
				   states-step-factor)))
		    (inner-i 0))
	 (dtrace "inner i" inner-i)
	 (let* ((foo (dtrace "updating+normalizing parameters" ""))
		(new-classes-params
		 (map (lambda (g params)
		       ;(dtrace "gradient magnitude:" (magnitude g))
		       (case mode
			((hog-mode)
			 (v+ params (k*v step-factor (map-vector (lambda (x y)
								  (* x y))
								 output-mask g))))
			((states-mode)
			 (v+ params (k*v step-factor (map-vector (lambda (x y)
								  (* x y))
								 states-mask g))))))
		      gs classes-params))
		(new-classes-initial-state-distributions
		 (map (lambda (params initial-state-distribution-gradient)
		       (let* ((initial-state-distribution
			       (params->initial-state-distribution params states restricted?))
			      (updated (my-gt-discrete-distribution-update
					initial-state-distribution
					initial-state-distribution-gradient
					step-factor))
			      ;; (scaled (k*v step-factor initial-state-distribution-gradient))
			      ;; (smallest (minimum-vector scaled))
			      ;; (d (if (< smallest 0)
			      ;; 	     (- .1 smallest)
			      ;; 	     .1))
			      ;; (modified2
			      ;;  (vector-clip
			      ;; 	(normalize
			      ;; 	 (map-vector * initial-state-distribution
			      ;; 		     (v+ scaled
			      ;; 			 (make-vector
			      ;; 			  (vector-length initial-state-distribution) d))))))
			      ;; (updated (vector-clip
			      ;; 		(gt-discrete-distribution-update
			      ;; 		 initial-state-distribution
			      ;; 		 initial-state-distribution-gradient
			      ;; 		 d)))
			      )
			(if restricted?
			    (list->vector
			     (cons 1 (map-n (lambda (i) 1e-300) (- (vector-length initial-state-distribution) 1))))
			    (if (equal? mode 'states-mode)
			    ;; (begin
			    ;;  (dtrace "modified/updated:" (map-vector (lambda (a b) (if (= a b) 1 (/ a b))) modified2 updated))
			    ;;  updated)
			    updated
			    initial-state-distribution))))
		      classes-params
		      classes-initial-state-distribution-gradients))
		(new-classes-transition-matrices
		 (map (lambda (params transition-matrix-gradient)
		       (let* ((transition-matrix
			       (params->transition-matrix params states restricted?)))
			(map-vector
			 (lambda (row-params row-gradient r)
			  (let*
			    ((updated-row (my-gt-discrete-distribution-update
					row-params
					row-gradient
					step-factor))
			     (updated-row2 (if restricted?
					       (restrict-row updated-row r)
					       updated-row))
			     ;; (scaled (k*v step-factor row-gradient))
			     ;; (smallest (minimum-vector scaled))
			     ;; (d (if (< smallest 0)
			     ;; 	    (- .1 smallest)
			     ;; 	    .1))
			     ;; (modified2 (map-vector * row-params
			     ;; 			    (v+ scaled
			     ;; 				(make-vector (vector-length row-params) d))))
			     )
			   (if (equal? mode 'states-mode)
			       ;; (vector-clip
			       ;; 	(normalize
			       ;; 	 modified2))
			       (normalize updated-row2)
			       row-params)))
			 transition-matrix transition-matrix-gradient (list->vector (enumerate (vector-length transition-matrix))))))
		      classes-params
		      classes-transition-matrix-gradients))
		;; (new-classes-states-output-models
		;;  (map (lambda (new-params)
		;;        (normalize-states-output-models
		;; 	(params->states-output-models new-params states model-types feature-lengths bin-lengths)
		;; 	model-types))
		;;       new-classes-params))
		(new-classes-states-output-models
		 (map (lambda (class-params class-states-output-models-gradients)
		       (let ((states-output-models (params->states-output-models class-params
										 states
										 model-types
										 feature-lengths
										 bin-lengths)))
			(if (equal? mode 'hog-mode)
			    (normalize-states-output-models
			 (map-vector
			  (lambda (state-output-models state-output-models-gradients)
			   (map-vector
			    (lambda (output-model gradient model-type)
			     (cond
			      ((equal? model-type 'dot)
			       (unit (v+ output-model (k*v step-factor gradient))))
			      ((equal? model-type 'discrete)
			       (my-gt-discrete-distribution-update output-model
								   gradient
								   step-factor))
			      (else
			       (panic (format #f "model type ~a not yet supported" model-type)))))
			    state-output-models state-output-models-gradients model-types))
			  states-output-models class-states-output-models-gradients)
			 model-types)
			    states-output-models)))
		      classes-params classes-states-output-models-gradients))
		(new-classes-sigmoid-threshold
		 (map (lambda (new-params)
		       (params->sigmoid-threshold
			new-params states model-types feature-lengths bin-lengths))
		      new-classes-params))
		(normalized-new-classes-params
		 (map (lambda (new-initial-state-distribution
			       new-transition-matrix
			       new-states-hog-models
			       new-sigmoid-threshold)
		       (hmm-vectors->params new-initial-state-distribution
					    new-transition-matrix
					    new-states-hog-models
					    new-sigmoid-threshold
					    *sigmoid-b*))
		      new-classes-initial-state-distributions
		      new-classes-transition-matrices
		      new-classes-states-output-models
		      new-classes-sigmoid-threshold))
		(foo (dtrace "computing new objective..." ""))
		(new-objective
				       (cost-params-with-negatives;;detector-cost-params-c-smooth;;cost-params;;(svm-style-cost-params-c-smooth
					normalized-new-classes-params
					classes-preallocated-hmm-pointers
					preallocated-flattened-c-pointers
					classes-videos-fvvs
					classes-videos-c-fvvs
					classes-negative-c-fvvs
					states
					feature-types
					feature-lengths
					bin-lengths
					symmetric?
					restricted?)))
	  (cond ((or (and (< hog-step-factor 1e-10)
		      (< states-step-factor 1e-10)
		      (> (first new-objective) (first prev-objective)))
		     (and (< hog-step-factor 1e-10)
		      (< states-step-factor 1e-10)
		      (> (first new-objective) (- (first prev-objective) 1e-8))))
		 (loop hog-step-factor
		       states-step-factor
		       mode
		       classes-params
		       (+ i 100000)
		       prev-classes-initial-state-distributions
		       prev-classes-transition-matrices
		       prev-classes-states-output-models
		       prev-classes-sigmoid-threshold
		       prev-objective))
		((and (< inner-i 6)
		      (> (first new-objective) (first prev-objective)))
		 (loop2 (/ step-factor 2)
			(+ inner-i 1)))
		((equal? mode 'hog-mode)
		 (if (< (first new-objective) (first prev-objective))
		     (loop (* step-factor 1.5)
			   states-step-factor
			   'states-mode;;hog-mode
			   normalized-new-classes-params
			   (+ i 1)
			   new-classes-initial-state-distributions
			   new-classes-transition-matrices
			   new-classes-states-output-models
			   new-classes-sigmoid-threshold
			   new-objective)
		     (loop (/ step-factor 2)
			   states-step-factor
			   'states-mode
			   classes-params
			   i;;(+ i 1)
			   prev-classes-initial-state-distributions
			   prev-classes-transition-matrices
			   prev-classes-states-output-models
			   prev-classes-sigmoid-threshold
			   prev-objective)))
		((equal? mode 'states-mode)
		 (if (< (first new-objective) (first prev-objective))
		     (loop hog-step-factor
			   (* step-factor 1.5)
			   'hog-mode
			   normalized-new-classes-params
			   (+ i 1)
			   new-classes-initial-state-distributions
			   new-classes-transition-matrices
			   new-classes-states-output-models
			   new-classes-sigmoid-threshold
			   new-objective)
		     (loop hog-step-factor
			   (/ step-factor 2)
			   'hog-mode
			   classes-params
			   i;(+ i 1)
			   prev-classes-initial-state-distributions
			   prev-classes-transition-matrices
			   prev-classes-states-output-models
			   prev-classes-sigmoid-threshold
			   prev-objective)))
		(else
		 (panic "")
		 '())))))))))

(define (compute-initial-state-distribution-bar-logspace log-alphas-0-bar
							 states-log-output-probabilities-0)
 (map-n-vector
  (lambda (state-i)
   (+ (vector-ref log-alphas-0-bar state-i)
      (vector-ref states-log-output-probabilities-0 state-i)))
  (vector-length log-alphas-0-bar)))

(define (clean-compute-alphas-bar-logspace log-alphas
					   final-log-alphas-bar
					   states-log-output-probabilities
					   log-transition-matrix
					   states
					   frames)
 (list->vector
  (reverse
   (cons
   final-log-alphas-bar
   (let loop ((t (- frames 1))
	      (log-alphas-t+1-bar final-log-alphas-bar))
    (if (>= t 0)
	(let ((alphas-t-bar
	       (map-n-vector
		(lambda (i)
		 (reduce-vector my-add-exp
				(map-n-vector (lambda (j)
					       (+ (vector-ref log-alphas-t+1-bar j)
						  (matrix-ref states-log-output-probabilities j t)
						  (matrix-ref log-transition-matrix i j)))
					      states)
				minus-infinity))
		states)))
	 (cons alphas-t-bar
	       (loop (- t 1)
		     alphas-t-bar)))
	'()))))))

(define (compute-aij-bar-logspace log-alphas
				  log-alphas-bar
				  log-output-probabilities
				  states
				  frames)
 (map-n-vector
  (lambda (i)
   (map-n-vector
    (lambda (j)
     (exp (reduce-vector my-add-exp (map-n-vector
		       (lambda (t)
			(+ (matrix-ref log-output-probabilities j (+ t 1))
			   (matrix-ref log-alphas-bar (+ t 2) j)
			   (matrix-ref log-alphas t i)))
		       (- frames 1))
		    0)))
    states))
  states))

(define (compute-initial-vector-bar-logspace log-alphas
					     log-alphas-bar
					     log-output-probabilities
					     states)

 (map-n-vector
  (lambda (i)
   (exp (+ (matrix-ref log-alphas-bar 0 i)
	   (matrix-ref log-output-probabilities i 0))))
  states))

(define (compute-initial-vector-bar2-logspace log-alphas
					      log-alphas-bar
					      log-output-probabilities
					      states)

 (map-n-vector
  (lambda (i)
   (exp (+ (matrix-ref log-alphas-bar 1 i)
	   (matrix-ref log-output-probabilities i 0))))
  states))

(define (compute-btj-bar-logspace log-alphas
				  log-alphas-bar
				  log-initial-vector
				  log-transition-matrix
				  states
				  frames)
  (map-n-vector
  (lambda (t)
   (if (= t 0)
       (map-n-vector
	(lambda (j)
	 (exp (+ (matrix-ref log-alphas-bar 1 j)
		 (vector-ref log-initial-vector j))))
	states)
       (map-n-vector
	(lambda (j)
	 (exp (+ (matrix-ref log-alphas-bar (+ t 1) j)
		 (reduce-vector my-add-exp (map-n-vector (lambda (i)
							  (+ (matrix-ref log-transition-matrix i j)
							     (matrix-ref log-alphas (- t 1) i)))
							 states)
				0))))
	states)))
 frames))



(define (list-of-lists->c-pointer-to-pointers lol)
 (let* ((c-p1 (malloc (* c-sizeof-long (length lol))))
	(list-of-pointers
	 (map (lambda (l)
		       (let* ((c-p (malloc (* c-sizeof-double (length l))))
			      (c-p (list->c-inexact-array c-p l c-sizeof-double #t)))
			c-p))
		      lol)))
  (list->c-exact-array c-p1 list-of-pointers c-sizeof-long #t)))

(define (matrix->c-pointer-to-pointers matrix type signed?)
 (let* ((c-p1 (malloc (* c-sizeof-long (vector-length matrix))))
	(vector-of-pointers
	 (map-vector (lambda (v)
		      (let* ((c-p (malloc (* (case type
					      ((double) c-sizeof-double)
					      ((int) c-sizeof-int))
					     (vector-length v))
					    ))
			     (c-p (case type
				   ((double) (vector->c-inexact-array c-p v c-sizeof-double signed?))
				   ((int) (vector->c-exact-array c-p v c-sizeof-int signed?)))
				  ))
		       c-p))
	      matrix)))
  (vector->c-exact-array c-p1 vector-of-pointers c-sizeof-long #f)))

(define (vector-of-matrices->c-pointer-to-pointers-to-pointers vector-of-matrices type signed?)
 (let* ((matrix-pointers (map-vector
			  (lambda (m)
			   (matrix->c-pointer-to-pointers m type signed?))
			  vector-of-matrices))
	(p (malloc (* c-sizeof-double (vector-length vector-of-matrices)))))
(vector->c-exact-array p matrix-pointers c-sizeof-long #f)))

(define (matrix->c-pointer-to-pointers-and-vector-of-pointers matrix type signed?)
 (let* ((c-p1 (malloc (* c-sizeof-long (vector-length matrix))))
	(vector-of-pointers
	 (map-vector (lambda (v)
		      (let* ((c-p (malloc (* (case type
					      ((double) c-sizeof-double)
					      ((int) c-sizeof-int))
					     (vector-length v))))
			     (c-p (case type
				   ((double) (vector->c-inexact-array c-p v c-sizeof-double signed?))
				   ((int) (vector->c-exact-array c-p v c-sizeof-int signed?)))))
		       c-p))
	      matrix)))
  (list (vector->c-exact-array c-p1 vector-of-pointers c-sizeof-long #t) vector-of-pointers)))

(define (vector-of-matrices->c-pointer-to-pointers-to-pointers-and-vectors-of-pointers vector-of-matrices type signed?)
 (let* ((matrix-pointers-with-pointer-vectors
	 (map-vector (lambda (m)
		      (matrix->c-pointer-to-pointers-and-vector-of-pointers m type signed?))
		     vector-of-matrices))
	(matrix-pointers (map-vector first matrix-pointers-with-pointer-vectors))
	(pointer-vectors (map-vector second matrix-pointers-with-pointer-vectors))
	(p (malloc (* c-sizeof-long (vector-length vector-of-matrices)))))
(list (vector->c-exact-array p matrix-pointers c-sizeof-long #f)
      pointer-vectors)))

(define (copy-vector-of-matrices-into-preallocated-pointers vector-of-matrices pointer-matrix type signed?)
 (map-vector
  (lambda (matrix pointer-row)
   (map-vector
    (lambda (row pointer)
     (case type
      ((double) (vector->c-inexact-array pointer row c-sizeof-double signed?))
       ((int) (vector->c-exact-array pointer row c-sizeof-long signed?))))
    matrix pointer-row))
  vector-of-matrices pointer-matrix))

(define (matrix-of-matrices->c-pointer-to-pointers-to-pointers-to-pointers matrix-of-matrices type signed?)
 (let* ((matrix-pointers (map-vector
			  (lambda (v)
			   (vector-of-matrices->c-pointer-to-pointers-to-pointers v type signed?))
			  matrix-of-matrices))
	(p (malloc (* c-sizeof-long (vector-length matrix-of-matrices)))))
(vector->c-exact-array p matrix-pointers c-sizeof-long #f)))

(define (vector-of-matrices-of-matrices->c-5D-array v type signed?)
 (let* ((matrix-pointers (map-vector
			  (lambda (m)
			   (matrix-of-matrices->c-pointer-to-pointers-to-pointers-to-pointers
			    m type signed?))
			  v))
	(p (malloc (* c-sizeof-long (vector-length v)))))
(vector->c-exact-array p matrix-pointers c-sizeof-long #t)))

(define (matrix-of-matrices-of-matrices->c-6D-array v type signed?)
 (let* ((matrix-pointers (map-vector
			  (lambda (m)
			   (vector-of-matrices-of-matrices->c-5D-array m type signed?))
			  v))
	(p (malloc (* c-sizeof-long (vector-length v)))))
(vector->c-exact-array p matrix-pointers c-sizeof-long #t)))

(define (allocate-n-by-m-c-pointer-to-pointers n m)
 (let* ((c-p (malloc (* c-sizeof-long n)))
	(list-of-pointers
	 (map-n (lambda (i)
		 (malloc (* c-sizeof-double m)))
		n)))
  (list->c-exact-array c-p list-of-pointers c-sizeof-long #t)))

(define hog-hmm-derivative-in-c
 (c-function double
	     ("hog_hmm_derivative_in_c"
	      int
	      int
	      int
	      pointer
	      pointer
	      pointer
	      pointer
	      pointer
	      pointer
	      pointer
	      pointer
	      double
	      double
	      int
	      pointer
	      int
	      pointer
	      pointer)))

(define hog-hmm-derivative-in-c-with-duplicates
 #f)
 ;; (c-function double
 ;; 	     ("hog_hmm_derivative_in_c_with_duplicates"
 ;; 	      int
 ;; 	      int
 ;; 	      int
 ;; 	      pointer
 ;; 	      pointer
 ;; 	      pointer
 ;; 	      pointer
 ;; 	      pointer
 ;; 	      pointer
 ;; 	      pointer
 ;; 	      pointer
 ;; 	      double
 ;; 	      double
 ;; 	      int
 ;; 	      pointer
 ;; 	      int
 ;; 	      pointer
 ;; 	      int)))

(define threaded-hog-hmm-derivative-in-c
 (c-function void
	     ("threaded_hog_hmm_derivative_in_c"
	      int
	      int
	      int
	      int
	      int
	      pointer
	      double
	      double
	      pointer pointer pointer pointer
	      pointer pointer pointer pointer
	      pointer pointer pointer
	      int
	      pointer
	      pointer)))

(define hog-hmm-tracker-in-c
 (c-function int
	     ("hog_hmm_tracker"
	      pointer
	      int
	      int
	      int
	      int
	      pointer
	      pointer
	      pointer
	      pointer
	      pointer
	      pointer
	      pointer
	      double
	      double
	      double
	      double
	      double
	      double
	      double
	      int
	      double
	      int int int int
	      double
	      int
	      int
	      pointer
	      pointer
	      pointer)))

(define c-vector-dot (c-function double ("vector_dot" int pointer pointer)))

(define (c-dot-wrapper c-v1 c-v2 v1 v2)
 (let* ((c-v1 (vector->c-inexact-array c-v1
				       v1
				       c-sizeof-double
				       #t))
	(c-v2 (vector->c-inexact-array c-v2
				       v2
				       c-sizeof-double
				       #t))
	(result (c-vector-dot (vector-length v1)
			      c-v1
			      c-v2)))
  result))

(define (hog-hmm-derivative-c-wrapper initial-state-vector
				      transition-matrix
				      fvs
				      states-output-models
				      feature-types
				      feature-lengths
				      bin-lengths
				      sigmoid_a
				      sigmoid_b
				      compute-gradient?)
 (let* ((states (vector-length initial-state-vector))
	(frames (vector-length (x fvs)))
	(hog-length (vector-length (x states-output-models)))
	(number-of-features (vector-length feature-types))
	(model-types (map-vector model-type feature-types))
	(model-lengths (compute-state-output-models-lengths model-types feature-lengths bin-lengths))
	(state-output-model-length
	 (reduce-vector + model-lengths
			0))
	(total-output-models-length (* states state-output-model-length))
	(gradient-length (+ states (* states states) total-output-models-length 2))
	(c-feature-types (malloc (* c-sizeof-int number-of-features)))
	(c-feature-types (vector->c-exact-array c-feature-types
						(map-vector model-type->int model-types)
						c-sizeof-int
						#t))
	(c-model-types (malloc (* c-sizeof-int number-of-features)))
	(c-model-types (vector->c-exact-array c-model-types
						(map-vector model-type->int model-types)
						c-sizeof-int
						#t))
	(c-feature-lengths (malloc (* c-sizeof-int number-of-features)))
	(c-feature-lengths (vector->c-exact-array c-feature-lengths
						  feature-lengths
						  c-sizeof-int
						  #t))
	(c-bin-lengths (malloc (* c-sizeof-int number-of-features)))
	(c-bin-lengths (vector->c-exact-array c-bin-lengths
					      bin-lengths
					      c-sizeof-int
					      #t))
	(c-initial-state-vector (malloc (* c-sizeof-double states)))
	(c-initial-state-vector (vector->c-inexact-array c-initial-state-vector
							 initial-state-vector
							 c-sizeof-double
							 #t))
	(c-transition-matrix (malloc (* c-sizeof-double (* states states))))
	(c-transition-matrix (vector->c-inexact-array c-transition-matrix
						      (reduce-vector
						       vector-append transition-matrix `#())
						      c-sizeof-double
						      #t))
	(c-fvs (matrix-of-matrices->c-pointer-to-pointers-to-pointers-to-pointers
		(features->matrix-of-matrices fvs feature-types) 'double #t))
	(c-gradient (malloc (* c-sizeof-double gradient-length)))
	(c-states-output-models (vector-of-matrices->c-pointer-to-pointers-to-pointers states-output-models 'double #t))
	(likelihood (hog-hmm-derivative-in-c states
					      frames
					      number-of-features
					      c-feature-types
					      c-model-types
					      c-feature-lengths
					      c-bin-lengths
					      c-initial-state-vector
					      c-transition-matrix
					      c-fvs
					      c-states-output-models
					      sigmoid_a
					      sigmoid_b
					      (if compute-gradient? 1 0)
					      c-gradient
					      (if #f 1 0)
					      0
					      0))
	(gradient (if compute-gradient? (c-inexact-array->vector c-gradient c-sizeof-double gradient-length #t)
		      #f)))
	(free c-feature-lengths)
	(free c-feature-types)
	(free c-bin-lengths)
	(free c-initial-state-vector)
	(free c-transition-matrix)
	;; memory leak
	;;need to free the c-output-models and c-fvs, but don't have their pointers
	;; (vector initial-state-gradient
	;; 	transition-matrix-gradient
	;; 	states-output-models-gradient)
  (vector likelihood gradient)))

(define (fvs->c-fvs fvs feature-types)
 (dtrace "converting video fvs to c arrays:" #f)
 (matrix-of-matrices->c-pointer-to-pointers-to-pointers-to-pointers
		(features->matrix-of-matrices fvs feature-types)
		'double
		#t))


;; (define (scheme-structure->c-structure s type signed?)
;;  (cond ((list? s)
;; 	)
;;        ((vector? s)
;; 	)
;;        (else
;; 	(panic "argument must be a list or vector"))

(define (preallocate-c-hmm-arrays states
				  number-of-features
				  states-output-models
				  gradient-length)
 (let* ((c-feature-types (malloc (* c-sizeof-int number-of-features)))
	(c-model-types (malloc (* c-sizeof-int number-of-features)))
	(c-feature-lengths (malloc (* c-sizeof-int number-of-features)))
	(c-bin-lengths (malloc (* c-sizeof-int number-of-features)))
	(c-initial-state-vector (malloc (* c-sizeof-double states)))
	(c-transition-matrix (malloc (* c-sizeof-double (* states states))))
	(c-gradient (malloc (* c-sizeof-double gradient-length)))
	(c-states-output-models-and-pointers (vector-of-matrices->c-pointer-to-pointers-to-pointers-and-vectors-of-pointers states-output-models 'double #t)))
  (vector c-feature-types
	  c-model-types
	  c-feature-lengths
	  c-bin-lengths
	  c-initial-state-vector
	  c-transition-matrix
	  c-gradient
	  c-states-output-models-and-pointers
	  )))

(define (preallocate-flattened-c-pointers number-of-classes
					  classes-videos-x
					  gradient-length)
 (let* ((length (dtrace "preallocation length:"(* number-of-classes
		   (length (join classes-videos-x)))))
	(flattened-c-feature-types (malloc (* c-sizeof-long length)))
	(flattened-c-model-types (malloc (* c-sizeof-long length)))
	(flattened-c-feature-lengths (malloc (* c-sizeof-long length)))
	(flattened-c-bin-lengths (malloc (* c-sizeof-long length)))
	(flattened-c-initial-state-vector (malloc (* c-sizeof-long length)))
	(flattened-c-transition-matrix (malloc (* c-sizeof-long length)))
	(flattened-c-state-output-models (malloc (* c-sizeof-long length)))
	(flattened-c-fvs (malloc (* c-sizeof-long length)))
	(flattened-c-frames (malloc (* c-sizeof-int length)))
	(flattened-c-likelihood (malloc (* c-sizeof-double length)))
	(flattened-gradients (map-n-vector
			      (lambda (i)
			       (map-n-vector
				(lambda (j)
				 0)
				gradient-length))
			      length))
	(flattened-c-gradient (matrix->c-pointer-to-pointers flattened-gradients 'double #t))
	(flattened-c-weights (malloc (* c-sizeof-double length)))
	(flattened-c-hmm-indeces (malloc (* c-sizeof-int length)))
	(final-gradients (map-n-vector
			      (lambda (i)
			       (map-n-vector
				(lambda (j)
				 0)
				gradient-length))
			      number-of-classes))
	(final-c-gradients (matrix->c-pointer-to-pointers final-gradients 'double #t)))
  (vector flattened-c-feature-types
	flattened-c-model-types
	flattened-c-feature-lengths
	flattened-c-bin-lengths
	flattened-c-initial-state-vector
	flattened-c-transition-matrix
	flattened-c-state-output-models
	flattened-c-fvs
	flattened-c-frames
	flattened-c-likelihood
	flattened-c-gradient
	flattened-c-weights
	flattened-c-hmm-indeces
	final-c-gradients)))

(define (preallocate-flattened-c-pointers-with-negatives number-of-classes
							 classes-videos-x
							 classes-negative-videos-x
							 gradient-length)
 (let* ((length (dtrace "preallocation length:"
			(+ (* number-of-classes
			   (length (join classes-videos-x)))
			   (reduce + (map length classes-negative-videos-x) 0))))
	(flattened-c-feature-types (malloc (* c-sizeof-long length)))
	(flattened-c-model-types (malloc (* c-sizeof-long length)))
	(flattened-c-feature-lengths (malloc (* c-sizeof-long length)))
	(flattened-c-bin-lengths (malloc (* c-sizeof-long length)))
	(flattened-c-initial-state-vector (malloc (* c-sizeof-long length)))
	(flattened-c-transition-matrix (malloc (* c-sizeof-long length)))
	(flattened-c-state-output-models (malloc (* c-sizeof-long length)))
	(flattened-c-fvs (malloc (* c-sizeof-long length)))
	(flattened-c-frames (malloc (* c-sizeof-int length)))
	(flattened-c-likelihood (malloc (* c-sizeof-double length)))
	(flattened-gradients (map-n-vector
			      (lambda (i)
			       (map-n-vector
				(lambda (j)
				 0)
				gradient-length))
			      length))
	(flattened-c-gradient (matrix->c-pointer-to-pointers flattened-gradients 'double #t))
	(flattened-c-weights (malloc (* c-sizeof-double length)))
	(flattened-c-hmm-indeces (malloc (* c-sizeof-int length)))
	(final-gradients (map-n-vector
			      (lambda (i)
			       (map-n-vector
				(lambda (j)
				 0)
				gradient-length))
			      number-of-classes))
	(final-c-gradients (matrix->c-pointer-to-pointers final-gradients 'double #t)))
  (vector flattened-c-feature-types
	flattened-c-model-types
	flattened-c-feature-lengths
	flattened-c-bin-lengths
	flattened-c-initial-state-vector
	flattened-c-transition-matrix
	flattened-c-state-output-models
	flattened-c-fvs
	flattened-c-frames
	flattened-c-likelihood
	flattened-c-gradient
	flattened-c-weights
	flattened-c-hmm-indeces
	final-c-gradients)))


(define (preallocated-hog-hmm-derivative-c-wrapper initial-state-vector
						   transition-matrix
						   fvs
						   states-output-models
						   feature-types
						   feature-lengths
						   bin-lengths
						   sigmoid_a
						   sigmoid_b
						   c-fvs
						   c-feature-types
						   c-model-types
						   c-feature-lengths
						   c-bin-lengths
						   c-initial-state-vector
						   c-transition-matrix
						   c-gradient
						   c-states-output-models-and-pointers
						   compute-gradient?)
 (let* ((states (vector-length initial-state-vector))
	(frames (y c-fvs));;(vector-length (x fvs)))
	(hog-length (vector-length (x states-output-models)))
	(number-of-features (vector-length feature-types))
	(model-types (map-vector model-type feature-types))
	(model-lengths (compute-state-output-models-lengths model-types feature-lengths bin-lengths))
	(state-output-model-length
	 (reduce-vector + model-lengths
			0))
	(total-output-models-length (* states state-output-model-length))
	(gradient-length (+ states (* states states) total-output-models-length 2))
	(c-feature-types (vector->c-exact-array c-feature-types
						(map-vector model-type->int model-types)
						c-sizeof-int
						#t))
	(c-model-types (vector->c-exact-array c-model-types
						(map-vector model-type->int model-types)
						c-sizeof-int
						#t))
	(c-feature-lengths (vector->c-exact-array c-feature-lengths
						  feature-lengths
						  c-sizeof-int
						  #t))
	(c-bin-lengths (vector->c-exact-array c-bin-lengths
					      bin-lengths
					      c-sizeof-int
					      #t))
	(c-initial-state-vector (vector->c-inexact-array c-initial-state-vector
							 initial-state-vector
							 c-sizeof-double
							 #t))
	(c-transition-matrix (vector->c-inexact-array c-transition-matrix
						      (reduce-vector
						       vector-append transition-matrix `#())
						      c-sizeof-double
						      #t))
	(c-states-output-models (first c-states-output-models-and-pointers))
	(foo-c-states-output-models (copy-vector-of-matrices-into-preallocated-pointers
				     states-output-models
				     (second c-states-output-models-and-pointers)
				     'double
				     #t))
	(likelihood (hog-hmm-derivative-in-c states
					      frames
					      number-of-features
					      c-feature-types
					      c-model-types
					      c-feature-lengths
					      c-bin-lengths
					      c-initial-state-vector
					      c-transition-matrix
					      (x c-fvs)
					      c-states-output-models
					      sigmoid_a
					      sigmoid_b
					      (if compute-gradient? 1 0)
					      c-gradient
					      (if #f 1 0)
					      0
					      0))
	(gradient (if compute-gradient? (c-inexact-array->vector c-gradient c-sizeof-double gradient-length #t)
		      #f)))
  (vector likelihood gradient)))

(define (copy-hmm-data-into-precallocated-c-pointers initial-state-vector
						     transition-matrix
						     states-output-models
						     feature-types
						     feature-lengths
						     bin-lengths
						     c-feature-types
						     c-model-types
						     c-feature-lengths
						     c-bin-lengths
						     c-initial-state-vector
						     c-transition-matrix
						     c-gradient
						     c-states-output-models-and-pointers)
 (let* ((model-types (map-vector model-type feature-types))
	(c-feature-types (vector->c-exact-array c-feature-types
						(map-vector model-type->int model-types)
						c-sizeof-int
						#t))
	(c-model-types (vector->c-exact-array c-model-types
					      (map-vector model-type->int model-types)
					      c-sizeof-int
					      #t))
	(c-feature-lengths (vector->c-exact-array c-feature-lengths
						  feature-lengths
						  c-sizeof-int
						  #t))
	(c-bin-lengths (vector->c-exact-array c-bin-lengths
					      bin-lengths
					      c-sizeof-int
					      #t))
	(c-initial-state-vector (vector->c-inexact-array c-initial-state-vector
							 initial-state-vector
							 c-sizeof-double
							 #t))
	(c-transition-matrix (vector->c-inexact-array c-transition-matrix
						      (reduce-vector
						       vector-append transition-matrix `#())
						      c-sizeof-double
						      #t))
	(c-states-output-models (first c-states-output-models-and-pointers))
	(foo-c-states-output-models (copy-vector-of-matrices-into-preallocated-pointers
				     states-output-models
				     (second c-states-output-models-and-pointers)
				     'double
				     #t)))
  #f))

(define *compute-gammas?* #f)

(define (faster-preallocated-hog-hmm-derivative-c-wrapper initial-state-vector
							  transition-matrix
							  fvs
							  states-output-models
							  feature-types
							  feature-lengths
							  bin-lengths
							  sigmoid_a
							  sigmoid_b
							  c-fvs
							  c-feature-types
							  c-model-types
							  c-feature-lengths
							  c-bin-lengths
							  c-initial-state-vector
							  c-transition-matrix
							  c-gradient
							  c-states-output-models-and-pointers
							  compute-gradient?)
 (let* ((k 1)
	(states (vector-length initial-state-vector))
	(frames (y c-fvs));; (vector-length (x fvs)))
	(hog-length (vector-length (x states-output-models)))
	(number-of-features (vector-length feature-types))
	(model-types (map-vector model-type feature-types))
	(model-lengths (compute-state-output-models-lengths model-types feature-lengths bin-lengths))
	(state-output-model-length
	 (reduce-vector + model-lengths
			0))
	(total-output-models-length (* states state-output-model-length))
	(gradient-length (+ states (* states states) total-output-models-length 2))
	(c-states-output-models (first c-states-output-models-and-pointers))
	(dummy-gammas (if *compute-gammas?*
			  (map-n-vector
			   (lambda (t)
			    (map-n-vector identity (* states k)))
			   frames)
			  #f))
	(c-gammas (if *compute-gammas?* (matrix->c-pointer-to-pointers
				       dummy-gammas 'double #t) #f))
	(c-lrs (if *compute-gammas?*
		   (vector-of-matrices->c-pointer-to-pointers-to-pointers
		    (map-n-vector
		     (lambda (i)
		      (transpose dummy-gammas))
		     number-of-features)
		    'int #t)
		   ;; (matrix->c-pointer-to-pointers
		   ;; 		       (transpose dummy-gammas) 'int #t)
		   #f))
	(likelihood (if *minimum-state-duration*
			(hog-hmm-derivative-in-c-with-duplicates
		     states
					      frames
					      number-of-features
					      c-feature-types
					      c-model-types
					      c-feature-lengths
					      c-bin-lengths
					      c-initial-state-vector
					      c-transition-matrix
					      (x c-fvs)
					      c-states-output-models
					      sigmoid_a
					      sigmoid_b
					      (if compute-gradient? 1 0)
					      c-gradient
					      (if *compute-gammas?* 1 0)
					      (if *compute-gammas?* c-gammas 0)
					      *minimum-state-duration*
					      )
			(hog-hmm-derivative-in-c;-with-duplicates
		     states
					      frames
					      number-of-features
					      c-feature-types
					      c-model-types
					      c-feature-lengths
					      c-bin-lengths
					      c-initial-state-vector
					      c-transition-matrix
					      (x c-fvs)
					      c-states-output-models
					      sigmoid_a
					      sigmoid_b
					      (if compute-gradient? 1 0)
					      c-gradient
					      (if *compute-gammas?* 1 0)
					      (if *compute-gammas?* c-gammas 0)
					      (if *compute-gammas?* c-lrs 0)
					      )))
	(gradient (if compute-gradient? (c-inexact-array->vector c-gradient c-sizeof-double gradient-length #t)
		      #f))
	(gammas-ptrs (if *compute-gammas?*
		    (c-exact-array->vector c-gammas c-sizeof-long frames #t)
		    #f))
	(gammas (if *compute-gammas?*
		    (dtrace "gammas"
			    (map-vector
		     (lambda (ptr)
		      (c-inexact-array->vector ptr c-sizeof-double (* states k) #t))
		     gammas-ptrs))))
	(lr-fptrs (if *compute-gammas?*
		    (c-exact-array->vector c-lrs c-sizeof-long number-of-features #t)
		    #f))
	(lr-ptrs (if *compute-gammas?*
		    (map-vector
		     (lambda (fptr)
		      (c-exact-array->vector fptr c-sizeof-long states #t))
		     lr-fptrs)
		    #f))
	(lrs (if *compute-gammas?*
		    (dtrace
		     "lrs"
		     (map-vector
		      (lambda (ptrs)
		       (map-vector
			(lambda (ptr)
			 (c-exact-array->vector ptr c-sizeof-int frames #t))
			ptrs))
		      lr-ptrs)))))

  (when *compute-gammas?*
   (map-vector
    (lambda (ptr) (free ptr))
    gammas-ptrs)
   ;; (for-each-vector
   ;;  (lambda (ptrs)
   ;;   (for-each-vector
   ;;    (lambda (ptr)
   ;;     (free ptr))
   ;;    ptrs))
   ;;  lr-ptrs)
   ;; (for-each-vector
   ;;  (lambda (fptr)
   ;;   (free fptr))
   ;;  lr-fptrs)
   (free c-gammas)
   ;;(free c-lrs)
   )
  (vector likelihood gradient gammas lrs))
 )



(define (threaded-hog-hmm-derivative-c-wrapper number-of-classes
					       states
					       gradient-length
					       flattened-length
					       preallocated-flattened-c-pointers
					       number-of-features
					       sigmoid-a
					       sigmoid-b
					       compute-gradient?
					       )

 (let* ((k 3)
	(flattened-c-feature-types (vector-ref preallocated-flattened-c-pointers 0))
	(flattened-c-model-types (vector-ref preallocated-flattened-c-pointers 1))
	(flattened-c-feature-lengths (vector-ref preallocated-flattened-c-pointers 2))
	(flattened-c-bin-lengths (vector-ref preallocated-flattened-c-pointers 3))
	(flattened-c-initial-state-vector (vector-ref preallocated-flattened-c-pointers 4))
	(flattened-c-transition-matrix (vector-ref preallocated-flattened-c-pointers 5))
	(flattened-c-state-output-models (vector-ref preallocated-flattened-c-pointers 6))
	(flattened-c-fvs (vector-ref preallocated-flattened-c-pointers 7))
	(flattened-c-frames (vector-ref preallocated-flattened-c-pointers 8))
	(flattened-c-likelihood (vector-ref preallocated-flattened-c-pointers 9))
	(flattened-c-gradient (vector-ref preallocated-flattened-c-pointers 10))
	(flattened-c-weights (vector-ref preallocated-flattened-c-pointers 11))
	(flattened-c-hmm-indeces (vector-ref preallocated-flattened-c-pointers 12))
	(c-output-gradients (vector-ref preallocated-flattened-c-pointers 13))



	;; (dummy-gammas (if *compute-gammas?*
	;; 		  (map-n-vector
	;; 		   (lambda (t)
	;; 		    (map-n-vector identity (* states k)))
	;; 		   frames)
	;; 		  #f))
	;; (c-gammas (if *compute-gammas?* (matrix->c-pointer-to-pointers
	;; 			       dummy-gammas 'double #t) #f))
	(foo
	 (threaded-hog-hmm-derivative-in-c
	  states
	  number-of-features
	  flattened-length
	  gradient-length
	  number-of-classes
	  flattened-c-hmm-indeces
	  sigmoid-a
	  sigmoid-b
	  flattened-c-feature-types
	  flattened-c-model-types
	  flattened-c-feature-lengths
	  flattened-c-bin-lengths
	  flattened-c-initial-state-vector
	  flattened-c-transition-matrix
	  flattened-c-state-output-models
	  flattened-c-fvs
	  flattened-c-frames
	  flattened-c-likelihood
	  flattened-c-gradient
	  (if compute-gradient? 1 0)
	  flattened-c-weights
	  c-output-gradients))
	(flattened-likelihoods (c-inexact-array->list flattened-c-likelihood c-sizeof-double flattened-length #t))
	(flattened-gradient-pointers
	 (if #f;;compute-gradient?
	     (c-exact-array->list flattened-c-gradient c-sizeof-long flattened-length #f)
	     #f))
	(flattened-gradients
	 (if #f;;compute-gradient?
	     (map
	      (lambda (ptr)
	       (c-inexact-array->vector ptr c-sizeof-double gradient-length #t))
	      flattened-gradient-pointers)
	     #f))
	(final-gradients-pointers
	 (if compute-gradient?
	     (c-exact-array->list c-output-gradients c-sizeof-long number-of-classes #f)
	     #f))
	(final-gradients
	 (if compute-gradient?
	     (map (lambda (ptr)
		   (c-inexact-array->vector ptr c-sizeof-double gradient-length #t))
		  final-gradients-pointers)
	     #f)))


  (vector flattened-likelihoods flattened-gradients final-gradients)))

;;--- most recent setup
;;(define states 3) (define frames 4) (define width 120) (define hog-length (* 36 (sqr (- (/ width 8) 2)))) (define feature-types (vector 'hog 'aspect-ratio)) (define model-types (map-vector model-type feature-types)) (define feature-lengths (vector hog-length 1)) (define bin-lengths (vector #f 10)) (define initial-matrix (normalize (map-n-vector (lambda (i) (random-real)) states))) (define transition-matrix (map-n-vector (lambda (i) (normalize (map-n-vector (lambda (j)  (random-real)) states))) states)) (define states-hog-models (map-n-vector (lambda (i) (unit (map-n-vector (lambda (j) (random-real)) hog-length))) states)) (define states-output-models (map-vector (lambda (s) (vector s (normalize (map-n-vector (lambda (i) (random-real)) 10)))) states-hog-models))  (define data (map-vector (lambda (f) (subvector f 0 85)) (extract-features "/aux/dpbarret/upgraded-purdue-mindseye-release-t19jul2011/simple-motions/classification-videos/long-multitask-trainset-bend-001030-001120" "manual2" 0 width #t (vector->list feature-types))))  (define params (hmm-vectors->params initial-matrix transition-matrix states-output-models 0 10))  (define barbaz (time "manual~a:" (lambda () (define foo (manual-likelihood-gradient initial-matrix transition-matrix data states-output-models feature-types feature-lengths bin-lengths))))) (define ad-gradient (single-video-cost-gradient-params states params data model-types feature-lengths bin-lengths #t #f)) (define ad2 (AD-likelihood-gradient initial-matrix transition-matrix data states-hog-models))
;;--- most recent non-preallocated setup
;;(define c-gradient (time "c-time:~a" (lambda () (hog-hmm-derivative-c-wrapper initial-matrix transition-matrix data states-output-models (vector 'hog 'aspect-ratio) (vector hog-length 1) (vector 0 10) 0 10))))

;;--most recent pre-allocated setup:
;;(define gradient-length (hmm-vectors->params-length initial-matrix transition-matrix states-output-models)) (define c-fvs (fvs->c-fvs data feature-types)) (define preallocated-pointers (preallocate-c-hmm-arrays states (vector-length feature-lengths) states-output-models gradient-length)) (define gradient-pre (time "gradient pre time:~a" (lambda () (preallocated-hog-hmm-derivative-c-wrapper initial-matrix transition-matrix data states-output-models (vector 'hog 'aspect-ratio) (vector hog-length 1) (vector 0 10) 0 10 c-fvs (vector-ref preallocated-pointers 0) (vector-ref preallocated-pointers 1) (vector-ref preallocated-pointers 2) (vector-ref preallocated-pointers 3) (vector-ref preallocated-pointers 4) (vector-ref preallocated-pointers 5) (vector-ref preallocated-pointers 6) (vector-ref preallocated-pointers 7) ))))

(define (read-last-multiclass-hmms directory
			      note
			      set
			      step-size
			      restricted?)
 (let loop ((i 0)
	    (last #f))
  (let ((filename (dtrace "file:"
			  (if restricted?
		      (format #f "~a/multiclass-~a-set~a-step-size-~a-~a-restricted.sc" directory note set step-size i)
		      (format #f "~a/multiclass-~a-set~a-step-size-~a-~a.sc" directory note set step-size i)))))
  (if (file-exists? filename)
      (loop (+ i 1)
	    filename)
      (read-object-from-file last)))))

(define c-sentence-tracker
 (c-function double
	      ("sentence_tracker"
	       unsigned unsigned unsigned unsigned unsigned unsigned unsigned
	       pointer pointer pointer pointer pointer pointer pointer pointer
	       pointer pointer pointer pointer pointer pointer pointer pointer
	       pointer pointer pointer pointer pointer)))


(define (sentence-tracker-as-event-tracker T ;;frames
					   ;;L:tracks=1
					   O ;;#classes
					   I1 ;;#single detection features
					   I2 ;;#detection-pair features
					   ;;E #entries --- 1
					   ;; W, #words --- 1
					   K ;;#states for each entry
					   ;;R #roles for each entry --- {1}
					   bigPhi1 ;;#bins for each single-detection feature
					   bigPhi2 ;;#bins for each detection-pair feature
					   b ;;initial-state P for each entry,state
					   ;;double **bnew,//NULL
					   a ;;transition P for entry,state1,state2
					   ;;anew,//NULL
					   z ;;final state P for entry,state
					   ;;znew,//NULL
					   c ;;output P for entry,state,feature,feature-value
					   ;;cnew,//NULL
					   J ;;#detections for frame,class
					   f ;;detection score for frame,class,detection
					   g ;;coherency score for frame,class,det1 in t-1,det2 in t
					   phi1 ;;feature value for frame,class,detection,feature
					   phi2 ;;feature value for frame,class0,detection0,class1,detection1,feature
					   ;;e //entry index for each word --- {0}
					   ;;unsigned int **l,//track for word,role {{0}}
					   ;;unsigned int *otracks,//class index for each track --- output, preallocated
					   ;;unsigned int **jtracks // detection index for track,frame --- output, preallocated
					   )
 (let* ((c-K (malloc (* c-sizeof-int 1)))
	(c-K (vector->c-exact-array c-K
				    K
				    c-sizeof-int
				    #f))
	(c-R (malloc (* c-sizeof-int 1)))
	(c-R (vector->c-exact-array c-R
				    (vector 1)
				    c-sizeof-int
				    #f))
	(c-bigPhi1 (malloc (* c-sizeof-int I1)))
	(c-bigPhi1 (vector->c-exact-array c-bigPhi1
				    bigPhi1
				    c-sizeof-int
				    #f))
	(c-bigPhi2 (malloc (* c-sizeof-int I2)))
	(c-bigPhi2 (vector->c-exact-array c-bigPhi2
				    bigPhi2
				    c-sizeof-int
				    #f))
	(foo (dtrace "1" '()))
	 (c-b (matrix->c-pointer-to-pointers b 'double #t)) ;;memory leak
	 (c-a (vector-of-matrices->c-pointer-to-pointers-to-pointers a 'double #t)) ;;memory leak
	 (c-z (matrix->c-pointer-to-pointers z 'double #t)) ;;memory leak
	 (c-c (matrix-of-matrices->c-pointer-to-pointers-to-pointers-to-pointers c 'double #t)) ;;memory leak
	 (foo (dtrace "2" '()))
	 (c-J (matrix->c-pointer-to-pointers J 'int #f)) ;;memory leak
	 (c-f (vector-of-matrices->c-pointer-to-pointers-to-pointers f 'double #t)) ;;memory leak
	 (c-g (matrix-of-matrices->c-pointer-to-pointers-to-pointers-to-pointers g 'double #t)) ;;memory leak
	 (c-phi1 (matrix-of-matrices->c-pointer-to-pointers-to-pointers-to-pointers phi1 'int #f)) ;;memory leak
	 (c-phi2 (matrix-of-matrices-of-matrices->c-6D-array phi2 'int #f)) ;;memory leak
	 (c-e (malloc (* c-sizeof-int 1)))
	 (foo (dtrace "3" '()))
	 (c-e (vector->c-exact-array c-e
				    (vector 0)
				    c-sizeof-int
				    #f))
	 (c-l (matrix->c-pointer-to-pointers (vector (vector 0)) 'int #f))
	 (c-otracks (malloc (* c-sizeof-int 1)))
	 (foo (dtrace "4" '()))
	 (c-otracks (vector->c-exact-array c-otracks
					   (vector -1)
					   c-sizeof-int
					   #f))
	 (c-jtracks (matrix->c-pointer-to-pointers (map-n-vector (lambda (track)
								  (map-n-vector (lambda (frame)
									       -1)
										T))
								 1)
						   'int
						   #f))
	 (foo (dtrace "finished converting variables from scheme to c" '()))
	 (likelihood (c-sentence-tracker T
					 1
					 O
					 I1
					 I2
					 1
					 1
					 c-K
					 c-R
					 c-bigPhi1
					 c-bigPhi2
					 c-b
					 null
					 c-a
					 null
					 c-z
					 null
					 c-c
					 null
					 c-J
					 c-f
					 c-g
					 c-phi1
					 c-phi2
					 c-e
					 c-l
					 c-otracks
					 c-jtracks)))
  ;; needs work: memory leak. need to free everything we allocated here
  ;; or need to make a preallocated version that wont allocate everything every call
  (list
   likelihood
   (c-exact-array->list c-otracks c-sizeof-int 1 #f)
   (map (lambda (track) (c-exact-array->list track c-sizeof-int T #f))
	(c-exact-array->list c-jtracks c-sizeof-long 1 #f)))))


(define (test-sentence-tracker)
 (define T 80)
 (define O 1)
 (define I1 5)
 (define I2 0)
 (define K (vector 4))
 (define bigphi1 (map-n-vector (lambda (f) 10) I1))
 (define bigphi2 (map-n-vector (lambda (f) 10) I2))
 (define b (map-vector (lambda (states)
			  (normalize
			   (map-n-vector
			    (lambda (s) (log (random-real)))
			    states )))
			 K))
 (define a (map-vector (lambda (states)
			  (map-n-vector
			   (lambda (s1)
			    (normalize
			     (map-n-vector
			      (lambda (s) (log (random-real)))
			      states)))
			   states))
			 K))
 (define z (map-vector (lambda (states)
			  (normalize
			   (map-n-vector
			    (lambda (s) (log (random-real)))
			    states )))
			 K))
 (define c (map-vector (lambda (states)
			  (map-n-vector
			   (lambda (s)
			    (map-n-vector
			     (lambda (f)
			      (map-n-vector
			       (lambda (i) (log (random-real)))
			       (vector-ref bigphi1 f)))
			     I1))
			   states))
			 K))
  (define J (map-n-vector (lambda (frame)
			   (map-n-vector
			    (lambda (class)
			     (exact-round (+ 100 (* (random-real) 100))))
			    O))
			  T))
  (define f (map-n-vector (lambda (frame)
			   (map-n-vector
			    (lambda (class)
			    (map-n-vector (lambda (d) (log (random-real)))
						 (x (vector-ref J frame))))
			    O))
			  T))
  (define g (map-n-vector (lambda (frame)
			   (map-n-vector
			    (lambda (class)
			     (map-n-vector
			      (lambda (d)
			       (map-n-vector
				(lambda (d2)
				 (log (random-real)))
				(if (= frame 0)
				  (x (vector-ref J frame))
				   (x (vector-ref J (- frame 1))))))
			      (x (vector-ref J frame))))
			    O))
			  T))
  (define phi1 (map-n-vector
		(lambda (frame)
		 (map-n-vector
		  (lambda (class)
		   (map-n-vector
		     (lambda (det)
		      (map-n-vector
		       (lambda (f)
			(discretize-feature (random-real) 0 1 10))
		       I1))
		     (matrix-ref J frame class)))
		   O))
		 T))
   (define phi2 (map-n-vector
		 (lambda (frame)
		  (map-n-vector
		   (lambda (class1)
		    (map-n-vector
		     (lambda (det1)
		      (map-n-vector
		       (lambda (class2)
			(map-n-vector
			 (lambda (det2)
			  (map-n-vector
			   (lambda (f)
			    (discretize-feature (random-real) 0 1 10))
			   I1))
			 (matrix-ref J frame class2)))
		       O))
		     (matrix-ref J frame class1)))
		   O))
		 T))
 (sentence-tracker-as-event-tracker T O I1 I2 K bigphi1 bigphi2 b a z c J f g phi1 phi2))


(define (simple-memory-test)
 (let* ((video-path "/net/wywiad/aux/dpbarret/ucf_sports_actions/Diving-Side/001/recoded.avi"))
  (map-n
   (lambda (i)
    (map-imlib-frame-from-video-indexed
     (lambda (frame-number frame-index imlib-image)
      (let* ((cropped (imlib:create 100 100))
	     (foo (imlib:fill-rectangle cropped 0 0 100 100 `#(0 0 0)))
	     (foo2 (imlib:blend cropped imlib-image #f 0 0 100 100 0 0 100 100))
	     (flipped (imlib:clone cropped))
	     (hog-image (imlib-image->hog-image cropped  8 9))
	     (hog-image-flipped (imlib-image->hog-image flipped 8 9))
	     (fv (hog-image->fv-faster hog-image))
	     (fv-flipped (hog-image->fv-faster hog-image-flipped)))
       (imlib:free-and-decache imlib-image)
       (imlib:free-and-decache cropped)
       (imlib:free-and-decache flipped)
       (free-hog-image hog-image)
       (free-hog-image hog-image-flipped)
       (list fv fv-flipped)))
     (load-darpa-video video-path)))
   100)))


(define (plot-state-probabilities frames-states-gammas) (panic "matlab"))

(define (plot-state-probabilities-with-duplicates frames-states-gammas k)
 (panic "matlab"))