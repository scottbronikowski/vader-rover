(MODULE TOOLLIB-AD)

(include "QobiScheme-AD.sch")
(include "toollib-c-macros.sch")
(include "toollib-c-externals.sch")
(include "toollib-controls.sch")
(include "toollib-ad.sch")

;; min/max

(define (smooth-max l t) (* t (log (reduce + (map (lambda (e) (exp (/ e t))) l) 0))))
(define (smooth-min l t) (* (- t) (log (reduce + (map (lambda (e) (exp (/ (- e) t))) l) 0))))

(define (smooth-max-z l t z) (+ (* t (log (reduce + (map (lambda (e) (exp (/ (- e z) t))) l) 0))) z))

;; Chen-Harker-Kanzow-Smale
(define (smooth-max-chks-2 a b t) (/ (+ (sqrt (+ (sqr (- a b)) (sqr t))) a b) 2))

(define (smooth-max-chks l t)
 (cond ((null? l) minus-infinity)
       ((= (length l) 1) (car l))
       (else (smooth-max-chks-2
	      (smooth-max-chks (every-other l) t)
	      (smooth-max-chks (every-other (rest l)) t)
	      t))))

(define (smooth-min-chks-2 a b t) (- (smooth-max-chks-2 (- a) (- b) t)))

(define (smooth-min-chks l t) (- (smooth-max-chks (map - l) t)))

(define (deep-primal* a)
 (if (vector? a) (map-vector primal* (primal* a)) (primal* a)))

(define (multivariate-argmin-F-args f x start max tol)
 (let ((g (gradient-F f)))
  (letrec ((loop
	    (lambda (x fx gx eta i j)
	     (when (or (and (= i 10) #f) #f)
	      (write x) (newline)
	      (write fx) (newline)
	      (write gx) (newline)
	      (write eta) (newline)
	      (write i) (newline)
	      (write j) (newline)
	      (newline))
	     (cond ((or (<= (magnitude gx) tol)
			(= j max)) x)
		   ((= i 10) (loop x fx gx (* 2.0 eta) 0 j))
		   (else
		    (let ((x-prime (v- x (k*v eta gx))))
		     (if (<= (distance x x-prime) tol)
			 x
			 (let ((fx-prime (f x-prime)))
			  (if (< fx-prime fx)
			      (loop x-prime fx-prime (g x-prime) eta (+ i 1)
				    (+ j 1))
			      (loop x fx gx (/ eta 2.0) 0 j))))))))))
   (loop x (f x) (g x) start 0 0))))

(define (univariate-argmin-F-args f x start max tol)
 (let ((g (derivative-F f)))
  (letrec ((loop
	    (lambda (x fx gx eta i j)
	     (when (or (and (= i 10) #f) #f)
	      (write x) (newline)
	      (write fx) (newline)
	      (write gx) (newline)
	      (write eta) (newline)
	      (write i) (newline)
	      (write j) (newline)
	      (newline))
	     (cond ((or (<= (abs gx) tol) (= j max)) x)
		   ((= i 2) (loop x fx gx (* 2.0 eta) 0 j))
		   (else
		    (let ((x-prime (- x (* eta gx))))
		     (if (<= (abs (- x x-prime)) tol)
			 x
			 (let ((fx-prime (f x-prime)))
			  (if (< fx-prime fx)
			      (loop x-prime fx-prime (g x-prime) eta
				    (+ i 1) (+ j 1))
			      (loop x fx gx (/ eta 2.0) 0 j))))))))))
   (loop x (f x) (g x) start 0 0))))

(define (univariate-argmin-F-args-line f x start max tol)
 (let ((g (derivative-F f)))
  (letrec ((loop
	    (lambda (x fx gx eta i j incr?)
	     (when (or (and (= i 10) #f) #f)
	      (write "uni-------") (newline)
	      (write x) (newline)
	      (write fx) (newline)
	      (write gx) (newline)
	      (write eta) (newline)
	      (write i) (newline)
	      (write j) (newline)
	      (newline))
	     (cond ((or (<= (abs gx) tol) (= j max)) x)
		   ((and incr? (= i 2))
		    (loop x fx gx (* 2.0 eta) 0 j incr?))
		   (else
		    (let ((x-prime (- x (* eta gx))))
		     (if (<= (abs (- x x-prime)) tol)
			 x
			 (let ((fx-prime (f x-prime)))
			  (if (< fx-prime fx)
			      (loop x-prime fx-prime (g x-prime) eta (+ i 1) (+ j 1) incr?)
			      (loop x fx gx (/ eta 2.0) 0 j #f))))))))))
   (loop x (f x) (g x) start 0 0 #t))))

;; Fletcher-Reeves
(define (multivariate-argmin-F-fr f x)
 (let ((g (gradient-F f)))
  (letrec
    ((loop
      (lambda (x fx gx lx)
       (if (<= (magnitude gx) 1e-5)
	   x
	   (let*
	     ((alpha
	       (univariate-argmin-F-args
		(lambda (v)
		 (f (v+ x (k*v v lx))))
		0
		0.8
		4
		1e-6))
	      (x-prime (v+ x (k*v alpha lx)))
	      (fx-prime (f x-prime))
	      (gx-prime (g x-prime))
	      (beta (/ (dot gx-prime gx-prime) (dot gx gx)))
	      (lx-prime (v- (k*v beta lx) gx-prime)))
	    (when #f
	     (display "------ End Forward")(newline)
	     (display x-prime)(newline)
	     (display fx-prime)(newline)
	     (display gx-prime)(newline)
	     (display alpha)(newline)
	     (display beta)(newline)
	     (display (distance x x-prime))(newline)
	     (display lx-prime)(newline)
	     (newline))
	    (if (<= (distance x x-prime) 1e-5)
		x
		(loop x-prime fx-prime gx-prime lx-prime)))))))
   (loop x (f x) (g x) (g x)))))

;; Polak-Ribiere
(define (multivariate-argmin-F-pr f x)
 (let ((g (gradient-F f)))
  (letrec
    ((loop
      (lambda (x fx gx lx)
       (if (<= (magnitude gx) 1e-10)
	   x
	   (let*
	     ((alpha
	       (univariate-argmin-F-args-line
		(lambda (v)
		 (f (v+ x (k*v v lx))))
		0
		0.8
		20
		1e-5))
	      (x-prime (v+ x (k*v alpha lx)))
	      (fx-prime (f x-prime))
	      (gx-prime (g x-prime))
	      (beta (/ (dot gx-prime (v- gx-prime gx)) (dot gx gx)))
	      (lx-prime (v- (k*v beta lx) gx-prime)))
	    (when #f
	     (display "------ End Forward")(newline)
	     (display x-prime)(newline)
	     (display fx-prime)(newline)
	     (display gx-prime)(newline)
	     (display alpha)(newline)
	     (display beta)(newline)
	     (display (distance x x-prime))(newline)
	     (display lx-prime)(newline)
	     (newline))
	    (if (<= (distance x x-prime) 1e-5)
		x
		(loop x-prime fx-prime gx-prime lx-prime)))))))
   (loop x (f x) (g x) (g x)))))

(define (multivariate-argmin-R-pr f x)
 (let ((g (gradient-R f)))
  (letrec
    ((loop
      (lambda (x fx gx lx)
       (if (<= (magnitude gx) 1e-10)
	   x
	   (let*
	     ((alpha
	       (univariate-argmin-F-args-line
		(lambda (v)
		 (f (v+ x (k*v v lx))))
		0
		1e-5
		20
		1e-5))
	      (x-prime (v+ x (k*v alpha lx)))
	      (fx-prime (f x-prime))
	      (gx-prime (g x-prime))
	      (beta (/ (dot gx-prime (v- gx-prime gx)) (dot gx gx)))
	      (lx-prime (v- (k*v beta lx) gx-prime)))
	    (when #f
	     (display "------ End Forward")(newline)
	     (display x-prime)(newline)
	     (display fx-prime)(newline)
	     (display gx-prime)(newline)
	     (display alpha)(newline)
	     (display beta)(newline)
	     (display (distance x x-prime))(newline)
	     (display lx-prime)(newline)
	     (newline))
	    (if (<= (distance x x-prime) 1e-5)
		x
		(loop x-prime fx-prime gx-prime lx-prime)))))))
   (loop x (f x) (g x) (map-vector - (g x))))))

(define (multivariate-argmin-R-prt f x tol1 tol2)
 (let ((g (gradient-R f)))
  (letrec
    ((loop
      (lambda (x fx gx lx iter)
       (dtrace "magnitude gx" (magnitude gx))
       (if (<= (magnitude gx) tol2)
	   x
	   (let*
	     ((alpha
	       (univariate-argmin-F-args-line
		(lambda (v)
		 (f (v+ x (k*v v lx))))
		0
		1e-5
		20
		tol1))
	      (x-prime (v+ x (k*v alpha lx)))
	      (fx-prime (f x-prime))
	      (gx-prime (g x-prime))
	      (beta (/ (dot gx-prime (v- gx-prime gx)) (dot gx gx)))
	      (lx-prime (v- (k*v beta lx) gx-prime)))
	    (when #f
	     (display "------ End Forward")(newline)
	     (display x-prime)(newline)
	     (display fx-prime)(newline)
	     (display gx-prime)(newline)
	     (display alpha)(newline)
	     (display beta)(newline)
	     (display (distance x x-prime))(newline)
	     (display lx-prime)(newline)
	     (newline))
            (dtrace "(distance x x-prime)" (distance x x-prime))
	    (if (<= (distance x x-prime) tol2)
		x
		;; (if (<= iter 7)
		(if (<= iter (vector-length gx-prime))
		    (loop x-prime fx-prime gx-prime lx-prime (+ iter 1))
		    ;; (loop x-prime fx-prime gx-prime gx-prime 0)
                    (loop x-prime fx-prime gx-prime (map-vector - gx-prime) 0)
                    )))))))
   ;; (loop x (f x) (g x) (g x) 0)
   (loop x (f x) (g x) (map-vector - (g x)) 0)
   )))

;; Hestenes-Stiefel
(define (multivariate-argmin-F-hs f x)
 (let ((g (gradient-F f)))
  (letrec
    ((loop
      (lambda (x fx gx lx)
       (if (<= (magnitude gx) 1e-5)
	   x
	   (let*
	     ((alpha
	       (univariate-argmin-F-args
		(lambda (v)
		 (f (v+ x (k*v v lx))))
		0
		0.8
		20
		1e-6))
	      (x-prime (v+ x (k*v alpha lx)))
	      (fx-prime (f x-prime))
	      (gx-prime (g x-prime))
	      (beta (/ (dot gx-prime (v- gx-prime gx))
		       (dot lx (v- gx-prime gx))))
	      (lx-prime (v- (k*v beta lx) gx-prime)))
	    (when #f
	     (display "------ End Forward")(newline)
	     (display x-prime)(newline)
	     (display fx-prime)(newline)
	     (display gx-prime)(newline)
	     (display alpha)(newline)
	     (display beta)(newline)
	     (display (distance x x-prime))(newline)
	     (display lx-prime)(newline))
	    (if (<= (distance x x-prime) 1e-5)
		x
		(loop x-prime fx-prime gx-prime lx-prime)))))))
   (loop x (f x) (g x) (g x)))))

(define (multivariate-argmin-F-scaling f x m)
 (let ((g (gradient-F f)))
  (letrec ((loop
	    (lambda (x fx gx eta i)
	     (when (or (and (= i 10) #t) #f)
	      (write x) (newline)
	      (write fx) (newline)
	      (write gx) (newline)
	      (write eta) (newline)
	      (write i) (newline)
	      (newline))
	     (cond ((<= (magnitude gx) 1e-5) x)
		   ((= i 10) (loop x fx gx (* 2.0 eta) 0))
		   (else
		    (let ((x-prime (v- x (map-vector * m (k*v eta gx)))))
		     (if (<= (distance x x-prime) 1e-5)
			 x
			 (let ((fx-prime (f x-prime)))
			  (if (< fx-prime fx)
			      (loop x-prime fx-prime (g x-prime) eta (+ i 1))
			      (loop x fx gx (/ eta 2.0) 0))))))))))
   (loop x (f x) (g x) 1e-2 0))))


(define (multivariate-argmin-pr f x start-direction gx-magnitude x-distance
				line-x line-start line-max line-tolerance)
 (let ((g (gradient-F f)))
  (letrec
    ((loop
      (lambda (x fx gx lx)
       (if (<= (magnitude gx) gx-magnitude)
	   x
	   (let*
	     ((alpha
	       (univariate-argmin-F-args-line
		(lambda (v)
		 (f (v+ x (k*v v lx))))
		line-x line-start line-max line-tolerance))
	      (x-prime (v+ x (k*v alpha lx)))
	      (fx-prime (f x-prime))
	      (gx-prime (g x-prime))
	      (beta (/ (dot gx-prime (v- gx-prime gx)) (dot gx gx)))
	      (lx-prime (v- (k*v beta lx) gx-prime)))
	    (when #f
	     (display "------ End Forward")(newline)
	     (display x-prime)(newline)
	     (display fx-prime)(newline)
	     (display gx-prime)(newline)
	     (display alpha)(newline)
	     (display beta)(newline)
	     (display (distance x x-prime))(newline)
	     (display lx-prime)(newline)
	     (newline))
	    (if (<= (distance x x-prime) x-distance)
		x
		(loop x-prime fx-prime gx-prime lx-prime)))))))
   (loop x (f x) (g x) start-direction))))

(define (g-tapes e)
 (cond ((number? e) (tape *e* e '() '()))
       ((vector? e) (map-vector g-tapes e))
       ((list? e) (map g-tapes e))
       (else (fuck-up))))

(define (g-sensitivities e)
 (cond ((tape? e) (tape-sensitivity e))
       ((vector? e) (map-vector g-sensitivities e))
       ((list? e) (map g-sensitivities e))
       (else (fuck-up))))

(define (g-dot a b)
 (cond ((number? a) (* a b))
       ((vector? a) (reduce-vector + (map-vector g-dot a b) 0))
       ((list? a) (reduce + (map g-dot a b) 0))
       (else (fuck-up))))

(define (g+ a b)
 (cond ((number? a) (+ a b))
       ((vector? a) (map-vector g+ a b))
       ((list? a) (map g+ a b))
       (else (fuck-up))))

(define (g- a b)
 (cond ((number? a) (- a b))
       ((vector? a) (map-vector g- a b))
       ((list? a) (map g- a b))
       (else (fuck-up))))

(define (k*g k g)
 (define (*g g)
  (cond ((number? g) (* k g))
	((vector? g) (map-vector *g g))
	((list? g) (map *g g))
	(else (fuck-up))))
 (*g g))

(define (gradient-R-g f)
 (lambda (a)
  (set! *e* (+ *e* 1))
  (let* ((t (g-tapes a)) (r (f t)))
   (cond ((and (tape? r) (not (<_e (tape-epsilon r) *e*)))
	  (determine-fanout! r)
	  (reverse-phase! 1 r)))
   (set! *e* (- *e* 1))
   (g-sensitivities t))))

(define (g-magnitude g) (sqrt (g-dot g g)))
(define (g-distance a b) (g-magnitude (g- b a)))

(define (golden-section f tol ax bx cx k)
 (let* ((gold 1.61803399)
	(r (- gold 1.0))
	(c (- 1.0 r))
	(x1 (if (> (abs (- cx bx)) (abs (- bx ax)))
		bx
		(- bx (* c (- bx ax)))))
	(x2 (if (> (abs (- cx bx)) (abs (- bx ax)))
		(+ bx (* c (- cx bx)))
		bx)))
  (letrec ((loop (lambda (x0 x1 f1 x2 f2 x3)
		  (if (<= (abs (- x3 x0)) (* tol (+ (abs x1) (abs x2))))
		      (if (< f1 f2)
			  (k x1 f1)
			  (k x2 f2))
		      (if (< f2 f1)
			  (let ((xn (+ (* r x2) (* c x3))))
			   (loop x1 x2 f2 xn (f xn) x3))
			  (let ((xn (+ (* r x1) (* c x0))))
			   (loop x0 xn (f xn) x1 f1 x2)))))))
   (loop ax x1 (f x1) x2 (f x2) cx))))

(define (cyclic-multivariate-argmin-R f x ds)
 (let ((g (gradient-R f)) (n (vector-length ds)))
  (let loop ((x x)
	     (fx (f x))
	     (gx (g x))
	     (etas (map-n (lambda (i) 1e-7) n))
	     (is (map-n (lambda (i) 1) n))
	     (k 0)
	     (j 0))
   (when *debugging?*
    (format #t "x: ~s~%fx: ~s~%gx: ~s~%etas: ~s~%is: ~s~%k: ~s~%j: ~s~%~%"
	    x fx gx etas is k j))
   (let ((x-prime
	  (v- x (k*v (list-ref etas k) (map-vector * (vector-ref ds k) gx)))))
    (if (<= (distance x x-prime) 1e-4)
	(begin
	 (when *debugging?*
	  (format #t "||x-x'||=~s~%" (distance x x-prime)))
	 (if (>= j n) x (loop x fx gx etas is (modulo (+ k 1) n) (+ j 1))))
	(let ((fx-prime (f x-prime)))
	 (if (< fx-prime fx)
	     (if (= (list-ref is k) 2)
		 (loop x-prime
		       fx-prime
		       (g x-prime)
		       (list-replace etas k (* 2.0 (list-ref etas k)))
		       (list-replace is k 0)
		       (modulo (+ k 1) n)
		       0)
		 (loop x-prime
		       fx-prime
		       (g x-prime)
		       etas
		       (list-replace is k (+ (list-ref is k) 1))
		       (modulo (+ k 1) n)
		       0))
	     (loop x
		   fx
		   gx
		   (list-replace etas k (/ (list-ref etas k) 2.0))
		   (list-replace is k 0)
		   k
		   0))))))))

(define (cyclic-multivariate-min-R f x ds)
 (f (cyclic-multivariate-argmin-R f x ds)))

(define (cyclic-multivariate-argmax-R f x ds)
 (cyclic-multivariate-argmin-R (lambda (x) (- (f x))) x ds))

(define (cyclic-multivariate-max-R f x ds)
 (f (cyclic-multivariate-argmax-R f x ds)))

(define (identity-hessian v) (identity-matrix (vector-length v)))

(define (naive-bfgs f x)
 (let ((g (gradient-R-g f)))
  (define (loop x p b)
   (let* ((a (argmin-using-mnbrak-and-golden (lambda (a) (f (v+ x (k*v a p))))
   					     0
   					     10))
   	  (s (k*v a p))
   	  (xk (v+ x s))
   	  (y (v- (g xk) (g x)))
   	  (b (m+ b (m- (m/k (self-outer-product * y)
   			    (dot y s))
   		       (m/k (self-outer-product * (m*v b s))
   			    (dot s (m*v b s)))))))
    (when #f
     (format #t "bfgs ~a ~a ~a ~a ~a ~a ~a~%" x xk s y (g xk) (g x) b))
    (if (< (magnitude (v- x xk)) 0.01)
   	`(,(f xk) ,xk)
   	(loop xk
   	      (m*v (invert-matrix b)
   		   (unit (k*v -1 (g xk))))
   	      b))))
  (loop x (unit (k*v -1 (g x))) (identity-hessian x))))

;; like naive-bfgs but b is the inverse of the matrix, saving one
;; matrix inverse. It's an approximation so the results are not
;; identical
(define (bfgs f x)
 (let ((g (gradient-R-g f)))
  (define (loop x p b)
   (let* ((a (argmin-using-mnbrak-and-golden (lambda (a) (f (v+ x (k*v a p))))
   					     0
   					     10000))
   	  (s (k*v a p))
   	  (xk (v+ x s))
   	  (y (v- (g xk) (g x)))
   	  (b (m+ b (m- (m/k
			(k*m (+ (dot s y) (v*m*v y b))
			     (self-outer-product * s))
			(sqr (dot s y)))
   		       (m/k
			(m+ (m* b (outer-product * y s))
			    (m* (outer-product * y s) b))
			(dot s y))))))
    (when #f
     (format #t "bfgs ~a ~a ~a ~a ~a ~a ~a ~a~%" (f xk) x xk s y (g xk) (g x) b))
    (if (< (magnitude (v- x xk)) 0.01)
   	xk
   	(loop xk
   	      (m*v b
   		   (unit (k*v -1 (g xk))))
   	      b))))
  (loop x (unit (k*v -1 (g x))) (identity-hessian x))))


;; for reference, to get the original -pr behaviour:
;; <f> <initial> #f 1e-10 1e-5 0 0.8 20 1e-6 infinity
;; (display (multivariate-generic-argmin-pr
;; 	   (lambda (u)
;; 	    (reduce
;; 	     +
;; 	     (map
;; 	      (lambda (x-v y-c)
;; 	       (sqr
;; 		(- (+ (* (x u) x-v) (y u)) y-c)))
;; 	       '(1 2 3)
;; 	       '(3 5 7))
;; 	     0))
;; 	   '#(0 0) '#(-1 -1) 1e-10 1e-5 0 0.8 20 1e-6 infinity))

(define (multivariate-generic-argmin-pr
	 f x start-direction gx-magnitude x-distance
	 line-x line-start line-max line-tolerance
	 iterations restart-iterations)
 (let ((g (gradient-R-g f)))
  (letrec
    ((loop
      (lambda (x fx gx lx i)
       (if (<= (g-magnitude gx) gx-magnitude)
	   x
	   (let*
	     ((alpha
	       (univariate-argmin-F-args-line
		(lambda (v)
		 (f (g+ x (k*g v lx))))
		line-x line-start line-max line-tolerance))
	      (x-prime (g+ x (k*g alpha lx)))
	      (fx-prime (f x-prime))
	      (gx-prime (g x-prime))
	      (beta (/ (g-dot gx-prime (g- gx-prime gx)) (g-dot gx gx)))
	      (lx-prime (g- (k*g beta lx) gx-prime)))
	    (when #f
	     (display "------ End Forward")(newline)
	     (display x-prime)(newline)
	     (display fx-prime)(newline)
	     (display gx-prime)(newline)
	     (display alpha)(newline)
	     (display beta)(newline)
	     (display (g-distance x x-prime))(newline)
	     (display lx-prime)(newline)
	     (newline))
	    (if (or (<= (g-distance x x-prime) x-distance)
		    (<= iterations i))
		x
		(loop x-prime fx-prime gx-prime
		      (if (= (modulo (+ 1 iterations) restart-iterations) 0)
			  gx-prime lx-prime) (+ 1 i))))))))
   (loop x (f x) (g x) (or start-direction (g x)) 0))))

(define (collapse d i)
 (list->vector (map second (remove-if
			    (lambda (a) (= 0 (first a)))
			    (zip (vector->list d) (vector->list i))))))

(define (extend a d i)
 (let ((idx 0)) (map-vector (lambda (d i) (if (= d 0) i
					      (begin (set! idx (+ idx 1))
						     (vector-ref a (- idx 1)))))
			    d i)))

(define (split-along-direction f i d)
 `(,(collapse d i) ,(lambda (a) (f (extend a d i)))))

(define (along-directions f g ds i)
 (foldl (lambda (i d) (let ((a (split-along-direction g i d)))
		       (format #t "New direction: ~a~%" d)
		       (extend (f (first a) (second a)) d i)))
	ds i))

(define (optimize-along-directions f g ds i stop?)
 (let ((i-new (along-directions f g ds i)))
  (if (stop? i i-new) i-new (optimize-along-directions f g ds i-new stop?))))


(define (my-golden f tol ax bx cx k)
 (when #f (format #t "Golden ~a ~a ~a ~a~%" tol ax bx cx))
 (let* ((gold 1.61803399)
	(r (- gold 1.0))
	(c (- 1.0 r))
	(x1 (if (> (abs (- cx bx)) (abs (- bx ax)))
		bx
		(- bx (* c (- bx ax)))))
	(x2 (if (> (abs (- cx bx)) (abs (- bx ax)))
		(+ bx (* c (- cx bx)))
		bx)))
  (letrec ((loop (lambda (x0 x1 f1 x2 f2 x3)
		  (when #f (format #t "Golden: ~a ~a ~a ~a ~a ~a | ~a ~a~%"
				   x0 x1 f1 x2 f2 x3
				   (abs (- x3 x0))
				   (* tol (+ (abs x1) (abs x2)))))
		  (if (or (<= (abs (- x3 x0)) (* tol (+ (abs x1) (abs x2))))
			  (<= (abs (- x3 x0)) tol))
		      (if (< f1 f2)
			  (k x1 f1)
			  (k x2 f2))
		      (if (< f2 f1)
			  (let ((xn (+ (* r x2) (* c x3))))
			   (loop x1 x2 f2 xn (f xn) x3))
			  (let ((xn (+ (* r x1) (* c x0))))
			   (loop x0 xn (f xn) x1 f1 x2)))))))
   (loop ax x1 (f x1) x2 (f x2) cx))))

(define (my-mnbrak f ax bx k)
 (let ((gold 1.61803399)
       (glimit 100.0)
       (tiny 1.0e-20)
       (sign (lambda (x y) (if (< y 0.0) (- 0.0 x) x))))
  (when #f (format #t "MNBrak ~a ~a~%" ax bx))
  (letrec ((loop
	    (lambda (ax fa bx fb cx fc)
	     (if (< fb fc)
		 (k ax fa bx fb cx fc)
		 (let* ((r (* (- bx ax) (- fb fc)))
			(q (* (- bx cx) (- fb fa)))
			(ux
			 (-
			  bx
			  (/ (- (* (- bx cx) q) (* (- bx ax) r))
			     (* (sign (max (abs (- q r)) tiny) (- q r)) 2.0))))
			(ul (+ bx (* (- cx bx) glimit))))
		  (if (> (* (- bx ux) (- ux cx)) 0.0)
		      (let ((fu (f ux)))
		       (if (< fu fc)
			   (k bx fb ux fu cx fc)
			   (if (> fu fb)
			       (k ax fa bx fb ux fu)
			       (let ((vx (+ cx (* (- cx bx) gold))))
				(loop bx fb cx fc vx (f vx))))))
		      (if (> (* (- cx ux) (- ux ul)) 0.0)
			  (let ((fu (f ux)))
			   (if (< fu fc)
			       (let ((vx (+ ux (* (- ux cx) gold))))
				(loop cx fc ux fu vx (f vx)))
			       (loop bx fb cx fc ux fu)))
			  (if (>= (* (- ux ul) (- ul cx)) 0.0)
			      (loop bx fb cx fc ul (f ul))
			      (let ((vx (+ cx (* (- cx bx) gold))))
			       (loop bx fb cx fc vx (f vx)))))))))))
   (let ((fa (f ax))
	 (fb (f bx)))
    (if (> fb fa)
	(let ((vx (+ ax (* (- ax bx) gold))))
	 (loop bx fb ax fa vx (f vx)))
	(let ((vx (+ bx (* (- bx ax) gold))))
	 (loop ax fa bx fb vx (f vx))))))))

(define (argmin-using-mnbrak-and-golden f l u)
 (my-mnbrak f l u (lambda (ax fa bx fb cx fc)
		   (my-golden f 1.0e-1 ax bx cx (lambda (mx fm) mx)))))

(define (multivariate-pr-golden-argmin
	 f x start-direction gx-magnitude x-distance
	 line-start line-max line-tolerance
	 iterations restart-iterations)
 (let ((g (gradient-F f)))
  (letrec
    ((loop
      (lambda (x fx gx lx i r)
       (if (<= (g-magnitude gx) gx-magnitude)
	   x
	   (let*
	     ((alpha
	       (/
		(argmin-using-mnbrak-and-golden
		 (lambda (v) (f (g+ x (k*g (/ v (g-magnitude lx)) lx))))
		 line-start line-max)
		(g-magnitude lx)))
	      (x-prime (g+ x (k*g alpha lx)))
	      (fx-prime (f x-prime))
	      (gx-prime (g x-prime))
	      (beta (/ (g-dot gx-prime (g- gx-prime gx)) (g-dot gx gx)))
	      (lx-prime (g- (k*g beta lx) gx-prime)))
	    (when #f
	     (display "------ End Forward")(newline)
	     (display x-prime)(newline)
	     (display fx-prime)(newline)
	     (display gx-prime)(newline)
	     (display alpha)(newline)
	     (display beta)(newline)
	     (display (g-distance x x-prime))(newline)
	     (display lx-prime)(newline)
	     (display i)(newline)
	     (newline))
	    (cond
	     ((> fx-prime fx)
	      (format #f "Restart: ~a ~a ~a~%" fx fx-prime i)
	      (panic "Failure"))
	     ((<= iterations i) x-prime)
	     ((<= (g-distance x x-prime) x-distance)
	      (if (= (modulo (+ 1 i) restart-iterations) 0)
		  x-prime
		  (begin
		   ;; (format #t "End at non-steepest iteration~%")
		   ;; x-prime
		   ;; debugging, should this restart
		   ;; when a non-stepest iteration ends?
		   (loop x-prime fx-prime gx-prime (map-vector - gx-prime)
		   	 (+ 1 i) #f)
		   )))
	     (else
	      (loop x-prime fx-prime gx-prime
		    (if (= (modulo (+ 1 iterations) restart-iterations) 0)
			(map-vector - gx-prime) lx-prime)
		    (+ 1 i)
		    #f))))))))
   (loop x (f x) (g x) (or start-direction (map-vector - (g x))) 0 #f))))
