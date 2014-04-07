;;; Representation for weights:
;;;  list with one element for each layer following the input;
;;;  each such list has one element for each unit in that layer;
;;;  which consists of a bias, followed by the weights for each
;;;  unit in the previous layer.

;;; Basic MLP

(define (sum-activities activities)
 (lambda (bias-ws)
  (let ((bias (first bias-ws)) (ws (rest bias-ws)))
   (reduce + (map * ws activities) bias))))

(define (sum-layer activities ws-layer)
 (map (sum-activities activities) ws-layer))

(define (sigmoid x) (/ (+ (exp (- x)) 1)))

(define (forward-pass ws-layers)
 (lambda (in)
  (if (null? ws-layers)
      in
      ((forward-pass (cdr ws-layers))
       (map sigmoid (sum-layer in (first ws-layers)))))))

(define (error-on-dataset dataset)
 (lambda (ws-layers)
  (reduce +
	  (map (lambda (in-target)
		(let ((in (first in-target))
		      (target (second in-target)))
		 (* 0.5
		    (reduce
		     +
		     (map
		      sqr
		      (map - ((forward-pass ws-layers) in) target))
		     0))))
	       dataset)
	  0)))

;;; Optimization of the sort used with MLPs and backpropagation,
;;; often called "vanilla backprop"

;;; Scaled structure subtraction

(define (s-k* x k y)
 (cond ((real? x) (- x (* k y)))
       ((pair? x) (cons (s-k* (car x) k (car y)) (s-k* (cdr x) k (cdr y))))
       (else x)))

;;; Vanilla gradient optimization.
;;; Gradient minimize f starting at w0 for n iterations via
;;; w(t+1) = w(t) - eta * grad_w f.
;;; returns the last f(w)

(define (weight-gradient f)
 (lambda (ws)
  (set! *e* (+ *e* 1))
  (let* ((ws (map (lambda (l)
		   (map (lambda (u) (map (lambda (w) (tape *e* w '() '())) u))
			l))
		  ws))
	 (y (f ws)))
   (cond ((and (tape? y) (not (<_e (tape-epsilon y) *e*)))
	  (determine-fanout! y)
	  (reverse-phase! 1 y)))
   (set! *e* (- *e* 1))
   (map (lambda (l) (map (lambda (u) (map tape-sensitivity u)) l)) ws))))

(define (vanilla f w0 n eta)
 (if (zero? n)
     (f w0)
     (vanilla f (s-k* w0 eta ((weight-gradient f) w0)) (- n 1) eta)))

;;; XOR network

(define (xor-ws0)
 '(((0 -0.284227 1.16054) (0 0.617194 1.30467))
   ((0 -0.084395 0.648461))))

(define (xor-data)
 '(((0 0) (0))
   ((0 1) (1))
   ((1 0) (1))
   ((1 1) (0))))

(define (run) (vanilla (error-on-dataset (xor-data)) (xor-ws0) 1000 0.3))
