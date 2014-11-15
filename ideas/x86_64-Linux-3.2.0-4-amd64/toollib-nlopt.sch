(DEFINE-EXTERNAL (WITH-ALLOC X F) TOOLLIB-C-BINDINGS)
(DEFINE-EXTERNAL (WITH-VECTOR->C-ARRAY F SET-ELEMENT ELEMENT-SIZE V) TOOLLIB-C-BINDINGS)
(DEFINE-EXTERNAL (VECTOR->C-INEXACT-ARRAY ARRAY V ELEMENT-SIZE SIGNED?) TOOLLIB-C-BINDINGS)
(DEFINE-EXTERNAL (C-INEXACT-ARRAY->VECTOR ARRAY ELEMENT-SIZE NR-ELEMENTS SIGNED?) TOOLLIB-C-BINDINGS)
(DEFINE-EXTERNAL R TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL NLOPT:GN-DIRECT TOOLLIB-NLOPT)
(DEFINE-EXTERNAL NLOPT:GN-DIRECT-L TOOLLIB-NLOPT)
(DEFINE-EXTERNAL NLOPT:GN-DIRECT-L-RAND TOOLLIB-NLOPT)
(DEFINE-EXTERNAL NLOPT:GN-DIRECT-NOSCAL TOOLLIB-NLOPT)
(DEFINE-EXTERNAL NLOPT:GN-DIRECT-L-NOSCAL TOOLLIB-NLOPT)
(DEFINE-EXTERNAL NLOPT:GN-DIRECT-L-RAND-NOSCAL TOOLLIB-NLOPT)
(DEFINE-EXTERNAL NLOPT:GN-ORIG-DIRECT TOOLLIB-NLOPT)
(DEFINE-EXTERNAL NLOPT:GN-ORIG-DIRECT-L TOOLLIB-NLOPT)
(DEFINE-EXTERNAL NLOPT:GD-STOGO TOOLLIB-NLOPT)
(DEFINE-EXTERNAL NLOPT:GD-STOGO-RAND TOOLLIB-NLOPT)
(DEFINE-EXTERNAL NLOPT:LD-LBFGS-NOCEDAL TOOLLIB-NLOPT)
(DEFINE-EXTERNAL NLOPT:LD-LBFGS TOOLLIB-NLOPT)
(DEFINE-EXTERNAL NLOPT:LN-PRAXIS TOOLLIB-NLOPT)
(DEFINE-EXTERNAL NLOPT:LD-VAR1 TOOLLIB-NLOPT)
(DEFINE-EXTERNAL NLOPT:LD-VAR2 TOOLLIB-NLOPT)
(DEFINE-EXTERNAL NLOPT:LD-TNEWTON TOOLLIB-NLOPT)
(DEFINE-EXTERNAL NLOPT:LD-TNEWTON-RESTART TOOLLIB-NLOPT)
(DEFINE-EXTERNAL NLOPT:LD-TNEWTON-PRECOND TOOLLIB-NLOPT)
(DEFINE-EXTERNAL NLOPT:LD-TNEWTON-PRECOND-RESTART TOOLLIB-NLOPT)
(DEFINE-EXTERNAL NLOPT:GN-CRS2-LM TOOLLIB-NLOPT)
(DEFINE-EXTERNAL NLOPT:GN-MLSL TOOLLIB-NLOPT)
(DEFINE-EXTERNAL NLOPT:GD-MLSL TOOLLIB-NLOPT)
(DEFINE-EXTERNAL NLOPT:GN-MLSL-LDS TOOLLIB-NLOPT)
(DEFINE-EXTERNAL NLOPT:GD-MLSL-LDS TOOLLIB-NLOPT)
(DEFINE-EXTERNAL NLOPT:LD-MMA TOOLLIB-NLOPT)
(DEFINE-EXTERNAL NLOPT:LN-COBYLA TOOLLIB-NLOPT)
(DEFINE-EXTERNAL NLOPT:LN-NEWUOA TOOLLIB-NLOPT)
(DEFINE-EXTERNAL NLOPT:LN-NEWUOA_BOUND TOOLLIB-NLOPT)
(DEFINE-EXTERNAL NLOPT:LN-NELDERMEAD TOOLLIB-NLOPT)
(DEFINE-EXTERNAL NLOPT:LN-SBPLX TOOLLIB-NLOPT)
(DEFINE-EXTERNAL NLOPT:LN-AUGLAG TOOLLIB-NLOPT)
(DEFINE-EXTERNAL NLOPT:LD-AUGLAG TOOLLIB-NLOPT)
(DEFINE-EXTERNAL NLOPT:LN-AUGLAG-EQ TOOLLIB-NLOPT)
(DEFINE-EXTERNAL NLOPT:LD-AUGLAG-EQ TOOLLIB-NLOPT)
(DEFINE-EXTERNAL NLOPT:LN-BOBYQA TOOLLIB-NLOPT)
(DEFINE-EXTERNAL NLOPT:GN-ISRES TOOLLIB-NLOPT)
(DEFINE-EXTERNAL NLOPT:AUGLAG TOOLLIB-NLOPT)
(DEFINE-EXTERNAL NLOPT:AUGLAG-EQ TOOLLIB-NLOPT)
(DEFINE-EXTERNAL NLOPT:G-MLSL TOOLLIB-NLOPT)
(DEFINE-EXTERNAL NLOPT:G-MLSL-LDS TOOLLIB-NLOPT)
(DEFINE-EXTERNAL NLOPT:LD-SLSQP TOOLLIB-NLOPT)
(DEFINE-EXTERNAL NLOPT:ALGORITHM-NAME TOOLLIB-NLOPT)
(DEFINE-EXTERNAL NLOPT:FAILURE TOOLLIB-NLOPT)
(DEFINE-EXTERNAL NLOPT:INVALID-ARGS TOOLLIB-NLOPT)
(DEFINE-EXTERNAL NLOPT:OUT-OF-MEMORY TOOLLIB-NLOPT)
(DEFINE-EXTERNAL NLOPT:ROUNDOFF-LIMITED TOOLLIB-NLOPT)
(DEFINE-EXTERNAL NLOPT:FORCED-STOP TOOLLIB-NLOPT)
(DEFINE-EXTERNAL NLOPT:SUCCESS TOOLLIB-NLOPT)
(DEFINE-EXTERNAL NLOPT:STOPVAL-REACHED TOOLLIB-NLOPT)
(DEFINE-EXTERNAL NLOPT:FTOL-REACHED TOOLLIB-NLOPT)
(DEFINE-EXTERNAL NLOPT:XTOL-REACHED TOOLLIB-NLOPT)
(DEFINE-EXTERNAL NLOPT:MAXEVAL-REACHED TOOLLIB-NLOPT)
(DEFINE-EXTERNAL NLOPT:MAXTIME-REACHED TOOLLIB-NLOPT)
(DEFINE-EXTERNAL NLOPT:SRAND TOOLLIB-NLOPT)
(DEFINE-EXTERNAL NLOPT:SRAND-TIME TOOLLIB-NLOPT)
(DEFINE-EXTERNAL NLOPT:CREATE TOOLLIB-NLOPT)
(DEFINE-EXTERNAL NLOPT:DESTROY TOOLLIB-NLOPT)
(DEFINE-EXTERNAL NLOPT:COPY TOOLLIB-NLOPT)
(DEFINE-EXTERNAL *WRAPPED* TOOLLIB-NLOPT)
(DEFINE-EXTERNAL (NLOPT:WRAP-SINGLE F) TOOLLIB-NLOPT)
(DEFINE-EXTERNAL (WITH-NLOPT KIND ARG F) TOOLLIB-NLOPT)
(DEFINE-EXTERNAL (OPTIMIZE-WITH-NLOPT KIND INITIAL F) TOOLLIB-NLOPT)
(DEFINE-EXTERNAL (NLOPT:OPTIMIZE NLOPT INITIAL) TOOLLIB-NLOPT)
(DEFINE-EXTERNAL (NLOPT:SET-MIN-OBJECTIVE NLOPT F) TOOLLIB-NLOPT)
(DEFINE-EXTERNAL (NLOPT:SET-MAX-OBJECTIVE NLOPT F) TOOLLIB-NLOPT)
(DEFINE-EXTERNAL NLOPT:GET-ALGORITHM TOOLLIB-NLOPT)
(DEFINE-EXTERNAL NLOPT:GET-DIMENSION TOOLLIB-NLOPT)
(DEFINE-EXTERNAL (NLOPT:SET-LOWER-BOUNDS NLOPT BOUNDS) TOOLLIB-NLOPT)
(DEFINE-EXTERNAL NLOPT:SET-LOWER-BOUNDS1 TOOLLIB-NLOPT)
(DEFINE-EXTERNAL (NLOPT:GET-LOWER-BOUNDS NLOPT) TOOLLIB-NLOPT)
(DEFINE-EXTERNAL (NLOPT:SET-UPPER-BOUNDS NLOPT BOUNDS) TOOLLIB-NLOPT)
(DEFINE-EXTERNAL NLOPT:SET-UPPER-BOUNDS1 TOOLLIB-NLOPT)
(DEFINE-EXTERNAL (NLOPT:GET-UPPER-BOUNDS NLOPT) TOOLLIB-NLOPT)
(DEFINE-EXTERNAL NLOPT:REMOVE-INEQUALITY-CONSTRAINTS TOOLLIB-NLOPT)
(DEFINE-EXTERNAL (NLOPT:ADD-INEQUALITY-CONSTRAINT NLOPT F TOL) TOOLLIB-NLOPT)
(DEFINE-EXTERNAL NLOPT:REMOVE-EQUALITY-CONSTRAINTS TOOLLIB-NLOPT)
(DEFINE-EXTERNAL (NLOPT:ADD-EQUALITY-CONSTRAINT NLOPT F TOL) TOOLLIB-NLOPT)
(DEFINE-EXTERNAL NLOPT:SET-STOPVAL TOOLLIB-NLOPT)
(DEFINE-EXTERNAL NLOPT:GET-STOPVAL TOOLLIB-NLOPT)
(DEFINE-EXTERNAL NLOPT:SET-FTOL-REL TOOLLIB-NLOPT)
(DEFINE-EXTERNAL NLOPT:GET-FTOL-REL TOOLLIB-NLOPT)
(DEFINE-EXTERNAL NLOPT:SET-FTOL-ABS TOOLLIB-NLOPT)
(DEFINE-EXTERNAL NLOPT:GET-FTOL-ABS TOOLLIB-NLOPT)
(DEFINE-EXTERNAL NLOPT:SET-XTOL-REL TOOLLIB-NLOPT)
(DEFINE-EXTERNAL NLOPT:GET-XTOL-REL TOOLLIB-NLOPT)
(DEFINE-EXTERNAL NLOPT:SET-XTOL-ABS1 TOOLLIB-NLOPT)
(DEFINE-EXTERNAL NLOPT:SET-XTOL-ABS TOOLLIB-NLOPT)
(DEFINE-EXTERNAL NLOPT:GET-XTOL-ABS TOOLLIB-NLOPT)
(DEFINE-EXTERNAL NLOPT:SET-MAXEVAL TOOLLIB-NLOPT)
(DEFINE-EXTERNAL NLOPT:GET-MAXEVAL TOOLLIB-NLOPT)
(DEFINE-EXTERNAL NLOPT:SET-MAXTIME TOOLLIB-NLOPT)
(DEFINE-EXTERNAL NLOPT:GET-MAXTIME TOOLLIB-NLOPT)
(DEFINE-EXTERNAL NLOPT:FORCE-STOP TOOLLIB-NLOPT)
(DEFINE-EXTERNAL NLOPT:SET-FORCE-STOP TOOLLIB-NLOPT)
(DEFINE-EXTERNAL NLOPT:GET-FORCE-STOP TOOLLIB-NLOPT)
(DEFINE-EXTERNAL NLOPT:SET-LOCAL-OPTIMIZER TOOLLIB-NLOPT)
(DEFINE-EXTERNAL NLOPT:SET-POPULATION TOOLLIB-NLOPT)
(DEFINE-EXTERNAL NLOPT:GET-POPULATION TOOLLIB-NLOPT)
(DEFINE-EXTERNAL NLOPT:SET-DEFAULT-INITIAL-STEP TOOLLIB-NLOPT)
(DEFINE-EXTERNAL NLOPT:SET-INITIAL-STEP TOOLLIB-NLOPT)
(DEFINE-EXTERNAL NLOPT:SET-INITIAL-STEP1 TOOLLIB-NLOPT)
(DEFINE-EXTERNAL NLOPT:GET-INITIAL-STEP TOOLLIB-NLOPT)
