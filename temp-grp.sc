;;Temporary recognizer-generator-parser for testing
;;Scott Bronikowski
;;19 September 2014

;;definitions of word types
(define *subjects* '(the-robot))
(define *verbs* '(went))
(define *one-object-prepositions* '(left-of right-of behind in-front-of around towards away-from past))
(define *two-object-prepositions* '(between))
(define *objects* '(the-table the-chair the-box the-ball the-bucket the-cone))
(define *conjunctions* '(and))
(define *temporal-prepositions* '(then))
(define *word-lexicon* (cons *subjects*
			   (cons *verbs*
				 (cons *one-object-prepositions*
				       (cons *two-object-prepositions*
					     (cons *objects*
						   (cons *conjunctions*
							 (cons *temporal-prepositions* '()))))))))

;;generator section

(define (a-subject) (cons (a-member-of *subjects*) '()))

(define (a-verb) (cons (a-member-of *verbs*) '()))

(define (a-one-object-preposition) (cons (a-member-of *one-object-prepositions*) '()))

(define (a-two-object-preposition) (cons (a-member-of *two-object-prepositions*) '()))

(define (an-object) (cons (a-member-of *objects*) '()))

(define (a-conjunction) (cons (a-member-of *conjunctions*) '()))

(define (a-temporal-preposition) (cons (a-member-of *temporal-prepositions*) '()))

(define (a-prepositional-phrase)
 (either (append (a-one-object-preposition) (an-object))
	 (append (a-two-object-preposition) (an-object) (a-conjunction) (an-object))))

(define (a-predicate)
 (either (append (a-verb) (a-prepositional-phrase))
	 (append (a-verb) (a-prepositional-phrase)
		 (a-temporal-preposition) (a-prepositional-phrase))
	 (append (a-verb) (a-prepositional-phrase)
		 (a-temporal-preposition) (a-prepositional-phrase)
		 (a-temporal-preposition) (a-prepositional-phrase))
	 (append (a-verb) (a-prepositional-phrase)
		 (a-temporal-preposition) (a-prepositional-phrase)
		 (a-temporal-preposition) (a-prepositional-phrase)
		 (a-temporal-preposition) (a-prepositional-phrase))
	))

;;could define a-predicate recursively, but then how would I put a bound on how many prepositional phrases to use when building all-sentences?
 
 (define (a-sentence) (append (a-subject) (a-predicate)))

 (define (print-sentences)
  (for-effects
   (write (a-sentence))
   (newline)))
;; end generator

;; recognizer section
(define (strip-a-word words lexicon)
 (when (null? words) (fail))
 (unless (memq (first words) lexicon) (fail))
 (rest words))

(define (strip-a-subject words) (strip-a-word words *subjects*))

(define (strip-a-verb words) (strip-a-word words *verbs*))

(define (strip-a-one-object-preposition words)
 (strip-a-word words *one-object-prepositions*))

(define (strip-a-two-object-preposition words)
 (strip-a-word words *two-object-prepositions*))

(define (strip-an-object words) (strip-a-word words *objects*))

(define (strip-a-conjunction words) (strip-a-word words *conjunctions*))

(define (strip-a-temporal-preposition words)
 (strip-a-word words *temporal-prepositions*))

(define (strip-a-prepositional-phrase words)
 (either (strip-an-object (strip-a-one-object-preposition words))
	 (strip-an-object
	  (strip-a-conjunction
	   (strip-an-object (strip-a-two-object-preposition words))))))

(define (strip-a-predicate words)
 (either (strip-a-prepositional-phrase (strip-a-verb words)) ;;1-prep-phrase
	 (strip-a-prepositional-phrase ;;2-prep-phrases
	  (strip-a-temporal-preposition
	   (strip-a-prepositional-phrase
	    (strip-a-verb words))))
	 (strip-a-prepositional-phrase ;;3-prep-phrases
	  (strip-a-temporal-preposition
	   (strip-a-prepositional-phrase
	    (strip-a-temporal-preposition
	     (strip-a-prepositional-phrase
	      (strip-a-verb words))))))
	 (strip-a-prepositional-phrase ;;4-prep-phrases
	  (strip-a-temporal-preposition
	   (strip-a-prepositional-phrase
	    (strip-a-temporal-preposition
	     (strip-a-prepositional-phrase
	      (strip-a-temporal-preposition
	       (strip-a-prepositional-phrase
		(strip-a-verb words))))))))))

(define (strip-a-sentence words)
 (strip-a-predicate (strip-a-subject words)))

(define (sentence? words)
 (possibly? (null? (strip-a-sentence words))))
;;end recognizer

;;parser section
(define-structure state stack words)

(define (parse-a-word state category lexicon)
 (let ((words (state-words state)))
  (when (null? words) (fail))
  (unless (memq (first words) lexicon) (fail))
  (make-state (cons (list category (first words))
		    (state-stack state))
	      (rest words))))

(define (pop-one category state)
 (let ((stack (state-stack state)))
  (make-state (cons (list category
			  (first stack))
		    (rest stack))
	      (state-words state))))

(define (pop-two category state)
 (let ((stack (state-stack state)))
  (make-state (cons (list category
			  (second stack)
			  (first stack))
		    (rest
		     (rest stack)))
	      (state-words state))))

(define (pop-three category state)
 (let ((stack (state-stack state)))
  (make-state (cons (list category
			  (third stack)
			  (second stack)
			  (first stack))
		    (rest
		     (rest
		      (rest stack))))
	      (state-words state))))

(define (pop-four category state)
 (let ((stack (state-stack state)))
  (make-state (cons (list category
			  (fourth stack)
			  (third stack)
			  (second stack)
			  (first stack))
		    (rest
		     (rest
		      (rest
		       (rest stack)))))
	      (state-words state))))

(define (pop-five category state)
 (let ((stack (state-stack state)))
  (make-state (cons (list category
			  (fifth stack)
			  (fourth stack)
			  (third stack)
			  (second stack)
			  (first stack))
		    (rest
		     (rest
		      (rest
		       (rest
			(rest stack))))))
	      (state-words state))))

(define (pop-six category state)
 (let ((stack (state-stack state)))
  (make-state (cons (list category
			  (sixth stack)
			  (fifth stack)
			  (fourth stack)
			  (third stack)
			  (second stack)
			  (first stack))
		    (rest
		     (rest
		      (rest
		       (rest
			(rest
			 (rest stack)))))))
	      (state-words state))))

(define (pop-seven category state)
 (let ((stack (state-stack state)))
  (make-state (cons (list category
			  (seventh stack)
			  (sixth stack)
			  (fifth stack)
			  (fourth stack)
			  (third stack)
			  (second stack)
			  (first stack))
		    
		    (rest
		     (rest
		      (rest
		       (rest
			(rest
			 (rest
			  (rest stack))))))))
	      (state-words state))))

(define (pop-eight category state)
 (let ((stack (state-stack state)))
  (make-state (cons (list category
			  (eighth stack)
			  (seventh stack)
			  (sixth stack)
			  (fifth stack)
			  (fourth stack)
			  (third stack)
			  (second stack)
			  (first stack))
		    
		    (rest
		     (rest
		      (rest
		       (rest
			(rest
			 (rest
			  (rest
			   (rest stack)))))))))
	      (state-words state))))

(define (parse-a-subject state)
 (parse-a-word state 'subj *subjects*))

(define (parse-a-verb state)
 (parse-a-word state 'v *verbs*))

(define (parse-a-one-object-preposition state)
 (parse-a-word state 'prep-1 *one-object-prepositions*))

(define (parse-a-two-object-preposition state)
 (parse-a-word state 'prep-2 *two-object-prepositions*))

(define (parse-an-object state)
 (parse-a-word state 'obj *objects*))

(define (parse-a-conjunction state)
 (parse-a-word state 'conj *conjunctions*))

(define (parse-a-temporal-preposition state)
 (parse-a-word state 'prep-t *temporal-prepositions*))

(define (parse-a-prepositional-phrase state)
 (either (pop-two 'prep-ph (parse-an-object
			    (parse-a-one-object-preposition state)))
	 (pop-four 'prep-ph (parse-an-object
			     (parse-a-conjunction
			      (parse-an-object
			       (parse-a-two-object-preposition state)))))))

(define (parse-a-predicate state)
 (either (pop-two 'pred (parse-a-prepositional-phrase (parse-a-verb state)))
	 (pop-four 'pred (parse-a-prepositional-phrase
			  (parse-a-temporal-preposition
			   (parse-a-prepositional-phrase
			    (parse-a-verb state)))))
	 (pop-six 'pred (parse-a-prepositional-phrase
			  (parse-a-temporal-preposition
			   (parse-a-prepositional-phrase
			    (parse-a-temporal-preposition
			     (parse-a-prepositional-phrase
			      (parse-a-verb state)))))))
	 (pop-eight 'pred (parse-a-prepositional-phrase
			  (parse-a-temporal-preposition
			   (parse-a-prepositional-phrase
			    (parse-a-temporal-preposition
			     (parse-a-prepositional-phrase
			      (parse-a-temporal-preposition
			       (parse-a-prepositional-phrase
				(parse-a-verb state)))))))))))

(define (parse-a-sentence state)
 (pop-two 's (parse-a-predicate (parse-a-subject state))))

(define (a-parse words)
 (let ((state (parse-a-sentence (make-state '() words))))
  (unless (null? (state-words state)) (fail))
  (first (state-stack state))))
;; end parser

;;made this a thunk so it isn't computed every time I load the file
(define (all-sentences) (all-values (a-sentence)))
