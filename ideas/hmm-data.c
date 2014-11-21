/* LaHaShem HaAretz U'Mloah */

/* Data model for Factorial Features -
 *  assumes that all feature values are independent of each other, and
 *  distributions are phase-invariant wrt a mean
 */

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <math.h>
#include <memory.h>
#include <assert.h>
#include "hmm.h"
#include "hmm-rand.h"
#include "hmm-data.h"

/* -- global variables -- */

static Real g_initialSigma = 5000.0; /* default initial sigma for cont feat */
static Real g_rx = 0.0;		   /* used in VonMisesOpt */
static Real g_vonMisesTol = 1e-6;  /* tolerance for kappa root finder */

/* -- function declarations -- */

static void panic (const char *error_text, ...)
{ 
  va_list ap;
  char error_message[1024];
  va_start(ap, error_text);
  vsprintf(error_message, error_text, ap);
  fprintf(stderr, "panic: %s\n", error_message);
  exit(EXIT_FAILURE);
}

/* utility functions */

Ffm *allocFFM(int ii)
{ Ffm *m = safe_malloc(sizeof *m);
  m->p = safe_malloc(ii * sizeof *(m->p));
  m->lf = safe_malloc(ii * sizeof *(m->lf));
  m->mf = safe_malloc(ii * sizeof *(m->mf));
  m->ft = safe_malloc(ii * sizeof *(m->ft));
  m->fi = safe_malloc(ii * sizeof *(m->fi));
  m->ii = ii;
  for (ii--; ii>=0; ii--)
  { m->ft[ii] = FT_OTHER;
    m->fi[ii] = NULL;
    m->p[ii] = NULL;}
  return m;}

void copyFFM(Ffm *dst_m, Ffm *src_m) {
  assert(dst_m&&src_m);
  assert(dst_m->ii==src_m->ii);
  int ii;
  for (ii = 0; ii<dst_m->ii; ii++) {
    switch (src_m->ft[ii]) {
    case FT_CONTINUOUS: {
      struct ContFI *fi = NULL;
      if (src_m->fi[ii]) {
	fi = safe_malloc(sizeof *fi);
	fi->initialSigma = ((struct ContFI*)src_m->fi[ii])->initialSigma;
      }
      setFeatType(dst_m, ii, src_m->ft[ii], (void *)fi);
      memcpy(dst_m->p[ii], src_m->p[ii], sizeof(Param));
      break;
    }
    case FT_RADIAL:
      setFeatType(dst_m, ii, src_m->ft[ii], NULL);
      memcpy(dst_m->p[ii], src_m->p[ii], sizeof(VMParam));
      break;
    case FT_DISCRETE:
      setFeatType(dst_m, ii, src_m->ft[ii], NULL);
      memcpy(dst_m->p[ii], src_m->p[ii], sizeof(DParam));
      break;
    case FT_OTHER:
      break;
    default:
      panic("copyFFM(): Unrecognised feature type: %d", src_m->ft[ii]);
    }
  }
}

void linear2logFFM(Ffm *m){
  assert(m);
  int i, k;
  for (i = 0; i < m->ii; i ++){
    assert(m->ft[i] == FT_DISCRETE);
    for (k = 0; k < ((DParam *)(m->p[i]))->kk; k ++)
      ((DParam *)(m->p[i]))->p[k] 
	= my_log(((DParam *)(m->p[i]))->p[k]);
  }
}

void log2linearFFM(Ffm *m){
  assert(m);
  int i, k;
  for (i = 0; i < m->ii; i ++){
    assert(m->ft[i] == FT_DISCRETE);
    for (k = 0; k < ((DParam *)(m->p[i]))->kk; k ++)
      ((DParam *)(m->p[i]))->p[k] 
	= my_exp(((DParam *)(m->p[i]))->p[k]);
  }
}

void zeroFFM(Ffm *m){
  assert(m);
  int i;
  for (i = 0; i < m->ii; i ++){
    switch(m->ft[i]){
    case FT_CONTINUOUS:
      ((Param *)m->p[i])->mu = 0;
      ((Param *)m->p[i])->sigma = 0;
      break;
    case FT_RADIAL:
      ((VMParam *)m->p[i])->mean = 0;
      ((VMParam *)m->p[i])->kappa = 0;
      break;
    case FT_DISCRETE:
      memset(((DParam *)m->p[i])->p, 0, MAX_DISCRETE * sizeof(Real));
      break;
    case FT_OTHER:
      break;
    default:
      panic("zeroFFM: Unrecognized feature type: %d", m->ft[i]);
    }
  }
}

int isZeroFFM(Ffm *m){
  assert(m);
  int i, k, zero = 1;
  for (i = 0; i < m->ii; i ++){
    switch(m->ft[i]){
    case FT_CONTINUOUS:
      if (((Param *)m->p[i])->mu != 0
	  || ((Param *)m->p[i])->sigma != 0)
	zero = 0;
      break;
    case FT_RADIAL:
      if (((VMParam *)m->p[i])->mean != 0
	  || ((VMParam *)m->p[i])->kappa != 0)
	zero = 0;
      break;
    case FT_DISCRETE:
      for (k = 0; k < ((DParam *)m->p[i])->kk; k ++)
	if (((DParam *)m->p[i])->p[k] != 0)
	  zero = 0;
      break;
    case FT_OTHER:
      break;
    default:
      panic("isZeroFFM: Unrecognized feature type: %d", m->ft[i]);
    }
  }
  return zero;
}

void displayFFM(void *p, Ffm *m)
{ int i, j;
  FILE *f = (FILE *)p;
  fprintf(f, "FFM Features: Type       Mean      Variance\n");
  for (i = 0; i<m->ii; i++)
  { switch (m->ft[i])
    { case FT_CONTINUOUS:
      fprintf(f, "%13d %4s %10.2f %13.2f\n", i, "CONT",
	      ((Param *)m->p[i])->mu, ((Param *)m->p[i])->sigma);
      break;
      case FT_RADIAL:
      fprintf(f, "%13d %4s %10.2f %13.2f\n", i, "RAD",
	      ((VMParam *)m->p[i])->mean, ((VMParam *)m->p[i])->kappa);
      break;
      case FT_DISCRETE:
	fprintf(f, "%13d %4s", i, "DISC");
	for (j = 0; j<((DParam *)m->p[i])->kk; j++)
	  fprintf(f, " %10.4f", ((DParam *)m->p[i])->p[j]);
	fprintf(f, "\n");
      break;
      default:
      fprintf(f, "%13d %4s\n", i, "UNK");
      break;}}}

void freeFFM(Ffm *m)
{ int ii = m->ii;
  for (ii--; ii>=0; ii--)
  { if (m->p[ii]!=NULL) free(m->p[ii]);
    if (m->fi[ii]!=NULL) free(m->fi[ii]);}
  free(m->fi);
  free(m->ft);
  free(m->lf);
  free(m->mf);
  free(m->p);
  free(m);}

int normalizeFFM(Ffm *m){
  assert(m);
  int i;
  for (i = 0; i < m->ii; i ++)
    if (m->ft[i] == FT_DISCRETE)
      if (normalizeDiscrete((DParam *)m->p[i]) == FALSE)
	return FALSE;
  return TRUE;
}

/* standard evaluation and maximisation functions */

/* kappaEstimate: (Mardia 1972, pp 122-123)
 *  gives an estimate of ML kappa within ~ 0.01 relative error of A^{-1}(R)
 *      |  1/6*r*(12+6*r^2+5*r^4), r<0.45
 *  k = |  31.1282*r^3-47.2724*r^2+26.9889*r-4.3941, 0.45<=r<=0.8
 *      |  1/(2*(1-r)-(1-r)^2-(1-r)^3), r>0.8
 */
Real kappaEstimate(Real r)
{ assert(r>=0.0&&r<=1.0);
  return (r<0.45)?r*(2.0+r*r*(1.0+5.0/6.0*r*r)):
  (r<=0.8)?((31.1282*r-47.2724)*r+26.9889)*r-4.3941:
  /*r<=1.0*/ 1.0/((1.0-r)*r*(3.0-r));}

Real logGauss(Real x, void *param)
{ Param *p = (Param *)param;
  assert(p->sigma>=MIN_STD_DEV);
  x -= p->mu;
  return (-0.5*x*x/(p->sigma*p->sigma))-my_log(p->sigma*SQRT_2PI);}

/* logVonMises -
 *  as per Mardia, K. V. "Statistics of Directional Data", 1972.  p 57
 */
Real logVonMises(Real x, void *param)
{ VMParam *p = (VMParam *)param;
  assert(p->kappa>=0.0);
  if(abs(x - PI) < 1e-10)  // PI -> -PI
	x = -PI;
  assert(p->mean>=-PI&&p->mean<PI);
  assert(x>=-PI&&x< PI);	/* wear goggles */
  x -= p->mean;
  return p->kappa*cos(x)-LOG_2PI-lbessi0(p->kappa);}

Real logDiscrete(Real x, void *param){ 
  DParam *p = (DParam *)param;
  int i = (int)round(x);
  assert(i>=0&&i<p->kk);
  return my_log(p->p[i]);
}

int maxGauss(void *param, Real **x, RVec *weight, int ll, Real log_D,
	     Real *postpC, int c, int *c_ls,int endmode)
{ int l, t, tt, Sc;
  Real mom1 = 0.0, mom2 = 0.0, scale = 0.0, *w;
  Param *p = (Param *)param;
  Real old_mu = p->mu, old_sigma = p->sigma;
  Real D = (postpC==NULL?0.0:my_exp(log_D)), postpc;
  assert(c>=0&&c_ls);
  /* Estimation for mu */
  for (l = 0; l<ll; l++) {
    if (c_ls[l]!=c&&postpC==NULL) continue;
    w = VECTOR(weight[l]);
    tt = VLENGTH(weight[l])-endmode;
    Sc = (postpC==NULL||c==c_ls[l])?1:0;
    postpc = postpC==NULL?0.0:my_exp(postpC[l]);
    for (t = 0; t<tt; t++) {
      mom1 += w[t]*(Sc-postpc)*x[l][t] + D*old_mu;
      scale += w[t]*(Sc-postpc) + D;
    }
  }

  if (fabs(scale)>1e-50) {
    mom1 /= scale;
    /* Estimation for sigma */
    for (l = 0; l<ll; l++) {
      if (c_ls[l]!=c&&postpC==NULL) continue;
      w = VECTOR(weight[l]);
      tt = VLENGTH(weight[l])-endmode;
      Sc = (postpC==NULL||c==c_ls[l])?1:0;
      postpc = postpC==NULL?0.0:my_exp(postpC[l]);
      for (t = 0; t<tt; t++) 
	mom2 += w[t]*(Sc-postpc)*(x[l][t]-mom1)*(x[l][t]-mom1) 
	  + D*(old_sigma*old_sigma+(old_mu-mom1)*(old_mu-mom1));
    }
    mom2 /= scale;
    if (mom2<-CORRECTION_EPS)
      return FALSE;
    if (mom2<SQR(MIN_STD_DEV)) {
      fprintf(stderr, "maxGauss(): Replacing variance estimate %g with %g\n",
	      mom2, SQR(MIN_STD_DEV));
      mom2 = SQR(MIN_STD_DEV);
    }
    p->mu = mom1;
    p->sigma = sqrt(mom2);
  }
  else
    fprintf(stderr, "maxGauss(): Sum of weights == 0.0\n");

  return TRUE;
}

/* maxVonMises -
 *  as per Mardia, K. V. "Statistics of Directional Data", 1972.  p26, p122
 */
int maxVonMises(void *param, Real **x, RVec *weight, int ll, Real log_D,
		Real *postpC, int c, int *c_ls, int endmode)
{ int i, l, t, tt, Sc;
  Real sinx = 0.0, cosx = 0.0, rx, scale = 0.0, k0, k, a0, a, factor, *w;
  VMParam *p = (VMParam *)param;
  enum training_mode train_mode = (postpC == NULL) ? HMM_ML: HMM_DT;
  Real D = (train_mode == HMM_ML? 0.0: my_exp(log_D)), postpc;
  Real old_mean = p->mean, old_kappa = p->kappa, A_old_kappa;
  A_old_kappa = my_exp(lbessi1(old_kappa)-lbessi0(old_kappa));
  assert(c>=0&&c_ls!=NULL);
  assert(A_old_kappa < 1.0+1e-6);  /* A_old_kappa should be no larger than 1.0 */

  for (l = 0; l<ll; l++){ 
    if(c_ls[l]!=c&&train_mode==HMM_ML) continue;
    w = VECTOR(weight[l]);
    tt = VLENGTH(weight[l])-endmode;
    Sc = (train_mode==HMM_ML||c==c_ls[l])?1:0;
    postpc = (train_mode==HMM_ML?0.0:my_exp(postpC[l]));
    for (t = 0; t<tt; t++){
      if(abs(x[l][t] - PI) < 1e-10)
	x[l][t] = -PI;
      assert(x[l][t] < PI && x[l][t] >= -PI);  // x in [-PI, PI)
      sinx += sin(x[l][t])*w[t]*(Sc-postpc) + D*A_old_kappa*sin(old_mean);
      cosx += cos(x[l][t])*w[t]*(Sc-postpc) + D*A_old_kappa*cos(old_mean);
      scale += w[t]*(Sc-postpc) + D;
    }
  }
  if (fabs(scale)>1e-6)		/* wear goggles */
  { sinx /= scale;
    cosx /= scale;
    assert(sinx < 1.0+1e-6 && cosx < 1.0+1e-6);   /* sinx and cosx should never be larger than 1.0 */
    rx = sqrt(sinx*sinx+cosx*cosx);
    p->mean = my_atan2(sinx, cosx);
    if (abs(p->mean - PI) < 1e-10) p->mean = -PI; /* wear goggles */
    assert(p->mean>=-PI&&p->mean<PI);
    /* It should never be the case that rx>1.0. But for some reason this */
    /* happens sometimes. And it happens by a large margin, i.e. rx=1.068, */
    /* that cannot be attributed simply to roundoff.  */
    if (fabs(rx-1.0)<1e-6||rx>1.0)
      { fprintf(stderr, "maxVonMises(): Setting kappa to INFINITY as rx (%g) > 1.0",rx);
	p->kappa = INFINITY; }
    else{
      /* estimating kappa */
      g_rx = rx;
      /* initial estimate of kappa */
      k = (k0 = kappaEstimate(rx));
      a = (a0 = vonMisesOpt(k));
      factor = (a>0.0)?-0.02:0.02;
      /* bracketing root of A(k)-R */
      i = 0;
      while (a*a0>0.0){
	assert(i<10);
	k0 = k;
	a0 = a;
	k = k0*(1.0+factor*pow(2.0, MIN(i, 5)));
	i++;
	a = vonMisesOpt(k);
      }
      p->kappa = zriddr(vonMisesOpt, k0, k, g_vonMisesTol);
    
      if(p->kappa < 0.0) return FALSE;
    }
    if (p->kappa>MAX_KAPPA)
      { fprintf(stderr, "maxVonMises(): Replacing kappa estimate %g with %g\n",
		p->kappa, MAX_KAPPA);
      p->kappa = MAX_KAPPA;
    }
  }
  else
    fprintf(stderr, "maxVonMises(): Sum of weights == 0\n");
  return TRUE;
}

/* vonMisesOpt - called by zriddr to evaluate f(k) = A(k)-r */
float vonMisesOpt(float k) {return my_exp(lbessi1(k)-lbessi0(k))-g_rx;}

int maxDiscrete(void *param, Real **x, RVec *weight, int ll, Real log_D,
		Real *postpC, int c, int *c_ls, int endmode)
{ DParam *p = (DParam *)param;
  int l, t, tt, k, Sc;
  Real scale = 0.0, *w, *dtf = safe_malloc(p->kk * sizeof *dtf);
  DParam *old_p = safe_malloc(sizeof *old_p);
  enum training_mode train_mode = (postpC == NULL) ? HMM_ML: HMM_DT;
  Real D = (train_mode == HMM_ML? 0.0: my_exp(log_D)), postpc;
  
  assert(c>=0&&c_ls!=NULL);
  for (k = 0; k<p->kk; k++) {
    old_p->p[k] = p->p[k];
    p->p[k] = 0.0;
  }
  for (l = 0; l<ll; l++) {
    if (c_ls[l]!=c&&train_mode==HMM_ML) continue;
    w = VECTOR(weight[l]);
    tt = VLENGTH(weight[l])-endmode;
    Sc = (train_mode==HMM_ML||c == c_ls[l])?1:0;
    postpc = train_mode==HMM_ML?0.0:my_exp(postpC[l]);
    for (k = 0; k<p->kk; k++) dtf[k] = 0.0;
    for (t = 0; t<tt; t++) {
      k = (int)round(x[l][t]);
      assert(k>=0&&k<p->kk);
      dtf[k] += w[t]*(Sc-postpc);
    }
    for (k = 0; k<p->kk; k++) {
      /* This may be negative */
      p->p[k] += dtf[k] + tt*D*old_p->p[k];
      scale += dtf[k] + tt*D*old_p->p[k];
    }
  }
  free(old_p);
  free(dtf);
  if (scale != 0) {
    for (k = 0; k<p->kk; k++) {
      if (p->p[k]/scale < 0.0)
	return FALSE;
      p->p[k] /= scale;
    }
  }
  else{
    /* Maybe just an unreachable state; do nothing*/
  }
  return TRUE;
}

int normalizeDiscrete(DParam *p){
  int k;
  Real scale = 0;
  for (k = 0; k < p->kk; k ++)
    scale += p->p[k];
  if (scale != 0.0) {
    for (k = 0; k < p->kk; k++) {
      if (p->p[k] / scale < -1e-50){
	printf("normalizeDiscrete: error\n");
	return FALSE;
      }
      p->p[k] /= scale;
    }
  }
  else{ 
    /* Maybe just an unreachable state; do nothing*/
  }
  return TRUE;
}

/* accessor functions */

FeatType getFeatType(Ffm *m, int i)
{ assert(i>=0&&i<m->ii);
  return m->ft[i];}

void *getFeatInfo(Ffm *m, int i)
{ assert(i>=0&&i<m->ii);
  return m->fi[i];}

void *getParam(Ffm *m, int i)
{ assert(i>=0&&i<m->ii);
  return m->p[i];}

int getFeatNum(Ffm *m) {return m->ii;}

Real getInitialSigma(void) {return g_initialSigma;}

void setInitialSigma(Real x)
{ assert(x>0.0);
  g_initialSigma = x;}

/* setup functions */

void randomiseParams(Ffm *m)
{ int i, j;
  Real s;
  for (i = 0; i<m->ii; i++)
  { switch (m->ft[i])
    { case FT_CONTINUOUS:
	s = ((struct ContFI *)m->fi[i])->initialSigma;
	((Param *)m->p[i])->mu = sqrt(s)*rand_gaussian();
	((Param *)m->p[i])->sigma = s;
      break;
      case FT_RADIAL:
	((VMParam *)m->p[i])->mean = 2.0*PI*RANDOM-PI;
	((VMParam *)m->p[i])->kappa = 3.0*PI;
      break;
      case FT_DISCRETE:
      { double scale = 0.0;
	for (j = 0; j<((DParam *)m->p[i])->kk; j++)
	  { ((DParam *)m->p[i])->p[j] = RANDOM;
	    scale += ((DParam *)m->p[i])->p[j]; }
	for (j = 0; j<((DParam *)m->p[i])->kk; j++)
	  ((DParam *)m->p[i])->p[j] /= scale;
	break;}
      case FT_OTHER:
      break;
      default:
      panic("randomizeParams(): Unrecognised feature type: %d", m->ft[i]);}}}

void constantParams(Ffm *m)
{ int i, j;
  Real s;
  for (i = 0; i < m->ii; i++)
  { switch (m->ft[i])
    { case FT_CONTINUOUS:
	s = ((struct ContFI *)m->fi[i])->initialSigma;
	((Param *)m->p[i])->mu = sqrt(s);
	((Param *)m->p[i])->sigma = s;
      break;
      case FT_RADIAL:
	((VMParam *)m->p[i])->mean = 0;
	((VMParam *)m->p[i])->kappa = 3.0*PI;
      break;
      case FT_DISCRETE:
      { for (j = 0; j < ((DParam *)m->p[i])->kk; j++)
	  ((DParam *)m->p[i])->p[j] = 1.0 / ((DParam *)m->p[i])->kk;
	break;}
      case FT_OTHER:
      break;
      default:
      panic("constantParams(): Unrecognised feature type: %d", m->ft[i]);}}}

void noiseParams(Ffm *m, Real delta){
  int i, j;
  Real scale;
  for (i = 0; i < m->ii; i ++){ 
    switch (m->ft[i]){ 
    case FT_CONTINUOUS:
      ((Param *)m->p[i])->mu *= delta * (RANDOM - 1) + 1;
      ((Param *)m->p[i])->sigma *= delta * (RANDOM - 1) + 1;
      break;
    case FT_RADIAL:
      ((VMParam *)m->p[i])->mean *= delta * (RANDOM - 1) + 1;
      ((VMParam *)m->p[i])->kappa *= delta * (RANDOM - 1) + 1;
      break;
    case FT_DISCRETE:{
      scale = 0;
      for (j = 0; j < ((DParam *)m->p[i])->kk; j++){ 
	((DParam *)m->p[i])->p[j] += delta * RANDOM;
	scale += ((DParam *)m->p[i])->p[j]; 
      }
      for (j = 0; j < ((DParam *)m->p[i])->kk; j++)
	((DParam *)m->p[i])->p[j] /= scale;
      break;
    }
    case FT_OTHER:
      break;
    default:
      panic("randomizeParams(): Unrecognised feature type: %d", m->ft[i]);
    }
  }
}

void smoothParams(Ffm *m, Real eps){
  int i, j;
  DParam *p;
  Real scale;
  for (i = 0; i < m->ii; i ++){ 
    switch (m->ft[i]){ 
    case FT_DISCRETE:{
      p = (DParam *)m->p[i];
      scale = 0;
      for (j = 0; j < p->kk; j++){
	p->p[j] += eps;
	scale += p->p[j];
      }
      for (j = 0; j < p->kk; j++)
	p->p[j] /= scale;
    }
    default:;
    }
  }
}

void setFeatType(Ffm *m, int i, FeatType ft, void *fi)
{ assert(i>=0&&i<m->ii);
  m->ft[i] = ft;
  if(m->fi[i]) free(m->fi[i]);
  m->fi[i] = fi;
  switch (ft)
  { case FT_CONTINUOUS:
    m->mf[i] = maxGauss;
    m->lf[i] = logGauss;
    if (m->fi[i]==NULL)
      { m->fi[i] = safe_malloc(sizeof *(m->fi[i]));
      ((struct ContFI *)m->fi[i])->initialSigma = g_initialSigma;}
    if (m->p[i]==NULL) m->p[i] = safe_malloc(sizeof(Param));
    break;
    case FT_RADIAL:
    m->mf[i] = maxVonMises;
    m->lf[i] = logVonMises;
    if (m->p[i]==NULL) m->p[i] = safe_malloc(sizeof(VMParam));
    break;
    case FT_DISCRETE:
    m->mf[i] = maxDiscrete;
    m->lf[i] = logDiscrete;
    if (m->p[i]==NULL) m->p[i] = safe_malloc(sizeof(DParam));
    break;
    case FT_OTHER:
    break;
    default:
    panic("setFeatType(): Unrecognised feature type: %d", ft);}
  return;}

void setMaxFunc(Ffm *m, int i, MaxF f)
{ assert(i>=0&&i<m->ii);
  m->mf[i] = f;}

void setLogLikeFunc(Ffm *m, int i, LogLikeF f)
{ assert(i>=0&&i<m->ii);
  m->lf[i] = f;}

/* setParam -
 *  Sets the param value to the new value and returns a pointer to the
 *  old value so that the user can free the associated memory.
 */
void *setParam(Ffm *m, int i, void *p)
{ void *old;
  assert(i>=0&&i<m->ii);
  old = m->p[i];
  m->p[i] = p;
  return old;}

/* model evaluation and maximisation functions */

void FFM_logL(Ffm *m, RVec logL, RMat data)
{ int i, t, tt = COLUMNS(data), ii = m->ii;
  Real **x = MATRIX(data), *l = VECTOR(logL);
  void **p = m->p;
  assert(tt==VLENGTH(logL));
  assert(ROWS(data)==ii);
  /* logL[t] = sum(i = 1->ii, logLike(x[t][i], modelParams[i]) */
  for (t = 0; t<tt; t++) {
    l[t] = 0.0;
    for (i = 0; i<ii; i++) l[t] += (m->lf[i])(x[i][t], p[i]);
  }
}

/* Only calculate for a single vector */
Real FFM_likelihood_one(Ffm *m, RVec data, Real *x){
  int i, ii = m->ii, j, _inf_idx = 0;
  void **p = m->p;
  Real tot = 0, l[ii], *z = VECTOR(data);
  assert(VLENGTH(data) == ii);
  assert(ii < INTEGER_BITS);
  for (i = 0; i < ii; i ++){
    /* Haonan: assume the distritbuion is DISCRETE. 
       We should call m->lf[i](z[i], p[i]) instead
     */
    j = (int)round(z[i]);
    assert(j >= 0 && j < ((DParam *)(p[i]))->kk);
    l[i] = my_log(((DParam *)(p[i]))->p[j]);
    if (l[i] == NEGATIVE_INFINITY)
      _inf_idx |= (1 << i);
    else 
      tot += l[i];
    if (x) x[i] = NEGATIVE_INFINITY;
  }
  if (x){
    for (i = 0; i < ii; i ++){
      if ((_inf_idx & ~(1 << i)) == 0){ /* if no other l[i'] = -inf */
	x[i] = tot;
	if (!_inf_idx) x[i] -= l[i];
      }
    }
  }
  if (_inf_idx)
    tot = NEGATIVE_INFINITY;
  return tot;
}

/* FFM_logL(m->ffm[u], logL[u], data, scores[u]) */
void FFM_logL_with_box_scores(Ffm *m, RVec logL, RMat data,Real* scores,int isEnd, int endmode)
{ int i, t, tt = COLUMNS(data), ii = m->ii;
  Real **x = MATRIX(data), *l = VECTOR(logL);
  void **p = m->p;
  if (endmode)
    assert(tt+1==VLENGTH(logL));
  else
    assert(tt==VLENGTH(logL));

  assert(ROWS(data)==ii);
  /* logL[t] = sum(i = 1->ii, logLike(x[t][i], modelParams[i]) */
  if (endmode)
    {
      if (!isEnd) {  // if the state is not an end state, then it can't match the synthetic data point
	for (t = 0; t<tt; t++) {
	  l[t] = 0.0;
	  for (i = 0; i<ii; i++) 
	    { 
	      l[t] += (m->lf[i])(x[i][t], p[i]);
	    }
	  l[t] += my_log(scores[t]); /* pretend the score is the log likelihood for a new feature*/
	}
	l[tt]=NEGATIVE_INFINITY;}
      else { // if the state is an end state, then it can only match the synthetic data point
	for (t=0; t<tt; t++) {
	  l[t]=NEGATIVE_INFINITY;}
	l[tt]=0;}}
  else
    {
      for (t = 0; t<tt; t++) {
	l[t] = 0.0;
	for (i = 0; i<ii; i++) l[t] += (m->lf[i])(x[i][t], p[i]);
	l[t] += my_log(scores[t]); /* pretend the score is the log likelihood for a new feature*/
      }}
}

/* FFM_maximise -
 *  Given a FFM, feature vectors for a number of movies, and the
 *  responsibility of the model for each feature vector, this function
 *  maximises the parameter values of the FFM.
 */
int FFM_maximise(Ffm *m, RMat *data, RVec *weight, int ll, Real log_D,
		 Real *postpC, int c, int *c_ls, int endmode)
{ int i, l, ii = m->ii;
  static Real **x = NULL;
  static int last_ll = 0;
  if (ll>last_ll)
  { if (x!=NULL) free(x);
    x = safe_malloc(ll * sizeof *x);
    last_ll = ll;}
  /* For each kind of feature, first get its data in different training
     samples, and then use it to update the output model. */
  for (i = 0; i<ii; i++) {
    for (l = 0; l<ll; l++) x[l] = MATRIX(data[l])[i];
    if (!(m->mf[i](m->p[i], x, weight, ll, log_D, postpC, c, c_ls, endmode)))
      return FALSE;
  }
  return TRUE;
}


/* need something which determines which data models match which states */

/* Tam V'Nishlam Shevah L'El Borei Olam */
