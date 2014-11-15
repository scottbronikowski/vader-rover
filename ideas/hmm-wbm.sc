(MODULE HMM-WBM)
;;; LaHaShem HaAretz U'Mloah

(include "QobiScheme.sch")
(include "hmm-wbm.sch")
(include "toollib-c-macros.sch")

(c-include "hmm-def.h")
(c-include "hmm.h")
(c-include "hmm-data.h")
(c-include "hmm-control.h")
(c-include "hmm-features.h")
(c-include "idealib-c.h")

;;; Structures

(define-structure psi name part-of-speech features n-roles parameters a b)

;;; enum part_of_speech
(define pos-c:noun (c-value int "NOUN"))
(define pos-c:verb (c-value int "VERB"))
(define pos-c:adverb (c-value int "ADVERB"))
(define pos-c:adjective (c-value int "ADJECTIVE"))
(define pos-c:preposition (c-value int "PREPOSITION"))
(define pos-c:motion-preposition (c-value int "MOTION_PREPOSITION"))
(define pos-c:verb0 (c-value int "VERB0"))
(define pos-c:verb1 (c-value int "VERB1"))
(define pos-c:other (c-value int "OTHER"))

(define training-mode-c:ml (c-value int "HMM_ML"))
(define training-mode-c:dt (c-value int "HMM_DT"))
(define training-mode-c:mixed (c-value int "HMM_MIXED"))

(define model-constraint:none (c-value int "NO_MODEL_CONSTRAINT"))
(define model-constraint:no-duplicates (c-value int "NO_DUPLICATE_MODELS"))

(define state-constraint:none (c-value int "NO_STATE_CONSTRAINT"))
(define state-constraint:tie (c-value int "TIE_STATES"))
;;; Procedures

(define allocate-ivec
 (c-function pointer ("allocIVec" int)))

(define set-ivec!
 (c-function void ("setIVec" pointer int int)))

(define free-ivec
 (c-function void ("freeIVec" pointer)))

(define allocate-rmat
 (c-function pointer ("allocRMat" int int)))

(define rmat-get
 (c-function double ("rmat_get" pointer int int)))

(define rmat-set!
 (c-function void ("rmat_set" pointer int int double)))

(define free-rmat
 (c-function void ("freeRMat" pointer)))

(define allocate-rmat-vector
 (c-function pointer ("allocate_rmat_vector" int)))

(define rmat-vector-set!
 (c-function void ("rmat_vector_set" pointer int pointer)))

(define free-rmat-vector
 (c-function void ("free_rmat_vector" pointer)))

(define allocate-model
 (c-function pointer ("allocModel" int int)))

(define copy-model!
 (c-function void ("copyModel" pointer pointer)))

(define (clone-model model)
 (let* ((m (trained-hmm-model model))
	(mm (allocate-model (model-ii m) (model-uu m))))
  (copy-model! mm m)
  (make-trained-hmm (trained-hmm-name model)
		    (trained-hmm-videos model)
		    (trained-hmm-states model)
		    (trained-hmm-log-likelihood model)
		    mm
		    (trained-hmm-participants model)
		    (trained-hmm-feature-type model)
		    (trained-hmm-training-type model))))

(define clone-c-model
 (c-function pointer ("cloneModel" pointer)))

(define model-ii
 (c-function int ("model_ii" pointer)))

(define model-nn
 (c-function int ("model_nn" pointer int)))

(define model-uu
 (c-function int ("model_uu" pointer)))

(define model-feature-type
 (c-function int ("model_feature_type" pointer int)))

(define set-model-feature-type-continuous!
 (c-function void ("defineContFeat" pointer int double)))

(define set-model-feature-type-radial!
 (c-function void ("defineRadialFeat" pointer int)))

(define set-model-feature-type-discrete!
 (c-function void ("defineDiscreteFeat" pointer int)))

(define model-parameter
 (c-function double ("model_parameter" pointer int int int)))

(define set-model-parameter!
 (c-function void ("set_model_parameter" pointer int int int double)))

(define model-a
 (c-function double ("model_a" pointer int int)))

(define set-model-a!
 (c-function void ("set_model_a" pointer int int double)))

(define model-b
 (c-function double ("model_b" pointer int)))

(define set-model-b!
 (c-function void ("set_model_b" pointer int double)))

(define model-name
 (c-function string ("model_name" pointer)))

(define model-n-roles
 (c-function int ("model_n_roles" pointer)))

(define model-pos
 (c-function int ("model_pos" pointer)))

(define set-model-name!
 (c-function void ("set_model_name" pointer string)))

(define set-model-n-roles!
 (c-function void ("set_model_n_roles" pointer int)))

(define set-model-pos!
 (c-function void ("set_model_pos" pointer int)))

(define (uniform-model! m upper-triangular?)
 ((c-function void ("uniformModel" pointer int))
  m
  (if upper-triangular? 1 0)))

(define (randomise-model! m upper-triangular?)
 ((c-function void ("randomiseModel" pointer int))
  m
  (if upper-triangular? 1 0)))

(define (noise-model! m upper-triangular? delta)
 ((c-function void ("noiseModel" pointer int double))
  m
  (if upper-triangular? 1 0)
  delta))

(define (smooth-model! m upper-triangular? eps)
 ((c-function void ("smoothModel" pointer int double))
  m
  (if upper-triangular? 1 0)
  eps))

(define print-model
 (c-function void ("print_model" pointer)))

(define free-model
 (c-function void ("freeModel" pointer)))

(define normalize-model!
 (c-function int ("normalizeModel" pointer int)))

(define zero-model!
 (c-function void ("zeroModel" pointer)))

(define (zero-model? m)
 (if (= ((c-function int ("isZeroModel" pointer)) m) 1)
     #t
     #f))

(define linear->log-model!
 (c-function void ("linear2logModel" pointer)))

(define log->linear-model!
 (c-function void ("log2linearModel" pointer)))

(define model-log-likelihood
 (c-function double ("logLike" pointer pointer)))

(define best-state-sequence
 (c-function pointer ("best_state_sequence" pointer pointer)))

(define force-init-globals!
 (c-function void ("force_init_globals")))

(define allocate-box
 (c-function pointer ("allocBox")))

(define box-coordinates
 (c-function double ("box_coordinates" pointer int)))

(define box-filter
 (c-function int ("box_filter" pointer)))

(define box-strength
 (c-function double ("box_strength" pointer)))

(define box-delta
 (c-function int ("box_delta" pointer)))

(define box-color
 (c-function int ("box_color" pointer)))

(define box-model
 (c-function string ("box_model" pointer)))

(define set-box-coordinates!
 (c-function void ("set_box_coordinates" pointer int double)))

(define set-box-filter!
 (c-function void ("set_box_filter" pointer int)))

(define set-box-strength!
 (c-function void ("set_box_strength" pointer double)))

(define set-box-delta!
 (c-function void ("set_box_delta" pointer int)))

(define set-box-color!
 (c-function void ("set_box_color" pointer int)))

(define set-box-model!
 (c-function void ("set_box_model" pointer string)))

(define free-box
 (c-function void ("freeBox" pointer)))

(define update!
 (c-function int ("update" pointer pointer pointer pointer double
		  pointer int int int int)))

(define allocate-hmm
 (c-function pointer ("allocHMM" int)))

(define free-hmm
 (c-function void ("freeHMM" pointer)))

(define initialize-sentence
 (c-function pointer ("initializeSentence" int pointer)))

(define free-sentence
 (c-function void ("freeSentence" pointer)))

(define state-probabilities-internal
 (c-function pointer ("state_probabilities" pointer pointer)))

(define (debug-state-probabilities model features number-of-states)
  (let* ((rmat (features->rmat features))
	(array (state-probabilities-internal model rmat)))
	array))

(define (state-probabilities model features number-of-states)
 (let* ((rmat (features->rmat features))
	(array (state-probabilities-internal model rmat))
	(pointers (c-exact-array->list array
					   c-sizeof-long
					   (length features)
					   #f))
	(probabilities (map (lambda (p)
			     (map exp (c-inexact-array->list p
						    c-sizeof-double
						    number-of-states
						    #t)))
			    pointers)))
  (map (lambda (p)
	(free p))
       pointers)
  (free array)
  (free-rmat rmat)
  probabilities))

(define state-probabilities-with-box-scores-internal
 (c-function pointer ("state_probabilities_with_box_scores" pointer
		      pointer pointer int)))

(define (state-probabilities-with-box-scores model
					     features
					     number-of-states
					     scores-rmat
					     endmode?)
 ;; features is a list of feature vectors as returned by compute-fv
 ;; model is an hmm model as returned by (trained-hmm-model hmm)
 ;; number of states is the number of states in the hmm
 ;; returns a list of lists
 ;; each inner list corresponds to a frame of video
 ;; each element in each inner list corresponds to a state
 ;; and is the probability that that frame in in that state
 (let* ((rmat (features->rmat features))
	(array (state-probabilities-with-box-scores-internal
		model rmat scores-rmat (if endmode? 1 0)))
	(pointers (c-exact-array->list array
				       c-sizeof-long
				       (length features)
				       #f))
	(probabilities (map (lambda (p)
			     (map exp (c-inexact-array->list p
							     c-sizeof-double
							     number-of-states
							     #t)))
			    pointers)))
  (map (lambda (p)
	(free p))
       pointers)
  (free array)
  (free-rmat rmat)
  probabilities))

(define update-with-box-scores!
 (c-function int ("update_with_box_scores" pointer pointer pointer
		  pointer double pointer int int int
		  int pointer int)))

(define (update-model-ml-with-box-scores! model scratch-hmm data data-size upper-triangular? scores-rmats endmode?)
 (with-c-pointers
  (lambda (model-array)
   (with-c-pointers
    (lambda (scratch-model-array)
     (with-array data-size
		 c-sizeof-int
		 (lambda (class-array)
		  (update-with-box-scores!
		   model-array
		   scratch-model-array
		   data
		   0
		   0
		   (vector->c-exact-array class-array (make-vector data-size 0)
					  c-sizeof-int #t)
		   data-size
		   1
		   *hmm-maximum-likelihood-training*
		   (if upper-triangular? 1 0)
		   scores-rmats
		   (if endmode? 1 0)))))
    (vector scratch-hmm)))
  (vector model)))

(define (model-log-likelihood-with-box-scores model rmat score-rmat endmode?)
 (model-log-likelihood-with-box-scores-internal model rmat score-rmat (if endmode? 1 0)))

(define model-log-likelihood-with-box-scores-internal
 (c-function double ("logLike_with_box_scores" pointer pointer pointer int)))

(define update-x!
 (c-function double ("updateX" pointer pointer int pointer int pointer pointer
		     pointer pointer pointer int int int)))

(define update-objective-derivatives
 (c-function void ("update_objective_derivatives" int double pointer pointer pointer)))

(define sentence-derivatives-one-video
 (c-function pointer ("sentence_derivatives_one_video" pointer pointer int pointer pointer pointer pointer
		      pointer pointer pointer int int int int)))

(define sentence-derivatives-reverse-mode
 (c-function double ("sentence_derivatives_reverse_mode" pointer pointer int pointer pointer pointer
		     pointer pointer pointer int int int int)))

(define sentence-likelihoods-one-video
 (c-function pointer ("sentence_likelihoods_one_video" pointer int pointer pointer pointer pointer
		      pointer pointer pointer int int int int)))

(define sentence-maximum-one
 (c-function double ("sentence_maximum_one" pointer int pointer pointer pointer pointer pointer
		     pointer int int int int pointer)))

(define model-hmm
 (c-function pointer ("model_hmm" pointer)))

(define model-ffm
 (c-function pointer ("model_ffm" pointer int)))

(define set-sigmoid-width!
 (c-function void ("set_sigmoid_width" double)))

(define set-dataset!
 (c-function void ("set_dataset" string)))

(define get-dataset
 (c-function string ("get_dataset")))

(define switch-duration!
 (c-function void ("switch_duration" int)))

(define set-min-duration!
 (c-function void ("set_min_duration" int)))

(define get-min-duration
 (c-function int ("get_min_duration")))

(define switch-sentence-prior!
 (c-function void ("switch_sentence_prior" int)))

(define get-displacement
 (c-function int ("get_displacement")))

(define switch-displacement!
 (c-function void ("switch_displacement" int)))

(define set-model-constraint!
 (c-function void ("set_model_constraint" int)))

(define set-state-constraint!
 (c-function void ("set_state_constraint" int)))

(define get-pad-all
 (c-function int ("get_pad_all")))

(define get-duration
 (c-function int ("get_duration")))

(define single-hmm-run
 (c-function double ("single_hmm_run"
		     pointer int pointer pointer int)))

(define gt-with-derivatives-ml
 (c-function void ("gt_with_derivatives_ml"
		   pointer pointer)))

;;; Tam V'Nishlam Shevah L'El Borei Olam
