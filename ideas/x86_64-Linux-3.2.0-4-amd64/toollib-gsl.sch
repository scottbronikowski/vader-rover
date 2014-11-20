(DEFINE-EXTERNAL (LIST->C-INEXACT-ARRAY ARRAY L ELEMENT-SIZE SIGNED?) TOOLLIB-C-BINDINGS)
(DEFINE-EXTERNAL (C-INEXACT-ARRAY->LIST ARRAY ELEMENT-SIZE NR-ELEMENTS SIGNED?) TOOLLIB-C-BINDINGS)
(DEFINE-EXTERNAL B TOOLLIB-IMAGE-PROCESSING)
(DEFINE-EXTERNAL (A V) TOOLLIB-IMAGE-PROCESSING)
(DEFINE-STRUCTURE-EXTERNAL TOOLLIB-GSL GSL:RNG HANDLE)
(DEFINE-STRUCTURE-EXTERNAL TOOLLIB-GSL GSL:RNG-TYPE HANDLE)
(DEFINE-EXTERNAL *GSL-RNG* TOOLLIB-GSL)
(DEFINE-EXTERNAL (SETUP-DEFAULT-GSL-RNG!) TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL-MATRIX-ALLOC TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL-MATRIX-FREE TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL-VECTOR-ALLOC TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL-VECTOR-FREE TOOLLIB-GSL)
(DEFINE-EXTERNAL (SCHEME-VECTOR->GSL! A) TOOLLIB-GSL)
(DEFINE-EXTERNAL (SCHEME-MATRIX->GSL! M) TOOLLIB-GSL)
(DEFINE-EXTERNAL (GSL-VECTOR->SCHEME V) TOOLLIB-GSL)
(DEFINE-EXTERNAL (GSL-MATRIX->SCHEME M) TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL-VECTOR-FPRINTF TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL-MATRIX-FPRINTF TOOLLIB-GSL)
(DEFINE-EXTERNAL STDIN TOOLLIB-GSL)
(DEFINE-EXTERNAL STDOUT TOOLLIB-GSL)
(DEFINE-EXTERNAL STDERR TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL-MATRIX-GET TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL-MATRIX-SET TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL-MATRIX-TRANSPOSE TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL-MATRIX-SWAP-ROWS TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL-MATRIX-SWAP-COLUMNS TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL-MATRIX-GET-ROW! TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL-MATRIX-GET-COL! TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL-MATRIX-SET-ROW! TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL-MATRIX-SET-COL! TOOLLIB-GSL)
(DEFINE-EXTERNAL (GSL-MATRIX-GET-ROW A V I) TOOLLIB-GSL)
(DEFINE-EXTERNAL (GSL-MATRIX-GET-COL A V I) TOOLLIB-GSL)
(DEFINE-EXTERNAL (GSL-MATRIX-SET-ROW A I V) TOOLLIB-GSL)
(DEFINE-EXTERNAL (GSL-MATRIX-SET-COL A I V) TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL-VECTOR-MEMCPY! TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL-MATRIX-MEMCPY! TOOLLIB-GSL)
(DEFINE-EXTERNAL (GSL-COPY-VECTOR V) TOOLLIB-GSL)
(DEFINE-EXTERNAL (GSL-COPY-MATRIX M) TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL-VECTOR-ADD! TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL-VECTOR-SUB! TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL-VECTOR-MUL! TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL-VECTOR-DIV! TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL-VECTOR-SCALE! TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL-VECTOR-ADD-CONSTANT! TOOLLIB-GSL)
(DEFINE-EXTERNAL (GSL-V+ A B) TOOLLIB-GSL)
(DEFINE-EXTERNAL (GSL-V- A B) TOOLLIB-GSL)
(DEFINE-EXTERNAL (GSL-V* A B) TOOLLIB-GSL)
(DEFINE-EXTERNAL (GSL-V/ A B) TOOLLIB-GSL)
(DEFINE-EXTERNAL (GSL-K*V A B) TOOLLIB-GSL)
(DEFINE-EXTERNAL (GSL-K+V A B) TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL-MATRIX-ADD! TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL-MATRIX-SUB! TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL-MATRIX-MUL-ELEMENTS! TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL-MATRIX-DIV-ELEMENTS! TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL-MATRIX-SCALE! TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL-MATRIX-ADD-CONSTANT! TOOLLIB-GSL)
(DEFINE-EXTERNAL (GSL-M+ A B) TOOLLIB-GSL)
(DEFINE-EXTERNAL (GSL-M- A B) TOOLLIB-GSL)
(DEFINE-EXTERNAL (GSL-K+M K M) TOOLLIB-GSL)
(DEFINE-EXTERNAL (GSL-K*M K M) TOOLLIB-GSL)
(DEFINE-EXTERNAL (GSL-M*-ELEMENTS A B) TOOLLIB-GSL)
(DEFINE-EXTERNAL (GSL-M/-ELEMENTS A B) TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL-MATRIX-ALL! TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL-MATRIX-ZERO! TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL-MATRIX-IDENTITY! TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL-MATRIX-NULL? TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL-MATRIX-POSITIVE? TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL-MATRIX-NEGATIVE? TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL-MATRIX-NON-NEGATIVE? TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL-VECTOR-NULL? TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL-VECTOR-POSITIVE? TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL-VECTOR-NEGATIVE? TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL-VECTOR-NON-NEGATIVE? TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL-SVD-DECOMP! TOOLLIB-GSL)
(DEFINE-EXTERNAL (GSL-SVD A) TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL-EIGEN-SYMMV-WORKSPACE TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL-EIGEN-SYMMV-FREE TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL-EIGEN-SYMMV! TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL-EIGEN-SYMMV-SORT! TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL-EIGEN-SORT-VAL-ASC TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL-EIGEN-SORT-VAL-DESC TOOLLIB-GSL)
(DEFINE-EXTERNAL (GSL-EIGEN-SYMM A) TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RAN-BERNOULLI TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RAN-BERNOULLI-PDF TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RAN-BETA TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RAN-BETA-PDF TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RAN-BINOMIAL TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RAN-BINOMIAL-KNUTH TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RAN-BINOMIAL-TPE TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RAN-BINOMIAL-PDF TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RAN-EXPONENTIAL TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RAN-EXPONENTIAL-PDF TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RAN-EXPPOW TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RAN-EXPPOW-PDF TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RAN-CAUCHY TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RAN-CAUCHY-PDF TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RAN-CHISQ TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RAN-CHISQ-PDF TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RAN-DIRICHLET TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RAN-DIRICHLET-PDF TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RAN-DIRICHLET-LNPDF TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RAN-ERLANG TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RAN-ERLANG-PDF TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RAN-FDIST TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RAN-FDIST-PDF TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RAN-FLAT TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RAN-FLAT-PDF TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RAN-GAMMA TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RAN-GAMMA-INT TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RAN-GAMMA-PDF TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RAN-GAMMA-MT TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RAN-GAMMA-KNUTH TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RAN-GAUSSIAN TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RAN-GAUSSIAN-RATIO-METHOD TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RAN-GAUSSIAN-ZIGGURAT TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RAN-GAUSSIAN-PDF TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RAN-UGAUSSIAN TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RAN-UGAUSSIAN-RATIO-METHOD TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RAN-UGAUSSIAN-PDF TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RAN-GAUSSIAN-TAIL TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RAN-GAUSSIAN-TAIL-PDF TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RAN-UGAUSSIAN-TAIL TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RAN-UGAUSSIAN-TAIL-PDF TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RAN-BIVARIATE-GAUSSIAN TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RAN-BIVARIATE-GAUSSIAN-PDF TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RAN-LANDAU TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RAN-LANDAU-PDF TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RAN-GEOMETRIC TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RAN-GEOMETRIC-PDF TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RAN-HYPERGEOMETRIC TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RAN-HYPERGEOMETRIC-PDF TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RAN-GUMBEL1 TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RAN-GUMBEL1-PDF TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RAN-GUMBEL2 TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RAN-GUMBEL2-PDF TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RAN-LOGISTIC TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RAN-LOGISTIC-PDF TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RAN-LOGNORMAL TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RAN-LOGNORMAL-PDF TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RAN-LOGARITHMIC TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RAN-LOGARITHMIC-PDF TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RAN-MULTINOMIAL TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RAN-MULTINOMIAL-PDF TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RAN-MULTINOMIAL-LNPDF TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RAN-NEGATIVE-BINOMIAL TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RAN-NEGATIVE-BINOMIAL-PDF TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RAN-PASCAL TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RAN-PASCAL-PDF TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RAN-PARETO TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RAN-PARETO-PDF TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RAN-POISSON TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RAN-POISSON-ARRAY TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RAN-POISSON-PDF TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RAN-RAYLEIGH TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RAN-RAYLEIGH-PDF TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RAN-RAYLEIGH-TAIL TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RAN-RAYLEIGH-TAIL-PDF TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RAN-TDIST TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RAN-TDIST-PDF TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RAN-LAPLACE TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RAN-LAPLACE-PDF TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RAN-LEVY TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RAN-LEVY-SKEW TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RAN-WEIBULL TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RAN-WEIBULL-PDF TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RAN-DIR-2D TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RAN-DIR-2D-TRIG-METHOD TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RAN-DIR-3D TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RAN-DIR-ND TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:CDF-UGAUSSIAN-P TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:CDF-UGAUSSIAN-Q TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:CDF-UGAUSSIAN-P-INV TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:CDF-UGAUSSIAN-Q-INV TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:CDF-GAUSSIAN-P TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:CDF-GAUSSIAN-Q TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:CDF-GAUSSIAN-P-INV TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:CDF-GAUSSIAN-Q-INV TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:CDF-GAMMA-P TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:CDF-GAMMA-Q TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:CDF-GAMMA-P-INV TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:CDF-GAMMA-Q-INV TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:CDF-CAUCHY-P TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:CDF-CAUCHY-Q TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:CDF-CAUCHY-P-INV TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:CDF-CAUCHY-Q-INV TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:CDF-LAPLACE-P TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:CDF-LAPLACE-Q TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:CDF-LAPLACE-P-INV TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:CDF-LAPLACE-Q-INV TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:CDF-RAYLEIGH-P TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:CDF-RAYLEIGH-Q TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:CDF-RAYLEIGH-P-INV TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:CDF-RAYLEIGH-Q-INV TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:CDF-CHISQ-P TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:CDF-CHISQ-Q TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:CDF-CHISQ-P-INV TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:CDF-CHISQ-Q-INV TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:CDF-EXPONENTIAL-P TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:CDF-EXPONENTIAL-Q TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:CDF-EXPONENTIAL-P-INV TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:CDF-EXPONENTIAL-Q-INV TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:CDF-EXPPOW-P TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:CDF-EXPPOW-Q TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:CDF-TDIST-P TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:CDF-TDIST-Q TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:CDF-TDIST-P-INV TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:CDF-TDIST-Q-INV TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:CDF-FDIST-P TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:CDF-FDIST-Q TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:CDF-FDIST-P-INV TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:CDF-FDIST-Q-INV TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:CDF-BETA-P TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:CDF-BETA-Q TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:CDF-BETA-P-INV TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:CDF-BETA-Q-INV TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:CDF-FLAT-P TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:CDF-FLAT-Q TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:CDF-FLAT-P-INV TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:CDF-FLAT-Q-INV TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:CDF-LOGNORMAL-P TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:CDF-LOGNORMAL-Q TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:CDF-LOGNORMAL-P-INV TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:CDF-LOGNORMAL-Q-INV TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:CDF-GUMBEL1-P TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:CDF-GUMBEL1-Q TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:CDF-GUMBEL1-P-INV TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:CDF-GUMBEL1-Q-INV TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:CDF-GUMBEL2-P TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:CDF-GUMBEL2-Q TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:CDF-GUMBEL2-P-INV TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:CDF-GUMBEL2-Q-INV TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:CDF-WEIBULL-P TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:CDF-WEIBULL-Q TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:CDF-WEIBULL-P-INV TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:CDF-WEIBULL-Q-INV TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:CDF-PARETO-P TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:CDF-PARETO-Q TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:CDF-PARETO-P-INV TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:CDF-PARETO-Q-INV TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:CDF-LOGISTIC-P TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:CDF-LOGISTIC-Q TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:CDF-LOGISTIC-P-INV TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:CDF-LOGISTIC-Q-INV TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:CDF-BINOMIAL-P TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:CDF-BINOMIAL-Q TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:CDF-POISSON-P TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:CDF-POISSON-Q TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:CDF-GEOMETRIC-P TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:CDF-GEOMETRIC-Q TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:CDF-NEGATIVE-BINOMIAL-P TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:CDF-NEGATIVE-BINOMIAL-Q TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:CDF-PASCAL-P TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:CDF-PASCAL-Q TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:CDF-HYPERGEOMETRIC-P TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:CDF-HYPERGEOMETRIC-Q TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RNG-BOROSH13 TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RNG-COVEYOU TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RNG-CMRG TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RNG-FISHMAN18 TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RNG-FISHMAN20 TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RNG-FISHMAN2X TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RNG-GFSR4 TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RNG-KNUTHRAN TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RNG-KNUTHRAN2 TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RNG-KNUTHRAN2002 TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RNG-LECUYER21 TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RNG-MINSTD TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RNG-MRG TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RNG-MT19937 TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RNG-MT19937-1999 TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RNG-MT19937-1998 TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RNG-R250 TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RNG-RAN0 TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RNG-RAN1 TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RNG-RAN2 TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RNG-RAN3 TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RNG-RAND TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RNG-RAND48 TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RNG-RANDOM128-BSD TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RNG-RANDOM128-GLIBC2 TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RNG-RANDOM128-LIBC5 TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RNG-RANDOM256-BSD TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RNG-RANDOM256-GLIBC2 TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RNG-RANDOM256-LIBC5 TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RNG-RANDOM32-BSD TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RNG-RANDOM32-GLIBC2 TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RNG-RANDOM32-LIBC5 TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RNG-RANDOM64-BSD TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RNG-RANDOM64-GLIBC2 TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RNG-RANDOM64-LIBC5 TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RNG-RANDOM8-BSD TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RNG-RANDOM8-GLIBC2 TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RNG-RANDOM8-LIBC5 TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RNG-RANDOM-BSD TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RNG-RANDOM-GLIBC2 TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RNG-RANDOM-LIBC5 TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RNG-RANDU TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RNG-RANF TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RNG-RANLUX TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RNG-RANLUX389 TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RNG-RANLXD1 TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RNG-RANLXD2 TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RNG-RANLXS0 TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RNG-RANLXS1 TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RNG-RANLXS2 TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RNG-RANMAR TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RNG-SLATEC TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RNG-TAUS TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RNG-TAUS2 TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RNG-TAUS113 TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RNG-TRANSPUTER TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RNG-TT800 TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RNG-UNI TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RNG-UNI32 TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RNG-VAX TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RNG-WATERMAN14 TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RNG-ZUF TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RNG-ENV-SETUP TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RNG-DEFAULT TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RNG-DEFAULT-SEED TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RNG-ALLOC TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RNG-MEMCPY TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RNG-CLONE TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RNG-FREE TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RNG-SET TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RNG-MAX TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RNG-MIN TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RNG-NAME TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RNG-GET TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RNG-UNIFORM TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RNG-UNIFORM-POS TOOLLIB-GSL)
(DEFINE-EXTERNAL GSL:RNG-UNIFORM-INT TOOLLIB-GSL)