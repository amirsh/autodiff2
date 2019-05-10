#include "gmm_all.h"
#include "gmm.h"
#include "gmm_d-all.h"

void gmm_objective(int d, int k, int n,
  double* alphas, 
  double* means,
  double* icf, 
  double* x,
  double wishart_gamma, 
  double wishart_m,
  double *err)
{
  int ik, ix, icf_sz;
  double *main_term, *sum_qs, *Qdiags, *xcentered, *Qxcentered;
  double slse, lse_alphas, CONSTANT;
  // CONSTANT = -n*d*0.5*log(2 * PI);
  icf_sz = d*(d + 1) / 2;

  main_term = (double *)malloc(k*sizeof(double));
  sum_qs = (double *)malloc(k*sizeof(double));
  Qdiags = (double *)malloc(d*k*sizeof(double));
  xcentered = (double *)malloc(d*sizeof(double));
  Qxcentered = (double *)malloc(d*sizeof(double));

  preprocess_qs(d, k, icf, sum_qs, Qdiags);

  slse = 0.;
  for (ix = 0; ix < n; ix++)
  {
    for (ik = 0; ik < k; ik++)
    {
      subtract(d, &x[ix*d], &means[ik*d], xcentered);
      Qtimesx(d, &Qdiags[ik*d], &icf[ik*icf_sz + d], xcentered, Qxcentered);

      main_term[ik] = alphas[ik] + sum_qs[ik] - 0.5*sqnorm(d, Qxcentered);
    }
    slse = slse + logsumexp(k, main_term);
  }
  free(main_term);
  free(xcentered);
  free(Qxcentered);

  lse_alphas = logsumexp(k, alphas);
  *err = /*CONSTANT + */slse - n*lse_alphas;

  *err = *err + log_wishart_prior(d, k, wishart_gamma, wishart_m, sum_qs, Qdiags, icf);

  free(sum_qs);
  free(Qdiags);

  // this is here so that tapenade would recognize that means and inv_cov_factors are variables
  *err = *err /* + ((means[0] - means[0]) +
    (icf[0] - icf[0])) */;
}


/*
  Differentiation of gmm_objective in forward (tangent) mode:
   variations   of useful results: alloc(*Qxcentered) alloc(*xcentered)
                alloc(*Qdiags) alloc(*sum_qs) alloc(*main_term)
                *err
   with respect to varying inputs: alloc(*Qxcentered) alloc(*xcentered)
                alloc(*Qdiags) alloc(*sum_qs) alloc(*main_term)
                *err *x *means *icf *alphas
   RW status of diff variables: alloc(*Qxcentered):in-out alloc(*xcentered):in-out
                alloc(*Qdiags):in-out alloc(*sum_qs):in-out alloc(*main_term):in-out
                *err:in-out *x:in *means:in *icf:in *alphas:in
   Plus diff mem management of: err:in x:in means:in icf:in alphas:in
*/
void gmm_objective_d(int d, int k, int n, double *alphas, double *alphasd, 
        double *means, double *meansd, double *icf, double *icfd, double *x, 
        double *xd, double wishart_gamma, double wishart_m, double *err, 
        double *errd) {
    int ik, ix, icf_sz;
    double *main_term, *sum_qs, *Qdiags, *xcentered, *Qxcentered;
    double *main_termd, *sum_qsd, *Qdiagsd, *xcenteredd, *Qxcenteredd;
    double slse, lse_alphas, CONSTANT;
    double slsed, lse_alphasd;
    double result1;
    double result1d;
    int ii1;
    // CONSTANT = -n*d*0.5*log(2 * PI);
    icf_sz = d*(d+1)/2;
    sum_qsd = (double *)malloc(k*sizeof(double));
    for (ii1 = 0; ii1 < k; ++ii1)
        sum_qsd[ii1] = 0.0;
    sum_qs = (double *)malloc(k*sizeof(double));
    Qdiagsd = (double *)malloc(d*k*sizeof(double));
    for (ii1 = 0; ii1 < d*k; ++ii1)
        Qdiagsd[ii1] = 0.0;
    Qdiags = (double *)malloc(d*k*sizeof(double));
    preprocess_qs_d(d, k, icf, icfd, sum_qs, sum_qsd, Qdiags, Qdiagsd);
    #if defined HOIST
      main_termd = (double *)malloc(k*sizeof(double));
      for (ii1 = 0; ii1 < k; ++ii1)
          main_termd[ii1] = 0.0;
      main_term = (double *)malloc(k*sizeof(double));
      xcenteredd = (double *)malloc(d*sizeof(double));
      for (ii1 = 0; ii1 < d; ++ii1)
          xcenteredd[ii1] = 0.0;
      xcentered = (double *)malloc(d*sizeof(double));
      Qxcenteredd = (double *)malloc(d*sizeof(double));
      for (ii1 = 0; ii1 < d; ++ii1)
          Qxcenteredd[ii1] = 0.0;
      Qxcentered = (double *)malloc(d*sizeof(double));
    #endif
    slse = 0.;
    slsed = 0.0;
    for (ix = 0; ix < n; ++ix) {
        #if !defined HOIST
          main_termd = (double *)malloc(k*sizeof(double));
          for (ii1 = 0; ii1 < k; ++ii1)
              main_termd[ii1] = 0.0;
          main_term = (double *)malloc(k*sizeof(double));
          xcenteredd = (double *)malloc(d*sizeof(double));
          for (ii1 = 0; ii1 < d; ++ii1)
              xcenteredd[ii1] = 0.0;
          xcentered = (double *)malloc(d*sizeof(double));
          Qxcenteredd = (double *)malloc(d*sizeof(double));
          for (ii1 = 0; ii1 < d; ++ii1)
              Qxcenteredd[ii1] = 0.0;
          Qxcentered = (double *)malloc(d*sizeof(double));
        #endif
        for (ik = 0; ik < k; ++ik) {
            subtract_d(d, &x[ix*d], &xd[ix*d], &means[ik*d], &meansd[ik*d], 
                       xcentered, xcenteredd);
            Qtimesx_d(d, &Qdiags[ik*d], &Qdiagsd[ik*d], &icf[ik*icf_sz + d], &
                      icfd[ik*icf_sz + d], xcentered, xcenteredd, Qxcentered, 
                      Qxcenteredd);
            result1d = sqnorm_d(d, Qxcentered, Qxcenteredd, &result1);
            main_termd[ik] = alphasd[ik] + sum_qsd[ik] - 0.5*result1d;
            main_term[ik] = alphas[ik] + sum_qs[ik] - 0.5*result1;
        }
        result1d = logsumexp_d(k, main_term, main_termd, &result1);
        slsed = slsed + result1d;
        slse = slse + result1;
        #if !defined HOIST
          free(main_termd);
          free(main_term);
          free(xcenteredd);
          free(xcentered);
          free(Qxcenteredd);
          free(Qxcentered);
        #endif
    }
    #if defined HOIST
      free(main_termd);
      free(main_term);
      free(xcenteredd);
      free(xcentered);
      free(Qxcenteredd);
      free(Qxcentered);
    #endif
    lse_alphasd = logsumexp_d(k, alphas, alphasd, &lse_alphas);
    *errd = slsed - n*lse_alphasd;
    *err = slse - n*lse_alphas;
    /*CONSTANT + */
    result1d = log_wishart_prior_d(d, k, wishart_gamma, wishart_m, sum_qs, 
                                   sum_qsd, Qdiags, Qdiagsd, icf, icfd, &
                                   result1);
    *errd = *errd + result1d;
    *err = *err + result1;
    free(sum_qsd);
    free(sum_qs);
    free(Qdiagsd);
    free(Qdiags);
    // this is here so that tapenade would recognize that means and inv_cov_factors are variables
    *err = *err;
}

void gmm_init(int d_p, int k_p, int n_p){}