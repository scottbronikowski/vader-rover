;;Temporary recognizer-generator-parser for testing
;;Scott Bronikowski
;;19 September 2014

;;definitions of word types
;;DEFINE VARIABLES WITH *varname*

(define subjects '(the-robot))
(define verbs '(went))
(define one-object-prepositions '(left-of right-of behind in-front-of around towards away-from past))
(define two-object-prepositions '(between))
(define objects '(the-table the-chair the-box the-ball the-bucket the-cone))
(define conjunctions '(and))
(define temporal-prepositions '(then))
(define word-lexicon (cons subjects
			   (cons verbs
				 (cons one-object-prepositions
				       (cons two-object-prepositions
					     (cons objects
						   (cons conjunctions '())))))))

;;generator section

(define (a-subject) (cons (a-member-of subjects) '()))

(define (a-verb) (cons (a-member-of verbs) '()))

(define (a-one-object-preposition) (cons (a-member-of one-object-prepositions) '()))

(define (a-two-object-preposition) (cons (a-member-of two-object-prepositions) '()))

(define (an-object) (cons (a-member-of objects) '()))

(define (a-conjunction) (cons (a-member-of conjunctions) '()))

(define (a-temporal-preposition) (cons (a-member-of temporal-prepositions) '()))

(define (a-prepositional-phrase)
 (either (append (a-one-object-preposition) (an-object))
	 (append (a-two-object-preposition) (an-object) (a-conjunction) (an-object))))

(define (a-predicate)
 (either (append (a-verb) (a-prepositional-phrase))
	 (append (a-verb) (a-prepositional-phrase) (a-temporal-preposition) (a-prepositional-phrase))
	(append (a-verb) (a-prepositional-phrase) (a-temporal-preposition) (a-prepositional-phrase) (a-temporal-preposition) (a-prepositional-phrase))
	(append (a-verb) (a-prepositional-phrase) (a-temporal-preposition) (a-prepositional-phrase) (a-temporal-preposition) (a-prepositional-phrase) (a-temporal-preposition) (a-prepositional-phrase))))

;;could define a-predicate recursively, but then how would I put a bound on how many prepositional phrases to use when building all-sentences?
 
 (define (a-sentence) (append (a-subject) (a-predicate)))

 (define (print-sentences)
  (for-effects
   (write (a-sentence))
   (newline)))

;; end generator

;; Recognizer for robot speech control grammar (adapted from EE570 recognizer.sc)
;; Author: Scott Bronikowski
;; Date: 20 August 2014

(define (strip-a-word words lexicon)
 (when (null? words) (fail))
 (unless (memq (first words) lexicon) (fail))
 (rest words))

(define (strip-a-subject words)
 (strip-a-word words subjects));;'(the-robot)))

(define (strip-a-verb words)
 (strip-a-word words verbs));;'(went)))

(define (strip-a-one-object-preposition words)
 (strip-a-word words one-object-prepositions));;'(left-of right-of behind in-front-of)))

(define (strip-a-two-object-preposition words)
 (strip-a-word words two-object-prepositions));;'(between)))

(define (strip-an-object words)
 (strip-a-word words objects));;'(the-table the-chair)))

(define (strip-a-conjunction words)
 (strip-a-word words conjunctions));;'(and)))

(define (strip-a-predicate words)
 (either (strip-an-object (strip-a-one-object-preposition (strip-a-verb words)))
	 (strip-an-object
	  (strip-a-conjunction
	   (strip-an-object (strip-a-two-object-preposition (strip-a-verb words)))))))

(define (strip-a-sentence words)
 (strip-a-predicate (strip-a-subject words)))

(define (sentence? words)
 (possibly? (null? (strip-a-sentence words))))

;;end recognizer

;; Parser for robot speech control grammar (adapted from EE570 parser.sc)
;; Author: Scott Bronikowski
;; Date: 20 August 2014

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
  (make-state (cons (list category (first stack))
		    (rest stack))
	      (state-words state))))

(define (pop-two category state)
 (let ((stack (state-stack state)))
  (make-state (cons (list category (second stack) (first stack))
		    (rest (rest stack)))
	      (state-words state))))

(define (pop-three category state)
 (let ((stack (state-stack state)))
  (make-state (cons (list category (third stack) (second stack) (first stack))
		    (rest (rest (rest stack))))
	      (state-words state))))

(define (pop-four category state)
 (let ((stack (state-stack state)))
  (make-state (cons (list category (fourth stack) (third stack) (second stack) (first stack))
		    (rest (rest (rest (rest stack)))))
	      (state-words state))))

(define (pop-five category state)
 (let ((stack (state-stack state)))
  (make-state (cons (list category
			  (fifth stack)
			  (fourth stack)
			  (third stack)
			  (second stack)
			  (first stack))
		    (rest (rest (rest (rest (rest stack))))))
	      (state-words state))))

(define (parse-a-subject state)
 (parse-a-word state 'subj subjects))
                           ;;'(the-robot)))

(define (parse-a-verb state)
 (parse-a-word state 'v verbs))
                        ;;'(went)))

(define (parse-a-one-object-preposition state)
 (parse-a-word state 'prep-1 one-object-prepositions))
                             ;;'(left-of right-of behind in-front-of)))

(define (parse-a-two-object-preposition state)
 (parse-a-word state 'prep-2 two-object-prepositions))
	                     ;;'(between)))

(define (parse-an-object state)
 (parse-a-word state 'obj objects))
                          ;;'(the-table the-chair)))

(define (parse-a-conjunction state)
 (parse-a-word state 'conj conjunctions))
                           ;;'(and)))

(define (parse-a-predicate state)
 (either (pop-three 'pred (parse-an-object (parse-a-one-object-preposition (parse-a-verb state))))
	 (pop-five 'pred (parse-an-object (parse-a-conjunction (parse-an-object (parse-a-two-object-preposition (parse-a-verb state))))))))

(define (parse-a-sentence state)
 (pop-two 's (parse-a-predicate (parse-a-subject state))))

(define (a-parse words)
 (let ((state (parse-a-sentence (make-state '() words))))
  (unless (null? (state-words state)) (fail))
  (first (state-stack state))))

;; end parser

;;made this a thunk so it isn't computed every time I load the file
(define (all-sentences) (all-values (a-sentence)))
