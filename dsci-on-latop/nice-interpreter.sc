(load "wiki-prepositions.sc")
(load "parser-wrapper.sc")

(define (get-all-words-stanford-parts-of-speech)
 (map stanford-parser-parts-of-speech (read-file "sentences.text")))
	
(define *all-words-stanford-parts-of-speech*
 (read-object-from-file "all-parts-of-speech.sc"))

(define *word-counts*
 (map
  (lambda (u)
   (list u (count u *all-words-stanford-parts-of-speech*)))
  (unique *all-words-stanford-parts-of-speech*)))

(define *significant-words*
 (map first (remove-if (lambda (x) (< (second x) 100)) *word-counts*)))

;; (define (preposition? w)
;;  (not (not (or (member w '("left" "right" "front" "behind" "towards" "toward" "away" "above" "below" "underneath" "under" "to"))
;; 	       (member w '("LEFT" "RIGHT" "FRONT" "BEHIND" "TOWARDS" "TOWARD" "AWAY" "ABOVE" "BELOW" "UNDERNEATH" "UNDER" "TO"))))))

(define (preposition? iwwp)
 (and
  (member (second (first iwwp)) (map second *significant-words*))
  (not (equal? (second (first iwwp)) 'IN))
  (not (equal? (second (first iwwp)) 'OF))
  (not (equal? (second (first iwwp)) 'TO))
 (member (string-downcase (symbol->string (second (first iwwp))))
	  *all-wiki-prepositions*)))


;; (define (noun? w)
;;  (not (not (or (member w '("bag" "bags" "box" "chair" "cone" "stool" "table"))
;; 	       (member w '("BAG" "BAGS" "BOX" "CHAIR" "CONE" "STOOL" "TABLE"))))))

(define (noun? iwwp)
 (and (equal? (first (first iwwp))'NN)
      (not (equal? (second (first iwwp)) 'ROBOT))
      (not (preposition? iwwp))
      (member (first iwwp) *significant-words*)))

(define (noun? iwwp)
 (and (not (equal? (second (first iwwp)) 'ROBOT))
      (not (preposition? iwwp))
      (member (second (first iwwp))
	      (map second
		   (remove-if-not
		    (lambda (wwp)
		     (equal? (first wwp) 'NN))
		    *significant-words*)))))

(define (WH-determiner? iwwp)
 (equal? (first (first iwwp)) 'WDT))

(define (verb? iwwp)
 (let ((stanford-part-of-speech (first (first iwwp))))
  (and  (not (preposition? iwwp))
	(or (equal? stanford-part-of-speech 'VB)
	    (equal? stanford-part-of-speech 'VBD)
	    (equal? stanford-part-of-speech 'VBG)
	    (equal? stanford-part-of-speech 'VBN)
	    (equal? stanford-part-of-speech 'VBP)
	    (equal? stanford-part-of-speech 'VBZ)))))

(define (conjunction? iwwp)
 (equal? (first (first iwwp)) 'CC))

(define (adverb? iwwp)
 ;; this basically finds "then"
 (and (not (preposition? iwwp))
      (equal? (first (first iwwp)) 'RB)
      (member (first iwwp) *significant-words*)))

(define (transition-word? iwwps iwwp)
 (or (adverb? iwwp) ;; then 
     (and (verb? iwwp) ;;  a verb not preceded by "which", "that", etc
	  (or (= (second iwwp) 0) ;; then there is no previous word to be a WH-determiner
	      (not (WH-determiner? (list-ref iwwps (- (second iwwp) 1))))))))

(define (dtrace-if b s d)
 (if b (dtrace s d) d))

(define (dtrace-d s d)
 (dtrace-if *debugging?* s d))

(define *debugging?* #f)

(define (semantic-interpreter s)
 (let* ((words-with-parts (dtrace-d "parts"(stanford-parser-parts-of-speech s)))
	(words
	 (dtrace-d
	  "commas words"
	  (map-indexed
	   list
	   (fields
	    (list->string
	     (map (lambda (c)
		   (if (or (char-alphabetic? c) (equal? c #\,)) (char-downcase c) #\space))
		  (string->list (pregexp-replace* "," s " ,"))))))))
	(words (map-indexed (lambda (wwp i)
			     (list wwp i))
			    words-with-parts))
	
	(nouns
	 (dtrace-d
	  "nouns"
	  (map (lambda (w) (list (symbol->string (second (first w))) (second w)))
	  (remove-if-not (lambda (word) (noun? word)) words))))
	(prepositions
	 (dtrace-d
	  "preps"
	  (map (lambda (w) (list (symbol->string (second (first w))) (second w)))
	       (remove-if-not (lambda (word) (preposition? word)) words))))
	(transition-positions
	 (dtrace-d
	  "then-pos"
	  (cons
	   -1
	   (append
	    (map second
		 (dtrace-d
		  "thens:"
		  (remove-if-not (lambda (word) (transition-word? words word)) words)
		  ))
	    (list (length words))))))
	(conj-positions
	 (dtrace-d
	  "and-pos"
	  (map second
	       (remove-if-not (lambda (word) (conjunction? word))
			      words))))
	(which-positions
	 (dtrace-d
	  "which-pos"
	  (map second
	       (remove-if-not (lambda (word) (WH-determiner? word))
			      words))))
	(comma-positions
	 (dtrace-d
	  "comma-pos"
	  (map second
	       (remove-if-not (lambda (word) (equal? (second (first word)) 'COMMA))
			      words))))
	(path-variables
	 (dtrace-d
	  "path-var"
	  (map-n (lambda (i)
		  (string->symbol
		   (string-append (symbol->string 'alpha) (number->string i))))
		 (- (length transition-positions) 1))))
	(floorplan-variables
	 (dtrace-d
	  "floor-var"
	  (map-n (lambda (i)
		  (string->symbol
		   (string-append (symbol->string 'x) (number->string i))))
		 (length nouns)))))
  (all-values
   ;;(every-path-variable-appears-exactly-once
   ;;path-variables
   (cons
    'and
    (append
     (map-indexed (lambda (noun i)
		   (list (string->symbol (string-upcase (first noun)))
			 (list-ref floorplan-variables i)))
		  nouns)
     (remove-if
      (lambda (p)
       (some (lambda (x) (not x)) p))
      (removeq #f
	       
	       (map (lambda (preposition)
		     (dtrace-d "prep:" preposition)
		     (let ((nouns-following-preposition
			    (sort (remove-if-not
				   (lambda (noun)
				    (and (> (second noun) (second preposition))
					 (not (some (lambda (prep)
						     (and (> (second prep) (second preposition))
							  (> (second noun) (second prep))))
						    prepositions))))
				   nouns)
				  <
				  second)))
		      ;; (when (null? nouns-following-preposition)
		      ;;  (dtrace-d "no nouns following prep" preposition)
		      ;;  (fail))
		      (if (null? nouns-following-preposition)
			  (dtrace-d "no nouns following this prep" #f)
			  (let* ((then-index
				  (find-if
				   (lambda (then-index)
				    (< (list-ref transition-positions then-index)
				       (second preposition)
				       (list-ref transition-positions (+ then-index 1))))
				   (enumerate (- (length transition-positions) 1))))
				 (first-noun-following-preposition
				  (first nouns-following-preposition))
				 (prepositions-in-then-clause-that-preceed-preposition
				  (dtrace-d "preceeding preps:" (remove-if-not
				   (lambda (prep)
				    (and (< (second prep) (second preposition))
					 (> (second prep) (list-ref transition-positions then-index))))
				   prepositions)))
				 (whiches-in-then-clause-that-preceed-preposition
				  (dtrace-d "preceeding whiches:" (remove-if-not
				   (lambda (which-pos)
				    (and (< which-pos (second preposition))
					 (> which-pos (list-ref transition-positions then-index))))
				   which-positions)))
				 (ands-in-then-clause-that-preceed-preposition
				  (dtrace-d "preceeding ands" (remove-if-not
				   (lambda (and-pos)
				    (and (< and-pos (second preposition))
					 (> and-pos (list-ref transition-positions then-index))))
				   conj-positions)))
				 (nouns-in-then-clause-that-preceed-preposition
				  (dtrace-d "preceeding nouns:"(remove-if-not
								(lambda (noun)
								 (dtrace-if #f "pnoun?:" noun)
								 (and (dtrace-if #f "c1:"(< (dtrace-if #f "thenp" (list-ref transition-positions then-index))
											(second noun)
											(dtrace-if #f "nthenp:" (list-ref transition-positions (+ then-index 1)))))
								      (dtrace-if #f "c2:" (< (second noun) (second preposition)))))
								nouns)))
				 (floorplan-variables-in-then-clause-that-preceed-preposition
				  (dtrace-d "preceeding floorplan variables:"(map (lambda (noun)
										   (list-ref floorplan-variables
											     (position noun nouns)))
										  nouns-in-then-clause-that-preceed-preposition)))
				 (commas-in-then-clause-that-preceed-preposition
				  (dtrace-d "preceeding preps:" (remove-if-not
				   (lambda (pos)
				    (and (< pos (second preposition))
					 (> pos (list-ref transition-positions then-index))))
				   comma-positions)))
				 (immediately-preceeding-whiches
				  (dtrace-d "immediate whiches"
				  (remove-if (lambda (which-pos)
					      (some (lambda (noun)
						     (> (second noun) which-pos))
						    nouns-in-then-clause-that-preceed-preposition))
					     whiches-in-then-clause-that-preceed-preposition)))
				 (immediately-preceeding-ands
				  (dtrace-d "immediate ands"
				  (remove-if (lambda (and-pos)
					      (some (lambda (noun)
						     (> (second noun) and-pos))
						    nouns-in-then-clause-that-preceed-preposition))
					     ands-in-then-clause-that-preceed-preposition)))
				 (immediately-preceeding-commas
				  (dtrace-d "immediate commas"
				  (remove-if (lambda (comma-pos)
					      (some (lambda (noun)
						     (> (second noun) comma-pos))
						    nouns-in-then-clause-that-preceed-preposition))
					     commas-in-then-clause-that-preceed-preposition))))
			   ;; 1. We don't handle the constraint that every path variable
			   ;;    can only occur once per and segment. This is not exactly
			   ;;    the case because need to distinguish between conjunctions
			   ;;    of then clauses and conjunctions of which clauses.
			   (dtrace-d
			    "?"
			    (list
			     (string->symbol (string-upcase (first preposition)))
			     (cond
			      ((and (null? whiches-in-then-clause-that-preceed-preposition)
				     (not (null? immediately-preceeding-ands)))
				(list-ref path-variables then-index))
			      ((not (null? immediately-preceeding-whiches))
			       (dtrace-d "found a 'which', this prep must be adj" preposition)
			       (if (null? immediately-preceeding-ands)
				   (if (null? floorplan-variables-in-then-clause-that-preceed-preposition)
				       #f
				       (last floorplan-variables-in-then-clause-that-preceed-preposition))
				   (if (< (length floorplan-variables-in-then-clause-that-preceed-preposition) 2)
				       #f
				       (last (but-last floorplan-variables-in-then-clause-that-preceed-preposition)))))
			      ((and (not (null? whiches-in-then-clause-that-preceed-preposition))
				    (not (null? immediately-preceeding-ands)))
			       (if (< (length floorplan-variables-in-then-clause-that-preceed-preposition) 2)
				       (list-ref path-variables then-index)
				       (last (but-last floorplan-variables-in-then-clause-that-preceed-preposition))))
			      ((null? immediately-preceeding-commas)
			       (if (null? floorplan-variables-in-then-clause-that-preceed-preposition)
				       (list-ref path-variables then-index)
				       (last floorplan-variables-in-then-clause-that-preceed-preposition)))
	 		      (else
			       (either
				(list-ref path-variables then-index)
				(a-member-of
				 floorplan-variables-in-then-clause-that-preceed-preposition))))
					 (list-ref floorplan-variables
						   (position
						    first-noun-following-preposition
						    nouns))))))))
		    prepositions))))))));)


(define (extract-variables logic)
 (unique (join (map rest (rest logic)))))

(define (extract-path-variables variables)
 (remove-if-not
  (lambda (v)
   (equal? 'alpha (string->symbol (list->string (nice-sublist (string->list (symbol->string v)) 0 5)))))
  variables))

(define (extract-floorplan-variables variables)
 (remove-if-not
  (lambda (v)
   (equal? 'x (string->symbol (list->string (but-last (string->list (symbol->string v)))))))
  variables))

(define (extract-noun-formulas logic)
 (remove-if
  (lambda (f)
   (member (string-downcase (symbol->string  (first f))) *all-wiki-prepositions*)
   ;; (noun? (dtrace "" (symbol->string (first f))))
   )
  (rest logic)))

(define (extract-preposition-formulas logic)
 (remove-if-not
  (lambda (f)
   (member (string-downcase (symbol->string  (first f))) *all-wiki-prepositions*)
   ;; (preposition? (symbol->string (first f)))
   )
  (rest logic)))

(define (extract-variable-mapping path-variables floorplan-variables)
(list (map-indexed (lambda (v i)
	       (list v i))
		   (append path-variables))
      (map-indexed (lambda (v i)
		    (list v (+ i (length path-variables))))
		   (append floorplan-variables))))

(define (replace-arguments f mappings)
 (map (lambda (x)
      (let* ((p (position x (map first mappings))))
	  (if p
	      (second (list-ref mappings p))
	      x)))
      f))

(define (qobi-logic->linked-references logic)
;; converts to form used by learning code
 (let* ((variables (extract-variables logic))
	(path-variables (extract-path-variables variables))
	(floorplan-variables (extract-floorplan-variables variables))
	(noun-formulas (extract-noun-formulas logic))
	(preposition-formulas (extract-preposition-formulas logic))
	(variable-mappings (extract-variable-mapping path-variables floorplan-variables)))
  (if (null? path-variables)
     '()
	(list (append (map (lambda (v-i)
			    (list 'robot (second v-i) (second v-i)))
			   (first variable-mappings))
		      (map (lambda (formula)
			    (replace-arguments formula (join variable-mappings)))
			   noun-formulas))
	      (map (lambda (formula)
		    (replace-arguments formula (join variable-mappings)))
		   preposition-formulas)))))

(define *mapping*
 ;; this mapping is used in the conversion from the interpreter output to what the learning system expects
 ;; some of these are no longer needed, because things like below will no longer appear in the interpreter output
 (list
  (list 'and 'and)
  (list 'left 'left-of)
       (list 'right 'right-of)
       (list 'front 'in-front-of)
       (list 'behind 'behind)
       (list 'to 'towards)
       (list 'toward 'towards)
       (list 'towards 'towards)
       (list 'away 'away-from)
       (list 'from 'away-from)
       (list 'above 'behind)
       (list 'below 'in-front-of)
       (list 'underneath 'in-front-of)
       (list 'under 'in-front-of)
       (list 'robot 'robot)
       (list 'bag 'the-bag)
       (list 'bags 'the-bag)
       (list 'box 'the-box)
       (list 'chair 'the-chair)
       (list 'cone 'the-cone)
       (list 'stool 'the-stool)
       (list 'table 'the-table)))

;;  "away" "above" "below" "underneath" "under"
  
(define (rename-everything l)
 (if (list? l)
     (map rename-everything l)
     (if (number? l)
	 l
	 (let* ((p (position l (map first *mapping*))))
	  (if p
	      (second (list-ref *mapping* p))
	      (panic (dtrace "unknown thing:" l)))))))

(define (rename-things-in-logic l)
 (cons (first l) ;and
       (map (lambda (e)
	     (cons (rename-everything (first e))
		   (rest e)))
	     (rest l))))
       
(define (new-linked-references3 linked-references)
 (let* ((robot-references (dtrace "ref" (remove-if-not
			   (lambda (r) (equal? (first r) 'robot))
			   (first linked-references))))
	(other-references (dtrace "other" (set-difference (first linked-references) robot-references)))
	(robot-numbers (dtrace "robot-numbers" (map second robot-references)))
	(compute-phase
	 (lambda (m)
	  (dtrace "m" m)
	  (dtrace "phase" (- (length (remove-if (lambda (n) (> n m)) robot-numbers))
	     1))))
	(new-compute-phase (lambda (id)
			    (if (equal? (first (list-ref (first linked-references) id))
					'robot)
				(second (list-ref (first linked-references) id))
				0)))
	(predicate-names (dtrace "names"(append other-references (second linked-references))))
	(phases (dtrace "phases" (map (lambda (p) (maximum (map new-compute-phase (rest p)))) predicate-names)))
	(phases
	 (let loop ((phases phases))
	  (let ((new-phases
		(dtrace "phasesloop" (map (lambda (pred)
		      (let ((refs (rest pred)))
		      (maximum (removeq #f
					(map (lambda (pred phase)
					      (if (some (lambda (ref) (member ref refs)) (rest pred))
						  phase #f))
					     predicate-names phases)))))
		     predicate-names))))
	   (if (equal? phases new-phases) new-phases (loop new-phases)))))
	;; (phases (dtrace "phases3" (map (lambda (pred)
	;; 	      (let ((refs (rest pred)))
	;; 	      (maximum (removeq #f
	;; 				(map (lambda (pred phase)
	;; 				      (if (some (lambda (ref) (member ref refs)) (rest pred))
	;; 					  phase #f))
	;; 				     predicate-names phases)))))
	;; 	     predicate-names)))
	)
  (map (lambda (p phrs)
	`(,(first p) ,;; (maximum
		       phrs;; ) 
	,@(map (lambda (m ;; phr
						       )
					     (if (member m robot-numbers) 0 (- m (- (length robot-numbers) 1)) ;; (- m phr)
						 ))
					    (rest p) ;; phrs
					    )))
       predicate-names phases)))



;;; (behind 1 0 2) means in phase 1, the robot(0) is behind object 2
;;; (the-table 0 1) means the table appears in phase 0 and has id 1

(define (nice-sublist l start end)
 (if (> start  (length l))
     '()
     (if (> end (length l))
	 (sublist l start (length l))
	 (sublist l start end))))