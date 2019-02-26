#pragma once

#include <stdio.h>
#include <math.h>

#define BA_NCAMPARAMS 11
#define BA_ROT_IDX 0
#define BA_C_IDX 3
#define BA_F_IDX 6
#define BA_X0_IDX 7
#define BA_RAD_IDX 9

double sqsum(int n, double *x)
{
  int i;
  double res;
  res = 0;
  for (i = 0; i < n; i++)
    res = res + x[i] * x[i];
  return res;
}

void cross(double *a, double *b, double *out)
{
  out[0] = a[1] * b[2] - a[2] * b[1];
  out[1] = a[2] * b[0] - a[0] * b[2];
  out[2] = a[0] * b[1] - a[1] * b[0];
}

double dot_prod(int n, double *x, double *y) {
  double res = 0;
  for (int i = 0; i < n; i++)
    res += x[i] * y[i];
  return res;
}

void ba_rod_single(double *rot, double *pt, double *rotatedPt)
{
  int i;
  double sqtheta, theta, costheta, sintheta, theta_inverse, tmp;
  double *w = (double*)malloc(sizeof(double) * 3);
  double *cross_ = (double*)malloc(sizeof(double) * 3);

  sqtheta = sqsum(3, rot);
  theta = sqrt(sqtheta);
  costheta = cos(theta);
  sintheta = sin(theta);
  theta_inverse = 1.0 / theta;

  for (i = 0; i < 3; i++)
    w[i] = rot[i] * theta_inverse;

  cross(w, pt, cross_);

  tmp = dot_prod(3, w, pt) *
    (1. - costheta);

  for (i = 0; i < 3; i++)
    rotatedPt[i] = pt[i] * costheta + cross_[i] * sintheta + w[i] * tmp;
  free(w);
  free(cross_);
}

void ba_rod_native(int d, double* xs, int n, double** res) {
  for(int idx = 0; idx < n; idx++){
    int offset = (11) + ((d) * (idx));
    ba_rod_single(xs, &xs[offset], res[idx]);
  }
}

void radial_distort(double *rad_params, double *proj, double* res)
{
  double rsq, L;
  rsq = sqsum(2, proj);
  L = 1 + rad_params[0] * rsq + rad_params[1] * rsq * rsq;
  res[0] = proj[0] * L;
  res[1] = proj[1] * L;
}

void project(double *cam, double *X, double *proj)
{
  int i;
  double *C;
  double *Xo = (double*)malloc(sizeof(double) * 3);
  double *Xcam = (double*)malloc(sizeof(double) * 3);
  double *proj2 = (double*)malloc(sizeof(double) * 2);
  double *proj3 = (double*)malloc(sizeof(double) * 2);
  C = &cam[BA_C_IDX];

  for (i = 0; i < 3; i++)
    Xo[i] = X[i] - C[i];

  ba_rod_single(&cam[BA_ROT_IDX], Xo, Xcam);

  proj2[0] = Xcam[0] / Xcam[2];
  proj2[1] = Xcam[1] / Xcam[2];

  radial_distort(&cam[BA_RAD_IDX], proj2, proj3);

  for (i = 0; i < 2; i++)
    proj[i] = proj3[i] * cam[BA_F_IDX] + cam[BA_X0_IDX + i];
  free(Xo);
  free(Xcam);
  free(proj2);
  free(proj3);
}

void ba_proj_native(int d, double* cam, double* xs, int n, double** res) {
  for(int idx = 0; idx < n; idx++){
    int offset = (11) + ((d) * (idx));
    project(cam, &xs[offset], res[idx]);
  }
}
