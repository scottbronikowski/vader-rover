(define *lexicon* (read-object-from-file "/home/sbroniko/vader-rover/dsci-on-latop/learned-lexicon.sc"))

(define *dataset* (read-object-from-file "/home/sbroniko/vader-rover/dsci-on-latop/msee1-dataset.sc"))

(define *floorplan* (first (first (first *dataset*))))

 (load "/home/dpbarret/aws-mturk-clt-1.3.1/hits/rover-sentences/updated-interpreter.sc")

(load "learning-mess.sc")

(load "sentence-to-trace-from-learned-models.sc")

;;test sentence
;; (interpretation->parse-functions (first (semantic-interpreter "the robot went behind the cone then went away from of the table which is left of the table and which is in front of the stool")) *floorplan* *lexicon*)