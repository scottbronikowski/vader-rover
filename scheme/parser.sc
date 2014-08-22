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
 (parse-a-word state 'subj '(the-robot)))

(define (parse-a-verb state)
 (parse-a-word state 'v '(went)))

(define (parse-a-one-object-preposition state)
 (parse-a-word state 'prep-1 '(left-of right-of behind in-front-of)))

(define (parse-a-two-object-preposition state)
 (parse-a-word state 'prep-2 '(between)))

(define (parse-an-object state)
 (parse-a-word state 'obj '(the-table the-chair)))

(define (parse-a-conjunction state)
 (parse-a-word state 'conj '(and)))

(define (parse-a-predicate state)
 (either (pop-three 'pred (parse-an-object (parse-a-one-object-preposition (parse-a-verb state))))
	 (pop-five 'pred (parse-an-object (parse-a-conjunction (parse-an-object (parse-a-two-object-preposition (parse-a-verb state))))))))

(define (parse-a-sentence state)
 (pop-two 's (parse-a-predicate (parse-a-subject state))))

(define (a-parse words)
 (let ((state (parse-a-sentence (make-state '() words))))
  (unless (null? (state-words state)) (fail))
  (first (state-stack state))))