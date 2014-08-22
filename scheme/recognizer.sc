;; Recognizer for robot speech control grammar (adapted from EE570 recognizer.sc)
;; Author: Scott Bronikowski
;; Date: 20 August 2014

(define (strip-a-word words lexicon)
 (when (null? words) (fail))
 (unless (memq (first words) lexicon) (fail))
 (rest words))

(define (strip-a-subject words)
 (strip-a-word words '(the-robot)))

(define (strip-a-verb words)
 (strip-a-word words '(went)))

(define (strip-a-one-object-preposition words)
 (strip-a-word words '(left-of right-of behind in-front-of)))

(define (strip-a-two-object-preposition words)
 (strip-a-word words '(between)))

(define (strip-an-object words)
 (strip-a-word words '(the-table the-chair)))

(define (strip-a-conjunction words)
 (strip-a-word words '(and)))

(define (strip-a-predicate words)
 (either (strip-an-object (strip-a-one-object-preposition (strip-a-verb words)))
	 (strip-an-object (strip-a-conjunction (strip-an-object (strip-a-two-object-preposition (strip-a-verb words)))))))

(define (strip-a-sentence words)
 (strip-a-predicate (strip-a-subject words)))

(define (sentence? words)
 (possibly? (null? (strip-a-sentence words))))