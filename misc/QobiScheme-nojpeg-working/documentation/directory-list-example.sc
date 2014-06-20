(define *pathnames-first-line* 0)

(define *pathnames* '())

(define (draw-strings-with-scroll-bar
	 first-line set-first-line!
	 left middle right strings
	 xmin xmax ymin ymax)
 ;; belongs in QobiScheme
 (let* ((visible-lines (quotient (- ymax ymin) *roman-height*))
	(first-line (first-line))
	(last-line (min (+ first-line visible-lines) (length strings))))
  (unless (null? strings)
   (let* ((y1 ymin)
	  (y2 ymax)
	  (y3 (+ y1
		 (inexact->exact
		  (floor (* (- y2 y1) (/ first-line (length strings)))))))
	  (y4 (+ y1
		 (inexact->exact
		  (floor (* (- y2 y1) (/ last-line (length strings))))))))
    (xfillrectangle
     *display* *display-pane* *thin-gc* (+ xmax 4) y1 1 (- y2 y1))
    (xfillrectangle
     *display* *display-pane* *thin-gc* (+ xmax 2) y3 5 (- y4 y3))
    (define-region
     (+ xmax 2)
     y1
     5
     (- y2 y1)
     (lambda (x y)
      (set-first-line!
       (min (max 0 (- (length strings) visible-lines))
	    (quotient (* (length strings) (- y y1)) (- y2 y1))))
      (redraw-display-pane)))
    (define-region
     (+ xmax 2)
     y3
     5
     (- y4 y3)
     (lambda (x y5)
      (tracking-pointer
       #f
       #f
       (lambda (x y6)
	(set-first-line!
	 (min (max 0 (- (length strings) visible-lines))
	      (max 0
		   (+ first-line
		      (quotient (* (length strings) (- y6 y5)) (- y2 y1))))))
	(redraw-display-pane)))))))
  (for-each-indexed (lambda (string i)
		     (define-button-specific-region
		      button1
		      0
		      0
		      xmin
		      (+ (* i *roman-height*) ymin)
		      (xtextwidth *roman-font* string (string-length string))
		      *roman-height*
		      (lambda (x y) (left (+ i first-line))))
		     (define-button-specific-region
		      button2
		      0
		      0
		      xmin
		      (+ (* i *roman-height*) ymin)
		      (xtextwidth *roman-font* string (string-length string))
		      *roman-height*
		      (lambda (x y) (middle (+ i first-line))))
		     (define-button-specific-region
		      button3
		      0
		      0
		      xmin
		      (+ (* i *roman-height*) ymin)
		      (xtextwidth *roman-font* string (string-length string))
		      *roman-height*
		      (lambda (x y) (right (+ i first-line))))
		     (xdrawstring *display* *display-pane* *roman-gc*
				  xmin (+ (* (+ i 1) *roman-height*) ymin)
				  string (string-length string)))
		    (sublist strings first-line last-line))))

(define-application viewer #f 480 5 2 6
 (lambda ()
  (set! *pathnames-first-line* 0)
  (set! *pathnames* (directory-list "*"))
  (define-button 0 0 "Help" #f help-command)
  (define-button 5 0 "Quit" #f quit)
  (define-key (list (control #\x) (control #\c)) "Quit" quit)
  (define-key (control #\h) "Help" help-command))
 (lambda () #f)
 (lambda () #f)
 (lambda ()
  (draw-strings-with-scroll-bar
   (lambda () *pathnames-first-line*)
   (lambda (first-line) (set! *pathnames-first-line* first-line))
   (lambda (i)
    (message (format #f "Click Left: ~a" (list-ref *pathnames* i))))
   (lambda (i)
    (message (format #f "Click Middle: ~a" (list-ref *pathnames* i))))
   (lambda (i)
    (message (format #f "Click Right: ~a" (list-ref *pathnames* i))))
   *pathnames*
   5 (- *display-pane-width* 10)
   5 (- (quotient *display-pane-height* 3) 5))))
