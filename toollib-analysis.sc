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

;; end generator

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

;; end parser

;; new stuff

;;need to read in (x1 y1) pairs into a list from file
(define (read-trace filename)  ;;reads trace.txt produced by log-to-track.out
 (read-object-from-file filename))
(define (get-endpoint trace)
 (but-last (last trace)))

;;need to have lexicon for objects and prepositions
(define the-table '(the-table (-1.26 2.55))) ;;hardcoded for now
(define the-chair '(the-chair (1.26 2.54)))
(define (location-of obstacle)
 (last obstacle))


(define (normalize-angle angle)
 (cond
  ((> angle pi) (normalize-angle (- angle two-pi)))
  ((<= angle (- pi)) (normalize-angle (+ angle two-pi)))
  (else angle)))

(define (angle-between p1 p2)
 (atan (- (second p1) (second p2)) (- (first p1) (first p2))))

(define (left-of robot obstacle)
 (- 1 (/ (abs (- (abs (angle-between robot (location-of obstacle))) PI)) PI)))

(define (right-of robot obstacle)
 (- 1 (/ (abs (angle-between robot (location-of obstacle))) PI)))

(define (in-front-of robot obstacle)
 (- 1 (/ (abs (normalize-angle (- (angle-between robot (location-of obstacle)) (- half-pi)))) pi)))

(define (behind robot obstacle)
 (- 1 (/ (abs (normalize-angle (- (angle-between robot (location-of obstacle)) half-pi))) pi)))

(define (between robot obstacle1 obstacle2)
 (let ((angle1 (angle-between robot (location-of obstacle1)))
       (angle2 (angle-between robot (location-of obstacle2))))
  (- 1 (/ (abs (- pi (abs (- angle1 angle2)))) pi))))

