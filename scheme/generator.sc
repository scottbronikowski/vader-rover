;; Generator for robot speech control grammar (adapted from EE570 mad-libs.sc)
;; Author: Scott Bronikowski
;; Date: 20 August 2014


(define (a-subject) (either '(the-robot)))

(define (a-verb) (either '(went)))

(define (a-one-object-preposition)
 (either '(left-of) '(right-of) '(behind) '(in-front-of)))

(define (a-two-object-preposition)
 (either '(between)))

;;(define (an-article) (either '(the)))

(define (an-object) (either '(the-table) '(the-chair)))

(define (a-conjunction) (either '(and)))

(define (a-predicate)
 (either (append (a-verb) (a-one-object-preposition) (an-object))
	 (append (a-verb) (a-two-object-preposition) (an-object) (a-conjunction) (an-object))))

 (define (a-sentence) (append (a-subject) (a-predicate)))

 (define (print-sentences)
  (for-effects
   (write (a-sentence))
   (newline)))
 