(DEFINE-EXTERNAL (PREGEXP-SPLIT PAT STR) IDEALIB-PREGEXP)
(DEFINE-EXTERNAL (SAFE-MATRIX-REF M Y X DEFAULT) IDEALIB-STUFF)
(DEFINE-EXTERNAL (STRING*-APPEND . OBJS) IDEALIB-STUFF)
(DEFINE-EXTERNAL R TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL G TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL B TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (POINT VERTEX) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (A V) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL *DEBUGGING?* TOOLLIB-MISC)
(DEFINE-EXTERNAL *QUIET?* TOOLLIB-MISC)
(DEFINE-EXTERNAL (IMPLIES A B) TOOLLIB-MISC)
(DEFINE-EXTERNAL (DTRACE S V) TOOLLIB-MISC)
(DEFINE-EXTERNAL (FIXPOINTP P F V) TOOLLIB-MISC)
(DEFINE-EXTERNAL (EXACT-ROUND V) TOOLLIB-MISC)
(DEFINE-EXTERNAL (EXACT-FLOOR V) TOOLLIB-MISC)
(DEFINE-EXTERNAL (EXACT-CEILING V) TOOLLIB-MISC)
(DEFINE-EXTERNAL (SIGMOID T A B) TOOLLIB-MISC)
(DEFINE-EXTERNAL (CORRECT-ANGLE A) TOOLLIB-MISC)
(DEFINE-EXTERNAL (PERCENTAGE A) TOOLLIB-MISC)
(DEFINE-EXTERNAL (LAST-VECTOR V) TOOLLIB-MISC)
(DEFINE-EXTERNAL *SETTINGS* TOOLLIB-MISC)
(DEFINE-EXTERNAL (*LOAD-SETTINGS!*) TOOLLIB-MISC)
(DEFINE-EXTERNAL (*SAVE-SETTINGS*) TOOLLIB-MISC)
(DEFINE-EXTERNAL (SETTINGS-LOOKUP R PATH) TOOLLIB-MISC)
(DEFINE-EXTERNAL (SETTINGS-UPDATE R VAL PATH) TOOLLIB-MISC)
(DEFINE-EXTERNAL (SETTINGS-REMOVE R PATH) TOOLLIB-MISC)
(DEFINE-EXTERNAL (*SETTINGS-LOOKUP* . PATH) TOOLLIB-MISC)
(DEFINE-EXTERNAL (*SETTINGS-UPDATE!* VAL . PATH) TOOLLIB-MISC)
(DEFINE-EXTERNAL (*SETTINGS-REMOVE* . PATH) TOOLLIB-MISC)
(DEFINE-EXTERNAL (LIST-MEAN P) TOOLLIB-MISC)
(DEFINE-EXTERNAL (LIST-COVARIANCE L) TOOLLIB-MISC)
(DEFINE-EXTERNAL (LIST-VARIANCE S) TOOLLIB-MISC)
(DEFINE-EXTERNAL (LIST-SKEWNESS L) TOOLLIB-MISC)
(DEFINE-EXTERNAL (LIST-KURTOSIS L) TOOLLIB-MISC)
(DEFINE-EXTERNAL (LIST-CORRELATION L1 L2) TOOLLIB-MISC)
(DEFINE-EXTERNAL (VECTOR-MEAN V) TOOLLIB-MISC)
(DEFINE-EXTERNAL (VECTOR-VARIANCE V) TOOLLIB-MISC)
(DEFINE-EXTERNAL (VECTOR-SKEWNESS V) TOOLLIB-MISC)
(DEFINE-EXTERNAL (VECTOR-KURTOSIS V) TOOLLIB-MISC)
(DEFINE-EXTERNAL (VECTOR-CORRELATION V1 V2) TOOLLIB-MISC)
(DEFINE-EXTERNAL (COEFFICIENT-OF-BIMODALITY V) TOOLLIB-MISC)
(DEFINE-EXTERNAL (VECTORS-MEAN VALUES) TOOLLIB-MISC)
(DEFINE-EXTERNAL (VECTORS-VARIANCE MU VALUES) TOOLLIB-MISC)
(DEFINE-EXTERNAL (MAHALANOBIS-DISTANCE VAL MU ISIGMA) TOOLLIB-MISC)
(DEFINE-EXTERNAL (FREQUENCIES L) TOOLLIB-MISC)
(DEFINE-EXTERNAL (INITIAL-SUBLIST? REF L) TOOLLIB-MISC)
(DEFINE-EXTERNAL (P-LEAF? L) TOOLLIB-MISC)
(DEFINE-EXTERNAL (IP-LEAF? L) TOOLLIB-MISC)
(DEFINE-EXTERNAL (INDEX-LEAVES TREE LEAF? PREFIX) TOOLLIB-MISC)
(DEFINE-EXTERNAL (TREE->LEAVES TREE LEAF?) TOOLLIB-MISC)
(DEFINE-STRUCTURE-EXTERNAL TOOLLIB-MISC ZIPPER TREE THREAD)
(DEFINE-EXTERNAL (ZIPPER:INITIALIZE TREE) TOOLLIB-MISC)
(DEFINE-EXTERNAL (ZIPPER:DESCEND ZIPPER I) TOOLLIB-MISC)
(DEFINE-EXTERNAL (ZIPPER:ASCEND ZIPPER) TOOLLIB-MISC)
(DEFINE-EXTERNAL (ZIPPER:DESCEND-SEQ ZIPPER SEQ) TOOLLIB-MISC)
(DEFINE-EXTERNAL (ZIPPER:ASCEND-N ZIPPER N) TOOLLIB-MISC)
(DEFINE-EXTERNAL (ZIPPER:CAN-ASCEND? ZIPPER) TOOLLIB-MISC)
(DEFINE-EXTERNAL (ZIPPER:CAN-DESCEND? ZIPPER) TOOLLIB-MISC)
(DEFINE-EXTERNAL (ZIPPER:ASCEND-UNTIL ZIPPER PREDICATE) TOOLLIB-MISC)
(DEFINE-EXTERNAL (ZIPPER:ASCEND-HEIGHT ZIPPER) TOOLLIB-MISC)
(DEFINE-EXTERNAL (MY-FLOOR A) TOOLLIB-MISC)
(DEFINE-EXTERNAL (MY-CEILING A) TOOLLIB-MISC)
(DEFINE-EXTERNAL (MY-ROUND A) TOOLLIB-MISC)
(DEFINE-EXTERNAL (MY-MAX A B) TOOLLIB-MISC)
(DEFINE-EXTERNAL (MY-MIN A B) TOOLLIB-MISC)
(DEFINE-EXTERNAL (MY-ABS A) TOOLLIB-MISC)
(DEFINE-EXTERNAL (SMOOTH-MAX-CHKS-2 A B T) TOOLLIB-MISC)
(DEFINE-EXTERNAL (SMOOTH-MIN-CHKS-2 A B T) TOOLLIB-MISC)
(DEFINE-EXTERNAL (MY-ADD-EXP E1 E2) TOOLLIB-MISC)
(DEFINE-EXTERNAL (RECIP-EXP E2) TOOLLIB-MISC)
(DEFINE-EXTERNAL (WINDOW-ID NAME) TOOLLIB-MISC)
(DEFINE-EXTERNAL (START-RECORDING! FPS) TOOLLIB-MISC)
(DEFINE-EXTERNAL (START-RECORDING-LOCATION! FPS X Y W H) TOOLLIB-MISC)
(DEFINE-EXTERNAL (STOP-RECORDING!) TOOLLIB-MISC)
(DEFINE-EXTERNAL (TRANSLATION-3D X Y Z) TOOLLIB-MISC)
(DEFINE-EXTERNAL (SCALING-3D X Y Z) TOOLLIB-MISC)
(DEFINE-EXTERNAL (ROTATION-3D-X A) TOOLLIB-MISC)
(DEFINE-EXTERNAL (ROTATION-3D-Y A) TOOLLIB-MISC)
(DEFINE-EXTERNAL (ROTATION-3D-Z A) TOOLLIB-MISC)
(DEFINE-EXTERNAL IDENTITY-3D TOOLLIB-MISC)
(DEFINE-EXTERNAL (MAKE-TRANSFORM-3D THETA PHI PSI X Y Z) TOOLLIB-MISC)
(DEFINE-EXTERNAL (POINT->HOMOGENOUS P) TOOLLIB-MISC)
(DEFINE-EXTERNAL (HOMOGENOUS->POINT P) TOOLLIB-MISC)
(DEFINE-EXTERNAL (TRANSFORM-POINT-3D M P) TOOLLIB-MISC)
(DEFINE-EXTERNAL (TRANSFORM-LINE-3D M L) TOOLLIB-MISC)
(DEFINE-EXTERNAL (APPLY-TRANSFORM-LINE T LINE) TOOLLIB-MISC)
(DEFINE-EXTERNAL (TRANSFORM->COMPONENTS TRANSFORM) TOOLLIB-MISC)
(DEFINE-EXTERNAL (TRANSFORM-3D->COMPONENTS TRANSFORM) TOOLLIB-MISC)
(DEFINE-EXTERNAL (PROJECT-LINE L F) TOOLLIB-MISC)
(DEFINE-EXTERNAL (SAFE-PROJECT V FOCAL-LENGTH) TOOLLIB-MISC)
(DEFINE-EXTERNAL (SAFE-PROJECT-LINE L F) TOOLLIB-MISC)
(DEFINE-EXTERNAL (ROTATE-POINT-2D P THETA) TOOLLIB-MISC)
(DEFINE-EXTERNAL (ROTATE-LINE-2D L THETA) TOOLLIB-MISC)
(DEFINE-EXTERNAL (LINE->DIRECTION-VECTOR L) TOOLLIB-MISC)
(DEFINE-EXTERNAL (TRANSLATE-LINE-2D L V) TOOLLIB-MISC)
(DEFINE-EXTERNAL (FILTER-LINES LINES MIN MAX) TOOLLIB-MISC)
(DEFINE-EXTERNAL (LINE-DISTANCE L1 L2) TOOLLIB-MISC)
(DEFINE-EXTERNAL (WITH-PERSISTENT-TEMPORARY-FILE PREFIX F) TOOLLIB-MISC)
(DEFINE-EXTERNAL (SYSTEM-OUTPUT CMD) TOOLLIB-MISC)
(DEFINE-EXTERNAL (ARCHITECTURE-PATH) TOOLLIB-MISC)
(DEFINE-EXTERNAL (PWD) TOOLLIB-MISC)
(DEFINE-EXTERNAL (SAFE-READ-FILE FILENAME . DEFAULT) TOOLLIB-MISC)
(DEFINE-EXTERNAL (LOOKUP I G) TOOLLIB-MISC)
(DEFINE-EXTERNAL (LOOKUP-VALUE I G) TOOLLIB-MISC)
(DEFINE-EXTERNAL (LOOKUP-VALUES I G) TOOLLIB-MISC)
(DEFINE-EXTERNAL (SPLIT-N N L) TOOLLIB-MISC)
(DEFINE-EXTERNAL (SPLIT-COMMA S) TOOLLIB-MISC)
(DEFINE-EXTERNAL (FLATTEN* L) TOOLLIB-MISC)
(DEFINE-EXTERNAL (SNOC L A) TOOLLIB-MISC)
(DEFINE-EXTERNAL (MAXIMUM L) TOOLLIB-MISC)
(DEFINE-EXTERNAL (MINIMUM L) TOOLLIB-MISC)
(DEFINE-EXTERNAL (MAXIMUMP L P) TOOLLIB-MISC)
(DEFINE-EXTERNAL (MINIMUMP L P) TOOLLIB-MISC)
(DEFINE-EXTERNAL (MAXIMUM-WITH-POSITION L) TOOLLIB-MISC)
(DEFINE-EXTERNAL (MINIMUM-WITH-POSITION L) TOOLLIB-MISC)
(DEFINE-EXTERNAL (SAFE-SUBLIST L S F) TOOLLIB-MISC)
(DEFINE-EXTERNAL (APPEND-VECTOR VEC1 VEC2) TOOLLIB-MISC)
(DEFINE-EXTERNAL (VECTOR-POSITION VECTOR VAL) TOOLLIB-MISC)
(DEFINE-EXTERNAL (REST-VECTOR V) TOOLLIB-MISC)
(DEFINE-EXTERNAL (REMOVE-IF-VECTOR P V) TOOLLIB-MISC)
(DEFINE-EXTERNAL (REMOVE-IF-NOT-VECTOR P V) TOOLLIB-MISC)
(DEFINE-EXTERNAL (O A B . C) TOOLLIB-MISC)
(DEFINE-EXTERNAL (FOR-EACH-INDEXED-VECTOR F V) TOOLLIB-MISC)
(DEFINE-EXTERNAL (CROP M X Y W H) TOOLLIB-MISC)
(DEFINE-EXTERNAL (MAP-LINEAR F S E N) TOOLLIB-MISC)
(DEFINE-EXTERNAL (MAP-MEDIAL F L KEY) TOOLLIB-MISC)
(DEFINE-EXTERNAL (MATRIX-REF-ND M . IS) TOOLLIB-MISC)
(DEFINE-EXTERNAL (MATRIX-3D-REF A S I J) TOOLLIB-MISC)
(DEFINE-EXTERNAL (MATRIX-SET-ND! M V . IS) TOOLLIB-MISC)
(DEFINE-EXTERNAL (MATRIX-3D-SET! A V S I J) TOOLLIB-MISC)
(DEFINE-EXTERNAL (MAP-MATRIX-ND F M N) TOOLLIB-MISC)
(DEFINE-EXTERNAL (FOR-EACH-MATRIX-ND F M N) TOOLLIB-MISC)
(DEFINE-EXTERNAL (MAP-MATRIX F M) TOOLLIB-MISC)
(DEFINE-EXTERNAL (FOR-EACH-MATRIX F M) TOOLLIB-MISC)
(DEFINE-EXTERNAL (MAP-MATRIX-3D F M) TOOLLIB-MISC)
(DEFINE-EXTERNAL (FOR-EACH-MATRIX-3D F M) TOOLLIB-MISC)
(DEFINE-EXTERNAL (MAP-N-MATRIX F I J) TOOLLIB-MISC)
(DEFINE-EXTERNAL (FOR-EACH-N-MATRIX F I J) TOOLLIB-MISC)
(DEFINE-EXTERNAL (MAP-INDEXED-MATRIX F M) TOOLLIB-MISC)
(DEFINE-EXTERNAL (FOR-EACH-INDEXED-MATRIX F M) TOOLLIB-MISC)
(DEFINE-EXTERNAL (MAP-INDEXED-MATRIX-3D F P) TOOLLIB-MISC)
(DEFINE-EXTERNAL (FOR-EACH-INDEXED-MATRIX-3D F P) TOOLLIB-MISC)
(DEFINE-EXTERNAL (REDUCE-MATRIX-ND G M I N) TOOLLIB-MISC)
(DEFINE-EXTERNAL (MAP-REDUCE-MATRIX-ND G I F M N) TOOLLIB-MISC)
(DEFINE-EXTERNAL (REDUCE-MATRIX G M I) TOOLLIB-MISC)
(DEFINE-EXTERNAL (MAP-REDUCE-MATRIX G I F M) TOOLLIB-MISC)
(DEFINE-EXTERNAL (REDUCE-MATRIX-3D G M I) TOOLLIB-MISC)
(DEFINE-EXTERNAL (MAP-REDUCE-MATRIX-3D G I F M) TOOLLIB-MISC)
(DEFINE-EXTERNAL (MATRIX-DIMENSIONS M) TOOLLIB-MISC)
(DEFINE-EXTERNAL (MATRIX-TRACE M) TOOLLIB-MISC)
(DEFINE-EXTERNAL (MAP-M-N F M N) TOOLLIB-MISC)
(DEFINE-EXTERNAL (FOR-EACH-M-N F M N) TOOLLIB-MISC)
(DEFINE-EXTERNAL (FOR-EACH-M-N-DEC F M N) TOOLLIB-MISC)
(DEFINE-EXTERNAL (CONCAT L) TOOLLIB-MISC)
(DEFINE-EXTERNAL (MATRIX->FLAT-LIST P) TOOLLIB-MISC)
(DEFINE-EXTERNAL (MAP-N-3 F XB YB ZB) TOOLLIB-MISC)
(DEFINE-EXTERNAL (MAP-CONCAT-N-3 F XB YB ZB) TOOLLIB-MISC)
(DEFINE-EXTERNAL (MAP-VECTOR-2D F M) TOOLLIB-MISC)
(DEFINE-EXTERNAL (MAP-VECTOR-2D-2-ARGS F M1 M2) TOOLLIB-MISC)
(DEFINE-EXTERNAL (MAP-VECTOR-2D-2 F A B) TOOLLIB-MISC)
(DEFINE-EXTERNAL (SOME-VECTOR-2D P V) TOOLLIB-MISC)
(DEFINE-EXTERNAL (EVERY-VECTOR-2D P V) TOOLLIB-MISC)
(DEFINE-EXTERNAL (REDUCE-VECTOR-2D F M I) TOOLLIB-MISC)
(DEFINE-EXTERNAL (SHAPE-MATRIX V C) TOOLLIB-MISC)
(DEFINE-EXTERNAL (UNSHAPE-MATRIX M) TOOLLIB-MISC)
(DEFINE-EXTERNAL (MATRIX->LIST-OF-LISTS M) TOOLLIB-MISC)
(DEFINE-EXTERNAL (LIST-OF-LISTS->MATRIX LOL) TOOLLIB-MISC)
(DEFINE-EXTERNAL (TRANSPOSE-LIST-OF-LISTS LOL) TOOLLIB-MISC)
(DEFINE-EXTERNAL (ZIP A B . CS) TOOLLIB-MISC)
(DEFINE-EXTERNAL (TAKE N L) TOOLLIB-MISC)
(DEFINE-EXTERNAL (TAKE-UNTIL P L) TOOLLIB-MISC)
(DEFINE-EXTERNAL (DROP N L) TOOLLIB-MISC)
(DEFINE-EXTERNAL (DROP-UNTIL P LS) TOOLLIB-MISC)
(DEFINE-EXTERNAL (FOLD F L I) TOOLLIB-MISC)
(DEFINE-EXTERNAL (FOLDL F L I) TOOLLIB-MISC)
(DEFINE-EXTERNAL (FOLDR F L I) TOOLLIB-MISC)
(DEFINE-EXTERNAL (JOIN L) TOOLLIB-MISC)
(DEFINE-EXTERNAL (MAP-CONCAT F L) TOOLLIB-MISC)
(DEFINE-EXTERNAL (MAP-CONCAT-N F N) TOOLLIB-MISC)
(DEFINE-EXTERNAL (RING-FORWARD L) TOOLLIB-MISC)
(DEFINE-EXTERNAL (RING-BACKWARD L) TOOLLIB-MISC)
(DEFINE-EXTERNAL (RING-FORWARD-TO L O) TOOLLIB-MISC)
(DEFINE-EXTERNAL (RING-FORWARD-BETWEEN R A B) TOOLLIB-MISC)
(DEFINE-EXTERNAL (MAP-INDEXED-VECTOR F V . &REST) TOOLLIB-MISC)
(DEFINE-EXTERNAL (LINE-SEGMENT-CENTER L) TOOLLIB-MISC)
(DEFINE-EXTERNAL (INEXACT-MATRIX-REF M Y X) TOOLLIB-MISC)
(DEFINE-EXTERNAL (MATRIX? V) TOOLLIB-MISC)
(DEFINE-EXTERNAL (SUBMATRIX M X-OFFSET Y-OFFSET X-SIZE Y-SIZE) TOOLLIB-MISC)
(DEFINE-EXTERNAL (STRING-JOIN DELIM L) TOOLLIB-MISC)
(DEFINE-EXTERNAL (STRING*-JOIN DELIM L) TOOLLIB-MISC)
(DEFINE-EXTERNAL (STRING-FIND STRING CHAR) TOOLLIB-MISC)
(DEFINE-EXTERNAL (STRING-FIND-FROM-INDEX STRING CHAR START) TOOLLIB-MISC)
(DEFINE-EXTERNAL (UNLINES L) TOOLLIB-MISC)
(DEFINE-EXTERNAL (LINES STRING) TOOLLIB-MISC)
(DEFINE-EXTERNAL WORDS TOOLLIB-MISC)
(DEFINE-EXTERNAL (UNWORDS L) TOOLLIB-MISC)
(DEFINE-EXTERNAL (TRANSFORM-LINE-TO-IMAGE-CENTER L IMAGE-CENTER) TOOLLIB-MISC)
(DEFINE-EXTERNAL *THICK-RED-GC* TOOLLIB-MISC)
(DEFINE-EXTERNAL *THICK-BLUE-GC* TOOLLIB-MISC)
(DEFINE-EXTERNAL *THICK-ORANGE-GC* TOOLLIB-MISC)
(DEFINE-EXTERNAL *THICK-GREEN-GC* TOOLLIB-MISC)
(DEFINE-EXTERNAL *MEDIUM-RED-GC* TOOLLIB-MISC)
(DEFINE-EXTERNAL *MEDIUM-BLUE-GC* TOOLLIB-MISC)
(DEFINE-EXTERNAL *MEDIUM-ORANGE-GC* TOOLLIB-MISC)
(DEFINE-EXTERNAL *MEDIUM-GREEN-GC* TOOLLIB-MISC)
(DEFINE-EXTERNAL *LARGE-LUCIDA-FONT* TOOLLIB-MISC)
(DEFINE-EXTERNAL *LARGE-LUCIDA-GC* TOOLLIB-MISC)
(DEFINE-EXTERNAL *LARGE-LUCIDA-BASELINE* TOOLLIB-MISC)
(DEFINE-EXTERNAL (SETUP-*THICK-RED-GC*) TOOLLIB-MISC)
(DEFINE-EXTERNAL (SETUP-*THICK-BLUE-GC*) TOOLLIB-MISC)
(DEFINE-EXTERNAL (SETUP-*THICK-ORANGE-GC*) TOOLLIB-MISC)
(DEFINE-EXTERNAL (SETUP-*THICK-GREEN-GC*) TOOLLIB-MISC)
(DEFINE-EXTERNAL (SETUP-*MEDIUM-RED-GC*) TOOLLIB-MISC)
(DEFINE-EXTERNAL (SETUP-*MEDIUM-BLUE-GC*) TOOLLIB-MISC)
(DEFINE-EXTERNAL (SETUP-*MEDIUM-ORANGE-GC*) TOOLLIB-MISC)
(DEFINE-EXTERNAL (SETUP-*MEDIUM-GREEN-GC*) TOOLLIB-MISC)
(DEFINE-EXTERNAL (SETUP-*LARGE-LUCIDA-GC*) TOOLLIB-MISC)
(DEFINE-EXTERNAL (SETUP-EXTRA-X-GCS) TOOLLIB-MISC)
(DEFINE-EXTERNAL (FREE-EXTRA-X-GCS) TOOLLIB-MISC)
(DEFINE-EXTERNAL (XREMOVE-EXPOSE-EVENTS) TOOLLIB-MISC)
(DEFINE-EXTERNAL (STANDARD-BUTTONS BUTTON-COLUMNS HELP) TOOLLIB-MISC)
(DEFINE-EXTERNAL (DRAW-CLICKABLE-STRINGS-WITH-SCROLL-BAR FIRST-LINE SET-FIRST-LINE! LEFT MIDDLE RIGHT STRINGS XMIN XMAX YMIN YMAX) TOOLLIB-MISC)
(DEFINE-EXTERNAL (ELLIPSE->LINES ELLIPSE) TOOLLIB-MISC)
(DEFINE-EXTERNAL (ACOT X) TOOLLIB-MISC)
(DEFINE-EXTERNAL (LEFT-PSEUDO-INVERSE M) TOOLLIB-MISC)
(DEFINE-EXTERNAL (RIGHT-PSEUDO-INVERSE M) TOOLLIB-MISC)
(DEFINE-EXTERNAL (ELLIPSE-FIT PS) TOOLLIB-MISC)
(DEFINE-EXTERNAL (ELLIPSE-FIT-SCHEME PTS) TOOLLIB-MISC)
(DEFINE-EXTERNAL (EVERY-N-2D P V W) TOOLLIB-MISC)
(DEFINE-EXTERNAL (EVERY-N-3D P V W X) TOOLLIB-MISC)
(DEFINE-EXTERNAL (EVERY-N-4D P V W X Y) TOOLLIB-MISC)
(DEFINE-EXTERNAL (EVERY-N-5D P V W X Y Z) TOOLLIB-MISC)
(DEFINE-EXTERNAL (MAP-N-VECTOR-2D F M N) TOOLLIB-MISC)
(DEFINE-EXTERNAL (MAP-N-VECTOR-3D F M N P) TOOLLIB-MISC)
(DEFINE-EXTERNAL (MAP-N-VECTOR-4D F M N P Q) TOOLLIB-MISC)
(DEFINE-EXTERNAL (MAP-N-VECTOR-5D F M N P Q R) TOOLLIB-MISC)
(DEFINE-EXTERNAL (PRODUCT-2D F M N) TOOLLIB-MISC)
(DEFINE-EXTERNAL (REF-1D M A) TOOLLIB-MISC)
(DEFINE-EXTERNAL (REF-2D M A B) TOOLLIB-MISC)
(DEFINE-EXTERNAL (REF-3D M A B C) TOOLLIB-MISC)
(DEFINE-EXTERNAL (REF-4D M A B C D) TOOLLIB-MISC)
(DEFINE-EXTERNAL (REF-5D M A B C D E) TOOLLIB-MISC)
(DEFINE-EXTERNAL (SUM-2D F M N) TOOLLIB-MISC)
(DEFINE-EXTERNAL (SUM-3D F M N P) TOOLLIB-MISC)
(DEFINE-EXTERNAL (SUM-4D F M N P Q) TOOLLIB-MISC)
(DEFINE-EXTERNAL (SUM-PAIRS F M) TOOLLIB-MISC)
(DEFINE-EXTERNAL (VECTOR-SUM F N I) TOOLLIB-MISC)
(DEFINE-EXTERNAL (VECTOR-SUM-2D F M N I) TOOLLIB-MISC)
(DEFINE-EXTERNAL (MATRIX-SUM F N I) TOOLLIB-MISC)
(DEFINE-EXTERNAL (MATRIX-SUM-2D F M N I) TOOLLIB-MISC)
(DEFINE-EXTERNAL (V/K V K) TOOLLIB-MISC)
(DEFINE-EXTERNAL (M/K M K) TOOLLIB-MISC)
(DEFINE-EXTERNAL (V*M*V V M) TOOLLIB-MISC)
(DEFINE-EXTERNAL (SUM-F F L) TOOLLIB-MISC)
(DEFINE-EXTERNAL (SUM-VECTOR V) TOOLLIB-MISC)
(DEFINE-EXTERNAL (SUM-VECTOR-F F V) TOOLLIB-MISC)
(DEFINE-EXTERNAL (FLOAT-MODULO X M) TOOLLIB-MISC)
(DEFINE-EXTERNAL (EXACT-IDENTITY-MATRIX N) TOOLLIB-MISC)
(DEFINE-EXTERNAL (TRANSLATE-3D X Y Z) TOOLLIB-MISC)
(DEFINE-EXTERNAL (DRAW-CIRCLE P RADIUS GC) TOOLLIB-MISC)
(DEFINE-EXTERNAL (DEGENERATE-TRIANGLE? TRIANGLE) TOOLLIB-MISC)
(DEFINE-EXTERNAL (DRAW-FILLED-POLYGON PBM POINTS) TOOLLIB-MISC)
(DEFINE-EXTERNAL (ELLIPSE-CIRCUMFERENCE ELLIPSE) TOOLLIB-MISC)
(DEFINE-EXTERNAL (POINT-INSIDE-OR-ON-ELLIPSE? POINT ELLIPSE) TOOLLIB-MISC)
(DEFINE-EXTERNAL (ELLIPSE-BOUNDING-BOX ELLIPSE) TOOLLIB-MISC)
(DEFINE-EXTERNAL (DRAW-FILLED-ELLIPSE PBM ELLIPSE) TOOLLIB-MISC)
(DEFINE-EXTERNAL (PRECISION RELEVANT RETREIVED) TOOLLIB-MISC)
(DEFINE-EXTERNAL (RECALL RELEVANT RETREIVED) TOOLLIB-MISC)
(DEFINE-EXTERNAL (ACCURACY ALL THRESH) TOOLLIB-MISC)
(DEFINE-EXTERNAL (PRF FOUND THRESH) TOOLLIB-MISC)
(DEFINE-EXTERNAL (ACCURACY-N ALL A B N) TOOLLIB-MISC)
(DEFINE-EXTERNAL (ACCURACY-A ALL N) TOOLLIB-MISC)
(DEFINE-EXTERNAL (PRF-N ALL A B N) TOOLLIB-MISC)
(DEFINE-EXTERNAL (PRECISION-RECALL-THRESHOLD-P THRESH ALL P G) TOOLLIB-MISC)
(DEFINE-EXTERNAL (PR ALL THRESH) TOOLLIB-MISC)
(DEFINE-EXTERNAL (GRAPH-ROC A S) TOOLLIB-MISC)
(DEFINE-EXTERNAL (GRAPH-COLOR-ROC A S) TOOLLIB-MISC)
(DEFINE-EXTERNAL (WITH-DECOMPRESSED PATHNAME F) TOOLLIB-MISC)
(DEFINE-EXTERNAL (READ-OBJECT-FROM-CFILE PATHNAME) TOOLLIB-MISC)
