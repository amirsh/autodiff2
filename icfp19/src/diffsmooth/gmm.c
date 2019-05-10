#include <stdlib.h>
#include <math.h>
#include <float.h>
#include "gmm.h"
#include "usecases_gmm_opt.h"


#ifdef FUSED
#include "usecases_gmm_opt_d.h"
#else
// #include "usecases_gmm_d.h" // TODO
#endif

array_array_number_t TOP_LEVEL_linalg_matrixFill(card_t rows, card_t cols, number_t value) {
	array_array_number_t macroDef79 = (array_array_number_t)storage_alloc(sizeof(int) * 2);
	macroDef79->length=rows;
	macroDef79->arr = (array_number_t*)storage_alloc(sizeof(array_number_t) * rows);
		for(int r = 0; r < macroDef79->length; r++){
			array_number_t macroDef78 = (array_number_t)storage_alloc(sizeof(int) * 2);
	macroDef78->length=cols;
	macroDef78->arr = (number_t*)storage_alloc(sizeof(number_t) * cols);
		for(int c = 0; c < macroDef78->length; c++){
			
			macroDef78->arr[c] = value;;
		}
			macroDef79->arr[r] = macroDef78;;
		}
	return macroDef79;
}

array_array_number_t matrix_fill(card_t rows, card_t cols, number_t value) {
  return TOP_LEVEL_linalg_matrixFill(rows, cols, value);
}

array_number_t vector_fill(card_t rows, number_t value) {
  return matrix_fill(1, rows, value)->arr[0];
}

int K, d, n;
size_t td;
array_number_t alphas;
array_array_number_t means;
array_array_number_t qs;
array_array_number_t ls;
array_array_number_t xs;
array_number_t alphasd;
array_array_number_t meansd;
array_array_number_t qsd;
array_array_number_t lsd;
array_array_number_t xsd;

void gmm_init(int d_p, int k_p, int n_p) {
  K = k_p;
  d = d_p;
  n = n_p;
  printf("gmm_init K=%d, d=%d, n=%d\n", K, d, n);
  td = TOP_LEVEL_usecases_gmm_tri(d);
  alphas = vector_fill(K, 0);
  means = matrix_fill(K, d, 0);
  qs = matrix_fill(K, d, 0);
  ls = matrix_fill(K, td, 0);
  xs = matrix_fill(n, d, 0);
  alphasd = vector_fill(K, 0);
  meansd = matrix_fill(K, d, 0);
  qsd = matrix_fill(K, d, 0);
  lsd = matrix_fill(K, td, 0);
  xsd = matrix_fill(n, d, 0);
}

number_t gmm_objective2(array_array_number_t x, array_number_t alphas, array_array_number_t means, array_array_number_t qs, array_array_number_t ls, number_t wishart_gamma, number_t wishart_m) {
  card_t macroDef175 = x->length;
  card_t n = macroDef175;
  card_t macroDef176 = alphas->length;
  card_t K = macroDef176;
  number_t macroDef189 = 0;
  for(int idx = 0; idx < n; idx++){
    number_t acc0 = macroDef189;
    index_t i = idx;
    number_t macroDef182 = -1000;
  for(int idx0 = 0; idx0 < K; idx0++){
    number_t acc2 = macroDef182;
    index_t k = idx0;
    array_number_t v = qs->arr[k];
    number_t macroDef177 = 0;
  for(int cur_idx = 0; cur_idx < v->length; cur_idx++){
    number_t cur = v->arr[cur_idx];
    
    macroDef177 = (macroDef177) + (cur);;
  }
    array_number_t q = qs->arr[k];
    array_number_t l = ls->arr[k];
    array_number_t x0 = x->arr[i];
    array_number_t y = means->arr[k];
    card_t macroDef180 = x0->length;
    number_t macroDef181 = 0;
  for(int idx1 = 0; idx1 <= (macroDef180) - (1); idx1++){
    number_t acc4 = macroDef181;
    index_t i0 = idx1;
    index_t n0 = (i0) - (1);
    index_t tis = ((n0) * ((n0) + (1))) / (2);
    card_t s = 0;
    card_t macroDef178 = l->length;
    card_t e = macroDef178;
    number_t macroDef179 = 0;
  for(int idx2 = 0; idx2 <= (((e) - (s)) + (1)) - (1); idx2++){
    number_t acc6 = macroDef179;
    index_t i1 = idx2;
    number_t cur = (double)(((s)) + (i1));
    index_t idx3 = (int)(cur);
    index_t j = (idx3) - (tis);
    bool_t isInRange = 0;
  if((j) >= (0)) {
    
    isInRange = (j) < (i0);;
  } else {
    
    isInRange = false;;
  }
    number_t ite198 = 0;
  if(isInRange) {
    number_t x1 = x0->arr[j];
    number_t y0 = y->arr[j];
    ite198 = (acc6) + ((l->arr[idx3]) * ((x1) - (y0)));;
  } else {
    
    ite198 = acc6;;
  }
    macroDef179 = ite198;;
  }
    number_t sum = macroDef179;
    number_t x1 = x0->arr[i0];
    number_t y0 = y->arr[i0];
    number_t x10 = (sum) + ((exp(q->arr[i0])) * ((x1) - (y0)));
    number_t cur = (x10) * (x10);
    macroDef181 = (acc4) + (cur);;
  }
    number_t cur = ((alphas->arr[k]) + (macroDef177)) - ((0.5) * (macroDef181));
    number_t ite199 = 0;
  if((acc2) > (cur)) {
    
    ite199 = acc2;;
  } else {
    
    ite199 = cur;;
  }
    macroDef182 = ite199;;
  }
    number_t mx148 = macroDef182;
    number_t macroDef188 = 0;
  for(int idx0 = 0; idx0 < K; idx0++){
    number_t acc2 = macroDef188;
    index_t i0 = idx0;
    array_number_t v149 = qs->arr[i0];
    number_t macroDef183 = 0;
  for(int cur_idx = 0; cur_idx < v149->length; cur_idx++){
    number_t cur = v149->arr[cur_idx];
    
    macroDef183 = (macroDef183) + (cur);;
  }
    array_number_t q150 = qs->arr[i0];
    array_number_t l151 = ls->arr[i0];
    array_number_t x152 = x->arr[i];
    array_number_t y153 = means->arr[i0];
    card_t macroDef186 = x152->length;
    number_t macroDef187 = 0;
  for(int idx1 = 0; idx1 <= (macroDef186) - (1); idx1++){
    number_t acc4 = macroDef187;
    index_t i1 = idx1;
    index_t n154 = (i1) - (1);
    index_t tis155 = ((n154) * ((n154) + (1))) / (2);
    card_t s156 = 0;
    card_t macroDef184 = l151->length;
    card_t e157 = macroDef184;
    number_t macroDef185 = 0;
  for(int idx2 = 0; idx2 <= (((e157) - (s156)) + (1)) - (1); idx2++){
    number_t acc6 = macroDef185;
    index_t i2 = idx2;
    number_t cur = (double)(((s156)) + (i2));
    index_t idx158 = (int)(cur);
    index_t j159 = (idx158) - (tis155);
    bool_t isInRange160 = 0;
  if((j159) >= (0)) {
    
    isInRange160 = (j159) < (i1);;
  } else {
    
    isInRange160 = false;;
  }
    number_t ite200 = 0;
  if(isInRange160) {
    number_t x161 = x152->arr[j159];
    number_t y162 = y153->arr[j159];
    ite200 = (acc6) + ((l151->arr[idx158]) * ((x161) - (y162)));;
  } else {
    
    ite200 = acc6;;
  }
    macroDef185 = ite200;;
  }
    number_t sum163 = macroDef185;
    number_t x164 = x152->arr[i1];
    number_t y165 = y153->arr[i1];
    number_t x1166 = (sum163) + ((exp(q150->arr[i1])) * ((x164) - (y165)));
    number_t cur = (x1166) * (x1166);
    macroDef187 = (acc4) + (cur);;
  }
    number_t x168 = ((alphas->arr[i0]) + (macroDef183)) - ((0.5) * (macroDef187));
    number_t cur = exp((x168) - (mx148));
    macroDef188 = (acc2) + (cur);;
  }
    number_t semx170172 = macroDef188;
    number_t cur = (log(semx170172)) + (mx148);
    macroDef189 = (acc0) + (cur);;
  }
  number_t macroDef190 = -1000;
  for(int cur_idx = 0; cur_idx < alphas->length; cur_idx++){
    number_t cur = alphas->arr[cur_idx];
    number_t ite201 = 0;
  if((macroDef190) > (cur)) {
    
    ite201 = macroDef190;;
  } else {
    
    ite201 = cur;;
  }
    macroDef190 = ite201;;
  }
  number_t mx = macroDef190;
  card_t macroDef191 = alphas->length;
  number_t macroDef192 = 0;
  for(int idx = 0; idx <= (macroDef191) - (1); idx++){
    number_t acc0 = macroDef192;
    index_t i = idx;
    number_t x0 = alphas->arr[i];
    number_t cur = exp((x0) - (mx));
    macroDef192 = (acc0) + (cur);;
  }
  number_t semx174 = macroDef192;
  number_t macroDef197 = 0;
  for(int idx = 0; idx < K; idx++){
    number_t acc0 = macroDef197;
    index_t k = idx;
    array_number_t v = qs->arr[k];
    card_t macroDef193 = v->length;
    number_t macroDef194 = 0;
  for(int idx0 = 0; idx0 <= (macroDef193) - (1); idx0++){
    number_t acc2 = macroDef194;
    index_t i = idx0;
    number_t value = v->arr[i];
    number_t x1 = exp(value);
    number_t cur = (x1) * (x1);
    macroDef194 = (acc2) + (cur);;
  }
    array_number_t x0 = ls->arr[k];
    card_t macroDef195 = x0->length;
    number_t macroDef196 = 0;
  for(int idx0 = 0; idx0 <= (macroDef195) - (1); idx0++){
    number_t acc2 = macroDef196;
    index_t i = idx0;
    number_t x1 = x0->arr[i];
    number_t cur = (x1) * (x1);
    macroDef196 = (acc2) + (cur);;
  }
    number_t cur = (macroDef194) + (macroDef196);
    macroDef197 = (acc0) + (cur);;
  }
  return ((macroDef189) - (((double)((n))) * ((log(semx174)) + (mx)))) + ((0.5) * (macroDef197));
}

void gmm_objective(int d_p, int k_p, int n_p,
  double* alphas_arr, 
  double* means_arr,
  double* icf_arr, 
  double* x_arr,
  double wishart_gamma, 
  double wishart_m,
  double *err) {
  // alphas->arr = alphas_arr;
  // for (int k = 0; k < K; ++k) {
  // 	means->arr[k]->arr = &means_arr[k*d];
  // 	qs->arr[k]->arr = &means_arr[k*d];
  // 	ls->arr[k]->arr = &means_arr[k*d];
  // }
  *err = TOP_LEVEL_usecases_gmm_gmm_objective(xs, alphas, means, qs, ls, wishart_gamma, wishart_m);
}
void gmm_objective_d(int d, int k, int n, double *alphas_arr, double *alphasd_arr, 
        double *means_arr, double *meansd_arr, double *icf_arr, double *icfd_arr, double *x_arr, 
        double *xd_arr, double wishart_gamma, double wishart_m, double *err, 
        double *errd) {
  // alphas->arr = alphas_arr;
  // for (int k = 0; k < K; ++k) {
  // 	means->arr[k]->arr = &means_arr[k*d];
  // 	qs->arr[k]->arr = &means_arr[k*d];
  // 	ls->arr[k]->arr = &means_arr[k*d];
  // }
  *errd = TOP_LEVEL_usecases_gmm_gmm_objective_d(xs, alphas, means, qs, ls, wishart_gamma, wishart_m, xsd, alphasd, meansd, qsd, lsd, 0, 0);
}
