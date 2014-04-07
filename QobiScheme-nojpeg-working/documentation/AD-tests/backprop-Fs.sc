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
  (map-n
   (lambda (li)
    (let ((ll (list-ref ws li)))
     (map-n
      (lambda (ui)
       (map-n (lambda (wi)
	       ((derivative-F
		 (lambda (x)
		  (f (replace-ith
		      ws
		      li
		      (replace-ith
		       (list-ref ws li)
		       ui
		       (replace-ith
			(list-ref (list-ref ws li) ui) wi x))))))
		(list-ref (list-ref (list-ref ws li) ui) wi)))
	      (length (list-ref ll ui))))
      (length ll))))
   (length ws))))

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
