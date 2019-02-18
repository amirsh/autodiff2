#include <stdio.h>
#include <string.h>
#include "../diffsmooth/fsharp.h"
#include "../diffsmooth/timer.h"

#if defined TAPENADE
  #if defined REV_MODE
    #if defined UNFUSED
      #include "../tapanade/submitted/4/nmf_unfused_b-all.h"
    #else
      #include "../tapanade/submitted/3/nmf_b-all.h"
    #endif
  #else
    #if defined UNFUSED
      #include "../tapanade/submitted/4/nmf_unfused_d-all.h"
    #else
      #include "../tapanade/submitted/3/nmf_d-all.h"
    #endif
  #endif
#else
  #include "nmf_exp.h"
#endif

double dist(int seed) {
  return ((double)rand()/(double)RAND_MAX);
}

array_array_number_t TOP_LEVEL_linalg_matrixFill(card_t rows, card_t cols, number_t value) {
  array_array_number_t macroDef79 = (array_array_number_t)malloc(sizeof(int) * 2);
  macroDef79->length=rows;
  macroDef79->arr = (array_number_t*)malloc(sizeof(array_number_t) * rows);
    for(int r = 0; r < macroDef79->length; r++){
      array_number_t macroDef78 = (array_number_t)malloc(sizeof(int) * 2);
  macroDef78->length=cols;
  macroDef78->arr = (number_t*)malloc(sizeof(number_t) * cols);
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

number_t vector_sum(array_number_t m) {
  number_t result = 0;
  for(int i=0; i<m->length; i++) {
    result += m->arr[i];
  }
  return result;
}

number_t matrixSum(array_array_number_t m) {
  number_t result = 0;
  for(int i=0; i<m->length; i++) {
    for(int j=0; j<m->arr[0]->length; j++) {
      result += m->arr[i]->arr[j];
    }
  }
  return result;
}

void test_nmf(card_t M, card_t N, card_t K, card_t iters)
{
  int rng = 42;
  srand(rng);
  array_array_number_t A = matrix_fill(M, N, 0.0);
  array_array_number_t W = matrix_fill(M, K, 0.0);
  array_array_number_t H = matrix_fill(K, N, 0.0);
  array_number_t v = vector_fill(M, 0.0);
  array_number_t ud = vector_fill(N, 0.0);
  double** A_arr = malloc(M * sizeof(double*));

  for (card_t m = 0; m < M; ++m) {
    for (card_t n = 0; n < N; ++n) {
      A->arr[m]->arr[n] = dist(rng);
    }
    A_arr[m] = A->arr[m]->arr;
    for (card_t k = 0; k < K; ++k) {
      W->arr[m]->arr[k] = dist(rng);
    }
    v->arr[m] = W->arr[m]->arr[0];
  }
  for (card_t k = 0; k < K; ++k) {
    for (card_t n = 0; n < N; ++n) {
      H->arr[k]->arr[n] = dist(rng);
    }
  }

  mytimer_t t = tic();

  double total = 0;

  array_number_t s = (array_number_t)storage_alloc(sizeof(int) * 2);s->length=N;s->arr = (number_t*)storage_alloc(sizeof(number_t) * N);
  for (card_t count = 0; count < iters; ++count) {
    H->arr[0]->arr[0] += 1.0 / (2.0 + H->arr[0]->arr[0]);
    W->arr[0]->arr[0] += 1.0 / (2.0 + W->arr[0]->arr[0]);
    v->arr[0] = W->arr[0]->arr[0];
    memset(ud->arr, 0, sizeof(double) * N);
    // total +=  matrixSum(update1(H, W, A)) + matrixSum(update2(H, W, A));
    // total += matrixSum(update3(H, W, A));
    if(K == 1) {
      #if defined TAPENADE
        #if defined REV_MODE
          double eb = 1;
          #if defined POISSON
            nmfMain_poisson_b(N, M, H->arr[0]->arr, ud->arr, v->arr, A_arr, eb);
          #else
            nmfMain_b(N, M, H->arr[0]->arr, ud->arr, v->arr, A_arr, eb);
          #endif
          total += vector_sum(ud);
        #else
          double sum = 0;
          double tmp;
          for(int i = 0; i<N; i++) {
            ud->arr[i] = 1;
            #if defined POISSON
              sum += nmfMain_poisson_d(N, M, H->arr[0]->arr, ud->arr, v->arr, A_arr, &tmp);
            #else
              sum += nmfMain_d(N, M, H->arr[0]->arr, ud->arr, v->arr, A_arr, &tmp);
            #endif
            ud->arr[i] = 0;
          }
          total += sum;
        #endif
      #else
        #if defined DPS
          array_number_t tmp = 
            #if defined POISSON
              nmf_uv_poisson_dps(s, H->arr[0], v, A); 
            #else
              nmf_uv_dps(s, H->arr[0], v, A); 
            #endif
        #else
          array_number_t tmp = 
            #if defined POISSON
              nmf_uv_poisson(H->arr[0], v, A);
            #else
              nmf_uv(H->arr[0], v, A);
            #endif
        #endif
        total += vector_sum(tmp);
      #endif
    } else {
      // total += matrixSum(update3(H, W, A));
      exit(-1);
    }
  }

  double elapsed = toc2(t);
  printf("total =%f, time per call = %f s\n", total, elapsed / (double)(iters) / 1000.0);
}

int main(int argc, char *argv[])
{
  if(argc != 5) {
    printf("You should use the following format for running this program: %s <M> <N> <K> <Number of Iterations>\n", argv[0]);
    exit(1);
  }
  card_t M = atoi(argv[1]);
  card_t N = atoi(argv[2]);
  card_t K = atoi(argv[3]);
  card_t iters = atoi(argv[4]);
  test_nmf(M, N, K, iters);
}


