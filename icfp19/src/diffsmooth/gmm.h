#include "types.h"

void gmm_init(int d_p, int k_p, int n_p);
void gmm_objective(int d, int k, int n,
  double* alphas, 
  double* means,
  double* icf, 
  double* x,
  double wishart_gamma, 
  double wishart_m,
  double *err);

number_t gmm_objective2(array_array_number_t x, array_number_t alphas, array_array_number_t means, array_array_number_t qs, array_array_number_t ls, number_t wishart_gamma, number_t wishart_m);
void gmm_objective_d(int d, int k, int n, double *alphas, double *alphasd, 
        double *means, double *meansd, double *icf, double *icfd, double *x, 
        double *xd, double wishart_gamma, double wishart_m, double *err, 
        double *errd);