(define (for-each-n f n)
 (define (loop i) (when (< i n) (f i) (loop (+ i 1))))
 (loop 0))

(define (map-n f n)
 (define (loop i c) (if (< i n) (loop (+ i 1) (cons (f i) c)) (reverse c)))
 (loop 0 '()))

(define (make-matrix m n init)
 (list->vector (map-n (lambda (i) (make-vector n init)) m)))

(define (matrix-ref a i j) (vector-ref (vector-ref a i) j))

(define (matrix-set! a i j x) (vector-set! (vector-ref a i) j x))

(define (hog m n)
 (define e (make-matrix m n 10.0))
 (define u (make-matrix m n 10.0))
 (define dx #f)
 (define d 10.0)
 (for-each-n
  (lambda (i)
   (format #t "row:~a~%" i)
   (for-each-n
    (lambda (j)
     (set! dx (matrix-ref e i j))
     (matrix-set! u i j (* d dx)))
    (- n 1)))
  (- m 1))
 #t)

(hog 1000 1000)
