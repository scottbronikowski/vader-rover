(DEFINE-EXTERNAL (PREGEXP-SPLIT PAT STR) IDEALIB-PREGEXP)
(DEFINE-EXTERNAL R TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL G TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (POINT VERTEX) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (DTRACE S V) TOOLLIB-MISC)
(DEFINE-EXTERNAL (EXACT-ROUND V) TOOLLIB-MISC)
(DEFINE-EXTERNAL (EXACT-FLOOR V) TOOLLIB-MISC)
(DEFINE-EXTERNAL (SIGMOID T A B) TOOLLIB-MISC)
(DEFINE-EXTERNAL (MAXIMUM L) TOOLLIB-MISC)
(DEFINE-EXTERNAL (O A B . C) TOOLLIB-MISC)
(DEFINE-EXTERNAL (SHAPE-MATRIX V C) TOOLLIB-MISC)
(DEFINE-EXTERNAL (MAP-INDEXED-VECTOR F V . &REST) TOOLLIB-MISC)
(DEFINE-EXTERNAL (PARSER-DTRACE S X) LEARNING-MESS)
(DEFINE-EXTERNAL (PARSE-SENTENCE SENTENCE) LEARNING-MESS)
(DEFINE-EXTERNAL (SIMPLIFY-PARSE-TREE PARSE-TREE) LEARNING-MESS)
(DEFINE-EXTERNAL (PARSED-SENTENCE->LINKED-REFERENCES PARSE) LEARNING-MESS)
(DEFINE-EXTERNAL *LEARNED-ONE-OBJECT-PREPOSITIONS* SENTENCE-TO-TRACE-FROM-LEARNED-MODELS)
(DEFINE-EXTERNAL (PARAMS->LEXICON PARAMS) SENTENCE-TO-TRACE-FROM-LEARNED-MODELS)
(DEFINE-EXTERNAL (ADVERB-PREPOSITION->FUNCTION PREPOSITION LEXICON) SENTENCE-TO-TRACE-FROM-LEARNED-MODELS)
(DEFINE-EXTERNAL (ADJECTIVE-PREPOSITION->FUNCTION PREPOSITION LEXICON) SENTENCE-TO-TRACE-FROM-LEARNED-MODELS)
(DEFINE-EXTERNAL *OBJECTS* SENTENCE-TO-TRACE-FROM-LEARNED-MODELS)
(DEFINE-EXTERNAL *OBJECT-CODE-NAMES* SENTENCE-TO-TRACE-FROM-LEARNED-MODELS)
(DEFINE-EXTERNAL (OBJECT-PHRASE->SCORED-POINTS OBJECT-PHRASE OBJECTS LEXICON) SENTENCE-TO-TRACE-FROM-LEARNED-MODELS)
(DEFINE-EXTERNAL (OBJECT-PHRASE->POINT OBJECT-PHRASE OBJECTS LEXICON) SENTENCE-TO-TRACE-FROM-LEARNED-MODELS)
(DEFINE-EXTERNAL (PARSE-TREE->PARSE-FUNCTIONS PARSE-TREE OBJECTS LEXICON) SENTENCE-TO-TRACE-FROM-LEARNED-MODELS)
(DEFINE-EXTERNAL *DIRECTIONS* SENTENCE-TO-TRACE-FROM-LEARNED-MODELS)
(DEFINE-EXTERNAL *LOUD-TRACE-GENERATOR?* SENTENCE-TO-TRACE-FROM-LEARNED-MODELS)
(DEFINE-EXTERNAL (TRACE-DTRACE S X) SENTENCE-TO-TRACE-FROM-LEARNED-MODELS)
(DEFINE-EXTERNAL *VONMISES-KAPPA* SENTENCE-TO-TRACE-FROM-LEARNED-MODELS)
(DEFINE-EXTERNAL *DISTANCE-SIGMA* SENTENCE-TO-TRACE-FROM-LEARNED-MODELS)
(DEFINE-EXTERNAL *VELOCITY-SIGMA* SENTENCE-TO-TRACE-FROM-LEARNED-MODELS)
(DEFINE-EXTERNAL *VONMISES-EPS* SENTENCE-TO-TRACE-FROM-LEARNED-MODELS)
(DEFINE-EXTERNAL (FOLD-POLYNOMIAL X COEFFS) SENTENCE-TO-TRACE-FROM-LEARNED-MODELS)
(DEFINE-EXTERNAL (LOG-BESSEL0 KAPPA) SENTENCE-TO-TRACE-FROM-LEARNED-MODELS)
(DEFINE-EXTERNAL (DAN-LOG-VON-MISES V MEAN KAPPA) SENTENCE-TO-TRACE-FROM-LEARNED-MODELS)
(DEFINE-EXTERNAL (RENORMALIZED-VON-MISES V MEAN KAPPA) SENTENCE-TO-TRACE-FROM-LEARNED-MODELS)
(DEFINE-EXTERNAL (SCORE-ADVERB FEATURES MODELS OBJECT-POSITION) SENTENCE-TO-TRACE-FROM-LEARNED-MODELS)
(DEFINE-EXTERNAL (SCORE-ADJECTIVE P1 P2 MODELS) SENTENCE-TO-TRACE-FROM-LEARNED-MODELS)
(DEFINE-EXTERNAL (PARSE-TREE-STEPS PARSE-TREE) SENTENCE-TO-TRACE-FROM-LEARNED-MODELS)
(DEFINE-EXTERNAL (CENTER-ANGLE-AT ANGLE CENTER) SENTENCE-TO-TRACE-FROM-LEARNED-MODELS)
(DEFINE-EXTERNAL (ANGLE-BETWEEN P1 P2) SENTENCE-TO-TRACE-FROM-LEARNED-MODELS)
(DEFINE-EXTERNAL (LEFT-OF P1 P2) SENTENCE-TO-TRACE-FROM-LEARNED-MODELS)
(DEFINE-EXTERNAL (RIGHT-OF P1 P2) SENTENCE-TO-TRACE-FROM-LEARNED-MODELS)
(DEFINE-EXTERNAL (IN-FRONT-OF P1 P2) SENTENCE-TO-TRACE-FROM-LEARNED-MODELS)
(DEFINE-EXTERNAL (BEHIND P1 P2) SENTENCE-TO-TRACE-FROM-LEARNED-MODELS)
(DEFINE-EXTERNAL (BETWEEN P1 P2 P3) SENTENCE-TO-TRACE-FROM-LEARNED-MODELS)
(DEFINE-EXTERNAL (TOWARDS ANGLE P1 P2) SENTENCE-TO-TRACE-FROM-LEARNED-MODELS)
(DEFINE-EXTERNAL (PARALLEL-TO ANGLE P1 P2) SENTENCE-TO-TRACE-FROM-LEARNED-MODELS)
(DEFINE-EXTERNAL (AWAY-FROM ANGLE P1 P2) SENTENCE-TO-TRACE-FROM-LEARNED-MODELS)
(DEFINE-EXTERNAL (ANGLES-OPPOSITE-EACH-OTHER ANGLE1 ANGLE2) SENTENCE-TO-TRACE-FROM-LEARNED-MODELS)
(DEFINE-EXTERNAL (DISTANCES-EQUAL P1 P2 P3) SENTENCE-TO-TRACE-FROM-LEARNED-MODELS)
(DEFINE-EXTERNAL (NEAR P1 P2) SENTENCE-TO-TRACE-FROM-LEARNED-MODELS)
(DEFINE-EXTERNAL (TRACE-LEFT-OF FVS I P2) SENTENCE-TO-TRACE-FROM-LEARNED-MODELS)
(DEFINE-EXTERNAL (TRACE-RIGHT-OF FVS I P2) SENTENCE-TO-TRACE-FROM-LEARNED-MODELS)
(DEFINE-EXTERNAL (TRACE-IN-FRONT-OF FVS I P2) SENTENCE-TO-TRACE-FROM-LEARNED-MODELS)
(DEFINE-EXTERNAL (TRACE-BEHIND FVS I P2) SENTENCE-TO-TRACE-FROM-LEARNED-MODELS)
(DEFINE-EXTERNAL (TRACE-BETWEEN FVS I P2 P3) SENTENCE-TO-TRACE-FROM-LEARNED-MODELS)
(DEFINE-EXTERNAL (TRACE-TOWARDS FVS I P2) SENTENCE-TO-TRACE-FROM-LEARNED-MODELS)
(DEFINE-EXTERNAL (TRACE-AWAY-FROM FVS I P2) SENTENCE-TO-TRACE-FROM-LEARNED-MODELS)
(DEFINE-EXTERNAL (TRACE-KEEP-STRAIGHT FVS I) SENTENCE-TO-TRACE-FROM-LEARNED-MODELS)
(DEFINE-EXTERNAL (TRACE-KEEP-TURNING FVS I) SENTENCE-TO-TRACE-FROM-LEARNED-MODELS)
(DEFINE-EXTERNAL (TRACE-PARALLEL-TO FVS I P2) SENTENCE-TO-TRACE-FROM-LEARNED-MODELS)
(DEFINE-EXTERNAL (POINT-AVG P1 P2) SENTENCE-TO-TRACE-FROM-LEARNED-MODELS)
(DEFINE-EXTERNAL (TRACE-PARALLEL-TO2 FVS I P2) SENTENCE-TO-TRACE-FROM-LEARNED-MODELS)
(DEFINE-EXTERNAL (TRACE-PAST FVS I P2) SENTENCE-TO-TRACE-FROM-LEARNED-MODELS)
(DEFINE-EXTERNAL (TRACE-AROUND FVS I P2) SENTENCE-TO-TRACE-FROM-LEARNED-MODELS)
(DEFINE-EXTERNAL (TRACE-AROUND2 FVS I P2) SENTENCE-TO-TRACE-FROM-LEARNED-MODELS)
(DEFINE-EXTERNAL (NOT-TOO-CLOSE POINT1 POINT2 RADIUS1 RADIUS2) SENTENCE-TO-TRACE-FROM-LEARNED-MODELS)
(DEFINE-EXTERNAL (TRACE-ADJACENT-POINTS-NOT-TOO-CLOSE TRACE RADIUS) SENTENCE-TO-TRACE-FROM-LEARNED-MODELS)
(DEFINE-EXTERNAL (TRACE-NOT-TOO-CLOSE-TO-OBSTACLES TRACE OBSTACLES ROBOT-RADIUS OBSTACLE-RADII) SENTENCE-TO-TRACE-FROM-LEARNED-MODELS)
(DEFINE-EXTERNAL (COMPUTE-TRACE-FEATURES POINTS) SENTENCE-TO-TRACE-FROM-LEARNED-MODELS)
(DEFINE-EXTERNAL (COMPUTE-GENERIC-TRACE-FEATURES POINTS) SENTENCE-TO-TRACE-FROM-LEARNED-MODELS)
(DEFINE-EXTERNAL (LOCATION-ORIENTATION-WRT-OBJECT POINT OBJECT) SENTENCE-TO-TRACE-FROM-LEARNED-MODELS)
(DEFINE-EXTERNAL (OBJECT-ORIENTATION-WRT-DIRECTION POINT DIRECTION OBJECT) SENTENCE-TO-TRACE-FROM-LEARNED-MODELS)
(DEFINE-EXTERNAL (OBJECT-ORIENTATION-DIFFERENCE-WRT-OBJECTS POINT OBJECT1 OBJECT2) SENTENCE-TO-TRACE-FROM-LEARNED-MODELS)
(DEFINE-EXTERNAL (COMPUTE-ONE-OBJECT-FEATURES GENERIC-TRACE-FEATURES OBJECTS) SENTENCE-TO-TRACE-FROM-LEARNED-MODELS)
(DEFINE-EXTERNAL (COMPUTE-TWO-OBJECT-FEATURES GENERIC-TRACE-FEATURES OBJECTS) SENTENCE-TO-TRACE-FROM-LEARNED-MODELS)
(DEFINE-EXTERNAL (TRACE->FEATURES TRACE OBJECTS) SENTENCE-TO-TRACE-FROM-LEARNED-MODELS)
(DEFINE-EXTERNAL (SCORE-PARSE-FUNCTIONS PARSE-FUNCTIONS TRACE) SENTENCE-TO-TRACE-FROM-LEARNED-MODELS)
(DEFINE-EXTERNAL (MINIMIZE F X TOL1 TOL2) SENTENCE-TO-TRACE-FROM-LEARNED-MODELS)
(DEFINE-EXTERNAL (MAXIMIZE F X TOL1 TOL2 DRAWING-FUNCTION) SENTENCE-TO-TRACE-FROM-LEARNED-MODELS)
(DEFINE-EXTERNAL (NICE-SUBVECTOR V I J) SENTENCE-TO-TRACE-FROM-LEARNED-MODELS)
(DEFINE-EXTERNAL (MAXIMIZE-WITH-RESPECT-TO-ITH-POINT I F X TOL1 TOL2 DRAWING-FUNCTION) SENTENCE-TO-TRACE-FROM-LEARNED-MODELS)
(DEFINE-EXTERNAL (TRACE-FROM-PARSE-FUNCTIONS PARSE-FUNCTIONS DRAWING-FUNCTION) SENTENCE-TO-TRACE-FROM-LEARNED-MODELS)
(DEFINE-EXTERNAL (TRACE-FROM-PARSE-FUNCTIONS-WITH-INITIAL PARSE-FUNCTIONS INITIAL-TRACE DRAWING-FUNCTION) SENTENCE-TO-TRACE-FROM-LEARNED-MODELS)
(DEFINE-EXTERNAL (TRACE-FROM-PARSE-FUNCTIONS-STEP-BY-STEP PARSE-FUNCTIONS DRAWING-FUNCTION) SENTENCE-TO-TRACE-FROM-LEARNED-MODELS)
(DEFINE-EXTERNAL (TRACE->SPLINES TRACE NUMBER-OF-POINTS) SENTENCE-TO-TRACE-FROM-LEARNED-MODELS)
(DEFINE-EXTERNAL (INTERPOLATE-TRACE TRACE FACTOR) SENTENCE-TO-TRACE-FROM-LEARNED-MODELS)
(DEFINE-EXTERNAL (PLOT-TRACE-SPLINES TRACE) SENTENCE-TO-TRACE-FROM-LEARNED-MODELS)
(DEFINE-EXTERNAL (REMOVE-THE SYMBOL) SENTENCE-TO-TRACE-FROM-LEARNED-MODELS)
(DEFINE-EXTERNAL (OBJECTS->PLOT-FUNCTION OBJECTS) SENTENCE-TO-TRACE-FROM-LEARNED-MODELS)
(DEFINE-EXTERNAL (PLOT-TRACE TRACE OBJECTS) SENTENCE-TO-TRACE-FROM-LEARNED-MODELS)
(DEFINE-EXTERNAL (VECTOR-REF-BOUNDED V I) SENTENCE-TO-TRACE-FROM-LEARNED-MODELS)
(DEFINE-EXTERNAL (SMOOTH-TRACE TRACE WEIGHTS) SENTENCE-TO-TRACE-FROM-LEARNED-MODELS)
(DEFINE-EXTERNAL (RANDOM-OBJECT-INSTANTIATION OBJECT-TYPES NUMBER MINIMUM-DISTANCE FIELD-SIZE) SENTENCE-TO-TRACE-FROM-LEARNED-MODELS)
(DEFINE-EXTERNAL (OBJECT-INSTANTIATIONS->OBJECT-STRUCTS OBJECTS) SENTENCE-TO-TRACE-FROM-LEARNED-MODELS)
(DEFINE-EXTERNAL (N-INDEXED-WEIGHTED-RANDOM-ELEMENTS-WITHOUT-REPLACEMENT N WEIGHTED-LIST) SENTENCE-TO-TRACE-FROM-LEARNED-MODELS)
(DEFINE-EXTERNAL (GENERATE-RANDOM-DATASET NUMBER-OF-DATAPOINTS WEIGHTED-NUMBERS-OF-OBJECTS WEIGHTED-NUMBERS-OF-PREDICATES OBJECT-TYPES MINIMUM-DISTANCE FIELD-SIZE ONE-OBJECT-PREPOSITIONS PLOT?) SENTENCE-TO-TRACE-FROM-LEARNED-MODELS)
(DEFINE-EXTERNAL (FILTER-OUT-COMPLICATED-TRIPLES DATASET MAX-REFERENCES) SENTENCE-TO-TRACE-FROM-LEARNED-MODELS)
(DEFINE-EXTERNAL (TRACE-FROM-SENTENCE-FLOORPLAN-AND-LEXICON SENTENCE FLOORPLAN LEXICON) SENTENCE-TO-TRACE-FROM-LEARNED-MODELS)
(DEFINE-EXTERNAL (TRACE-FROM-SENTENCE SENTENCE) SENTENCE-TO-TRACE-FROM-LEARNED-MODELS)
(DEFINE-EXTERNAL (LINE-INTERSECTS-CIRCLE? LINE-P1 LINE-P2 CIRCLE-CENTER CIRCLE-RADIUS) SENTENCE-TO-TRACE-FROM-LEARNED-MODELS)
(DEFINE-EXTERNAL (SIGN X) SENTENCE-TO-TRACE-FROM-LEARNED-MODELS)
(DEFINE-EXTERNAL (LINE-CIRCLE-INTERSECTION LINE-P1 LINE-P2 CIRCLE-CENTER CIRCLE-RADIUS) SENTENCE-TO-TRACE-FROM-LEARNED-MODELS)
(DEFINE-EXTERNAL (LINE-PAIR->LAMBDA LINE1 LINE2) SENTENCE-TO-TRACE-FROM-LEARNED-MODELS)
(DEFINE-EXTERNAL (LINE-PAIR->INTERSECTION LINE1 LINE2) SENTENCE-TO-TRACE-FROM-LEARNED-MODELS)
(DEFINE-EXTERNAL (POINT-ON-LINE-NEAREST-POINT LINE-POINT1 LINE-POINT2 POINT) SENTENCE-TO-TRACE-FROM-LEARNED-MODELS)
(DEFINE-EXTERNAL (DAN-POINT-ON-LINE-SEGMENT? POINT LINE-POINT1 LINE-POINT2) SENTENCE-TO-TRACE-FROM-LEARNED-MODELS)
(DEFINE-EXTERNAL (LINE-SEGMENT-INTERSECTS-CIRCLE? LINE-POINT1 LINE-POINT2 CIRCLE-CENTER RADIUS) SENTENCE-TO-TRACE-FROM-LEARNED-MODELS)
(DEFINE-EXTERNAL (AVOID-OBSTACLE POINT1 POINT2 OBSTACLE RADIUS) SENTENCE-TO-TRACE-FROM-LEARNED-MODELS)
(DEFINE-EXTERNAL (SEGMENT->SEGMENTS-AVOIDING-OBJECTS POINT1 POINT2 OBSTACLE-POINTS RADIUS) SENTENCE-TO-TRACE-FROM-LEARNED-MODELS)
(DEFINE-EXTERNAL (AVOID-OBJECTS TRACE FLOORPLAN RADIUS) SENTENCE-TO-TRACE-FROM-LEARNED-MODELS)
(DEFINE-EXTERNAL FOO SENTENCE-TO-TRACE-FROM-LEARNED-MODELS)