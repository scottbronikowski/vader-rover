(define (run-stanford-parser sentence)
 (let* ((tmp-filename (format #f "/tmp/~a-~a-sentence.txt"
			      (getenv "USER")
			      (random-integer 10000)))
	(foo (write-file (list sentence) tmp-filename))
	(raw-output (system-output
		     (format #f "/home/dpbarret/stanford-parser/stanford-parser-full-2015-04-20/newlexparser.sh ~a 2>/dev/null"
			     tmp-filename)))
	(foo (write-file (map (lambda (l)
			       (pregexp-replace*
				"[0-9]"
				(pregexp-replace*
				 ":"
				 (pregexp-replace*
				  ";"
				  (pregexp-replace*
				   "," l "COMMA")
				  "SEMICOLON")
				 "COLON")
				" "))
			      raw-output)
			 tmp-filename))
	(output (read-object-from-file tmp-filename)))
  (system (format #f "rm ~a" tmp-filename))
  output))

(define (parse->parts-of-speech parse words)
 (if (list? parse)
     (join (map (lambda (e)
	   (cond ((list? e)
		  (if
		   (and  (= (length e) 2)
			 (not (list? (first e)))
			 (not (list? (second e))))
		   (cons (dtrace "word:" e) words)
		   (parse->parts-of-speech e words)))
		 (else
		  '())))      
	  parse))
     words))

(define (oldstanford-parser-parts-of-speech sentence)
 (let* ((parse (run-stanford-parser sentence)))
  (parse->parts-of-speech parse '())))

(define (stanford-parser-parts-of-speech sentence)
 (let* ((subsentences (pregexp-split "\\." sentence))
	(parses (map run-stanford-parser subsentences)))
  (join (map (lambda (p) (cons (list 'RB 'THEN)
			       (parse->parts-of-speech p '()))) parses))))

;;;(define rules (list (list 'a '-> 'b)))
;; ***** RULES is redefined
;; RULES
;; > (rewrite (list 'a) rules)
;; (B) 
;; > (rewrite (list 'a 'a 'a) rules)
;; (B B B)
;; > (define rules (list (list (list 'a) '-> (list 'b))))
;; ***** RULES is redefined
;; RULES
;; > (rewrite (list 'a 'a 'a) rules)
;; (A A A)
;; > (rewrite (list 'a 'a (list 'a)) rules)
;; (A A (B))

(define (unify-motion-spatial tree)
 (let* ((np (second (second tree)))
	(vp (third (second tree)))	
	(pp (if (> (length vp) 3)
		`(np ,@(drop 2 vp))
		(third vp)))
	(pp? (equal? (first pp) 'pp))
	(pp-in (second pp))
	(pp-np (if pp? (third pp) pp)))
  (if (not (equal? (first (second pp-np)) 'dt))
      (let* ((pp-np-np (second pp-np))
	     (pp-np-pp (third pp-np))
	     (pp-np-pp-in (second pp-np-pp))
	     (pp-np-pp-np (third pp-np-pp))
	     (new-spatial
	      (string->symbol
	       (string-append
		(if pp?
		    (string-append (symbol->string (second pp-in)) "-")
		    "")
		(if (> (length pp-np-np) 2)
		    (string-append (symbol->string (second (second pp-np-np))) "-")
		    "")
		(symbol->string (second (last pp-np-np))) "-"
		(symbol->string (second pp-np-pp-in))))))
       `(root
	  (s
	   ,np
	   ,(append (take 2 vp) `((pp
				   (in ,new-spatial)
				   ,pp-np-pp-np))))))
      tree)))

(define (repeated-rewrite e rules)
 (let loop ((e e))
  (let ((e2 (rewrite e rules)))
   (if (equal? e e2)
       e2
       (rewrite e2 rules)))))
	    

(define *stanford->dan-rules*
 (list
  '((ROOT e...) -> (e...))
  '((S (NP e...)
       (VP (VBD e1)
	   (PP (IN e2)
	       (OBJECT-PHRASE e3...))))
    ->
    (SENTENCE ((SUBJECT e...)
	       (PREDICATE (((VERB e1)
			    ((PREPOSITIONAL-PHRASE
			      ((ONE-OBJECT-ADVERB-PREPOSITION e2)
			       (OBJECT-PHRASE e3...))))))))))
  '((e1... (DT THE) (NN ROBOT) e2...)
    ->
    (e1... THE-ROBOT e2...))
  ;'((VBD e) -> (VERB e))
  '((NP (DT THE) (NN e)) -> (OBJECT-PHRASE (NOUN e)))
  '((PP (IN e1) (NP e2))
    ->
    (PREPOSITIONAL-PHRASE ((ONE-OBJECT-ADVERB-PREPOSITION))))
  ))

(define (reword e)
 (if (list? e)
     (map replace-nouns e)
     (case e
      ((table)
       'the-table)
      ((chair)
       'the-chair)
      ((box)
       'the-box)
      ((bucket)
       'the-bucket)
      ((cone)
       'the-cone)
      ((stool)
       'the-stool)
      ((bag)
       'the-bag)
      ((to-the-left-of)
       'left-of)
      ((to-the-right-of)
       'right-of)
      (else e))))


(define (run-modified-stanford s)
 (let* ((t (run-stanford-parser s))
	(t2 (dtrace "t2" (unify-motion-spatial t))))
  (reword (repeated-rewrite
		  t2
		  *stanford->dan-rules*))))
	