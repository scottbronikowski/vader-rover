(module saddle-FF-s2c (main run))

(include "common-s2c.sc")

(define (run)
 (let* ((start (vector 1.0 1.0))
	(f (lambda (x1 y1 x2 y2)
	    (- (+ (sqr x1) (sqr y1)) (+ (sqr x2) (sqr y2)))))
	(x1*-y1*
	 (multivariate-argmin-R
	  (lambda (x1-y1)
	   (multivariate-max-R
	    (lambda (x2-y2) (f (x x1-y1) (y x1-y1) (x x2-y2) (y x2-y2)))
	    start))
	  start))
	(x1* (x x1*-y1*))
	(y1* (y x1*-y1*))
	(x2*-y2* (multivariate-argmax-R
		  (lambda (x2-y2) (f x1* y1* (x x2-y2) (y x2-y2))) start))
	(x2* (x x2*-y2*))
	(y2* (y x2*-y2*)))
  (vector (vector x1* y1*) (vector x2* y2*))))
