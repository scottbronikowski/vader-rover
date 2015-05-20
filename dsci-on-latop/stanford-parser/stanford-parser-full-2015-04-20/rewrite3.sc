(define (expression-variable? p) (member p '(e e1 e2 e3 e4 e5 e6)))

(define (expression-sequence-variable? p)
 (member p '(e... e1... e2... e3... e4... e5... e6...)))

(define (value? p) (or (number? p) (boolean? p)))

(define (variable? p) (symbol? p))

(define (a-split es)
 (let ((i (an-integer-between 0 (length es))))
  (list (sublist es 0 i) (sublist es i (length es)))))

(define (inconsistent? bindings)
 (some (lambda (binding1)
	(some (lambda (binding2)
	       (and (eq? (first binding1) (first binding2))
		    (not (equal? (second binding1) (second binding2)))))
	      bindings))
       bindings))

(define (a-match-pattern-sequence-expression-sequence ps es)
 (if (null? ps)
     (if (null? es) '() (fail))
     (let* ((split (a-split es))
	    (bindings (append (a-match-pattern-expression-sequence
			       (first ps) (first split))
			      (a-match-pattern-sequence-expression-sequence
			       (rest ps) (second split)))))
      (if (inconsistent? bindings)
	  (fail)
	  bindings))))

(define (a-match-pattern-expression-sequence p es)
 (cond ((expression-variable? p)
	(if (= (length es) 1) (list (list p es)) (fail)))
       ((expression-sequence-variable? p) (list (list p es)))
       ((value? p)
	(if (and (= (length es) 1) (equal? p (first es))) '() (fail)))
       ((variable? p)
	(if (and (= (length es) 1) (equal? p (first es))) '() (fail)))
       ((list? p)
	(if (and (= (length es) 1) (list? (first es)))
	    (a-match-pattern-sequence-expression-sequence p (first es))
	    (fail)))
       (else (panic "Invalid pattern"))))

(define (a-match p e)
 ;; (a-match-pattern-sequence-expression-sequence (list p) (list e))
 (a-match-pattern-expression-sequence p (list e)))

(define (lookup p bindings)
 (cond ((null? bindings) (panic "unbound expression variable"))
       ((eq? p (first (first bindings))) (second (first bindings)))
       (else (lookup p (rest bindings)))))

(define (instantiate p bindings)
 (define (instantiate-with-bindings p) (instantiate p bindings))
 (cond ((expression-variable? p) (lookup p bindings))
       ((expression-sequence-variable? p) (lookup p bindings))
       ((value? p) (list p))
       ((variable? p) (list p))
       ((list? p) (list (map-reduce append '() instantiate-with-bindings p)))
       (else (panic "Invalid pattern"))))

(define (find-matching-rule e rules)
 (cond
  ((null? rules) #f)
  ((not (null? (all-values (a-match (first (first rules)) e)))) (first rules))
  (else (find-matching-rule e (rest rules)))))

(define (rewrite e rules)
 (define (rewrite-with-rules e) (rewrite e rules))
 (let* ((e (if (list? e) (map rewrite-with-rules e) e))
	(rule (find-matching-rule e rules)))
  (if (eq? rule #f)
      e
      (rewrite
       (first (instantiate (third rule)
			   (first (all-values (a-match (first rule) e)))))
       rules))))
