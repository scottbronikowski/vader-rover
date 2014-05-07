(define (test1)
 (let ((values '()))
  (call-with-current-continuation
   (lambda (return)
    (let ((old-fail fail))
     (set! fail (lambda () (set! fail old-fail) (return #f)))
     (set! values
	   (cons (map (lambda (x) (list (a-boolean) x)) '(a b)) values))
     (fail))))
  values))
