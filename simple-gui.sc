(define (define-buttons)
 (standard-buttons 2 (lambda () #f))
 (define-button 0 1 "forward" #f
  (lambda () 
          (system "ssh -p 22222 root@localhost \"~/test_code/motor_control forward_1\""))))

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
  )
 ;;; Redraw procedure:
 (lambda ()
  (display "redraw")
  )
 ;;; Listener procedure:
 (lambda ()
  (dtrace ""  "Calling Listener")
  ))