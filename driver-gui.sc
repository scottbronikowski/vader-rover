(define *cdr-viewer-active* "DISCONNECTED")

;; depends on *floorplan-index* *sentence-index* *dataset*

(define *floorplan-index* #f)
(define *sentence-index* #f)
(define *dataset* #f)

(define (initialize-sentences)
  (set! *floorplan-index* 0)
  (set! *sentence-index* 0)
  (set! *dataset* (list->vector (map list->vector (read-object-from-file "msee1-dataset.sc"))))
#f)

(define (world->pixel world-xy width height minx maxx miny maxy)
  (vector (+ (* width (/ (x world-xy) (- maxx minx)))
			    (/ width 2))
			 (+ (- (* height (/ (y world-xy) (- maxy miny))))
			    (/ height 2))))

(define (draw-object-on-floorplan obj image width height minx maxx miny maxy)
  (let* ((world-xy (second obj))
	 (pix-xy (vector (+ (* width (/ (x world-xy) (- maxx minx)))
			    (/ width 2))
			 (+ (- (* height (/ (y world-xy) (- maxy miny))))
			    (/ height 2)))))
    (imlib-draw-text-on-image image 
			      (symbol->string (first obj))
			      `#(0 0 0) 6 (x pix-xy) (y pix-xy) `#(255 255 255))
    (imlib:draw-ellipse image (x pix-xy) (y pix-xy) 2 2 `#(255 0 0))))

(define (draw-floorplan-and-sentence dataset floorplan-index sentence-index)
  (let* ((image (imlib:create 1300 240)))
    (imlib:fill-rectangle image 0 0 1300 240 `#(255 255 255)) 
    (imlib-draw-text-on-image image 
			      (second (vector-ref (vector-ref dataset floorplan-index)
						  sentence-index))
			      `#(0 0 0) 8 5 200 `#(255 255 255))
(for-each
 (lambda (obj)
   (draw-object-on-floorplan obj image 320 240 -4 4 -4 4))
 (first (vector-ref (vector-ref dataset floorplan-index)
		    sentence-index)))

(draw-object-on-floorplan (list 'origin (vector 0 0)) image 320 240 -4 4 -4 4)

(for-each 
 (lambda (pair)
(imlib:draw-line image `#(0 0 0) 
		 (x (world->pixel (first pair) 320 240 -4 4 -4 4))
		 (y (world->pixel (first pair)  320 240 -4 4 -4 4))
		 (x (world->pixel (second pair) 320 240 -4 4 -4 4))
		 (y (world->pixel (second pair)  320 240 -4 4 -4 4))))
(list (list `#(-3 -2.62) `#(-3 3.93))
      (list `#(-3 -2.62) `#(3.05 -2.62))
      (list `#(3.05 3.93) `#(3.05 -2.62))
      (list `#(3.05 3.93) `#(-3.0 3.93))
      (list `#(-1.37 -2.62) `#(-1.37 3.93))
      (list `#(0 -2.62) `#(0 3.93))
      (list `#(1.37 -2.62) `#(1.37 3.93))
      (list `#(-3 -1.31) `#(3.05 -1.31))
      (list `#(-3 0) `#(3.05 0))
      (list `#(-3 1.31) `#(3.05 1.31))
      (list `#(-3 2.62) `#(3.05 2.62))))


		 
(draw-imlib-pixmap image 0 250)
(imlib:free image)))
			    


(define (define-buttons)
 (standard-buttons 2 (lambda () #f))
 (define-button 2 1
  (lambda () (format #f "CDR viewer ~a" *cdr-viewer-active*))
  #f
  (lambda () #f))
 (define-button 2 0 "**EMERGENCY STOP**" #f
  (lambda ()
   (system "ssh -p 22222 root@localhost \"~/bin/motor_control stop\"")
   (trace-shutdown)
   (system "ssh -p 22222 root@localhost \"/root/bin/run-the-force stop\" &")
   ))
 (define-button 0 2 (lambda () (format #f "next-floorplan ~a" *floorplan-index*)) #f
   (lambda ()
     (when (and *floorplan-index* *sentence-index* *dataset*)
	   (set! *floorplan-index* (modulo (+ *floorplan-index* 1)
					   (vector-length *dataset*)))
	   (draw-floorplan-and-sentence *dataset* *floorplan-index* *sentence-index*))
     (redraw-buttons)))
(define-button 1 2 (lambda () (format #f "next-sentence ~a" *sentence-index*)) #f
(lambda ()
(when (and *floorplan-index* *sentence-index* *dataset*)
      (set! *sentence-index* (modulo (+ *sentence-index* 1)
				      (vector-length (vector-ref *dataset* *floorplan-index*))))
      (draw-floorplan-and-sentence *dataset* *floorplan-index* *sentence-index*)
(redraw-buttons))))
 ;; (define-button 3 3 "Start Cameras" #f
 ;;  (lambda () (gamepad-start-cameras)))
 ;; (define-button 3 4 "Stop Cameras" #f
 ;;  (lambda () (gamepad-stop-cameras)))
 (define-button 4 1 "Stop Emperor" #f
  (lambda ()
   (gamepad-shutdown)
   ;; (system "ssh -p 22222 root@localhost \"pkill emperor\" &")
   (system "ssh -p 22222 root@localhost \"/root/bin/run-emperor stop\" &")
   ))
 (define-button 4 0 "Start Emperor" #f
  (lambda ()
   (gamepad-init)
   ;; (system "ssh -p 22222 root@localhost \"/root/bin/emperor &\" &")
   (system "ssh -p 22222 root@localhost \"/root/bin/run-emperor start\" &")
   ))
 (define-button 3 1 "Stop The Force" #f
  (lambda ()
   ;; (system "ssh -p 22222 root@localhost \"pkill emperor\" &")
   (trace-shutdown)
   (system "ssh -p 22222 root@localhost \"/root/bin/run-the-force stop\" &")
   ))
 (define-button 3 0 "Start The Force" #f
  (lambda ()
   ;; (system "ssh -p 22222 root@localhost \"/root/bin/emperor &\" &")
   (system "ssh -p 22222 root@localhost \"/root/bin/run-the-force start\" &")
   (trace-init)
   ))
;;  (define-button 0 1 "trace-init" #f
;;   (lambda() (trace-init)))
;; (define-button 1 1 "trace-shutdown" #f
;;   (lambda() (trace-shutdown)))
 )

(define (define-keys)
 ;; misc settings:
 
 ;; (define-key (control #\c) "Connect bluetooth"
 ;;  (lambda () (dtrace ""  "Connecting to the bluetooth...")))
 (define-key escape "Get Images" get-next-image-command) ;;defined in toollib-rover.sc
 (define-key (control #\m) "Enter command"
  (lambda ()
   (if (equal? (first (string->list *input*)) #\w)
       (mark-waypoint *input*)
       (trace-send *input*)
       )
   (dtrace "the string you typed:" *input*)
   ;;(set! *input* "")
   )))

(set! *program* "driver-viewer")
;; assume *dataset* holds the dataset
(define-application viewer
 ;; Example:
 ;;   (viewer '())
 1300 500  ; Dimension of the window
 1        ; TRANSCRIPT-LINES
 3        ; BUTTON-ROWS
 5        ; BUTTON-COLUMNS
 ;;; Pre-initialize procedure:
 (lambda ()
  ;;(set! *clear-display-pane?* #f)
  ;;(setup-extra-x-gcs)
  (format #t "Calling Pre-init~%")
  (define-buttons)
  (define-keys)
  (rover-server-setup)
  (rover-server-start)
  ;;(gamepad-init) ;;might need to move this into the "Start Emperor" button
  (dtrace "Finished calling the god-damned pre-initialize function" "")
  
  )
 ;;; Post-initialize procedure:
 (lambda () ;(wait-for-next-frame 0)
  (dtrace ""  "Calling Post-init")
  (when (and *floorplan-index* *sentence-index* *dataset*)
	(draw-floorplan-and-sentence *dataset* *floorplan-index* *sentence-index*))
  )
 ;;; Finalize procedure:
 (lambda ()
  (dtrace ""  "Calling Finalize")
  (rover-server-cleanup)
  ;;(gamepad-shutdown) ;;might need to move into "Stop Emperor" button
  (imlib-context-disconnect-display))
 ;;; Redraw procedure:
 (lambda ()
  (display "redraw")
  ;; (let loop ()
  ;; (let* ((image (imlib:load! "/home/sbroniko/vader-rover/GR-final.ppm")))
  ;; ;; (let* ((image (imlib:load! "/net/rongovosai/tmp/frames/00001.ppm")))
  ;;  (draw-imlib-pixmap image 0 0)
  ;;  (imlib:free image))
  ;; (display "hello") (newline)
  ;; (loop))
	 
  )
 ;;; Listener procedure:
 (lambda ()
  (dtrace ""  "Calling Listener")
  ))