/* LaHaShem HaAretz U'Mloah */

#ifndef HMM_DATA_H
#define HMM_DATA_H

#define MAX_DISCRETE   20	/* maximum number of discrete classes */
#define MIN_STD_DEV    0.01
#define MAX_KAPPA      100.0
#define SQRT_2PI       2.506628	/* calculated as sqrt(2.0*M_PI) */
#define LOG_2PI        1.837877	/* calculated as log(2.0*PI) */

struct ContFI {Real initialSigma;};

typedef Real (*LogLikeF)(Real, void *);
typedef int (*MaxF)(void *, Real **, RVec *, int, Real, Real *, int, int *, int);
typedef int FeatType;

typedef struct {Real mu; Real sigma;} Param;
typedef struct {Real mean; Real kappa;} VMParam;
typedef struct {int kk; Real p[MAX_DISCRETE];} DParam;
typedef struct {
  void **p;			/* model parameters */
  LogLikeF *lf;			/* likelihood functions */
  MaxF *mf;			/* maximisation functions */
  FeatType *ft;			/* feature types */
  void **fi;			/* additional feature info */
  int ii;			/* number of features */
} Ffm;

enum {FT_CONTINUOUS, FT_RADIAL, FT_DISCRETE, FT_OTHER}; /* Feature types */

Ffm *allocFFM(int ii);

void copyFFM(Ffm *dst_m, Ffm *src_m);

void displayFFM(void *p, Ffm *m);

void linear2logFFM(Ffm *m);

void log2linearFFM(Ffm *m);

void zeroFFM(Ffm *m);

int isZeroFFM(Ffm *m);

void freeFFM(Ffm *m);

int normalizeFFM(Ffm *m);

Real kappaEstimate(Real r);

Real logGauss(Real x, void *param);

Real logVonMises(Real x, void *param);

Real logDiscrete(Real x, void *param);

int maxGauss(void *param, Real **x, RVec *weight, int ll, Real log_D,
	     Real *postpC, int c, int *c_ls, int endmode);

int maxVonMises(void *param, Real **x, RVec *weight, int ll, Real log_D,
		Real *postpC, int c, int *c_ls, int endmode);
float vonMisesOpt(float k);

int maxDiscrete(void *param, Real **x, RVec *weight, int ll, Real log_D,
		Real *postpC, int c, int *c_ls, int endmode);
int normalizeDiscrete(DParam *p);
 
FeatType getFeatType(Ffm *m, int i);

void *getFeatInfo(Ffm *m, int i);

void *getParam(Ffm *m, int i);

int getFeatNum(Ffm *m);

Real getInitialSigma(void);

void setInitialSigma(Real x);

void randomiseParams(Ffm *m);

void constantParams(Ffm *m);

void noiseParams(Ffm *m, Real delta);

void smoothParams(Ffm *m, Real eps);

void setFeatType(Ffm *m, int i, FeatType ft, void *fi);

void setMaxFunc(Ffm *m, int i, MaxF f);

void setLogLikeFunc(Ffm *m, int i, LogLikeF f);

void *setParam(Ffm *m, int i, void *p);

void FFM_logL(Ffm *m, RVec logL, RMat data);

Real FFM_likelihood_one(Ffm *m, RVec data, Real *x);

void FFM_logL_with_box_scores(Ffm *m, RVec logL, RMat data,Real* scores, int isEnd, int endmode);

int FFM_maximise(Ffm *m, RMat *data, RVec *weight, int ll, Real log_D,
		 Real *postpC, int c, int *c_ls, int endmode);

#endif

/* Tam V'Nishlam Shevah L'El Borei Olam */
