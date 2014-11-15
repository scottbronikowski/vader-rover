(define *cdr-viewer-active* "DISCONNECTED")

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
 (define-button 0 1 "trace-init" #f
  (lambda() (trace-init)))
  (define-button 1 1 "trace-shutdown" #f
  (lambda() (trace-shutdown)))
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

(define-application viewer
 ;; Example:
 ;;   (viewer '())
 1300 500  ; Dimension of the window
 1        ; TRANSCRIPT-LINES
 2        ; BUTTON-ROWS
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