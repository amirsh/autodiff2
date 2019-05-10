#pragma once
// name of top routine:
// gmm_objective
// dependent output variables:
// 
// independent variables:
// 
/*
typedef int index_t;
typedef double number_t;
typedef struct array_number_t_struct {
	number_t* arr;
	int length;
}* array_number_t;
typedef struct array_array_number_t_struct {
	array_number_t* arr;
	int length;
}* array_array_number_t;
typedef struct array_array_array_number_t_struct {
	array_array_number_t* arr;
	int length;
}* array_array_array_number_t;

typedef int card_t;
typedef int bool_t;
*/
#include <stdlib.h>
#include <math.h>
#include "../../../diffsmooth/types.h"

inline double arr_max(array_number_t arr)
{
  double* x = arr->arr;
  int n = arr->length;
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

inline double logsumexp(array_number_t arr)
{
  double* x = arr->arr;
  int n = arr->length;
  int i;
  double mx, semx;

  mx = arr_max(arr);
  semx = 0.;
  for (i = 0; i < n; i++)
  {
    semx += exp(x[i] - mx);
  }
  return log(semx) + mx;
}

inline index_t tri(index_t n) {
	
	return ((n) * ((n) + (1))) / (2);
}

inline double sqnorm(array_number_t arr)
{
  double* x = arr->arr;
  int d = arr->length;
  int i;
  double out;

  out = 0;
  for (i = 0; i < d; i++)
  {
    out += x[i] * x[i];
  }
  return out;
}

inline double vectorSum(array_number_t arr)
{
  double* x = arr->arr;
  int d = arr->length;
  int i;
  double out;

  out = 0;
  for (i = 0; i < d; i++)
  {
    out += x[i];
  }
  return out;
}

inline array_number_t subtract(array_number_t x, array_number_t y, array_number_t out)
{
  int id;
  for (id = 0; id < x->length; id++)
  {
    out->arr[id] = x->arr[id] - y->arr[id];
  }
  return out;
}

inline array_number_t vectorExp(array_number_t arr, array_number_t out)
{
  int id;
  for (id = 0; id < arr->length; id++)
  {
    out->arr[id] = exp(arr->arr[id]);
  }
  return out;
}

inline array_number_t Qtimesv(array_number_t q, array_number_t l, array_number_t v, array_number_t result) {
	card_t macroDef294 = v->length;
	for(int i = 0; i < result->length; i++){
		index_t tis = tri((i) - (1));
		card_t macroDef295 = l->length;
		number_t macroDef296 = 0;
		for(int idx = 0; idx < macroDef295; idx++){
			index_t j = (idx) - (tis);
			bool_t isInRange = 0;
			if((j) >= (0)) {
				
				isInRange = (j) < (i);;
			} else {
				
				isInRange = 0;;
			}
			number_t ite298 = 0;
			if(isInRange) {
				
				ite298 = (macroDef296) + ((l->arr[idx]) * (v->arr[j]));;
			} else {
				
				ite298 = macroDef296;;
			}
			macroDef296 = ite298;;
		}
		number_t sum = macroDef296;
		result->arr[i] = (sum) + ((exp(q->arr[i])) * (v->arr[i]));;
	}
	return result;
}

inline number_t gmm_objective(array_array_number_t x, array_number_t alphas, array_array_number_t means, array_array_number_t qs, array_array_number_t ls, number_t wishart_gamma, number_t wishart_m) {
	card_t n = x->length;
	card_t d = x->arr[0]->length;
	card_t macroDef299 = alphas->length;
	card_t K = macroDef299;
	array_number_t macroDef301 = (array_number_t)malloc(sizeof(int) * 2); macroDef301->length=n; macroDef301->arr = (number_t*)malloc(sizeof(number_t) * n);
	for(int i = 0; i < macroDef301->length; i++){
		array_number_t macroDef300 = (array_number_t)malloc(sizeof(int) * 2); macroDef300->length=K; macroDef300->arr = (number_t*)malloc(sizeof(number_t) * K);
		for(int k = 0; k < macroDef300->length; k++){
			array_number_t subRes = (array_number_t)malloc(sizeof(int) * 2); subRes->length=d; subRes->arr = (number_t*)malloc(sizeof(number_t) * d);
			array_number_t QtimesvRes = (array_number_t)malloc(sizeof(int) * 2); QtimesvRes->length=d; QtimesvRes->arr = (number_t*)malloc(sizeof(number_t) * d);
			macroDef300->arr[k] = ((alphas->arr[k]) + (vectorSum(qs->arr[k]))) - ((0.5) * (sqnorm(Qtimesv(qs->arr[k], ls->arr[k], subtract(x->arr[i], means->arr[k], subRes), QtimesvRes))));;
			free(QtimesvRes->arr); free(QtimesvRes);
			free(subRes->arr); free(subRes);
		}
		macroDef301->arr[i] = logsumexp(macroDef300);;
		free(macroDef300->arr); free(macroDef300);
	}
	array_number_t macroDef305 = (array_number_t)malloc(sizeof(int) * 2); macroDef305->length=K; macroDef305->arr = (number_t*)malloc(sizeof(number_t) * K);
	for(int k = 0; k < macroDef305->length; k++){
		array_number_t expRes = (array_number_t)malloc(sizeof(int) * 2); expRes->length=qs->arr[k]->length; expRes->arr = (number_t*)malloc(sizeof(number_t) * qs->arr[k]->length);
		macroDef305->arr[k] = (sqnorm(vectorExp(qs->arr[k], expRes))) + (sqnorm(ls->arr[k]));;
		free(expRes->arr); free(expRes);
	}
	double resVectorSum1 = vectorSum(macroDef301);
	double resVectorSum2 = vectorSum(macroDef305);
	free(macroDef301->arr); free(macroDef301);
	free(macroDef305->arr); free(macroDef305);
	return ((resVectorSum1) - (((double)((n))) * (logsumexp(alphas)))) + ((0.5) * (resVectorSum2));
}
