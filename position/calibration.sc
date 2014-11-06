(define (read-encoder-data-from-log-file filename)
 (let* ((lines (read-file filename))
	(split-lines (map (lambda (line) (pregexp-split ":" line)) lines))
	(valid-lines (remove-if-not (lambda (split-line)
				    (and (> (length split-line) 10)
					 (equal? "ENC" (second split-line))))
				    split-lines))
	(ticks (map (lambda (split-line)
		     (list (string->number (eighth split-line))
			   (string->number (tenth split-line))))
		    valid-lines))
	(valid-lines2 (remove-if-not (lambda (line)
				    (or
				     (let*
				       ((split-line (pregexp-split ":" line)))
				      (and (> (length split-line) 10)
					 (equal? "ENC" (second split-line))))
				     (let* ((words (fields line)))
				      (and (not (null? words))
					   (equal? (first words) "WAYPOINT")))))
				     lines))
	(waypoint-indeces
	 (removeq
	  #f
	  (map-indexed
	   (lambda (line i)
	    (let* ((words (fields line)))
	     (if (or (null? words)
		     (not (equal? (first words) "WAYPOINT")))
		 #f
		 (list (list (string->number (third words))
			     (string->number (fourth words)))
		       i))))
	   valid-lines2)))
  
	(waypoint-indeces (map-indexed (lambda (w i)
					(list (first w) (- (second w) i)))
				       waypoint-indeces)))
  (list ticks waypoint-indeces)))


(define (update-from-encoder-data pose params datapoint)
 (let* ((tau_L (x params))
	(tau_R (y params))
	(width (z params))
	(ticks_L (first datapoint))
	(ticks_R (second datapoint))
	(d_L (* tau_L ticks_L))
	(d_R (* tau_R ticks_R))
	(delta_theta (/ (- d_R d_L) width))
	(R_R (if (= d_R d_L)
		 #f
		 (/ (* d_R width) (- d_L d_R))))
	(R_L (if (= d_R d_L)
		 #f
		 (/ (* d_L width) (- d_R d_L))))
	(delta_x_robot (if (= d_R d_L)
			   0 ;;driving forward
			   (if (< (abs d_L) (abs d_R))
			       (- (* (+ R_L (/ width 2)) (cos delta_theta))
				  (+ R_L (/ width 2))) ;;turning left
			       (+ (* (+ R_R (/ width 2))
				     (cos (+ delta_theta half-pi)))
				  (+ R_R (/ width 2))))));;turning right
	(delta_y_robot (if (= d_R d_L)
			   d_L ;;driving forward
			   (if (< (abs d_L) (abs d_R))
			       (* (+ R_L (/ width 2))
				  (sin delta_theta)) ;;turning left
			       (* (+ R_R (/ width 2))
				  (sin (+ delta_theta half-pi)))))) ;;turning right
	(r_theta (- (z pose) half-pi))
	(rotation_matrix (vector (vector (cos r_theta) (- (sin r_theta)))
				 (vector (sin r_theta) (cos r_theta))))
	(delta_robot (vector delta_x_robot delta_y_robot))
	(delta_world (m*v rotation_matrix delta_robot)))
  (vector (+ (x pose) (x delta_world))
	  (+ (y pose) (y delta_world))
	  (+ (z pose) delta_theta))))