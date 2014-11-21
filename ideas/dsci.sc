(MODULE
  DSCI
  (WITH
    QOBISCHEME
    XLIB
    EASY-FFI
    HMM-TRAIN-CLASSIFY
    HMM-WBM
    IDEALIB-HASH-TABLE
    IDEALIB-MATPLOTLIB
    IDEALIB-PREGEXP
    IDEALIB-TRACKS
    IDEALIB-STUFF
    TOOLLIB-C-BINDINGS
    TOOLLIB-CAMERA
    TOOLLIB-IMAGE-PROCESSING
    TOOLLIB-MISC
    TOOLLIB-NLOPT
    TOOLLIB-GSL
    TOOLLIB-HOG
    TOOLLIB-ROVER
    TOOLLIB-GAMEPAD
    LEARNING-MESS
    TOOLLIB-AD
    SENTENCE-TO-TRACE-FROM-LEARNED-MODELS)
  (MAIN MAIN))

(include "QobiScheme-AD.sch")

(include "toollib-c-macros.sch")
(include "toollib-c-bindings.sch")
(include "idealib-c-externals.sch")
(include "dsci.sch")

(eval-when
  (load)
 (include "QobiScheme.load"))

(set! *program* "dsci")
(set! *panic?* #f)
(define-c-external (nobuff) void "nobuff")
(nobuff)

(define (main arguments)
 (setup-default-gsl-rng!)
 (apply qobischeme-read-eval-print arguments))
