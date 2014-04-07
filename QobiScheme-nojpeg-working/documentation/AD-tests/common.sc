(define (replace-ith x i xi)
 (if (zero? i)
     (cons xi (cdr x))
     (cons (car x) (replace-ith (cdr x) (- i 1) xi))))

(define (map-reduce g i f l)
 (if (null? l) i (g (f (first l)) (map-reduce g i f (rest l)))))

(define (gradient-ascent-F f x0 n eta)
 (if (zero? n)
     (list x0 (f x0) ((gradient-F f) x0))
     (gradient-ascent-F f (v+ x0 (k*v eta ((gradient-F f) x0))) (- n 1) eta)))

(define (gradient-ascent-R f x0 n eta)
 (if (zero? n)
     (list x0 (f x0) ((gradient-R f) x0))
     (gradient-ascent-R f (v+ x0 (k*v eta ((gradient-R f) x0))) (- n 1) eta)))
