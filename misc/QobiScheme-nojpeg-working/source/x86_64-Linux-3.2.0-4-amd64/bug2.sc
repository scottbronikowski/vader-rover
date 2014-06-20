(module sample (with QobiScheme xlib) (main main))

(include "QobiScheme.sch")

(set! *program* "sample")
(set! *panic?* #t)

(define-application main 640 480 #f 1 6
 (lambda ()
   (define-button 0 0 "Foo" #f (lambda () (write "Hit Foo") (newline)))
   (define-button 5 0 "Quit" #f (lambda () (quit)))
   (define-key (list (control #\x) (control #\c)) "Quit" quit)
   (define-key (control #\d) "Do it" (lambda () (write "Bar") (newline))))
 (lambda () #f)
 (lambda () (write "Good Bye") (newline))
 (lambda () #f))
