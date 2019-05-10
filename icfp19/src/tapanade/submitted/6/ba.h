// name of top routine:
// project
// dependent output variables:
// proj
// independent variables:
// 
#pragma once

#include <stdlib.h>
#include <math.h>
#include <float.h>


#define BA_NCAMPARAMS 11
#define BA_ROT_IDX 0
#define BA_C_IDX 3
#define BA_F_IDX 6
#define BA_X0_IDX 7
#define BA_RAD_IDX 9

inline double sqsum(int n, double *x)
{
  int i;
  double res;
  res = 0;
  for (i = 0; i < n; i++)
    res = res + x[i] * x[i];
  return res;
}

inline void cross(double *a, double *b, double *out)
{
  out[0] = a[1] * b[2] - a[2] * b[1];
  out[1] = a[2] * b[0] - a[0] * b[2];
  out[2] = a[0] * b[1] - a[1] * b[0];
}

inline void rodrigues_rotate_point(double *rot, double *pt, double *rotatedPt)
{
  int i;
  double sqtheta, theta, costheta, sintheta, theta_inverse,
    w[3], cross_[3], tmp;

  sqtheta = sqsum(3, rot);
  if (sqtheta != 0.)
  {
    theta = sqrt(sqtheta);
    costheta = cos(theta);
    sintheta = sin(theta);
    theta_inverse = 1.0 / theta;

    for (i = 0; i < 3; i++)
      w[i] = rot[i] * theta_inverse;

    cross(w, pt, cross_);

    tmp = (w[0] * pt[0] + w[1] * pt[1] + w[2] * pt[2]) *
      (1. - costheta);

    for (i = 0; i < 3; i++)
      rotatedPt[i] = pt[i] * costheta + cross_[i] * sintheta + w[i] * tmp;
  }else
  {
    cross(rot, pt, cross_);
    
    for (i = 0; i < 3; i++)
      rotatedPt[i] = pt[i] + cross_[i];
  }
}

inline void radial_distort(double *rad_params, double *proj)
{
  double rsq, L;
  rsq = sqsum(2, proj);
  L = 1 + rad_params[0] * rsq + rad_params[1] * rsq * rsq;
  proj[0] = proj[0] * L;
  proj[1] = proj[1] * L;
}

inline void project(double *cam, double *X, double *proj)
{
  int i;
  double *C;
  double Xo[3], Xcam[3];
  C = &cam[BA_C_IDX];

  for (i = 0; i < 3; i++)
    Xo[i] = X[i] - C[i];

  rodrigues_rotate_point(&cam[BA_ROT_IDX], Xo, Xcam);

  proj[0] = Xcam[0] / Xcam[2];
  proj[1] = Xcam[1] / Xcam[2];

  radial_distort(&cam[BA_RAD_IDX], proj);

  for (i = 0; i < 2; i++)
    proj[i] = proj[i] * cam[BA_F_IDX] + cam[BA_X0_IDX + i];
}
