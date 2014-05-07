(let ((reset #f))
 (call-with-current-continuation
  (lambda (reset-here)
   (set! reset (lambda () (display "Reseting") (newline) (reset-here #f)))))
 (display "Starting")
 (newline)
 (reset))
