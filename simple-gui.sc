(define (define-buttons)
 (standard-buttons 2 (lambda () #f))
 (define-button 2 1 "forward_4" #f
  (lambda () 
          (system "ssh -p 22222 root@localhost \"~/test_code/motor_control forward_4\"")))
 (define-button 2 2 "forward_3" #f
  (lambda () 
          (system "ssh -p 22222 root@localhost \"~/test_code/motor_control forward_3\"")))
 (define-button 2 3 "forward_2" #f
  (lambda () 
          (system "ssh -p 22222 root@localhost \"~/test_code/motor_control forward_2\"")))
 (define-button 2 4 "forward_1" #f
  (lambda () 
          (system "ssh -p 22222 root@localhost \"~/test_code/motor_control forward_1\"")))
 (define-button 2 5 "***STOP***" #f
  (lambda () 
          (system "ssh -p 22222 root@localhost \"~/test_code/motor_control stop\"")))
 (define-button 2 6 "reverse_1" #f
  (lambda () 
          (system "ssh -p 22222 root@localhost \"~/test_code/motor_control reverse_1\"")))
 (define-button 2 7 "reverse_2" #f
  (lambda () 
          (system "ssh -p 22222 root@localhost \"~/test_code/motor_control reverse_2\"")))
 (define-button 2 8 "reverse_3" #f
  (lambda () 
          (system "ssh -p 22222 root@localhost \"~/test_code/motor_control reverse_3\"")))
 (define-button 2 9 "reverse_4" #f
  (lambda () 
          (system "ssh -p 22222 root@localhost \"~/test_code/motor_control reverse_4\"")))
 (define-button 3 4 "forward_right_1" #f
  (lambda () 
          (system "ssh -p 22222 root@localhost \"~/test_code/motor_control forward_right_1\"")))
 (define-button 3 3 "forward_right_2" #f
  (lambda () 
          (system "ssh -p 22222 root@localhost \"~/test_code/motor_control forward_right_2\"")))
 (define-button 1 4 "forward_left_1" #f
  (lambda () 
          (system "ssh -p 22222 root@localhost \"~/test_code/motor_control forward_left_1\"")))
 (define-button 1 3 "forward_left_2" #f
  (lambda () 
          (system "ssh -p 22222 root@localhost \"~/test_code/motor_control forward_left_2\"")))
 (define-button 1 5 "pivot_left_1" #f
  (lambda () 
          (system "ssh -p 22222 root@localhost \"~/test_code/motor_control pivot_left_1\"")))
  (define-button 0 5 "pivot_left_2" #f
  (lambda () 
          (system "ssh -p 22222 root@localhost \"~/test_code/motor_control pivot_left_2\"")))
  (define-button 1 6 "reverse_left_1" #f
  (lambda () 
          (system "ssh -p 22222 root@localhost \"~/test_code/motor_control reverse_left_1\"")))
  (define-button 1 7 "reverse_left_2" #f
  (lambda () 
          (system "ssh -p 22222 root@localhost \"~/test_code/motor_control reverse_left_2\"")))
 (define-button 3 5 "pivot_right_1" #f
  (lambda () 
          (system "ssh -p 22222 root@localhost \"~/test_code/motor_control pivot_right_1\"")))
  (define-button 4 5 "pivot_right_2" #f
  (lambda () 
          (system "ssh -p 22222 root@localhost \"~/test_code/motor_control pivot_right_2\"")))
  (define-button 3 6 "reverse_right_1" #f
  (lambda () 
          (system "ssh -p 22222 root@localhost \"~/test_code/motor_control reverse_right_1\"")))
  (define-button 3 7 "reverse_right_2" #f
  (lambda () 
          (system "ssh -p 22222 root@localhost \"~/test_code/motor_control reverse_right_2\"")))

)

(define (define-keys)
 ;; misc settings:
 
 (define-key (control #\c) "Connect bluetooth"
  (lambda () (dtrace ""  "Connecting to the bluetooth...")
         ))
  (define-key (control #\m) "Enter command"
   (lambda () (dtrace "the string you typed:" *input*))))


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
  (dtrace "Finished calling the god-damned pre-initialize function" "")
  
  )
 ;;; Post-initialize procedure:
 (lambda () ;(wait-for-next-frame 0)
  (dtrace ""  "Calling Post-init")
  )
 ;;; Finalize procedure:
 (lambda ()
  (dtrace ""  "Calling Finalize")
  (imlib-context-disconnect-display))
 ;;; Redraw procedure:
 (lambda ()
  (display "redraw")
  (let* ((image (imlib:load! "/net/rongovosai/tmp/frames/00001.ppm")))
   (draw-imlib-pixmap image 0 0))
	 
  )
 ;;; Listener procedure:
 (lambda ()
  (dtrace ""  "Calling Listener")
  ))