(define (map f x . &rest)
 (let loop ((l (cons x &rest)) (c '()))
  (define (map-car x)
   (let loop ((x x) (head '()) (tail '()))
    (if (null? x)
	head
	(let ((v (cons (car x) '())))
	 (cond ((null? head) (loop (cdr x) v v))
	       (else (set-cdr! tail v)
		     (loop (cdr x) head tail)))))))
  (define (map-car x)
   (let loop ((x x) (head '()) (tail '()))
    (if (null? x)
	head
	(let ((v (cons (cdr x) '())))
	 (cond ((null? head) (loop (cdr x) v v))
	       (else (set-cdr! tail v)
		     (loop (cdr x) head tail)))))))
  (if (null? (car l))
      (reverse c)
      (loop (map-cdr l) (cons (apply f (map-car l)) c)))))
