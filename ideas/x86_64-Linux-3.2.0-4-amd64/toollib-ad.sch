(DEFINE-EXTERNAL (CYCLIC-MULTIVARIATE-ARGMIN-R F X DS) IDEALIB-STUFF)
(DEFINE-EXTERNAL R TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL G TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL B TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (A V) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL *DEBUGGING?* TOOLLIB-MISC)
(DEFINE-EXTERNAL (DTRACE S V) TOOLLIB-MISC)
(DEFINE-EXTERNAL (SMOOTH-MAX-CHKS-2 A B T) TOOLLIB-MISC)
(DEFINE-EXTERNAL (SMOOTH-MIN-CHKS-2 A B T) TOOLLIB-MISC)
(DEFINE-EXTERNAL (ZIP A B . CS) TOOLLIB-MISC)
(DEFINE-EXTERNAL (FOLDL F L I) TOOLLIB-MISC)
(DEFINE-EXTERNAL (M/K M K) TOOLLIB-MISC)
(DEFINE-EXTERNAL (V*M*V V M) TOOLLIB-MISC)
(DEFINE-EXTERNAL (SMOOTH-MAX L T) TOOLLIB-AD)
(DEFINE-EXTERNAL (SMOOTH-MIN L T) TOOLLIB-AD)
(DEFINE-EXTERNAL (SMOOTH-MAX-Z L T Z) TOOLLIB-AD)
(DEFINE-EXTERNAL (SMOOTH-MAX-CHKS-2 A B T) TOOLLIB-AD)
(DEFINE-EXTERNAL (SMOOTH-MAX-CHKS L T) TOOLLIB-AD)
(DEFINE-EXTERNAL (SMOOTH-MIN-CHKS-2 A B T) TOOLLIB-AD)
(DEFINE-EXTERNAL (SMOOTH-MIN-CHKS L T) TOOLLIB-AD)
(DEFINE-EXTERNAL (DEEP-PRIMAL* A) TOOLLIB-AD)
(DEFINE-EXTERNAL (MULTIVARIATE-ARGMIN-F-ARGS F X START MAX TOL) TOOLLIB-AD)
(DEFINE-EXTERNAL (UNIVARIATE-ARGMIN-F-ARGS F X START MAX TOL) TOOLLIB-AD)
(DEFINE-EXTERNAL (UNIVARIATE-ARGMIN-F-ARGS-LINE F X START MAX TOL) TOOLLIB-AD)
(DEFINE-EXTERNAL (MULTIVARIATE-ARGMIN-F-FR F X) TOOLLIB-AD)
(DEFINE-EXTERNAL (MULTIVARIATE-ARGMIN-F-PR F X) TOOLLIB-AD)
(DEFINE-EXTERNAL (MULTIVARIATE-ARGMIN-R-PR F X) TOOLLIB-AD)
(DEFINE-EXTERNAL (MULTIVARIATE-ARGMIN-R-PRT F X TOL1 TOL2) TOOLLIB-AD)
(DEFINE-EXTERNAL (MULTIVARIATE-ARGMIN-F-HS F X) TOOLLIB-AD)
(DEFINE-EXTERNAL (MULTIVARIATE-ARGMIN-F-SCALING F X M) TOOLLIB-AD)
(DEFINE-EXTERNAL (MULTIVARIATE-ARGMIN-PR F X START-DIRECTION GX-MAGNITUDE X-DISTANCE LINE-X LINE-START LINE-MAX LINE-TOLERANCE) TOOLLIB-AD)
(DEFINE-EXTERNAL (G-TAPES E) TOOLLIB-AD)
(DEFINE-EXTERNAL (G-SENSITIVITIES E) TOOLLIB-AD)
(DEFINE-EXTERNAL (G-DOT A B) TOOLLIB-AD)
(DEFINE-EXTERNAL (G+ A B) TOOLLIB-AD)
(DEFINE-EXTERNAL (G- A B) TOOLLIB-AD)
(DEFINE-EXTERNAL (K*G K G) TOOLLIB-AD)
(DEFINE-EXTERNAL (GRADIENT-R-G F) TOOLLIB-AD)
(DEFINE-EXTERNAL (G-MAGNITUDE G) TOOLLIB-AD)
(DEFINE-EXTERNAL (G-DISTANCE A B) TOOLLIB-AD)
(DEFINE-EXTERNAL (GOLDEN-SECTION F TOL AX BX CX K) TOOLLIB-AD)
(DEFINE-EXTERNAL (CYCLIC-MULTIVARIATE-ARGMIN-R F X DS) TOOLLIB-AD)
(DEFINE-EXTERNAL (CYCLIC-MULTIVARIATE-MIN-R F X DS) TOOLLIB-AD)
(DEFINE-EXTERNAL (CYCLIC-MULTIVARIATE-ARGMAX-R F X DS) TOOLLIB-AD)
(DEFINE-EXTERNAL (CYCLIC-MULTIVARIATE-MAX-R F X DS) TOOLLIB-AD)
(DEFINE-EXTERNAL (IDENTITY-HESSIAN V) TOOLLIB-AD)
(DEFINE-EXTERNAL (NAIVE-BFGS F X) TOOLLIB-AD)
(DEFINE-EXTERNAL (BFGS F X) TOOLLIB-AD)
(DEFINE-EXTERNAL (MULTIVARIATE-GENERIC-ARGMIN-PR F X START-DIRECTION GX-MAGNITUDE X-DISTANCE LINE-X LINE-START LINE-MAX LINE-TOLERANCE ITERATIONS RESTART-ITERATIONS) TOOLLIB-AD)
(DEFINE-EXTERNAL (COLLAPSE D I) TOOLLIB-AD)
(DEFINE-EXTERNAL (EXTEND A D I) TOOLLIB-AD)
(DEFINE-EXTERNAL (SPLIT-ALONG-DIRECTION F I D) TOOLLIB-AD)
(DEFINE-EXTERNAL (ALONG-DIRECTIONS F G DS I) TOOLLIB-AD)
(DEFINE-EXTERNAL (OPTIMIZE-ALONG-DIRECTIONS F G DS I STOP?) TOOLLIB-AD)
(DEFINE-EXTERNAL (MY-GOLDEN F TOL AX BX CX K) TOOLLIB-AD)
(DEFINE-EXTERNAL (MY-MNBRAK F AX BX K) TOOLLIB-AD)
(DEFINE-EXTERNAL (ARGMIN-USING-MNBRAK-AND-GOLDEN F L U) TOOLLIB-AD)
(DEFINE-EXTERNAL (MULTIVARIATE-PR-GOLDEN-ARGMIN F X START-DIRECTION GX-MAGNITUDE X-DISTANCE LINE-START LINE-MAX LINE-TOLERANCE ITERATIONS RESTART-ITERATIONS) TOOLLIB-AD)
(DEFINE-EXTERNAL (SIGN X) SENTENCE-TO-TRACE-FROM-LEARNED-MODELS)