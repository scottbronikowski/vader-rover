(DEFINE-EXTERNAL (MPLOT-RUN-ONSCREEN PLOTS) IDEALIB-MATPLOTLIB)
(DEFINE-EXTERNAL (VOC4-DETECTION-CENTER DETECTION) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (FORWARD-PROJECT-BOX-SCALED ORIGINAL-BOX SCALED-TRANSFORMATION DELTA SCALE) IDEALIB-TRACKS)
(DEFINE-EXTERNAL (CLASS TRACK) IDEALIB-TRACKS)
(DEFINE-STRUCTURE-EXTERNAL IDEALIB-STUFF VERTEX PIXELS VERTEX EDGES)
(DEFINE-STRUCTURE-EXTERNAL IDEALIB-STUFF EDGE U V)
(DEFINE-STRUCTURE-EXTERNAL IDEALIB-STUFF GRAPH VERTICES EDGES)
(DEFINE-STRUCTURE-EXTERNAL IDEALIB-STUFF RC-CHAINS WIDTH HEIGHT VERTICES SOLID-EDGES DASHED-EDGES)
(DEFINE-STRUCTURE-EXTERNAL IDEALIB-STUFF RC-VERTEX PIXELS VERTEX SOLID-EDGE)
(DEFINE-STRUCTURE-EXTERNAL IDEALIB-STUFF SOLID-EDGE U V W1 W2 PIXELS)
(DEFINE-STRUCTURE-EXTERNAL IDEALIB-STUFF DASHED-EDGE U V W1 W2)
(DEFINE-STRUCTURE-EXTERNAL IDEALIB-STUFF ANNOTATION PIXELS LABEL)
(DEFINE-STRUCTURE-EXTERNAL IDEALIB-STUFF ESSA-ANNOTATION LABEL LEVEL REGION)
(DEFINE-STRUCTURE-EXTERNAL IDEALIB-STUFF CELL LIST)
(DEFINE-STRUCTURE-EXTERNAL IDEALIB-STUFF CR ID SIZE PARENT NEIGHBOURS CHILDREN)
(DEFINE-STRUCTURE-EXTERNAL IDEALIB-STUFF H LEVEL MAX-ID CRS)
(DEFINE-STRUCTURE-EXTERNAL IDEALIB-STUFF I LEFT RIGHT)
(DEFINE-STRUCTURE-EXTERNAL IDEALIB-STUFF R ID SIZE NEIGHBORS TOP-Y PARENT SS)
(DEFINE-STRUCTURE-EXTERNAL IDEALIB-STUFF D ID WIDTH HEIGHT HS RS)
(DEFINE-STRUCTURE-EXTERNAL IDEALIB-STUFF F N DS)
(DEFINE-STRUCTURE-EXTERNAL IDEALIB-STUFF SLIC NAME TRACK FLOW PIXELS)
(DEFINE-STRUCTURE-EXTERNAL IDEALIB-STUFF TURBOPIXEL NAME GLOBAL-NAME TRACK CENTER SPEED SPEED-RELIABLE? PIXELS)
(DEFINE-STRUCTURE-EXTERNAL IDEALIB-STUFF SUPERPIXEL NAME NEXT PARENT CHILDREN VELOCITY PIXELS)
(DEFINE-STRUCTURE-EXTERNAL IDEALIB-STUFF SUPERPIXEL-ANNOTATION LABEL SUPERPIXEL)
(DEFINE-STRUCTURE-EXTERNAL IDEALIB-STUFF SUPERPIXEL-VERTEX ID BOUNDARY-PIXELS REGION-PIXELS NEIGHBOURS PERIMETER? LABEL)
(DEFINE-STRUCTURE-EXTERNAL IDEALIB-STUFF SUPERPIXEL-EDGE U V WEIGHT)
(DEFINE-EXTERNAL *QUIET-MODE?* IDEALIB-STUFF)
(DEFINE-EXTERNAL (MAP-REDUCE2 G I F L) IDEALIB-STUFF)
(DEFINE-EXTERNAL (MAXIMUM-MATRIX T) IDEALIB-STUFF)
(DEFINE-EXTERNAL (FOUR-CONNECTED? P1 P2) IDEALIB-STUFF)
(DEFINE-EXTERNAL (REPLACE-WHOLE-EXTENSION PATHNAME EXTENSION) IDEALIB-STUFF)
(DEFINE-EXTERNAL (SAFE-MATRIX-REF M Y X DEFAULT) IDEALIB-STUFF)
(DEFINE-EXTERNAL (STRING*-APPEND . OBJS) IDEALIB-STUFF)
(DEFINE-EXTERNAL (BIN L F N B E) IDEALIB-STUFF)
(DEFINE-EXTERNAL (INTEGER->MATRIX I) IDEALIB-STUFF)
(DEFINE-EXTERNAL (MATRIX-SET-MAT! MAT M P) IDEALIB-STUFF)
(DEFINE-EXTERNAL (QUANTIZE-COORDINATE X) IDEALIB-STUFF)
(DEFINE-EXTERNAL (QUANTIZE-POINT P) IDEALIB-STUFF)
(DEFINE-EXTERNAL (PPM-PATHNAME VIDEO-NAME FRAME) IDEALIB-STUFF)
(DEFINE-EXTERNAL (PGM-PATHNAME VIDEO-NAME FRAME) IDEALIB-STUFF)
(DEFINE-EXTERNAL (FRAME-PATHNAME VIDEO-NAME FRAME) IDEALIB-STUFF)
(DEFINE-EXTERNAL (SLIC-DAT-PATHNAME VIDEO-NAME FRAME PREFIX) IDEALIB-STUFF)
(DEFINE-EXTERNAL (POLYGON-AREA POINTS) IDEALIB-STUFF)
(DEFINE-EXTERNAL (COMPUTE-NON-SIMPLE-POLYGON-AREA POLYGON) IDEALIB-STUFF)
(DEFINE-EXTERNAL (UUID) IDEALIB-STUFF)
(DEFINE-EXTERNAL (CURL USERAGENT FORMS URL) IDEALIB-STUFF)
(DEFINE-EXTERNAL (READ-32-BIT-INTEGER PORT) IDEALIB-STUFF)
(DEFINE-EXTERNAL (READ-16-BIT-INTEGER PORT) IDEALIB-STUFF)
(DEFINE-EXTERNAL (WRITE-32-BIT-INTEGER I PORT) IDEALIB-STUFF)
(DEFINE-EXTERNAL (WRITE-16-BIT-INTEGER I PORT) IDEALIB-STUFF)
(DEFINE-EXTERNAL (*DEFAULT-FONT-PATH*) IDEALIB-STUFF)
(DEFINE-EXTERNAL (LIMBS->LINES LIMBS) IDEALIB-STUFF)
(DEFINE-EXTERNAL (LIMBS->LINES-BB LIMBS BB) IDEALIB-STUFF)
(DEFINE-EXTERNAL (IMLIB-DRAW-TEXT-ON-IMAGE IMAGE STRING COLOUR FONT-SIZE XC YC BACKGROUND-COLOR) IDEALIB-STUFF)
(DEFINE-EXTERNAL (IMLIB-COLOR-AT X Y) IDEALIB-STUFF)
(DEFINE-EXTERNAL MALLOC TOOLLIB-C-BINDINGS)
(DEFINE-EXTERNAL FREE TOOLLIB-C-BINDINGS)
(DEFINE-EXTERNAL (VECTOR->C-INEXACT-ARRAY ARRAY V ELEMENT-SIZE SIGNED?) TOOLLIB-C-BINDINGS)
(DEFINE-EXTERNAL (C-EXACT-ARRAY->LIST ARRAY ELEMENT-SIZE NR-ELEMENTS SIGNED?) TOOLLIB-C-BINDINGS)
(DEFINE-EXTERNAL (C-INEXACT-ARRAY->VECTOR ARRAY ELEMENT-SIZE NR-ELEMENTS SIGNED?) TOOLLIB-C-BINDINGS)
(DEFINE-EXTERNAL SRAND TOOLLIB-C-BINDINGS)
(DEFINE-STRUCTURE-EXTERNAL TOOLLIB-IMAGE-PROCESSING IMLIB-IMAGE HANDLE)
(DEFINE-EXTERNAL (IMAGE-PROCESSING:DUMMY) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (IMAGE-REF I P) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (PNM? M) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (RGB->CMYK RGB) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (RGB->UV-HSV C) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (LINE-FILTER LINES MIN MAX THRESHOLD) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (CROP-IMAGE PNM X Y WIDTH HEIGHT) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (PBM-ASCII PBM) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (FLATTEN-PPM PPM COLOUR-TRANSFORM) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (PPM-MEAN IMAGE COLOUR-TRANSFORM) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (PPM-COVARIANCE IMAGE COLOUR-TRANSFORM) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (PGM-MEAN IMAGE) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (PGM-VARIANCE IMAGE) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (PGM-AND-PBM PGM PBM) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (PBM-SKELETONIZE PBM) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (PBM-FLOOD PBM POINT) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (PGM-CANNY IMAGE . ARGS) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (PBM-DISTANCE-TRANSFORM IMAGE) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (DRAW-NEW-IMAGE SIZE I) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (READ-IMAGE-AS-PBM IMAGE) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (INTERPOLATE-COLOUR C1 C2 P) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (NUMBER-RADIX->PADDED-STRING-OF-LENGTH NUMBER RADIX LENGTH) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (RGB->HTML C) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (DRAW-INTERPOLATED-COLOURED-LINES LS C1 C2 P I) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (DRAW-COLOURED-LINES LS C I) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (DRAW-LINES LS I) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (BLEND-IMAGE S1 S2 R) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (FIND-HISTOGRAM PIXMAP MAXVAL) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (HISTOGRAM-MEAN HISTOGRAM I) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (HISTOGRAM-VARIANCE HISTOGRAM MU I) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (NORMALISED-HISTOGRAM HISTOGRAM VAL) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (WEIGHTED-HISTOGRAM HISTOGRAM) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (CUMULATIVE-HISTOGRAM HISTOGRAM) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (FIND-BETWEEN-CLASS-VARIANCES OMEGAS MUS MU-TOTAL) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (BINARY-THRESHOLD PGM THRESHOLD) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (FIND-THRESHOLD-OTSU PGM) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (BINARY-THRESHOLD-OPTIMAL PGM) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (FIND-THRESHOLD-MEANS PGM) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (BINARY-THRESHOLD-MEANS PGM) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (SAMPLE-IMAGE PPM COLOUR-TX WINDOW-CENTRE WINDOW-SIZE) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (BINARY-THRESHOLD-COLOUR PPM COLOUR-TX POINT THRESHOLD) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (HISTOGRAM-EQUALISE PGM) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (COLOUR-THRESHOLD PPM COLOUR-TX MU ISIGMA THRESHOLD) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (MAKE-INTEGRAL-MATRIX MATRIX) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (COMPUTE-INTEGRAL-MATRIX-MU INTEGRAL-MATRIX X Y W) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (COMPUTE-INTEGRAL-MATRIX-SIGMA SQUARED-INTEGRAL-MATRIX MU X Y W) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (COMPUTE-ADAPTIVE-THRESHOLD INTEGRAL-MATRIX SQUARED-INTEGRAL-MATRIX X Y W) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (ADAPTIVE-THRESHOLD PGM WINSIZE) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (PNM->BOUNDING-MASK PNM SPACE COLOUR-MU COLOUR-SIGMA THRESHOLD SHOW?) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (PHASECONG-ORIENTATION L) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (FIND-EDGES-AND-CORNERS-PHASECONG-1 PGM LOCATION . PARAMS) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (FIND-EDGES-AND-CORNERS-PHASECONG-2 PGM LOCATION . PARAMS) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (FIND-EDGES-AND-CORNERS-PHASECONG-3 PGM LOCATION . PARAMS) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (LOAD-EDGES-AND-CORNERS-PHASECONG2 LOCATION) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (MATLAB-EDGES-PHASECONG2->PGM LOCATION) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (FIND-EDGES-AND-CORNERS-PHASECONG PGM . PARAMS) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (MATLAB-EDGE-ORIENTATION-HOUGH E O ORIENTATION DRAW? SCALING THRESHOLD) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (PGM->PHASE-CONGRUENCY PGM) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (SLIDE-WINDOW M F SIZE) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (COUNT-PIXELS A) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (PPM->LABEL-CLOSEST PPM MU1 SIGMA1 MU2 SIGMA2 COLOUR-TRANSFORM) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL R TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL G TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL B TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (SET-PPM-PIXEL! PPM X Y VALUE) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (PNM-PIXEL? I X Y) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (MAP-PPM-VALUES PPM F) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (RESIZE-IMAGE W H I) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (SHOW I) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (SHOW-IMAGE I) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (PPM-BURN BASE MASK COLOUR) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (SHOW-PPM W H F) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (DRAW-LABELS PNM GRAPH COLOUR) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (PBM-STACK-VERTICAL PBM1 PBM2) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (PBM-STACK-HORIZONTAL PBM1 PBM2) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (PPM-STACK-VERTICAL PPM1 PPM2) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (PPM-STACK-HORIZONTAL PPM1 PPM2) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (PBM->POINTS PBM) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (POINTS->PBM POINTS HEIGHT WIDTH) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (MIDPOINT L) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (ORIENTATION V) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (LINE-SEGMENT-ORIENTATION L) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (LINE-SEGMENT->POINTS L) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (LINE-SEGMENTS->POINTS LS) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (POINTS->LINE-SEGMENTS PS) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (POINTS->BOUNDING-BOX-POINTS POINTS) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (BB-SIZE BB) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (POINTS-BOUNDING-BOX POINTS) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (POINTS->POINTS-BB POINTS BB) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (NORMALIZE-TO-BOUNDING-BOX PS) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (NORMALIZE-TO-OTHER-BOUNDING-BOX POINTS PS) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (POINTS->TARGET-BB POINTS TARGET-BB) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (POINTS->OTHER-TARGET-BB POINTS PS TARGET-BB) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (BB-BLOAT BB P) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (BB-CROP BB IMAGE) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (BB->PB-PGM BB VIDEO FRAME) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (DRAW-LIMBS-BB PPM LIMBS BB R G B) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (SHOW-LIMBS LIMBS R G B) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (LINE-SEGMENT->ELLIPSE L) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (ELLIPSE->POINTS E . N) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (SUBSAMPLE-PBM PBM) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (PBM-FILES->AVI-FILE INPUT-DIRECTORY INPUT-FILENAME FRAME-RATE OUTPUT-PATHNAME) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (PBMS->AVI-FILE PBMS FRAME-RATE PATHNAME) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (PGM-FILES->AVI-FILE INPUT-DIRECTORY INPUT-FILENAME FRAME-RATE OUTPUT-PATHNAME) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (PGMS->AVI-FILE PGMS FRAME-RATE PATHNAME) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (PPM-FILES->AVI-FILE INPUT-DIRECTORY INPUT-FILENAME FRAME-RATE OUTPUT-PATHNAME) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (PPMS->AVI-FILE PPMS FRAME-RATE PATHNAME) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (FFMPEG FPS FRAME DESTINATION) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (PPM-ABSOLUTE-DIFFERENCE PPM1 PPM2) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (SCALE-PPM PPM SCALE) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (ANNOTATION-ON-PPM ANNOTATION IMAGE) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (ANNOTATION->PPM ANNOTATION W H) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (ANNOTATION->COLOUR C) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (LABEL->COLOUR C) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (ANNOTATE-IMAGE! ANNOTATIONS IMAGE) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (ANNOTATE-IMAGE-SCALED! ANNOTATIONS IMAGE) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (PNM->PPM PNM) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (PNM->PGM PNM) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (PIXEL-CELL UNIFORM-GRID POINT) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (CELL-COORDINATES UNIFORM-GRID POINT) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (CELL-REF UNIFORM-GRID COORD) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (ANNOTATIONS->UNIFORM-GRID ANNOTATIONS W H CELL-SIZE) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (LOOKUP-9-CLOSEST-CELLS GRID P) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (ANNOTATION-POINT-DISTANCE ANNOTATION POINT) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (CLOSEST-ANNOTATION ANNOTATIONS POINT) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (FRAME-ABSOLUTE-DIFFERENCE V FRAME) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (SUBMIT-ESSA EMAIL VIDEO) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (ESSA-RESULTS NAME ID) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (R-SCANLINE R) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (ESSA-WIDTH E) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (ESSA-HEIGHT E) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (ESSA-HIERARCHIES F) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (ESSA-HIERARCHIES-LEVELS F) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (ESSA-HIERARCHY F LEVEL) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (REGION-PARENT R) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (ESSA-REGION-ID R F L) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (SCALINES->PIXELS TOP-Y SS) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (ESSA-FRAME-HIERARCHY->SLICE F LEVEL) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (ESSA->REGIONS F LEVEL) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (ESSA->REGION-PIXELS F LEVEL) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (ESSA->REGION-OUTLINE F LEVEL) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (ESSA-BLIT-REGION! MATRIX ID REGION) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (ESSA-BLIT-REGION-PIXELS! MATRIX ID REGION) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (ESSA-RASTERIZE-REGIONS! MATRIX REGIONS) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (ESSA-RASTERIZE-SLICE F LEVEL) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (ESSA-RASTERIZED->PGM F LEVEL) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (ESSA->REGION-MAP F LEVEL) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (ANNOTATION-REGION->ANNOTATION-LABEL ANNOTATIONS REGION LEVEL) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (TURBOPIXELS-LOAD VIDEO-NAME) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (TURBOPIXELS-FOR-FRAME F) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (TUROBPIXELS-MAXIMUM-LABEL T) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (TURBOPIXELS->REGIONS T) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (MOVING-TURBOPIXELS TURBOPIXELS MOTION THRESH) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (TURBOPIXEL-REGIONS->PBM R W H) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (TURBOPIXELS-MOTION THRESH FRAME) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (TURBOPIXELS-NAMES) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (TURBOPIXELS-AREA) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (TURBOPIXELS-SPEED) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (TURBOPIXELS-CENTERS) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (TURBOPIXELS-SPEED-RELIABLE?) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (TURBOPIXEL-INDEX T-NAMES FRAME INDEX) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (TURBOPIXEL-RANDOM-COLOR T) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (TURBOPIXEL-CORRESPONDENCE T F2) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (UPDATE-TURBOPIXEL-TRACKS! NEW-TURBOPIXELS NEW-FRAME OLD-TURBOPIXELS) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (UPDATE-TURBOPIXEL-NEXT! NEW-TURBOPIXELS NEW-FRAME OLD-TURBOPIXELS) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (TURBOPIXELS->PBM TS W H) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (EXTERNAL-TURBOPIXELS->TURBOPIXELS T FRAME T-NAMES T-CENTERS T-SPEED T-SPEED-RELIABLE?) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (READ-SLIC-FILE FILENAME W H) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (SLIC-FRAME->REGIONS T) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (RUN-SLIC VIDEO-NAME FRAME FILE NR-SUPERPIXELS SPATIAL-PROXMITY-WEIGHT) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (FRAME->REGIONS T) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (FRAME->REGIONS-NEIGHBOURS-LR T) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (FRAME->REGIONS-NEIGHBOURS T) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (OPTICAL-FLOW-REGION REGION FLOW) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (AVERAGE-OPTICAL-FLOW-REGION REGION FLOW) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (OPTICAL-FLOW-REGION-RAW-CORRESPONENCE REGION-PREV FRAME-MAP-NEXT FLOW) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (OPTICAL-FLOW-REGION-CORRESPONENCE REGION-PREV FRAME-MAP-NEXT FLOW) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (TURBOPIXEL->SUPERPIXEL T) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (SLIC->SUPERPIXEL S) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (ESSA->SUPERPIXEL E LEVEL) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (ESSA->SUPERPIXEL-NONE E) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (RASTERIZE PS) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (FILL-RASTER-REGION-GAPS R) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (BOUNDARY->REGION B) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (REGION->BOUNDARY R) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (CONNECTED-BOUNDARY PS1 PS2) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (EDGE-WEIGHT-EDGE U V EDGE-MAP) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (EDGE-WEIGHT-IMAGE-PIXEL U V IMAGE-MAP) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (EDGE-WEIGHT-IMAGE-REGION U V IMAGE-MAP) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (PERIMETER-SUPERPIXEL? BOUNDARY-PIXELS HEIGHT WIDTH) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (WEIGHT-NORMALISED-GRAPH G) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (SUPERPIXEL-DATA->GRAPH DATA WEIGHT-FN WEIGHT-MAP) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (SUPERPIXELS->MAP SS W H) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (SPLIT-SUPERPIXEL-REGIONS! S H W) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (UPDATE-SUPERPIXEL-SPLIT-TRACKING! PREV NEXT) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (SUPERPIXEL-CENTER S) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (SUPERPIXEL-CORRESPONDENCE SS SS-MAP) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (OPTICAL-FLOW-SUPERPIXEL SUPERPIXEL FLOW) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (AVERAGE-OPTICAL-FLOW-SUPERPIXEL SUPERPIXEL FLOW) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (SUPERPIXEL-TRACK SUPERPIXEL SUPERPIXEL-MAP) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (SAFE-SUPERPIXEL-VELOCITY S) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (SUPERPIXEL->OUTLINE S) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (SUPERPIXEL->REGION S) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (SUPERPIXEL-ANNOTATE-BLANK-PPM ANNOTATIONS BLANK-PPM) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (SUPERPIXEL-ANNOTATION-ON-PPM ANNOTATIONS IMAGE) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (SUPERPIXEL-ANNOTATION->PIXELS A) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (SUPERPIXEL-ANOTATION->COLOUR A) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (FRAME->EMPTY-ANNOTATIONS SUPERPIXELS) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (WRITE-SUPERPIXEL-ID ID PORT) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (READ-SUPERPIXEL-ID PORT) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (WRITE-BINARY-SUPERPIXELS SUPERPIXELS FILENAME) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (READ-BINARY-SUPERPIXELS FILENAME) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (WRITE-BINARY-INT-MATRIX MATRIX FILENAME) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (READ-BINARY-INT-MATRIX FILENAME) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL C-READ-BINARY-SUPERPIXEL-MAP TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL C-SUPERPIXEL-MAP TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL C-SUPERPIXEL-MAP-REF TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (SUPERPIXEL->MATLAB-CLOSURE-MAP S OUTPUT W H) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (PBM->GRAPH PBM DELTA) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (LABELING->GRAPH LABELING DELTA) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (DEREFERENCE-VERTEX U) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (CONNECTED-COMPONENTS G) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (VERTICES->PBM VERTICES HEIGHT WIDTH) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (GRAPH->PBM G HEIGHT WIDTH) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (PBM->CHAINS PBM) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (CHAINS->PBM CHAINS HEIGHT WIDTH) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (CHAIN-FILTER PBM THRESHOLD) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (BREAK-CHAIN CHAIN L) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (BREAK-CHAINS CHAINS L) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (PBM-AND2 PBM1 PBM2) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (PBM-OR2 PBM1 PBM2) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (CONNECTED-COMPONENT-FILTER PBM DELTA THRESHOLD) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (CONJURE PBMS DELTA SPAN THRESHOLD1 THRESHOLD2) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (PGM->RC-GRAPH PGM ALPHA DELTA) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (PGM-WEIGHTS->RC-GRAPH PGM SOLID-W1 ALPHA DELTA) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (CHAINS-WEIGHTS->RC-GRAPH CHAINS SOLID-W1 SOLID-W2 DASHED-W1 DASHED-W2 DELTA) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (RC-ERECT-DASHED-EDGES VERTICES DASHED-W1 DASHED-W2 DELTA) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (WRITE-RC-OUTPUT FILE VERTICES SOLID-EDGES DASHED-EDGES) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (WRITE-SOLID-LINES FILE SOLID) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (REMOVE-CLOSED-CHAINS CHAINS) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (COMPUTE-SOLID-WEIGHT1 CHAIN PGM) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (COMPUTE-SOLID-WEIGHT2 CHAIN) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (COMPUTE-DASHED-WEIGHT1 ALPHA) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (COMPUTE-DASHED-WEIGHT2 U V) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (RC-CYCLE-SOLID-DASHED->PPM CYCLE) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (RC-CYCLE-SOLID->PPM CYCLE) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (RC-CYCLE-COST CYCLE S-W1 S-W2 D-W1 D-W2) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (FIND-EDGE-WITH-POINT SOLID-EDGES POINT) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (FIND-EDGE-BETWEEN-VERTICES EDGES V1 V2) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (REMOVE-EDGE-FROM-CYCLE CYCLE V1 V2) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (DEBUG-RC-CYCLE-COST CYCLE S-W1 S-W2 D-W1 D-W2) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (WRITE-RC-CYCLE FILE CYCLE) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (UPDATE-VERTICES L) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (ANY-EDGE-U E) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (ANY-EDGE-V E) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (ANY-EDGE-PIXELS E) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (READ-CYCLE-CHAINS-FROM-FILE CHAIN FILENAME) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (READ-CYCLE-CHAINS CHAIN PREFIX N) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (POINT VERTEX) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (LABEL VERTEX) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (OTHER-POINT U) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (FORWARD-POINT? POINT OTHER-POINT) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (UPDATE-EDGE-U! E U) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (UPDATE-EDGE-V! E V) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (UPDATE-EDGE-VERTEX-POINTERS! VERTICES EDGES) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (RC-CHAINS->GRAPH CHAINS) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (RC-GRAPH-PGM->RC-CHAINS PGM RC-GRAPH) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (CONVERT-GRAPH G) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (WRITE-W-FILE G PATHNAME) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (RC-DRAW-CYCLE-EDGES PREFIX CYCLE) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (RC-DRAW-CYCLE PREFIX CYCLE) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (RC-DRAW-CYCLE-CHAINS PREFIX CYCLE) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (DISTANCE-TRANSFORM PBM) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (CLOSEST-TRANSFORM-REF CLOSEST-TRANSFORM P) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (EUCLIDEAN-1D-DT V) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (EUCLIDEAN-2D-DT M) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (EUCLIDEAN-1D-DT-VALS V) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (EUCLIDEAN-2D-DT-VALS M) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (EUCLIDEAN-3D-DT M) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-STRUCTURE-EXTERNAL TOOLLIB-IMAGE-PROCESSING VOC4-DT DISTANCE POSITION REF)
(DEFINE-EXTERNAL (GET-VOC4-DT BOXES COSTS TRANSFORMATION SCALE) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (RGB->XYZ C) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (XYZ->RGB C) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (XYZ->L*AB C) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (L*AB->XYZ C) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (RGB->L*AB C) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (L*AB->RGB C) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-STRUCTURE-EXTERNAL TOOLLIB-IMAGE-PROCESSING PNM-BUFFER BUFFER WIDTH HEIGHT PIXFMT STORAGE TYPE)
(DEFINE-EXTERNAL (PNM->PIXFMT P P4?) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (PIXFMT->STRIDE PIXFMT) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (IMAGE-TYPE->PIXFMT T P4?) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (IMAGE-TYPE->STORAGE-SIZE T P4?) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (PNM->IMAGE-TYPE P) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (PNM->STORAGE P) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (PIXFMT->RED PIXFMT) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (PIXFMT->GREEN PIXFMT) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (PIXFMT->BLUE PIXFMT) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (PNM-BUFFER-SIZE P P4?) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (PNM->PNM-BUFFER! P . P4?) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (PNM-FILL-BUFFER! P B PIXFMT) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (FREE-PNM-BUFFER! P) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (PNM-BUFFER->PNM B) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (PNM-BUFFER->PBM P) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (PNM-BUFFER->PGM P) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (PNM-BUFFER->PPM P) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (IMLIB-IMAGE->PNM-BUFFER! IMAGE) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (IMLIB-IMAGE->PPM IMAGE) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (PPM->IMLIB-IMAGE PPM) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (IMAGE->PNM-BUFFER! IMAGE) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (A V) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (IMLIB-CONTEXT-SET-COLOR-RGB/A! COLOR) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL IMLIB:LOAD! TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL IMLIB:LOAD-IMMEDIATELY! TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (IMLIB:SAVE IMAGE FILENAME) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (IMLIB:DATA-PTR-READ-ONLY IMAGE) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (IMLIB:DATA-PTR IMAGE) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (IMLIB:CREATE-CROPPED-SCALED IMAGE SX SY SW SH DW DH) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (IMLIB:CREATE-SCALED IMAGE DW DH) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (IMLIB:CREATE-ROTATED IMAGE RADIANS) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL IMLIB:CREATE TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL IMLIB:CREATE-USING-DATA TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL IMLIB:CREATE-USING-COPIED-DATA TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (IMLIB:CLONE IMAGE) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (IMLIB:FREE IMAGE) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (IMLIB:FREE-AND-DECACHE IMAGE) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (IMLIB:DRAW-PIXEL IMAGE X Y COLOR) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (IMLIB:SET-HAS-ALPHA! IMAGE ALPHA?) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (IMLIB:DRAW-RECTANGLE IMAGE X1 Y1 W H COLOR) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (IMLIB:FILL-RECTANGLE IMAGE X1 Y1 W H COLOR) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (IMLIB:DRAW-ELLIPSE IMAGE X Y A B COLOR) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (IMLIB:FILL-ELLIPSE IMAGE X Y A B COLOR) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (IMLIB:DRAW-LINE IMAGE COLOR X1 Y1 X2 Y2) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (IMLIB:TEXT-DRAW IMAGE X Y COLOR STRING DIRECTION RADIANS) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (MLIB:TEXT-DIMENSION STRING RADIANS DIRECTION) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (IMLIB:BLEND TARGET SOURCE MERGE-ALPHA? SX SY SW SH DX DY DW DH) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (IMLIB:WIDTH IMAGE) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (IMLIB:HEIGHT IMAGE) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (IMLIB:DIMENSIONS IMAGE) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL IMLIB:LOAD-FONT! TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (IMLIB:FREE-FONT FONT) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL IMLIB:ADD-PATH-TO-FONT-PATH TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (IMLIB:RENDER-ON-DRAWABLE IMAGE DRAWABLE X Y) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL IMLIB:FILL-POLYGON TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL IMLIB:POLYGON-FREE TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL IMLIB:POLYGON-ADD-POINT TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL IMLIB:POLYGON-NEW TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (IMLIB:FLIP-VERTICAL IMAGE) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (IMLIB:FLIP-HORIZONTAL IMAGE) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL FFMPEG-VIDEO-FRAME-DATA-AS-IMLIB TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (IMLIB:CREATE-ROTATED-WITH-BACKGROUND IMAGE RADIANS BACKGROUND-COLOR) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (IMLIB:CREATE-CROPPED IMAGE SX SY SW SH) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (IMLIB:CREATE-WITH-CROPPED-BACKGROUND IMAGE BACKGROUND-COLOR) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL IMLIB-CONTEXT-SET-DISPLAY! TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL IMLIB-CONTEXT-SET-BLEND! TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL IMLIB-CONTEXT-SET-VISUAL! TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL IMLIB-CONTEXT-SET-COLORMAP! TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL IMLIB-CONTEXT-SET-DRAWABLE! TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL IMLIB-CONTEXT-SET-IMAGE! TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL IMLIB-CONTEXT-SET-COLOR! TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL IMLIB-CONTEXT-SET-ANTI-ALIAS! TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL IMLIB-CONTEXT-SET-FONT! TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL IMLIB-CONTEXT-SET-DIRECTION TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL IMLIB-CONTEXT-SET-ANGLE TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL IMLIB-CONTEXT-DISCONNECT-DISPLAY TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL IMLIB-CONTEXT-SET-OPERATION TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL IMLIB-TEXT-TO-RIGHT TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL IMLIB-TEXT-TO-LEFT TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL IMLIB-TEXT-TO-DOWN TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL IMLIB-TEXT-TO-UP TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL IMLIB-TEXT-TO-ANGLE TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL IMLIB-OP-COPY TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL IMLIB-OP-ADD TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL IMLIB-OP-SUBTRACT TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL IMLIB-OP-RESHADE TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL IMLIB-LOAD-IMAGE! TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL IMLIB-LOAD-IMAGE-IMMEDIATELY! TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL IMLIB-GET-DATA-PTR-READ-ONLY TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL IMLIB-RENDER-IMAGE-ON-DRAWABLE TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL IMLIB-IMAGE-DRAW-PIXEL TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL IMLIB-IMAGE-SET-HAS-ALPHA! TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL IMLIB-IMAGE-DRAW-RECTANGLE TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL IMLIB-SAVE-IMAGE TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL IMLIB-BLEND-IMAGE-ONTO-IMAGE TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL IMLIB-CREATE-CROPPED-SCALED-IMAGE TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL IMLIB-CREATE-ROTATED-IMAGE TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL IMLIB-CREATE-IMAGE TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL IMLIB-CREATE-IMAGE-USING-DATA TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL IMLIB-CREATE-IMAGE-USING-COPIED-DATA TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL IMLIB-CLONE-IMAGE TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL IMLIB-FREE-IMAGE TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL IMLIB-FREE-IMAGE-AND-DECACHE TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL IMLIB-GET-IMAGE-WIDTH TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL IMLIB-GET-IMAGE-HEIGHT TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL IMLIB-IMAGE-SET-FORMAT TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL IMLIB-LOAD-FONT! TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL IMLIB-TEXT-DRAW TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL IMLIB-GET-TEXT-DIMENSION TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL IMLIB-FREE-FONT TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL IMLIB-ADD-PATH-TO-FONT-PATH TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (IMLIB-IMAGE-DRAW-LINE X1 Y1 X2 Y2) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL IMLIB-IMAGE-FILL-RECTANGLE TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL IMLIB-IMAGE-DRAW-ELLIPSE TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL IMLIB-IMAGE-FILL-ELLIPSE TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL IMLIB-IMAGE-FILL-POLYGON TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL IMLIB-POLYGON-FREE TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL IMLIB-POLYGON-ADD-POINT TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL IMLIB-POLYGON-NEW TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL IMLIB-IMAGE-FLIP-VERTICAL TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL IMLIB-IMAGE-FLIP-HORIZONTAL TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL IMLIB-IMAGE-BLUR TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (IMLIB:BLUR IMAGE RADIUS) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL CANNY TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (IMLIB-DRAW-TEXT-ON-IMAGE IMAGE STRING COLOUR FONT-SIZE XC YC BACKGROUND-COLOR) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (EXACT-ROUND V) TOOLLIB-MISC)
(DEFINE-EXTERNAL (EXACT-FLOOR V) TOOLLIB-MISC)
(DEFINE-EXTERNAL (EXACT-CEILING V) TOOLLIB-MISC)
(DEFINE-EXTERNAL (LIST-MEAN P) TOOLLIB-MISC)
(DEFINE-EXTERNAL (VECTORS-MEAN VALUES) TOOLLIB-MISC)
(DEFINE-EXTERNAL (VECTORS-VARIANCE MU VALUES) TOOLLIB-MISC)
(DEFINE-EXTERNAL (MAHALANOBIS-DISTANCE VAL MU ISIGMA) TOOLLIB-MISC)
(DEFINE-EXTERNAL (MAXIMUM L) TOOLLIB-MISC)
(DEFINE-EXTERNAL (MINIMUM L) TOOLLIB-MISC)
(DEFINE-EXTERNAL (MAXIMUMP L P) TOOLLIB-MISC)
(DEFINE-EXTERNAL (MINIMUMP L P) TOOLLIB-MISC)
(DEFINE-EXTERNAL (APPEND-VECTOR VEC1 VEC2) TOOLLIB-MISC)
(DEFINE-EXTERNAL (VECTOR-POSITION VECTOR VAL) TOOLLIB-MISC)
(DEFINE-EXTERNAL (O A B . C) TOOLLIB-MISC)
(DEFINE-EXTERNAL (FOR-EACH-INDEXED-VECTOR F V) TOOLLIB-MISC)
(DEFINE-EXTERNAL (CROP M X Y W H) TOOLLIB-MISC)
(DEFINE-EXTERNAL (MAP-MATRIX F M) TOOLLIB-MISC)
(DEFINE-EXTERNAL (MAP-INDEXED-MATRIX F M) TOOLLIB-MISC)
(DEFINE-EXTERNAL (MAP-M-N F M N) TOOLLIB-MISC)
(DEFINE-EXTERNAL (FOR-EACH-M-N F M N) TOOLLIB-MISC)
(DEFINE-EXTERNAL (FOR-EACH-M-N-DEC F M N) TOOLLIB-MISC)
(DEFINE-EXTERNAL (SHAPE-MATRIX V C) TOOLLIB-MISC)
(DEFINE-EXTERNAL (UNSHAPE-MATRIX M) TOOLLIB-MISC)
(DEFINE-EXTERNAL (ZIP A B . CS) TOOLLIB-MISC)
(DEFINE-EXTERNAL (FOLDL F L I) TOOLLIB-MISC)
(DEFINE-EXTERNAL (JOIN L) TOOLLIB-MISC)
(DEFINE-EXTERNAL (MAP-CONCAT F L) TOOLLIB-MISC)
(DEFINE-EXTERNAL (MAP-INDEXED-VECTOR F V . &REST) TOOLLIB-MISC)
(DEFINE-EXTERNAL (MATRIX? V) TOOLLIB-MISC)
(DEFINE-EXTERNAL (SUBMATRIX M X-OFFSET Y-OFFSET X-SIZE Y-SIZE) TOOLLIB-MISC)
(DEFINE-EXTERNAL (LINES STRING) TOOLLIB-MISC)