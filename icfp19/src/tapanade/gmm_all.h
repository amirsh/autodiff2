#pragma once
void gmm_objective_d(int d, int k, int n, double *alphas, double *alphasd, 
        double *means, double *meansd, double *icf, double *icfd, double *x, 
        double *xd, double wishart_gamma, double wishart_m, double *err, 
        double *errd);
void gmm_objective(int d, int k, int n,
  double* alphas, 
  double* means,
  double* icf, 
  double* x,
  double wishart_gamma, 
  double wishart_m,
  double *err);
void gmm_init(int d_p, int k_p, int n_p);