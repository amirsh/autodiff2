// name of top routine:
// nmfMain
// dependent output variables:
// 
// independent variables:
// u
#include <stdlib.h>
#include <math.h>

double matrix_sum(int m, int n, double** mat) {
  double res = 0;
  for(int i=0; i<m; i++) {
    for(int j=0; j<n; j++) {
      res += mat[i][j];
    }
  }
  return res;
}

void matrix_add(int m, int n, double** mat1, double** mat2, double** mat3) {
  for(int i=0; i<m; i++) {
    for(int j=0; j<n; j++) {
      mat3[i][j] = mat1[i][j] + mat2[i][j];
    }
  }
}

void matrix_div(int m, int n, double** mat1, double** mat2, double** mat3) {
  for(int i=0; i<m; i++) {
    for(int j=0; j<n; j++) {
      mat3[i][j] = mat1[i][j] / mat2[i][j];
    }
  }
}

void matrix_log(int m, int n, double** mat, double** res) {
  for(int i=0; i<m; i++) {
    for(int j=0; j<n; j++) {
      res[i][j] = log(mat[i][j]);
    }
  }
}

void vector_out_prod(int m, int n, double* v1, double* v2, double** res) {
  for(int r = 0; r < m; r++){
    for(int c = 0; c < n; c++){
      res[r][c] = ((v1[r])) * ((v2[c]));
    }
  }
}

double nmfMain(int m, int n, double* u, double* v, double** AA) {
  double* elems1 = (double*)malloc(sizeof(double) * m * n);
  double* elems2 = (double*)malloc(sizeof(double) * m * n);
  double* elems3 = (double*)malloc(sizeof(double) * m * n);
  double* elems4 = (double*)malloc(sizeof(double) * m * n);
  double** m1 = malloc(sizeof(double*) * n);
  double** uv = malloc(sizeof(double*) * n);
  double** m2 = malloc(sizeof(double*) * n);
  double** m3 = malloc(sizeof(double*) * n);
  for(int i = 0; i < n; i++) {
    m1[i] = &elems1[i * m];
    uv[i] = &elems2[i * m];
    m2[i] = &elems3[i * m];
    m3[i] = &elems4[i * m];
  }
  vector_out_prod(n, m, v, u, uv);
  matrix_log(n, m, uv, m1);
  matrix_div(n, m, AA, uv, m2);
  matrix_add(n, m, m1, m2, m3);
  double res = matrix_sum(n, m, m3);
  free(elems1);
  free(elems2);
  free(elems3);
  free(elems4);
  free(m1);
  free(m2);
  free(m3);
  free(uv);
  return res;
}
