(module motion-test (with QobiScheme xlib) (main main))

(include "QobiScheme.sch")

(define *points* #f)
(define *n* #f)
(define *m* #f)
(define *angle* 0.0)
(define *angle-axis* #f)
(define *angle-step* 5.0)
(define *angle-end* 360.0)
(define *scale* 1.0)
(define *translation* #f)
(define *translation-step* 0.1)
(define *translation-end* 2.0)

(define (my-redraw-display-pane)
 (set! *regions* '())
 (if *help?*
     (let* ((character-strings
	     (map (lambda (help-entry)
		   (if (list? (first help-entry))
		       (reduce
			(lambda (s t) (string-append s " " t))
			(map character->pretty-name (first help-entry))
			"")
		       (character->pretty-name (first help-entry))))
		  (reverse *help*)))
	    (n (+ (reduce max (map string-length character-strings) 0) 1)))
      (let loop ((character-strings character-strings)
		 (documentation-strings (map second (reverse *help*)))
		 (y *text-height*))
       (unless (null? character-strings)
	(let ((line (format #f "~a~a~a"
			    (first character-strings)
			    (make-string
			     (- n (string-length (first character-strings)))
			     #\space)
			    (first documentation-strings))))
	 (xdrawstring
	  *display* *display-pane* *roman-gc* 5 y line (string-length line))
	 (loop (rest character-strings)
	       (rest documentation-strings)
	       (+ y *text-height*))))))
     (*redraw-procedure*))
 (glxswapbuffers *display* *display-pane*))

(define-application main 800 600 #f 4 4
 (lambda ()
  (set! *points* '())
  (set! *n* 4)
  (set! *m* 4)
  (set! *angle* 0.0)
  (set! *angle-axis* (unit (vector (noise 1) (noise 1) (noise 1))))
  (set! *translation* (vector 0 0 0))
  (set! *translation-direction*	(unit (vector (noise 1) (noise 1) (noise 1))))

  (glMatrixMode GL_PROJECTION)
  (glLoadIdentity)
  (glFrustum -1.0 1.0 -1.0 1.0 10.0 20.0)
  (glMatrixMode GL_MODELVIEW)

  (glcullface GL_BACK)
  ;;(glenable GL_CULL_FACE)
  (gldisable GL_DITHER)
  (glshademodel GL_FLAT)
  (glcolor3f 1.0 1.0 1.0)

  (define-button 0 3 "Quit" #t quit)

  (define-button 0 0 "M+"
   (lambda () (< *m* *n*))
   (lambda ()
    (when (< *m* *n*)
     (set! *m* (+ 1 *m*))
     (redraw-buttons))))

  (define-button 1 0 (lambda () (format #f "~s" *m*)) #f (lambda () #f))

  (define-button 2 0 "M-"
   (lambda () (> *m* 4))
   (lambda ()
    (when (> *m* 4)
     (set! *m* (- *m* 1))
     (redraw-buttons))))

  (define-button 0 1 "N+" #t
   (lambda ()
    (set! *n* (+ 1 *n*))
    (redraw-buttons)))

  (define-button 1 1 (lambda () (format #f "~s" *n*)) #f (lambda () #f))

  (define-button 2 1 "N-"
   (lambda () (> *n* 4))
   (lambda ()
    (when (> *n* 4)
     (set! *n* (- *n* 1))
     (redraw-buttons))))

  (define-button 0 2 "New" #t
   (lambda ()
    (set! *points* (make-vector *n*))
    (for-each-n
     (lambda (i)
      (vector-set! *points* i (vector (noise 1) (noise 1) (noise 1))))
     *n*)
    (let ((n (unit (vector (noise 1) (noise 1) (noise 1)))))
     (for-each-n
      (lambda (i)
       (let ((v (vector-ref *points* i)))
	(vector-set! *points* i (v- v (k*v (dot v n) n)))))
      *m*))
    (set! *points* (deal (vector->list *points*)))
    (redraw-buttons)
    (my-redraw-display-pane)))

  (define-button 1 2 "Rotate" #t
   (lambda ()
    (set! *angle* 0.0)
    (set! *angle-axis* (unit (vector (noise 1) (noise 1) (noise 1))))
    (set! *translation* (vector 0 0 0))
    (do ((angle 0.0 (+ angle *angle-step*))) ((>= angle *angle-end*))
     (set! *angle* angle)
     (my-redraw-display-pane))))

  (define-button 2 2 "Translate" #t
   (lambda ()
    (set! *angle* 0.0)
    (set! *translation* (vector 0 0 0))
    (set! *translation-direction*
	  (unit (vector (noise 1) (noise 1) (noise 1))))
    (do ((translation 0.0 (+ translation *translation-step*)))
      ((>= translation *translation-end*))
     (set! *translation* (k*v translation *translation-direction*))
     (my-redraw-display-pane)))))

 (lambda () #f)

 (lambda () #f)

 (lambda ()
  ;; drawing
  (glclear GL_COLOR_BUFFER_BIT)
  (glpushmatrix)
  (gltranslatef 0 0 -15)
  (glscalef *scale* *scale* *scale*)
  (glrotatef *angle* (x *angle-axis*) (y *angle-axis*) (z *angle-axis*))
  (gltranslatef (x *translation*) (y *translation*) (z *translation*))
  (glbegin GL_POINTS)
  (for-each (lambda (p) (glvertex3f (x p) (y p) (z p))) *points*)
  (glend)
  (glpopmatrix)))
