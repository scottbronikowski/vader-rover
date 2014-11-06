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
	(width (* 10000 (z params)))
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
	;;(foo (dtrace "dR dL" (list (primal* d_R) (primal* d_L))))
	;;(foo (dtrace "dR dL" (list (primal* d_R) (primal* d_L))))
	(delta_x_robot (if (= d_R d_L)
			   0 ;;driving forward
			   (if (< (sqr d_L) (sqr d_R))
			       (- (* (+ R_L (/ width 2)) (cos delta_theta))
				  (+ R_L (/ width 2))) ;;turning left
			       (+ (* (+ R_R (/ width 2))
				     (cos (+ delta_theta pi)))
				  (+ R_R (/ width 2))))));;turning right
	(delta_y_robot (if (= d_R d_L)
			   d_L ;;driving forward
			   (if (< (sqr d_L) (sqr d_R))
			       (* (+ R_L (/ width 2))
				  (sin delta_theta)) ;;turning left
			       (* (+ R_R (/ width 2))
				  (sin (+ delta_theta pi)))))) ;;turning right
	(r_theta (- (z pose) half-pi))
	(rotation_matrix (vector (vector (cos r_theta) (- (sin r_theta)))
				 (vector (sin r_theta) (cos r_theta))))
	(delta_robot (vector delta_x_robot delta_y_robot))
	(delta_world (m*v rotation_matrix delta_robot)))
  (vector (+ (x pose) (x delta_world))
	  (+ (y pose) (y delta_world))
	  (+ (z pose) delta_theta))))

(define (log->track params data)
 (list->vector
 (reverse
  (let loop ((pose (vector 0 0 (/ pi 2)))
	    (data data)
	    (points '()))
  (if (null? data)
      (cons pose points)
      (let ((new-point (update-from-encoder-data pose params (first data))))
       ;;(dtrace "new-point" (list (map-vector primal* pose) (map-vector primal* params) (first data) (map-vector primal* new-point)))
       (loop new-point
	     (rest data)
	     (cons new-point points))))))))

(define (cost-function-for-run params data measured-points point-indeces)
 (let* ((track (log->track params data)))
  (reduce +
	  (map
	   (lambda (point i)
	    ;; (dtrace "measured point point"
	    ;; 	    (list point (map-vector primal* (subvector (vector-ref track i) 0 2))))
	    
	    (distance-squared point (subvector (vector-ref track i) 0 2)))
	   measured-points
	   point-indeces)
	  0)))

(define (optimize-params initial-params runs-data runs-measured-points
runs-point-indeces)
(let* ((f
        (lambda (params)
         (-
	  (reduce +
                 (map
                  (lambda (data measured-points point-indeces)
                   (cost-function-for-run
		    params data measured-points point-indeces))
                  runs-data runs-measured-points runs-point-indeces)
                 0)))))
       (maximize-f f initial-params 0 1e-3))) 

(define (maximize-f f x tol1 tol2)
 (let ((g (gradient-R f)))
  (let loop ((x x)
             (gx (magnitude (g x)))
             (c (f x))
             (step .1))
   (when (= (modulo *iteration-count* 1) 0)
    (dtrace "x c gx step"
	    (list (primal* x) c gx step)))
   (set! *iteration-count* (+ *iteration-count* 1))
   (if (or (> c tol1)
           (< gx tol2)
           (< step 1e-32)
           (< (* step gx) 1e-15))
       x
       (let* ((gx (g x))
              (dx (k*v step gx))
              (x-prime (v+ x dx))
              (c-prime (f x-prime)))
        (if (> c-prime c)
            (loop x-prime (magnitude gx) c-prime (* step 1.5))
            (loop x (magnitude gx) c (* step .5))))))))


(define (plot-trace trace objects)
 (plot-lines-in-matlab-with-symbols
  (list (map x
	     (map second objects))
	(map x (vector->list trace)))
  (list (map y (map second objects))
	(map y (vector->list trace)))
  (list "'objects'" "'trace'") (list "'b.'" "'g-'"))
 (map (lambda (object)
       (matlab (format #f "text(~a,~a,'~a')" (x (second object)) (y (second object))
		       (first object))))
      objects)
 (matlab "hold off")
 (matlab "axis equal"))

;;; load data and plot track
;;(load "/home/dpbarret/darpa-collaboration/robot-nsf-proposal/robot-calibration.sc") (define data (read-encoder-data-from-log-file "/net/seykhl/aux/sbroniko/vader-rover/logs/2014-11-05-calibration-squares/left-1/imu-log.txt")) (define track (log->track `#(2.886042760554634e-05 2.816929832749588e-05 3.135735761870372e-05) (first data))) (start-matlab!) (matlab "figure")(plot-trace track (list (list "point1" (vector 0 0)) (list "point2" (vector 0 1)) (list "point3" (vector 1 1)) (list "point4" (vector 1 0))))


;; load data and optimize #(3.048837255989942e-05 3.056925451030081e-05 3.110019808409256e-05)
;;(define runs-data (map (lambda (filename) (read-encoder-data-from-log-file filename)) (list "/net/seykhl/aux/sbroniko/vader-rover/logs/2014-11-05-calibration-squares/right-1/imu-log.txt" "/net/seykhl/aux/sbroniko/vader-rover/logs/2014-11-05-calibration-squares/right-2/imu-log.txt" "/net/seykhl/aux/sbroniko/vader-rover/logs/2014-11-05-calibration-squares/left-1/imu-log.txt" "/net/seykhl/aux/sbroniko/vader-rover/logs/2014-11-05-calibration-squares/left-2/imu-log.txt")))
;;(optimize-params `#(3.041083354686843e-05 3.047550995764035e-05 3.076959029351976e-05)  (map first runs-data) (map (lambda (data) (map list->vector (map first (second data)))) runs-data) (map (lambda (data) (map second (second data))) runs-data))

