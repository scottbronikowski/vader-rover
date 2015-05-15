(define *lexicon* (read-object-from-file "/home/sbroniko/vader-rover/dsci-on-latop/learned-lexicon.sc"))

(define *dataset* (read-object-from-file "/home/sbroniko/vader-rover/dsci-on-latop/msee1-dataset.sc"))

(define *floorplan* (first (first (first *dataset*))))
 