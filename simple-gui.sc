(define (motors direction)
 (system (format #f "ssh -p 22222 root@localhost \"/root/bin/motor_control ~a\"" direction)))

(define (define-buttons)
 (standard-buttons 2 (lambda () #f))
 (define-button 2 1 "forward_4" #f
  (lambda () 
   ;; (system "ssh -p 22222 root@localhost \"~/bin/motor_control forward_4\"")
   (motors "forward_4")
   ))
 (define-button 2 2 "forward_3" #f
  (lambda () (motors "forward_3")))
 (define-button 2 3 "forward_2" #f
  (lambda () (motors "forward_2")))
 (define-button 2 4 "forward_1" #f
  (lambda () (motors "forward_1")))
 (define-button 2 5 "***STOP***" #f
  (lambda () (motors "stop")))
 (define-button 2 6 "reverse_1" #f
  (lambda () (motors "reverse_1")))
 (define-button 2 7 "reverse_2" #f
  (lambda () (motors "reverse_2")))
 (define-button 2 8 "reverse_3" #f
  (lambda () (motors "reverse_3")))
 (define-button 2 9 "reverse_4" #f
  (lambda () (motors "reverse_4")))
 (define-button 3 4 "forward_right_1" #f
  (lambda () (motors "forward_right_1")))
 (define-button 3 3 "forward_right_2" #f
  (lambda () (motors "forward_right_2")))
 (define-button 1 4 "forward_left_1" #f
  (lambda () (motors "forward_left_1")))
 (define-button 1 3 "forward_left_2" #f
  (lambda () (motors "forward_left_2")))
 (define-button 1 5 "pivot_left_1" #f
  (lambda () (motors "pivot_left_1")))
 (define-button 0 5 "pivot_left_2" #f
  (lambda () (motors "pivot_left_2")))
 (define-button 1 6 "reverse_left_1" #f
  (lambda () (motors"reverse_left_1")))
 (define-button 1 7 "reverse_left_2" #f
  (lambda () (motors "reverse_left_2")))
 (define-button 3 5 "pivot_right_1" #f
  (lambda () (motors "pivot_right_1")))
 (define-button 4 5 "pivot_right_2" #f
  (lambda () (motors "pivot_right_2")))
 (define-button 3 6 "reverse_right_1" #f
  (lambda () (motors "reverse_right_1")))
 (define-button 3 7 "reverse_right_2" #f
  (lambda () (motors "reverse_right_2")))
 (define-button 5 2 "camera_center" #f
  (lambda () 
   (system "ssh -p 22222 root@localhost \"echo 15000 > /dev/pwm9; echo 15000 > /dev/pwm10\"")))
 (define-button 4 2 "camera_left" #f
  (lambda () 
   (system "ssh -p 22222 root@localhost \"echo 20000 > /dev/pwm10\"")))
 (define-button 6 2 "camera_right" #f
  (lambda () 
   (system "ssh -p 22222 root@localhost \"echo 10000 > /dev/pwm10\"")))
 (define-button 5 1 "camera_up" #f
  (lambda () 
   (system "ssh -p 22222 root@localhost \"echo 11000 > /dev/pwm9\"")))
 (define-button 5 3 "camera_down" #f
  (lambda () 
   (system "ssh -p 22222 root@localhost \"echo 16500 > /dev/pwm9\"")))
 (define-button 5 6 "test image get" #f
  (lambda ()
   (get-next-image-command))) ;;defined in toollib-rover.sc
 (define-button 5 7 "Start Cameras" #f
  (lambda ()
   (system "ssh -p 22222 root@localhost \"/root/bin/run_cameras\" &")))
  (define-button 5 8 "Stop Cameras" #f
  (lambda ()
   (system "ssh -p 22222 root@localhost \"pkill run_cameras\""))) 
 )

(define (define-keys)
 ;; misc settings:
 
 (define-key (control #\c) "Connect bluetooth"
  (lambda () (dtrace ""  "Connecting to the bluetooth...")))
 (define-key escape "Get Images" get-next-image-command) ;;defined in toollib-rover.sc
 (define-key (control #\m) "Enter command"
  (lambda () (dtrace "the string you typed:" *input*))))

(set! *program* "rover-viewer")

(define-application viewer
 ;; Example:
 ;;   (viewer '())
 1600 800  ; Dimension of the window
 1        ; TRANSCRIPT-LINES
 10        ; BUTTON-ROWS
 7        ; BUTTON-COLUMNS
 ;;; Pre-initialize procedure:
 (lambda ()
  ;;(set! *clear-display-pane?* #f)
  ;;(setup-extra-x-gcs)
  (format #t "Calling Pre-init~%")
  (define-buttons)
  (define-keys)
  (rover-server-setup)
  (rover-server-start)
  (dtrace "Finished calling the god-damned pre-initialize function" "")
  
  )
 ;;; Post-initialize procedure:
 (lambda () ;(wait-for-next-frame 0)
  (dtrace ""  "Calling Post-init")
  )
 ;;; Finalize procedure:
 (lambda ()
  (dtrace ""  "Calling Finalize")
  (rover-server-cleanup)
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