#ifdef __cplusplus
extern "C" {
#endif
/*        Generated by TAPENADE     (INRIA, Ecuador team)
    Tapenade 3.10 (r5717) - 30 Jul 2015 16:03
*/
#include <stdlib.h>
#include <math.h>
#include "gmm_b-all.h"
#include "ADFirstAidKit/adBuffer.h"

/*
  Differentiation of arr_max in reverse (adjoint) mode:
   gradient     of useful results: *x arr_max
   with respect to varying inputs: *x
   Plus diff mem management of: x:in
*/
void arr_max_b(int n, double *x, double *xb, double arr_maxb) {
  double m;
  double mb;
  int i;
  int branch;
  double arr_max;
  m = x[0];
  for (i = 1; i < n; ++i)
    if (x[i] > m) {
      m = x[i];
      pushcontrol1b(1);
    }
    else
      pushcontrol1b(0);
  mb = arr_maxb;
  for (i = n - 1; i > 0; --i) {
    popcontrol1b(&branch);
    if (branch != 0) {
      xb[i] = xb[i] + mb;
      mb = 0.0;
    }
  }
  xb[0] = xb[0] + mb;
}

/*
  Differentiation of logsumexp in reverse (adjoint) mode:
   gradient     of useful results: *x logsumexp
   with respect to varying inputs: *x
   Plus diff mem management of: x:in
*/
double logsumexp_b(int n, double *x, double *xb, double logsumexpb) {
  int i;
  double mx, semx;
  double mxb, semxb;
  double logsumexp;
  double tempb;
  mx = arr_max(n, x);
  semx = 0.;
  for (i = 0; i < n; ++i)
    semx = semx + exp(x[i] - mx);
  semxb = logsumexpb / semx;
  mxb = logsumexpb;
  for (i = n - 1; i > -1; --i) {
    tempb = exp(x[i] - mx)*semxb;
    xb[i] = xb[i] + tempb;
    mxb = mxb - tempb;
  }
  arr_max_b(n, x, xb, mxb);
  return log(semx) + mx;
}

/*
  Differentiation of sqnorm in reverse (adjoint) mode:
   gradient     of useful results: *x sqnorm
   with respect to varying inputs: *x
   Plus diff mem management of: x:in
*/
double sqnorm_b(int d, double *x, double *xb, double sqnormb) {
    int i;
    double out;
    double outb;
    double sqnorm;
    outb = sqnormb;
    out = 0.;
    for (i = d - 1; i > -1; --i)
    {
      out = out + x[i] * x[i];
      xb[i] = xb[i] + 2 * x[i] * outb;
    }
    return out;
}

/*
Differentiation of log_wishart_prior in reverse (adjoint) mode:
gradient     of useful results: log_wishart_prior *icf
with respect to varying inputs: *Qdiags *sum_qs *icf
Plus diff mem management of: Qdiags:in sum_qs:in icf:in
*/
// p dim
// k number of components
// wishart parameters
// icf  (p*(p+1)/2)*k parametrizing lower triangular 
//					square roots of inverse covariances log of diagonal 
//					is first p params
double log_wishart_prior_b(int p, int k, Wishart wishart, double *sum_qs, double
  *sum_qsb, double *Qdiags, double *Qdiagsb, double *icf, double *icfb,
  double log_wishart_priorb) {
  int n, ik, icf_sz;
  double out, C, frobenius;
  double outb, frobeniusb;
  float arg1;
  double result1;
  double result1b;
  int arg10;
  double result2;
  double result2b;
  double log_wishart_prior, tmp;
  icf_sz = p*(p + 1) / 2;
  n = p + wishart.m + 1;
  C = n*p*(log(wishart.gamma) - 0.5*log(2));// - log_gamma_distrib(0.5*n, p);
  out = 0.;
  outb = log_wishart_priorb;
  *sum_qsb = 0.0;
  for (ik = k - 1; ik > -1; --ik) {
    tmp = wishart.gamma*wishart.gamma*0.5;
    frobeniusb = tmp*outb;
    sum_qsb[ik] = sum_qsb[ik] - wishart.m*outb;
    result1b = frobeniusb;
    result2b = frobeniusb;
    arg10 = icf_sz - p;
    result1 = sqnorm_b(arg10, &icf[ik*icf_sz + p], &icfb[ik*icf_sz + p], result2b);
    result2 = sqnorm_b(p, &Qdiags[ik*p], &Qdiagsb[ik*p], result1b);
    frobenius = result1 + result2;
    out = out + tmp * frobenius - wishart.m * sum_qs[ik];
  }
  return out - k*C;
}

/*
  Differentiation of preprocess_qs in reverse (adjoint) mode:
   gradient     of useful results: *Qdiags *sum_qs *icf
   with respect to varying inputs: *icf
   Plus diff mem management of: Qdiags:in sum_qs:in icf:in
*/
void preprocess_qs_b(int d, int k, double *icf, double *icfb, double *sum_qs, 
        double *sum_qsb, double *Qdiags, double *Qdiagsb) {
    int icf_sz, ik, id;
    double q;
    double qb;
    icf_sz = d*(d+1)/2;
    for (ik = k-1; ik > -1; --ik) {
        for (id = d-1; id > -1; --id) {
            q = icf[ik*icf_sz + id];
            qb = exp(q)*Qdiagsb[ik*d+id];
            Qdiagsb[ik*d + id] = 0.0;
            qb = qb + sum_qsb[ik];
            icfb[ik*icf_sz + id] = icfb[ik*icf_sz + id] + qb;
        }
        sum_qsb[ik] = 0.0;
    }
}

/*
  Differentiation of Qtimesx in reverse (adjoint) mode:
   gradient     of useful results: *out *Qdiag *x *ltri
   with respect to varying inputs: *out *Qdiag *x *ltri
   Plus diff mem management of: out:in Qdiag:in x:in ltri:in
*/
void Qtimesx_b(int d, double *Qdiag, double *Qdiagb, double *ltri, double *
  ltrib, double *x, double *xb, double *out, double *outb) {
  // strictly lower triangular part
  int id, i, j, Lparamsidx;
  int adFrom;
  Lparamsidx = 0;
  for (i = 0; i < d; ++i) {
    adFrom = i + 1;
    for (j = adFrom; j < d; ++j) {
      pushinteger4(Lparamsidx);
      Lparamsidx = Lparamsidx + 1;
    }
    pushinteger4(adFrom);
  }
  for (i = d - 1; i > -1; --i) {
    popinteger4(&adFrom);
    for (j = d - 1; j > adFrom - 1; --j) {
      popinteger4(&Lparamsidx);
      ltrib[Lparamsidx] = ltrib[Lparamsidx] + x[i] * outb[j];
      xb[i] = xb[i] + ltri[Lparamsidx] * outb[j];
    }
  }
  for (id = d - 1; id > -1; --id) {
    Qdiagb[id] = Qdiagb[id] + x[id] * outb[id];
    xb[id] = xb[id] + Qdiag[id] * outb[id];
    outb[id] = 0.0;
  }
}

/*
  Differentiation of subtract in reverse (adjoint) mode:
   gradient     of useful results: *out *y
   with respect to varying inputs: *out *y
   Plus diff mem management of: out:in y:in
*/
// out = a - b
void subtract_b(int d, double *x, double *y, double *yb, double *out, double *
        outb) {
    int id;
    for (id = d-1; id > -1; --id) {
        yb[id] = yb[id] - outb[id];
        outb[id] = 0.0;
    }
}

/*
  Differentiation of gmm_objective in reverse (adjoint) mode:
   gradient     of useful results: *err
   with respect to varying inputs: *err *means *icf *alphas
   RW status of diff variables: *err:in-zero *means:out *icf:out
                *alphas:out
   Plus diff mem management of: err:in means:in icf:in alphas:in
*/
void gmm_objective_b(int d, int k, int n, double *alphas, double *alphasb,
  double *means, double *meansb, double *icf, double *icfb, double *x,
  Wishart wishart, double *err, double *errb) {
  int ik, ix, icf_sz, i;
  double *main_term, *sum_qs, *Qdiags, *xcentered, *Qxcentered;
  double *main_termb, *sum_qsb, *Qdiagsb, *xcenteredb, *Qxcenteredb;
  double slse, lse_alphas, CONSTANT, log_wish_prior_res;
  double slseb, lse_alphasb;
  double result1;
  double result1b;
  // CONSTANT = -n*d*0.5*log(2 * PI);
  icf_sz = d*(d + 1) / 2;

  main_termb = (double *)malloc(k*sizeof(double));
  main_term = (double *)malloc(k*sizeof(double));
  sum_qsb = (double *)malloc(k*sizeof(double));
  sum_qs = (double *)malloc(k*sizeof(double));
  Qdiagsb = (double *)malloc(d*k*sizeof(double));
  Qdiags = (double *)malloc(d*k*sizeof(double));
  xcenteredb = (double *)malloc(d*sizeof(double));
  xcentered = (double *)malloc(d*sizeof(double));
  Qxcenteredb = (double *)malloc(d*sizeof(double));
  Qxcentered = (double *)malloc(d*sizeof(double));

  memset(alphasb, 0, k * sizeof(double));
  memset(meansb, 0, d * k * sizeof(double));
  memset(icfb, 0, icf_sz * k * sizeof(double));
  memset(sum_qsb, 0, k * sizeof(double));
  memset(Qdiagsb, 0, d * k * sizeof(double));
  memset(main_termb, 0, k * sizeof(double));
  memset(xcenteredb, 0, d * sizeof(double));
  memset(Qxcenteredb, 0, d * sizeof(double));

  preprocess_qs(d, k, icf, sum_qs, Qdiags);
  slse = 0.;
  for (ix = 0; ix < n; ++ix)
    for (ik = 0; ik < k; ++ik) {
      for (i = 0; i < d; i++)
        pushreal8(xcentered[i]);
      subtract(d, &x[ix*d], &means[ik*d], xcentered);
      for (i = 0; i < d; i++)
        pushreal8(Qxcentered[i]);
      Qtimesx(d, &Qdiags[ik*d], &icf[ik*icf_sz + d], xcentered,
        Qxcentered);
      result1 = sqnorm(d, Qxcentered);
      pushreal8(main_term[ik]);
      main_term[ik] = alphas[ik] + sum_qs[ik] - 0.5*result1;
    }
  result1b = *errb;
  log_wish_prior_res = log_wishart_prior_b(d, k, wishart, sum_qs, sum_qsb, Qdiags, Qdiagsb, icf,
    icfb, result1b);
  slseb = *errb;
  lse_alphasb = -(n*(*errb));
  lse_alphas = logsumexp_b(k, alphas, alphasb, lse_alphasb);
  for (ix = n - 1; ix > -1; --ix) {
    result1b = slseb;
    slse = slse + logsumexp_b(k, main_term, main_termb, result1b);
    for (ik = k - 1; ik > -1; --ik) {
      popreal8(&main_term[ik]);
      alphasb[ik] = alphasb[ik] + main_termb[ik];
      sum_qsb[ik] = sum_qsb[ik] + main_termb[ik];
      result1b = -(0.5*main_termb[ik]);
      main_termb[ik] = 0.0;
      sqnorm_b(d, Qxcentered, Qxcenteredb, result1b);
      for (i = d - 1; i > -1; i--)
        popreal8(&Qxcentered[i]);
      Qtimesx_b(d, &Qdiags[ik*d], &Qdiagsb[ik*d], &icf[ik*icf_sz + d], &
        icfb[ik*icf_sz + d], xcentered, xcenteredb, Qxcentered,
        Qxcenteredb);
      for (i = d - 1; i > -1; i--)
        popreal8(&xcentered[i]);
      subtract_b(d, &x[ix*d], &means[ik*d], &meansb[ik*d], xcentered,
        xcenteredb);
    }
  }
  preprocess_qs_b(d, k, icf, icfb, sum_qs, sum_qsb, Qdiags, Qdiagsb);
  free(Qxcentered);
  free(Qxcenteredb);
  free(xcentered);
  free(xcenteredb);
  free(Qdiags);
  free(Qdiagsb);
  free(sum_qs);
  free(sum_qsb);
  free(main_term);
  free(main_termb);
  *err = /*CONSTANT + */ slse - n*lse_alphas + log_wish_prior_res;
  *errb = 0.0;
}

#ifdef __cplusplus
}
#endif