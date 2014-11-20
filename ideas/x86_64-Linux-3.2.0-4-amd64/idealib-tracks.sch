(DEFINE-EXTERNAL (EASY-FFI:FREE N X V) EASY-FFI)
(DEFINE-EXTERNAL EASY-FFI:DOUBLE-TO-C EASY-FFI)
(DEFINE-EXTERNAL EASY-FFI:INT-TO-C EASY-FFI)
(DEFINE-EXTERNAL EASY-FFI:LONGUNSIGNED-TO-C EASY-FFI)
(DEFINE-EXTERNAL (LOG-UNIVARIATE-GAUSSIAN X MU SIGMA) HMM-TRAIN-CLASSIFY)
(DEFINE-EXTERNAL (LOG-VON-MISES X MEAN KAPPA) HMM-TRAIN-CLASSIFY)
(DEFINE-EXTERNAL (PSI->MODEL PSI) HMM-TRAIN-CLASSIFY)
(DEFINE-EXTERNAL (MODEL->PSI FEATURES MODEL) HMM-TRAIN-CLASSIFY)
(DEFINE-STRUCTURE-EXTERNAL HMM-WBM PSI NAME PART-OF-SPEECH FEATURES N-ROLES PARAMETERS A B)
(DEFINE-EXTERNAL POS-C:NOUN HMM-WBM)
(DEFINE-EXTERNAL POS-C:VERB HMM-WBM)
(DEFINE-EXTERNAL POS-C:ADVERB HMM-WBM)
(DEFINE-EXTERNAL POS-C:ADJECTIVE HMM-WBM)
(DEFINE-EXTERNAL POS-C:PREPOSITION HMM-WBM)
(DEFINE-EXTERNAL POS-C:MOTION-PREPOSITION HMM-WBM)
(DEFINE-EXTERNAL POS-C:VERB1 HMM-WBM)
(DEFINE-EXTERNAL ALLOCATE-IVEC HMM-WBM)
(DEFINE-EXTERNAL SET-IVEC! HMM-WBM)
(DEFINE-EXTERNAL FREE-IVEC HMM-WBM)
(DEFINE-EXTERNAL ALLOCATE-RMAT HMM-WBM)
(DEFINE-EXTERNAL RMAT-SET! HMM-WBM)
(DEFINE-EXTERNAL FREE-RMAT HMM-WBM)
(DEFINE-EXTERNAL MODEL-NAME HMM-WBM)
(DEFINE-EXTERNAL MODEL-LOG-LIKELIHOOD HMM-WBM)
(DEFINE-EXTERNAL FREE-BOX HMM-WBM)
(DEFINE-EXTERNAL INITIALIZE-SENTENCE HMM-WBM)
(DEFINE-EXTERNAL FREE-SENTENCE HMM-WBM)
(DEFINE-EXTERNAL SENTENCE-MAXIMUM-ONE HMM-WBM)
(DEFINE-STRUCTURE-EXTERNAL IDEALIB-HASH-TABLE HASH-TABLE SIZE HASH-FUNCTION EQUIVALENCE-FUNCTION ASSOCIATION-FUNCTION ENTRIES)
(DEFINE-EXTERNAL (CREATE-HASH-TABLE . ARGS) IDEALIB-HASH-TABLE)
(DEFINE-EXTERNAL (%HASH-TABLE-HASH HASH-TABLE KEY) IDEALIB-HASH-TABLE)
(DEFINE-EXTERNAL (%HASH-TABLE-ADD! ENTRIES HASH KEY VALUE) IDEALIB-HASH-TABLE)
(DEFINE-EXTERNAL (HASH-TABLE-REF HASH-TABLE KEY . MAYBE-DEFAULT) IDEALIB-HASH-TABLE)
(DEFINE-EXTERNAL (PREGEXP-SPLIT PAT STR) IDEALIB-PREGEXP)
(DEFINE-EXTERNAL (NONDROPPED-BOX? BOX) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (DROPPED-BOX? BOX) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (NUMBER->STRING-C-INFINITY NUMBER) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (VOC4-BOX->STRING BOX) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (PAD-AND-SMOOTH-BOX-MOVIE BOX-MOVIE FRAME-RATIO X-RATIO Y-RATIO) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (CROP-TRACK-FROM-VIDEO VIDEO-NAME MODEL NUMBER DESTINATION) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (CROP-BOX-MOVIE-FROM-VIDEO VIDEO-NAME BOX-MOVIE DESTINATION) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (CONSOLIDATE-INTERVALS INTERVALS INTERVAL) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (SUBINTERVAL? A B) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (IN-INTERVAL? A I) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (INTERVAL-OVERLAPS? A B) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (INTERVALS->STRINGS INTERVALS) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (SORT-INTERVALS INTERVALS) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (WITH-INTERVAL-BASED-ZIP-FILE F GET-IN-ZIP-FILENAME ZIP-FILENAME VIDEO-NAME) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (WRITE-BOXES-MOVIE BOXES-MOVIE VIDEO-NAME TYPE LABEL NUM EXT) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (WRITE-BOX-MOVIE BOX-MOVIE VIDEO-NAME TYPE LABEL NUM EXT) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (WRITE-VOC4-BOXES-MOVIE BOXES-MOVIE VIDEO-NAME MODEL) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (WRITE-VOC4-IROBOT-BOXES-MOVIE BOXES-MOVIE VIDEO-NAME MODEL) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (WRITE-VOC4-PREDICTED-BOXES-MOVIE BOXES-MOVIE VIDEO-NAME MODEL) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (WRITE-VOC4-TRACKED-BOX-MOVIE BOX-MOVIE VIDEO-NAME MODEL NUMBER) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (WRITE-VOC4-SMOOTH-TRACKED-BOX-MOVIE BOX-MOVIE VIDEO-NAME MODEL NUMBER) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (WRITE-VOC4-OVERGENERATED-BOXES-MOVIE BOXES-MOVIE VIDEO-NAME MODEL) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (WRITE-VOC4-OVERGENERATED-PREDICTED-BOXES-MOVIE BOXES-MOVIE VIDEO-NAME MODEL) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (WRITE-VOC4-OVERGENERATED-TRACKED-BOX-MOVIE BOX-MOVIE VIDEO-NAME MODEL NUMBER) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (WRITE-VOC4-OVERGENERATED-SMOOTH-TRACKED-BOX-MOVIE BOX-MOVIE VIDEO-NAME MODEL NUMBER) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (WRITE-VOC4-EVENT-BOXES-MOVIE BOXES-MOVIE VIDEO-NAME MODEL) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (WRITE-VOC4-EVENT-PREDICTED-BOXES-MOVIE BOXES-MOVIE VIDEO-NAME MODEL) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (WRITE-VOC4-EVENT-TRACKED-BOX-MOVIE BOX-MOVIE VIDEO-NAME MODEL NUMBER) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (WRITE-VOC4-EVENT-SMOOTH-TRACKED-BOX-MOVIE BOX-MOVIE VIDEO-NAME MODEL NUMBER) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (WRITE-VOC4-SENTENCE-TRACKED-BOX-MOVIE BOX-MOVIE VIDEO-NAME MODEL NUMBER) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (WRITE-VOC4-SENTENCE-SMOOTH-TRACKED-BOX-MOVIE BOX-MOVIE VIDEO-NAME MODEL NUMBER) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (QUANTIZE-VOC4-DETECTION DETECTION) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (UNPACK-CONSOLIDATED-FRAMES DATA) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (VECTOR-STRING->VOC4-INEXACT-BOX E STRING . DEFAULT-MODEL) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (EXACT-ROUND-VOC4-DETECTION BOX) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (FAST-READ-BOXES-FROM-ZIP ZIP FILENAME) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (PADDING-DETECTIONS) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (ZIP:GET-INTERVALS ZIP) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (ZIP:GET-INTERVALS-FROM-FILE FILENAME) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (ZIP:ASSERT-GOOD-INTERVALS! ZIP VIDEO-NAME) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (FAST-READ-ZIP-BOXES VIDEO-NAME TYPE LABEL NUM EXT EXPECT-LAST?) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (READ-DETECTOR-BOXES VIDEO-NAME TYPE MODEL) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (READ-PREDICTED-BOXES VIDEO-NAME TYPE MODEL) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (READ-TRACKED-BOXES VIDEO-NAME TYPE MODEL NUMBER) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (READ-SMOOTH-TRACKED-BOXES VIDEO-NAME TYPE MODEL NUMBER) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (READ-VOC4-DETECTOR-BOXES VIDEO-NAME MODEL) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (READ-VOC4-PREDICTED-BOXES VIDEO-NAME MODEL) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (READ-VOC4-SMOOTH-TRACKED-BOXES VIDEO-NAME MODEL NUMBER) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (READ-VOC4-TRACKED-BOXES VIDEO-NAME MODEL NUMBER) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (READ-VOC4-OVERGENERATED-DETECTOR-BOXES VIDEO-NAME MODEL) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (READ-VOC4-OVERGENERATED-PREDICTED-BOXES VIDEO-NAME MODEL) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (READ-VOC4-OVERGENERATED-SMOOTH-TRACKED-BOXES VIDEO-NAME MODEL NUMBER) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (READ-VOC4-OVERGENERATED-TRACKED-BOXES VIDEO-NAME MODEL NUMBER) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (READ-VOC4-EVENT-DETECTOR-BOXES VIDEO-NAME MODEL) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (READ-VOC4-EVENT-PREDICTED-BOXES VIDEO-NAME MODEL) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (READ-VOC4-EVENT-SMOOTH-TRACKED-BOXES VIDEO-NAME MODEL NUMBER) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (READ-VOC4-EVENT-TRACKED-BOXES VIDEO-NAME MODEL NUMBER) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (READ-VOC4-SENTENCE-SMOOTH-TRACKED-BOXES VIDEO-NAME MODEL NUMBER) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (READ-VOC4-SENTENCE-TRACKED-BOXES VIDEO-NAME MODEL NUMBER) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (CROP-VOC4 IMAGE VOC4) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (VOC4-SCALE VOC4 SCALE) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (VOC4-BLOAT VOC4 P) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (VOC4-SHRINK VOC4 P) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (VOC4->BB VOC4) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (VIDEO-BOXES-AVAILABLE VIDEO TYPE KIND) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (VIDEO-DETECTOR-BOXES-AVAILABLE VIDEO TYPE) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (VIDEO-PREDICTED-BOXES-AVAILABLE VIDEO TYPE) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (VIDEO-TRACKED-BOXES-AVAILABLE VIDEO TYPE) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (VIDEO-SMOOTH-TRACKED-BOXES-AVAILABLE VIDEO TYPE) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (VIDEO-VOC4-DETECTOR-BOXES-AVAILABLE VIDEO) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (VIDEO-VOC4-PREDICTED-BOXES-AVAILABLE VIDEO) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (VIDEO-VOC4-TRACKED-BOXES-AVAILABLE VIDEO) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (VIDEO-VOC4-SMOOTH-TRACKED-BOXES-AVAILABLE VIDEO) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (VIDEO-VOC4-SENTENCE-TRACKED-BOXES-AVAILABLE VIDEO) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (VIDEO-VOC4-SENTENCE-SMOOTH-TRACKED-BOXES-AVAILABLE VIDEO) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (VIDEO-VOC4-OVERGENERATED-TRACKED-BOXES-AVAILABLE VIDEO) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (VIDEO-VOC4-OVERGENERATED-SMOOTH-TRACKED-BOXES-AVAILABLE VIDEO) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (VIDEO-VOC4-HUMAN-SMOOTH-TRACKED-BOXES-AVAILABLE VIDEO) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (MAP-WITH-LOOKAHEAD F N . LISTS) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (MAP-VECTOR-WITH-LOOKAHEAD F N . VECTORS) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (VECTOR-ORIENTATION V) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (VOC4-DETECTION-WIDTH DETECTION) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (VOC4-DETECTION-HEIGHT DETECTION) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (VOC4-DETECTION-CENTER DETECTION) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (VOC4-DETECTION-ASPECT-RATIO DETECTION) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (VOC4-DETECTION-AREA DETECTION) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (VOC4-DETECTION-INTERSECTION-AREA BOX1 BOX2) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (VOC4-DETECTION-UNION-AREA BOX1 BOX2) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (VOC4-DETECTION-INTERSECTION-DIVIDED-BY-UNION BOX1 BOX2) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (NON-MAXIMAL-SUPPRESSION VOC4-BOXES NMS-THRESHOLD) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (TOP-N-NON-MAXIMAL-SUPPRESSION VOC4-BOXES NMS-THRESHOLD TOP-N) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (VOC4-DETECTION->CORNERS BOX) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (POINT-IN-VOC4-DETECTION? POINT BOX) IDEALIB-TRACKS)
(DEFINE-EXTERNAL *FINITE-DIFFERENCE-SCALE* IDEALIB-TRACKS)
(DEFINE-EXTERNAL (FEATURE-FINITE-DIFFERENCE FEATURE LOOKAHEAD) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (NORMALIZED-AREA BOXES) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (PERSON-BOXES? BOXES) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (NORMALIZE-LINE-IN-VOC4-BOX L B) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (PART-CENTER L) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (PART-BOXES->PART-FEATURES BOX EMPTY-PARTS) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (GET-PART-VECTORS BOXES) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (GET-CHANGES-IN-PART-VECTORS PART-VECTOR-POSITIONS LOOKAHEAD) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (UNZIP L) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (ZIP-LIST L) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (CLIP-BAD-TRACKS TRACKS) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (VOC4-INSIDE? V BOX) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (QUAD-SCALE-AND-SHIFT QUAD SCALE SHIFT) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (VOC4-BOX->SUMMARY BOX) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (VOC4-SCALE-AND-SHIFT BOX SCALE SHIFT DELTA) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (GET-SCALE-AND-SHIFT BOX KLT) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (VOC4-SCALE-ABS BOX SCALE) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (FORWARD-PROJECT-BOX-SCALED ORIGINAL-BOX SCALED-TRANSFORMATION DELTA SCALE) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (BOX->VECTOR BOX) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (PREDICT-BOXES N BOXES-MOVIE TRANSFORMATION-MOVIE SCALE) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (UPDATE-VOC4-STRENGTH BOX STRENGTH) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (UPDATE-VOC4-COLOR BOX COLOR) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (MODEL-THRESHOLD MODEL-NAME MODEL-PATH) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (MEDOIDS-PATHNAME) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (TRACK-PROFILE-PATHNAME VIDEO) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (EXTRACT-COMMON-FEATURES BOXES LOOKAHEAD) IDEALIB-TRACKS)
(DEFINE-EXTERNAL *FEB-DEMO:OBJECTS* IDEALIB-TRACKS)
(DEFINE-EXTERNAL *TOY-CORPUS:OBJECTS* IDEALIB-TRACKS)
(DEFINE-EXTERNAL *306-CORPUS:OBJECTS* IDEALIB-TRACKS)
(DEFINE-EXTERNAL *NEW3-CORPUS:OBJECTS* IDEALIB-TRACKS)
(DEFINE-EXTERNAL *NEW4-CORPUS:OBJECTS* IDEALIB-TRACKS)
(DEFINE-EXTERNAL *GENERAL:OBJECTS* IDEALIB-TRACKS)
(DEFINE-EXTERNAL *PERSON-POSES* IDEALIB-TRACKS)
(DEFINE-EXTERNAL (NUM-DISCRETE I TYPE OBJECTS) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (*FEATURE-TYPES* SINGLE-OR-PAIR TYPE) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (PERSON-BOX? BOX) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (GET-CLOSEST-MEDOIDS BOXES MEDOIDS) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (PAIRWISE-TRACK-FEATURES-DEPRAVED CENTERS1 CENTERS2 LOOKAHEAD DISCARD-BAD-FEATURES?) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (PAIRWISE-TRACK-FEATURES BOXES1 BOXES2 LOOKAHEAD DISCARD-BAD-FEATURES?) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (ONE-TRACK-FEATURES TYPE BOXES LOOKAHEAD MEDOIDS OBJECTS DISCARD-BAD-FEATURES? . QUANTIZED-FLOW-PARAMS) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (QUANTIZE VALUE TYPE MEDOIDS) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (TWO-TRACK-FEATURES-F F1 F2 TYPE TRACK1 TRACK2 LOOKAHEAD MEDOIDS OBJECTS DISCARD-BAD-FEATURES? . QUANTIZED-FLOW-PARAMS) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (TWO-TRACK-FEATURES TYPE TRACK1 TRACK2 LOOKAHEAD MEDOIDS OBJECTS DISCARD-BAD-FEATURES? . QUANTIZED-FLOW-PARAMS) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (THREE-TRACK-FEATURES-F F1 F2 TYPE TRACK1 TRACK2 TRACK3 LOOKAHEAD MEDOIDS OBJECTS DISCARD-BAD-FEATURES? . QUANTIZED-FLOW-PARAMS) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (THREE-TRACK-FEATURES TYPE TRACK1 TRACK2 TRACK3 LOOKAHEAD MEDOIDS OBJECTS DISCARD-BAD-FEATURES? . QUANTIZED-FLOW-PARAMS) IDEALIB-TRACKS)
(DEFINE-EXTERNAL ALLOCATE-FEATURE-MEDOID IDEALIB-TRACKS)
(DEFINE-EXTERNAL SET-FEATURE-MEDOID-NAME! IDEALIB-TRACKS)
(DEFINE-EXTERNAL SET-FEATURE-MEDOID-MEAN! IDEALIB-TRACKS)
(DEFINE-EXTERNAL SET-FEATURE-MEDOID-SIGMA! IDEALIB-TRACKS)
(DEFINE-EXTERNAL SET-FEATURE-MEDOID-DM-ID! IDEALIB-TRACKS)
(DEFINE-EXTERNAL FREE-FEATURE-MEDOID IDEALIB-TRACKS)
(DEFINE-EXTERNAL FREE-FEATURES IDEALIB-TRACKS)
(DEFINE-EXTERNAL SET-TRACK-BOXES! IDEALIB-TRACKS)
(DEFINE-EXTERNAL ALLOCATE-TRACK IDEALIB-TRACKS)
(DEFINE-EXTERNAL FREE-TRACK IDEALIB-TRACKS)
(DEFINE-EXTERNAL SET-BOXES-MOVIE! IDEALIB-TRACKS)
(DEFINE-EXTERNAL ALLOCATE-BOXES-MOVIE IDEALIB-TRACKS)
(DEFINE-EXTERNAL FREE-BOXES-MOVIE IDEALIB-TRACKS)
(DEFINE-EXTERNAL PRINT-C-FEATURES IDEALIB-TRACKS)
(DEFINE-EXTERNAL C-FEATURES-TT IDEALIB-TRACKS)
(DEFINE-EXTERNAL C-FEATURES-II IDEALIB-TRACKS)
(DEFINE-EXTERNAL C-FEATURES-V IDEALIB-TRACKS)
(DEFINE-EXTERNAL (C-FEATURES->FEATURES C-FEATURES) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (FEATURES-LOG-LIKELIHOOD FEATURES TRAINED-HMM) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (FEATURES->RMAT FEATURES) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (FEATURES-VECTORS->RMAT FEATURES) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (MAP-ALL-UNORDERED-PAIRS F L) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (MAP-ALL-ORDERED-PAIRS F L) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (READ-HMM FILENAME) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (COMPUTE-LIKELIHOODS VIDEO NAMED-TRACKS MODELS MEDOIDS OBJECTS LIKELIHOODS-CACHE-F UNORDERED-PAIRS?) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (COMPUTE-LIKELIHOODS-FROM-FILES VIDEO MODEL-NAMES-FILE MEDOIDS OBJECTS TRACK-FILTER PRECOMPUTED-LIKELIHOODS-F UNORDERED-PAIRS?) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (BOX-DISTANCE BOX1 BOX2) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (BOX-PAIR-COST BOX1 TRANSFORMATION BOX2 SCALE) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (BOX-COST BOX) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (BOX-SIMILARITY BOX1 BOX2) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (POSITION-OF-FIRST-VALID-BOX BOXES-MOVIE THRESHOLD) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (UPDATE-VOC4-MODEL BOX MODEL) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (VOC4-CENTER A) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (LOG-DISCRETE X DISTRIBUTION) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (COMPUTE-FEATURES-COST FEATURES DISTRIBUTIONS) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (COMPUTE-FEATURES-COSTS FEATURES DISTRIBUTIONS) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (GET-FEATURE-COSTS STATES-FEATURES-MATRIX) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (BOXES-MOVIE->BOX-MOVIES BOXES-MOVIE) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (NEW-FEATURE-REVERSED FEATURE-TYPE LOOKAHEAD BOXES-MOVIE-SO-FAR NEW-BOXES OBJECTS . QUANTIZED-FLOW-PARAMS) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (MAP-ALL-TUPLES-LIST F L) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (MAP-ALL-TUPLES F L . LS) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (PAD-WITH-LAST-IF-NECESSARY L N) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (MODEL->PSI-LOG HMM-MODEL) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (INITIAL-STATE-VECTOR HMM) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (TRANSITION-MATRIX HMM) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (OUTPUT-DISTRIBUTION HMM STATE) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (STATE-LOGLK-F G F HMMS STATES BOXES-MOVIE NEW-BOXES LOOKAHEAD OBJECTS . QUANTIZED-FLOW-PARAMS) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (STATE-LOGLK HMMS STATES BOXES-MOVIE NEW-BOXES LOOKAHEAD OBJECTS . QUANTIZED-FLOW-PARAMS) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (INITIAL-STATE-LOGLK HMM STATE) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (STATE-TRANSITION-LOGLK HMMS STATES-MOVIE NEW-STATES) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (A-SET-OF-BOXES OBJECTS-MOVIE-FRAME) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (A-SET-OF-STATES STATE-MACHINES TYPE) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (VOC4-DETECTION->HASHABLE-STRING V) IDEALIB-TRACKS)
(DEFINE-STRUCTURE-EXTERNAL IDEALIB-TRACKS CACHED-BOX VOC4 ID)
(DEFINE-EXTERNAL (CACHED-BOX-COST B) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (REF/COMPUTE HASH-TABLE KEY FUNCTION . ARGS) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (BOXES-MOVIE->CACHED-BOXES-MOVIE BOXES-MOVIE) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (CACHED-BOXES-MOVIE->BOXES-MOVIE CBM) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (LOGLK-TRACK-STATES HMM TRACK STATES OBJECTS) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (CURRENT-TIME-SECONDS) IDEALIB-TRACKS)
(DEFINE-EXTERNAL *PROFILING?* IDEALIB-TRACKS)
(DEFINE-EXTERNAL *PROFILE-THUNKS* IDEALIB-TRACKS)
(DEFINE-EXTERNAL (PROFILE-F-THUNK! F NAME) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (RESET-PROFILING!) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (SHOW-PROFILES) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (RESELECT-TOPN-BOXES BOXES-MOVIES TOPN) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (FILL-SENTENCE-TRACKER-ROLES BOXES-MOVIES MODEL-NAMES-GROUPS ROLES) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (MINIMUM-WITH-POSITION1 L) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (MINIMUM-WITH-POSITION1-F F L) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (FSM-CHECK-TRANSITIONS FSMS STATES-MOVIE STATES) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (FSM-CHECK-PRECONDITIONS FSMS STATES SCALE TRANSFORMATION NEW-BOXES LOOKAHEAD) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (GET-BSS BOXES-MOVIE) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (GET-BPS BOXES-MOVIE FLOW-MOVIE SCALE) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (GET-PHI1 BOXES-MOVIE FLOW-MOVIE OBJECTS FEATURE-MEDOIDS SCALE) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (GET-PHI2 BOXES-MOVIE FEATURE-MEDOIDS SCALE) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (GET-PHI0 BOXES-MOVIE FEATURE-MEDOIDS SCALE) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (QUANTIZE1 FEATURE MEDOIDS X) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (VITERBI-SENTENCE-TRACK-IN-C SENTENCE-MACHINES N-TRACKS ROLES BOXES-MOVIE FLOW-MOVIE SCALE TOP-N OBJECTS FEATURE-MEDOIDS FINAL-STATE?) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (VITERBI-FAST-SENTENCE-TRACK-ONE OBJECTS-MOVIE TRANSFORMATIONS-MOVIE ALPHA BETA KAPPA SCALE MACHINES MACHINE-TYPE LOOKAHEAD MEDOIDS OBJECTS V-D-O-MEDOIDS . BEAM-WIDTH) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (VITERBI-EVENT-TRACK-ONE OBJECTS-MOVIE TRANSFORMATIONS-MOVIE ALPHA BETA KAPPA SCALE MACHINE MACHINE-TYPE LOOKAHEAD MEDOIDS OBJECTS V-D-O-MEDOIDS) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (VITERBI-TRACK-ONE BOXES-MOVIE TRANSFORMATION-MOVIE ALPHA BETA KAPPA _1 _2 SCALE) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (SOME-VALID-BOX? BOXES THRESHOLD) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (KEEP-TRACK-IN-CONTEXT? BOX-MOVIE BOX-MOVIES) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (VITERBI-TRACK-MULTIPLE BOXES-MOVIE TRANSFORMATION-MOVIE ALPHA BETA KAPPA SUBVERTED-MODEL-THRESHOLD DT? MINIMUM-TRACK-LENGTH MAXIMUM-TRACK-OVERLAP-RATIO OVERGENERATION-MINIMUM-TRACK-LENGTH OVERGENERATION-MAXIMUM-TRACK-OVERLAP-RATIO SUPPRESSION-DELTA SCALE MAX-TRACKS) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (GET-CLEANED-UP-MODEL-NAMES-LIST VIDEO) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (VITERBI-PREPARE-TRACKS SCALE SIZE VIDEO-LENGTH KLT-MOVIE DETECTOR-BOXES-MOVIE-MODEL-NAME-PAIRS TOP-N MODEL-PATH MODEL-THRESHOLD-TRACKER-OFFSET PROFILE-BEST-BOXES? LOOK-AHEAD) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (VITERBI-TRACK SCALE SIZE VIDEO-LENGTH KLT-MOVIE OPTICAL-FLOW-MOVIE DETECTOR-BOXES-MOVIE-MODEL-NAME-PAIRS TOP-N WITH-DT? MODEL-PATH MODEL-THRESHOLD-TRACKER-OFFSET PROFILE-BEST-BOXES? LOOK-AHEAD MINIMUM-TRACK-LENGTH MAXIMUM-TRACK-OVERLAP-RATIO OVERGENERATION-MINIMUM-TRACK-LENGTH OVERGENERATION-MAXIMUM-TRACK-OVERLAP-RATIO SUPPRESSION-DELTA ALPHA BETA KAPPA MAX-TRACKS) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (WRITE-VITERBI-TRACK-RESULTS VIDEO MODEL-NAME VITERBI-TRACK-RESULTS) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (VITERBI-TRACK-GROUP-IN-MEMORY VIDEO KLT-MOVIE OPTICAL-FLOW-MOVIE MODEL-GROUP DETECTOR-BOXES-MOVIES MODEL-NAMES NMS ALPHA BETA KAPPA TOP-N WITH-DT? MODEL-PATH MODEL-THRESHOLD-TRACKER-OFFSET PROFILE-BEST-BOXES? LOOK-AHEAD MINIMUM-TRACK-LENGTH MAXIMUM-TRACK-OVERLAP-RATIO OVERGENERATION-MINIMUM-TRACK-LENGTH OVERGENERATION-MAXIMUM-TRACK-OVERLAP-RATIO SUPPRESSION-DELTA MAX-TRACKS) IDEALIB-TRACKS)
(DEFINE-EXTERNAL *CLASS->NOUN* IDEALIB-TRACKS)
(DEFINE-EXTERNAL *CLASS->RESTRICTIVE-ADJECTIVE* IDEALIB-TRACKS)
(DEFINE-EXTERNAL *CLASS->SIZE-ADJECTIVE* IDEALIB-TRACKS)
(DEFINE-EXTERNAL *CLASS->SIZE-ADJECTIVE-BOUNDS* IDEALIB-TRACKS)
(DEFINE-EXTERNAL *CLASS->SHAPE-ADJECTIVE-BOUND* IDEALIB-TRACKS)
(DEFINE-EXTERNAL *VERBS* IDEALIB-TRACKS)
(DEFINE-EXTERNAL *PREPOSITIONS* IDEALIB-TRACKS)
(DEFINE-EXTERNAL *ENDOGENOUS-MOTION-PPS* IDEALIB-TRACKS)
(DEFINE-EXTERNAL *EXOGENOUS-MOTION-PPS* IDEALIB-TRACKS)
(DEFINE-EXTERNAL *MINIMUM-VELOCITY* IDEALIB-TRACKS)
(DEFINE-EXTERNAL *MOTION-THRESHOLD* IDEALIB-TRACKS)
(DEFINE-EXTERNAL (HYPHENS->SPACES STRING) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (ANGLE->DIRECTION A) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (OVERALL-DISTANCE TRACK) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (TRACK-MOTION TRACK) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (GENERATE-ADVERB TRACK) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (GENERATE-DIRECTION TRACK) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (GET-BEFORE LEXICAL-ENTRY) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (CLASS TRACK) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (GET-CONDITIONAL-BEFORE LEXICAL-ENTRY PATIENT-TRACK) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (GET-AFTER LEXICAL-ENTRY) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (GET-RESTRICTION LEXICAL-ENTRY) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (GET-DEFAULT LEXICAL-ENTRY) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (GET-CONDITIONAL-DEFAULT LEXICAL-ENTRY PATIENT-TRACK NP) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (REFERED-TO-IN-SUBJECT? TRACK SUBJECT-TRACK) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (DUMMY-BOX? BOX) IDEALIB-TRACKS)
(DEFINE-EXTERNAL *MAXIMUM-SCORE-VARIANCE* IDEALIB-TRACKS)
(DEFINE-EXTERNAL *MAXIMUM-SIZE-VARIANCE* IDEALIB-TRACKS)
(DEFINE-EXTERNAL *MAXIMUM-SHAPE-VARIANCE* IDEALIB-TRACKS)
(DEFINE-EXTERNAL (ESTIMATE-SIZE-AND-SHAPE TRACK) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (MOST-FREQUENT-CLASS TRACK) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (GENERATE-ADJECTIVES KIND SUBJECT-TRACK OBJECT-TRACK) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (GENERATE-VP VERB SUBJECT-TRACK OBJECT-TRACK) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (FLATTEN TREE) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (SENTENTIFY STRING) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (SERVER-SPECIFIC-TRACK-PATHNAME SERVER VIDEO NAME) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (SHOW-RESULT-MOSTLY PORT R) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (RESULT->SENTENCE VIDEO RESULT) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (GENERATE-SENTENCE VERB AGENT-TRACK PATIENT-TRACK) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (ASSOC-CHECKED E L) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (GENERATE-REFERENCE-NP SUBJECT-TRACK OBJECT-TRACK) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (GENERATE-SUBJECT-NP SUBJECT-TRACK OBJECT-TRACK) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (GENERATE-OBJECT-NP SUBJECT-TRACK OBJECT-TRACK DEFAULT) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (GENERATE-DETERMINER KIND SUBJECT-TRACK OBJECT-TRACK) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (RESULT->TRACKS RESULT) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (ANNOTATED-MODELS) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (ANNOTATED-MODELS-FOR-VIDEO VIDEO) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (SCALE-DETECTOR-OUTPUT LIST-OF-LIST-VOC4-BOXES VIDEO-WIDTH->1280) IDEALIB-TRACKS)
(DEFINE-STRUCTURE-EXTERNAL IDEALIB-TRACKS CFG RULES)
(DEFINE-STRUCTURE-EXTERNAL IDEALIB-TRACKS PRODUCTION-RULE LHS RHS)
(DEFINE-EXTERNAL (CREATE-CFG RULES) IDEALIB-TRACKS)
(DEFINE-EXTERNAL P-LHS IDEALIB-TRACKS)
(DEFINE-EXTERNAL P-RHS IDEALIB-TRACKS)
(DEFINE-EXTERNAL (*TOY-CORPUS:SEMANTICS* LEXICAL-ENTRY) IDEALIB-TRACKS)
(DEFINE-EXTERNAL *TOY-CORPUS:CFG* IDEALIB-TRACKS)
(DEFINE-EXTERNAL (*NEW3-CORPUS:SEMANTICS* LEXICAL-ENTRY) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (*NEW4-NEW3-CORPUS:SEMANTICS* LEXICAL-ENTRY) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (*NEW4-CORPUS:SEMANTICS* LEXICAL-ENTRY) IDEALIB-TRACKS)
(DEFINE-EXTERNAL *NEW3-CORPUS:CFG* IDEALIB-TRACKS)
(DEFINE-EXTERNAL *NEW4-CORPUS:CFG* IDEALIB-TRACKS)
(DEFINE-EXTERNAL *NEW4-NEW3-CORPUS:CFG* IDEALIB-TRACKS)
(DEFINE-EXTERNAL (*NEEDLE-IN-A-HAYSTACK:SEMANTICS* LEXICAL-ENTRY) IDEALIB-TRACKS)
(DEFINE-EXTERNAL *NEEDLE-IN-A-HAYSTACK:CFG* IDEALIB-TRACKS)
(DEFINE-EXTERNAL (CFG:A-VALID-RHS RHS) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (CFG:NON-TERMINAL? SYMBOL CFG) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (CFG:TERMINAL? SYMBOL CFG) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (CFG:TERMINALS CFG) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (CFG:NON-TERMINALS CFG) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (CFG:TERMINAL-CATEGORIES CFG) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (CFG:OPTIONAL-CATEGORIES-WITH-RULES CFG) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (CFG:POSSIBLE-RULES LHS RULES) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (CFG:LEXICALIZED-TERMINALS CFG) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (LEXICALIZE ES CFG . SYMBOL) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (LEXICALIZE-PHRASE PHRASE CFG) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (SENTENCE:PARSE-SENTENCE SENTENCE CFG . START) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (SENTENCE:PARSE-SENTENCE-ANY SENTENCE CFG) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (SENTENCE-DATA-FILENAME VIDEO) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (SENTENCE-SPECIFIC-DATA-FILENAME VIDEO SENTENCE) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (THETA-ROLE-ASSIGNMENTS SENTENCE CFG SEMANTICS) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (SENTENCE:SENTENCE->PARTICIPANTS-ROLES-AND-STATE-MACHINES SENTENCE CFG SEMANTICS STATE-MACHINES) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (STATE-MACHINE-NAME SM) IDEALIB-TRACKS)
(DEFINE-STRUCTURE-EXTERNAL IDEALIB-TRACKS FSM NAME PRECONDITIONS TRANSITIONS)
(DEFINE-EXTERNAL (FSM-ASSERT-PRECONDITIONS FSMS STATES SCALE TRANSFORMATION BOXES-MOVIE-SO-FAR NEW-BOXES LOOKAHEAD) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (FSM-ASSERT-TRANSITIONS FSMS STATES-MOVIE STATES) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (TEST-FSMS TRACKS FSMS TRANSFORMATIONS SCALE LOOKAHEAD) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (TEST-FSMS-STATES TRACKS FSMS TRANSFORMATIONS SCALE LOOKAHEAD STATES) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (SENTENCE:FSM NAME PREDICATES) IDEALIB-TRACKS)
(DEFINE-EXTERNAL *TOY-CORPUS:FSMS* IDEALIB-TRACKS)
(DEFINE-EXTERNAL *NEW3-CORPUS:FSM* IDEALIB-TRACKS)
(DEFINE-EXTERNAL *NEEDLE-IN-A-HAYSTACK:FSMS* IDEALIB-TRACKS)
(DEFINE-EXTERNAL (TYPE->PART-OF-SPEECH TYPE) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (SENTENCE:CREATE-HMM NAME TYPE N-ROLES STATES STATE-FEATURE-DISTRIBUTIONS TRANSITION-MATRIX INITIAL-COSTS) IDEALIB-TRACKS)
(DEFINE-EXTERNAL *TOY-CORPUS:HMMS* IDEALIB-TRACKS)
(DEFINE-EXTERNAL *306-CORPUS:MODELS* IDEALIB-TRACKS)
(DEFINE-EXTERNAL (*306-CORPUS:HMMS*) IDEALIB-TRACKS)
(DEFINE-EXTERNAL *NEW3-CORPUS:MODELS* IDEALIB-TRACKS)
(DEFINE-EXTERNAL (*NEW3-CORPUS:HMMS*) IDEALIB-TRACKS)
(DEFINE-EXTERNAL *NEW4-CORPUS:MODELS* IDEALIB-TRACKS)
(DEFINE-EXTERNAL (*NEW4-CORPUS:HMMS* TYPE) IDEALIB-TRACKS)
(DEFINE-EXTERNAL *306-CORPUS:FEATURE-MEDOIDS* IDEALIB-TRACKS)
(DEFINE-EXTERNAL *NEW3-CORPUS:FEATURE-MEDOIDS* IDEALIB-TRACKS)
(DEFINE-EXTERNAL *NEW4-CORPUS:FEATURE-MEDOIDS* IDEALIB-TRACKS)
(DEFINE-EXTERNAL (FEATURE-MEDOID->C-FEATURE-MEDOID MEDOID) IDEALIB-TRACKS)
(DEFINE-STRUCTURE-EXTERNAL IDEALIB-STUFF VOC4-DETECTION X1 Y1 X2 Y2 PARTS FILTER STRENGTH DELTA COLOR MODEL)
(DEFINE-STRUCTURE-EXTERNAL IDEALIB-STUFF RESULT VIDEO-NAME TRACK-NAMES FEATURES-TYPE STATES VERB LOGLK NAMED-TRACKS)
(DEFINE-STRUCTURE-EXTERNAL IDEALIB-STUFF TRAINED-HMM NAME VIDEOS STATES LOG-LIKELIHOOD MODEL PARTICIPANTS FEATURE-TYPE TRAINING-TYPE)
(DEFINE-EXTERNAL (TRAINED-HMM-VERB HMM) IDEALIB-STUFF)
(DEFINE-EXTERNAL *VIDEO-PATHNAME* IDEALIB-STUFF)
(DEFINE-EXTERNAL *QUIET-MODE?* IDEALIB-STUFF)
(DEFINE-EXTERNAL (VIDEO-INTERVAL VIDEO) IDEALIB-STUFF)
(DEFINE-EXTERNAL (SET-VIDEO-START! VIDEO START) IDEALIB-STUFF)
(DEFINE-EXTERNAL (SET-VIDEO-END! VIDEO END) IDEALIB-STUFF)
(DEFINE-EXTERNAL (EXPAND-FILENAME FILENAME) IDEALIB-STUFF)
(DEFINE-EXTERNAL (NONDETERMINISTIC-MAP F L) IDEALIB-STUFF)
(DEFINE-EXTERNAL (ALL-PAIRS L) IDEALIB-STUFF)
(DEFINE-EXTERNAL (CONST A) IDEALIB-STUFF)
(DEFINE-EXTERNAL (GETTIMEOFDAY) IDEALIB-STUFF)
(DEFINE-EXTERNAL (TAKE-IF-POSSIBLE N L) IDEALIB-STUFF)
(DEFINE-EXTERNAL (GROUP-NTH L N) IDEALIB-STUFF)
(DEFINE-EXTERNAL (GROUP-BY F L) IDEALIB-STUFF)
(DEFINE-EXTERNAL (SWAP-COMMAS-AND-SPACES STRING) IDEALIB-STUFF)
(DEFINE-EXTERNAL (QUANTIZE-COORDINATE X) IDEALIB-STUFF)
(DEFINE-EXTERNAL (GENERIC-FULL-PATHNAME PATHNAME VIDEO NAME) IDEALIB-STUFF)
(DEFINE-EXTERNAL (GENERIC-ROOT-PATHNAME VIDEO NAME) IDEALIB-STUFF)
(DEFINE-EXTERNAL (ANY-VIDEO->STRING VIDEO) IDEALIB-STUFF)
(DEFINE-EXTERNAL (VIDEO-LENGTH VIDEO-NAME) IDEALIB-STUFF)
(DEFINE-EXTERNAL (VIDEO-FIRST-FRAME VIDEO-NAME) IDEALIB-STUFF)
(DEFINE-EXTERNAL (VIDEO-LAST-FRAME VIDEO-NAME) IDEALIB-STUFF)
(DEFINE-EXTERNAL (FOR-EACH-FRAME-REVERSED F V) IDEALIB-STUFF)
(DEFINE-EXTERNAL (MAP-FRAME F V) IDEALIB-STUFF)
(DEFINE-EXTERNAL (FOR-EACH-FRAME-INDEXED F V) IDEALIB-STUFF)
(DEFINE-EXTERNAL (MAP-FRAME-BUT-LAST F V) IDEALIB-STUFF)
(DEFINE-EXTERNAL (PER-FRAME-BOXES-IN-ZIP-PATHNAME FRAME TYPE LABEL NUM EXT) IDEALIB-STUFF)
(DEFINE-EXTERNAL (PER-VIDEO-BOX-PATHNAME VIDEO-NAME TYPE LABEL NUM EXT) IDEALIB-STUFF)
(DEFINE-EXTERNAL (INTERVALS-IN-ZIP-PATHNAME) IDEALIB-STUFF)
(DEFINE-EXTERNAL (FAST-READ-BOXES-FROM-BUFFER BUFFER . DEFAULT-MODEL) IDEALIB-STUFF)
(DEFINE-EXTERNAL FREE-C-FLOW-STRUCT IDEALIB-STUFF)
(DEFINE-EXTERNAL (OPTICAL-FLOW->C-FLOW-STRUCT OPTICAL-FLOW) IDEALIB-STUFF)
(DEFINE-EXTERNAL (AVERAGE-FLOW-IN-BOX BOX FLOW-TRANSFORMATION) IDEALIB-STUFF)
(DEFINE-EXTERNAL (MEDIAN-FLOW-IN-BOX BOX FLOW-TRANSFORMATION) IDEALIB-STUFF)
(DEFINE-EXTERNAL (VOC4-DETECTION->BOX D) IDEALIB-STUFF)
(DEFINE-EXTERNAL (LIST-OF-LISTS->TRANSPOSED-MATRIX LIST-OF-LISTS . SYMBOL) IDEALIB-STUFF)
(DEFINE-EXTERNAL (POLAR->RECT P) IDEALIB-STUFF)
(DEFINE-EXTERNAL (RECT->POLAR R) IDEALIB-STUFF)
(DEFINE-EXTERNAL (DROP-LAST-N-IF-POSSIBLE N L) IDEALIB-STUFF)
(DEFINE-EXTERNAL (FFMPEG-NEXT-FRAME! VIDEO) IDEALIB-STUFF)
(DEFINE-EXTERNAL (FFMPEG-VIDEO-FRAME-DATA VIDEO) IDEALIB-STUFF)
(DEFINE-EXTERNAL (WITH-FFMPEG-VIDEO VIDEO-NAME F) IDEALIB-STUFF)
(DEFINE-EXTERNAL (CUDA-MODEL-PATHNAME MODEL) IDEALIB-STUFF)
(DEFINE-EXTERNAL (MAP2 F L1 L2) IDEALIB-STUFF)
(DEFINE-EXTERNAL (MATLAB-THRESHOLD-OTSU L) IDEALIB-STUFF)
(DEFINE-STRUCTURE-EXTERNAL IDEALIB-STUFF KLT-PAIR CURRENT NEXT)
(DEFINE-EXTERNAL (VIDEO-DIMENSIONS VIDEO) IDEALIB-STUFF)
(DEFINE-EXTERNAL (VIDEO-SCALE VIDEO) IDEALIB-STUFF)
(DEFINE-EXTERNAL (GET-MODEL-NAMES-LIST VIDEO) IDEALIB-STUFF)
(DEFINE-EXTERNAL (SMOOTH-BOX-MOVIE BOX-MOVIE NCX NCY NW NH) IDEALIB-STUFF)
(DEFINE-EXTERNAL (ZIP:READ-FILE ZIP NAME-OR-INDEX) IDEALIB-STUFF)
(DEFINE-EXTERNAL (ZIP:READ-FILE-TO-BUFFER ZIP NAME-OR-INDEX) IDEALIB-STUFF)
(DEFINE-EXTERNAL (ZIP:DELETE ZIP NAME-OR-INDEX) IDEALIB-STUFF)
(DEFINE-EXTERNAL (ZIP:ADD-FILE ZIP NAME STRINGS) IDEALIB-STUFF)
(DEFINE-EXTERNAL (ZIP:LS ZIP) IDEALIB-STUFF)
(DEFINE-EXTERNAL *ZIP:MODE-CREATE-IF-NECESSARY* IDEALIB-STUFF)
(DEFINE-EXTERNAL *ZIP:MODE-OPEN* IDEALIB-STUFF)
(DEFINE-EXTERNAL (WITH-ZIP-FILE F FILENAME MODE) IDEALIB-STUFF)
(DEFINE-EXTERNAL (HSV-DEGREES->HSV-RADIANS C) IDEALIB-STUFF)
(DEFINE-EXTERNAL (UNPACK-COLOR C) IDEALIB-STUFF)
(DEFINE-EXTERNAL (TRUNCATED-NORMAL-DISTRIBUTION-PDF X MU SIGMA A B) IDEALIB-STUFF)
(DEFINE-EXTERNAL MALLOC TOOLLIB-C-BINDINGS)
(DEFINE-EXTERNAL FREE TOOLLIB-C-BINDINGS)
(DEFINE-EXTERNAL (SYMBOL->C-STRING S) TOOLLIB-C-BINDINGS)
(DEFINE-EXTERNAL (WITH-C-POINTERS F V) TOOLLIB-C-BINDINGS)
(DEFINE-EXTERNAL (LIST->C-EXACT-ARRAY ARRAY L ELEMENT-SIZE SIGNED?) TOOLLIB-C-BINDINGS)
(DEFINE-EXTERNAL (C-EXACT-ARRAY->LIST ARRAY ELEMENT-SIZE NR-ELEMENTS SIGNED?) TOOLLIB-C-BINDINGS)
(DEFINE-EXTERNAL (C-EXACT-ARRAY->VECTOR ARRAY ELEMENT-SIZE NR-ELEMENTS SIGNED?) TOOLLIB-C-BINDINGS)
(DEFINE-EXTERNAL (C-INEXACT-ARRAY->VECTOR ARRAY ELEMENT-SIZE NR-ELEMENTS SIGNED?) TOOLLIB-C-BINDINGS)
(DEFINE-EXTERNAL (CROP-IMAGE PNM X Y WIDTH HEIGHT) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL R TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL G TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL B TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (ORIENTATION V) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (POINT VERTEX) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (LABEL VERTEX) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (A V) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (DTRACE S V) TOOLLIB-MISC)
(DEFINE-EXTERNAL (EXACT-ROUND V) TOOLLIB-MISC)
(DEFINE-EXTERNAL (SIGMOID T A B) TOOLLIB-MISC)
(DEFINE-EXTERNAL (LAST-VECTOR V) TOOLLIB-MISC)
(DEFINE-EXTERNAL (LIST-MEAN P) TOOLLIB-MISC)
(DEFINE-EXTERNAL (LIST-VARIANCE S) TOOLLIB-MISC)
(DEFINE-EXTERNAL (INITIAL-SUBLIST? REF L) TOOLLIB-MISC)
(DEFINE-EXTERNAL (P-LEAF? L) TOOLLIB-MISC)
(DEFINE-EXTERNAL (IP-LEAF? L) TOOLLIB-MISC)
(DEFINE-EXTERNAL (INDEX-LEAVES TREE LEAF? PREFIX) TOOLLIB-MISC)
(DEFINE-EXTERNAL (TREE->LEAVES TREE LEAF?) TOOLLIB-MISC)
(DEFINE-STRUCTURE-EXTERNAL TOOLLIB-MISC ZIPPER TREE THREAD)
(DEFINE-EXTERNAL (ZIPPER:INITIALIZE TREE) TOOLLIB-MISC)
(DEFINE-EXTERNAL (ZIPPER:DESCEND ZIPPER I) TOOLLIB-MISC)
(DEFINE-EXTERNAL (ZIPPER:ASCEND ZIPPER) TOOLLIB-MISC)
(DEFINE-EXTERNAL (ZIPPER:CAN-ASCEND? ZIPPER) TOOLLIB-MISC)
(DEFINE-EXTERNAL (SAFE-READ-FILE FILENAME . DEFAULT) TOOLLIB-MISC)
(DEFINE-EXTERNAL (LOOKUP-VALUE I G) TOOLLIB-MISC)
(DEFINE-EXTERNAL (FLATTEN* L) TOOLLIB-MISC)
(DEFINE-EXTERNAL (MAXIMUMP L P) TOOLLIB-MISC)
(DEFINE-EXTERNAL (MINIMUMP L P) TOOLLIB-MISC)
(DEFINE-EXTERNAL (REMOVE-IF-VECTOR P V) TOOLLIB-MISC)
(DEFINE-EXTERNAL (O A B . C) TOOLLIB-MISC)
(DEFINE-EXTERNAL (FOR-EACH-INDEXED-VECTOR F V) TOOLLIB-MISC)
(DEFINE-EXTERNAL (MAP-MATRIX F M) TOOLLIB-MISC)
(DEFINE-EXTERNAL (SHAPE-MATRIX V C) TOOLLIB-MISC)
(DEFINE-EXTERNAL (UNSHAPE-MATRIX M) TOOLLIB-MISC)
(DEFINE-EXTERNAL (TRANSPOSE-LIST-OF-LISTS LOL) TOOLLIB-MISC)
(DEFINE-EXTERNAL (ZIP A B . CS) TOOLLIB-MISC)
(DEFINE-EXTERNAL (TAKE N L) TOOLLIB-MISC)
(DEFINE-EXTERNAL (TAKE-UNTIL P L) TOOLLIB-MISC)
(DEFINE-EXTERNAL (DROP N L) TOOLLIB-MISC)
(DEFINE-EXTERNAL (DROP-UNTIL P LS) TOOLLIB-MISC)
(DEFINE-EXTERNAL (JOIN L) TOOLLIB-MISC)
(DEFINE-EXTERNAL (MAP-CONCAT F L) TOOLLIB-MISC)
(DEFINE-EXTERNAL (MAP-INDEXED-VECTOR F V . &REST) TOOLLIB-MISC)
(DEFINE-EXTERNAL (STRING-JOIN DELIM L) TOOLLIB-MISC)
(DEFINE-EXTERNAL (UNWORDS L) TOOLLIB-MISC)
(DEFINE-EXTERNAL (LEFT-OF P1 P2) SENTENCE-TO-TRACE-FROM-LEARNED-MODELS)
(DEFINE-EXTERNAL (RIGHT-OF P1 P2) SENTENCE-TO-TRACE-FROM-LEARNED-MODELS)
(DEFINE-EXTERNAL (TOWARDS ANGLE P1 P2) SENTENCE-TO-TRACE-FROM-LEARNED-MODELS)
(DEFINE-EXTERNAL (AWAY-FROM ANGLE P1 P2) SENTENCE-TO-TRACE-FROM-LEARNED-MODELS)
(DEFINE-EXTERNAL (SIGN X) SENTENCE-TO-TRACE-FROM-LEARNED-MODELS)
