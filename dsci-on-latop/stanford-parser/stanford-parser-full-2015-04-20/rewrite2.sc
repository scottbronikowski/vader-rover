;;; (rewrite expression rules) ===> expression

;;; A value is
;;; - a number of
;;; - a boolean.

;;; A variable is a symbol.

;;; An expression is
;;; - a value,
;;; - a variable, or
;;; - (e1 e2 ... en), where e1, e2, ..., en are expressions.

;;; An expression variable is e, e1, e2, ..., e6.
;;; An expression sequence variable is e..., e1..., e2..., ..., e6....

;;; An expression pattern is
;;; - an expression variable,
;;; - an expression sequence variable,
;;; - a value,
;;; - a variable, or
;;; - (p1 p2 ... pn), where p1, p2, ..., pn are expression patterns.

;;; A binding is (p e) where p is an expression variable and e is an expression.
;;; An alternative is a list of bindings.

;;; (match pattern expression) ===> alternatives

(define (expression-variable? p) (member p '(e e1 e2 e3 e4 e5 e6)))
(define (expression-sequence-variable? p)
 (member p '(e... e1... e2... e3... e4... e5... e6...)))

(define (value? p) (or (number? p) (boolean? p)))

(define (variable? p) (symbol? p))

(define (inconsistent? bindings)
 (some (lambda (binding1)
	(some (lambda (binding2)
	       (and (eq? (first binding1) (first binding2))
		    (not (equal? (second binding1) (second binding2)))))
	      bindings))
       bindings))

(define (combine result1 result2)
 (if (or (eq? result1 #f) (eq? result2 #f) (inconsistent? result1 result2))
     #f
     (append result1 result2)))

;;; (all-splits '()) ===> ((() ()))

;;; (all-splits '(b c d)) ===>
;;; ((() (b c d))
;;;  ((b) (c d))
;;;  ((b c) (d))
;;;  ((b c d) ()))

;;; (all-splits '(a b c d)) ===>
;;; ((() (a b c d))
;;;  ((a) (b c d))
;;;  ((a b) (c d))
;;;  ((a b c) (d))
;;;  ((a b c d) ()))

(define (all-splits es)
 (if (null? es)
     '((() ()))
     (cons (list '() es)
	   (map (lambda (split)
		 (list (cons (first es) (first split))
		       (second split)))
		(all-splits (rest es))))))

(define (cross-product alternatives1 alternatives2)
 (map-reduce append
	     '()
	     (lambda (alternative1)
	      (map (lambda (alternative2) (append alternative1 alternative2))
		   alternatives2))
	     alternatives1))

(define (match-pattern-sequence-expression-sequence ps es)
 ;; list of alternatives
 (if (null? ps)
     (if (null? es)
	 ;; list of alternatives
	 '(())
	 ;; list of alternatives
	 '())
     ;; list of alternatives
     (let ((p (first ps))
	   (ps (rest ps)))
      ;; list of alternatives
      (map-reduce
       append
       '()
       (lambda (split)
	(let ((es1 (first split))
	      (es2 (second split)))
	 ;; list of alternatives
	 (remove-if
	  inconsistent?
	  ;; list of alternatives
	  (cross-product
	   ;; list of alternatives
	   (match-pattern-expression-sequence p es1)
	   ;; list of alternatives
	   (match-pattern-sequence-expression-sequence ps es2)))))
       (all-splits es)))))

(define (match-pattern-expression-sequence p es)
 ;; list of alternatives
 (cond ((expression-variable? p)
	;; list of alternatives
	(if (= (length es) 1)
	    ;; list of alternatives
	    (list (list (list p es)))
	    ;; list of alternatives
	    '()))
       ((expression-sequence-variable? p)
	;; list of alternatives
	(list (list (list p es))))
       ((value? p)
	;; list of alternatives
	(if (and (= (length es) 1) (equal? p (first es)))
	    ;; list of alternatives
	    '(())
	    ;; list of alternatives
	    '()))
       ((variable? p)
	;; list of alternatives
	(if (and (= (length es) 1) (equal? p (first es)))
	    ;; list of alternatives
	    '(())
	    ;; list of alternatives
	    '()))
       ((list? p)
	;; list of alternatives
	(if (and (= (length es) 1) (list? (first es)))
	    ;; list of alternatives
	    (match-pattern-sequence-expression-sequence p (first es))
	    ;; list of alternatives
	    '()))
       (else (panic "Invalid pattern"))))

(define (match p e)
 ;;(match-pattern-sequence-expression-sequence (list p) (list e))
 (match-pattern-expression-sequence p (list e)))

(define (lookup p bindings)
 (cond ((null? bindings) (panic "unbound expression variable"))
       ((eq? p (first (first bindings))) (second (first bindings)))
       (else (lookup p (rest bindings)))))

(define (instantiate p bindings)
 (define (instantiate-with-bindings p) (instantiate p bindings))
 (cond ((expression-variable? p)
	;; expression sequence
	(lookup p bindings))
       ((expression-sequence-variable? p)
	;; expression sequence
	(lookup p bindings))
       ((value? p)
	;; expression sequence
	(list p))
       ((variable? p)
	;; expression sequence
	(list p))
       ((list? p)
	;; expression sequence
	(list (map-reduce append '() instantiate-with-bindings p)))
       (else (panic "Invalid pattern"))))

(define (find-matching-rule e rules)
 (cond ((null? rules) #f)
       ((not (null? (match (first (first rules)) e))) (first rules))
       (else (find-matching-rule e (rest rules)))))

(define (rewrite e rules)
 (define (rewrite-with-rules e) (rewrite e rules))
 (let* ((e (if (list? e) (map rewrite-with-rules e) e))
	(rule (find-matching-rule e rules)))
  (if (eq? rule #f)
      e
      (rewrite (first (instantiate (third rule) (first (match (first rule) e))))
	       rules))))
