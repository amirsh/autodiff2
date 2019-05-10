#ifndef TEST_TAPENADE_GMM
#define TEST_TAPENADE_GMM

// #include "../shared/defs.h"

#include <stdlib.h>
#include <math.h>

inline double arr_max(int n, double* x)
{
  double m;
  int i;

  m = x[0];
  for (i = 1; i < n; i++)
  {
    if (x[i] > m)
      m = x[i];
  }
  return m;
}

inline double logsumexp(int n, double* x)
{
  int i;
  double mx, semx;

  mx = arr_max(n, x);
  semx = 0.;
  for (i = 0; i < n; i++)
  {
    semx += exp(x[i] - mx);
  }
  return log(semx) + mx;
}

inline double sqnorm(int d,
  double* x)
{
  int i;
  double out;

  out = 0;
  for (i = 0; i < d; i++)
  {
    out += x[i] * x[i];
  }
  return out;
}

inline double log_wishart_prior(int p, int k, 
  double wishart_gamma, 
  double wishart_m,
  double *sum_qs,
  double *Qdiags,
  double* icf)
{
  int n, ik, icf_sz;
  double out, C, frobenius;

  icf_sz = p*(p + 1) / 2;

  out = 0;
  for (ik = 0; ik < k; ik++)
  {
    frobenius = sqnorm(p, &Qdiags[ik*p]) + sqnorm(icf_sz - p, &icf[ik*icf_sz + p]);
    out = out + 0.5 * frobenius;
  }

  // the last bit is here so that tapenade would recognize that means and inv_cov_factors are variables
  return out /* - k*C + (Qdiags[0] - Qdiags[0]) + (icf[0] - icf[0]) */;
}

inline void preprocess_qs(int d, int k,
  double* icf,
  double* sum_qs,
  double* Qdiags)
{
  int icf_sz, ik, id;
  double q;

  icf_sz = d*(d + 1) / 2;
  for (ik = 0; ik < k; ik++)
  {
    sum_qs[ik] = 0.;
    for (id = 0; id < d; id++)
    {
      q = icf[ik*icf_sz + id];
      sum_qs[ik] += q;
      Qdiags[ik*d + id] = exp(q);
    }
  }
}

inline void Qtimesx(int d,
  double* Qdiag,
  double* ltri, // strictly lower triangular part
  double* x,
  double* out)
{
  int id, i, j, Lparamsidx;

  for (id = 0; id < d; id++)
    out[id] = Qdiag[id] * x[id];

  Lparamsidx = 0;
  for (i = 0; i < d; i++)
  {
    for (j = i + 1; j < d; j++)
    {
      out[j] = out[j] + ltri[Lparamsidx] * x[i];
      Lparamsidx = Lparamsidx + 1;
    }
  }
}

// out = a - b
inline void subtract(int d,
  double* x,
  double* y,
  double* out)
{
  int id;
  for (id = 0; id < d; id++)
  {
    out[id] = x[id] - y[id];
  }
}

#endif // TEST_TAPENADE_GMM