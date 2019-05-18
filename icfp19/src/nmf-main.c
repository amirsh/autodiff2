#include <stdio.h>
#include <string.h>
#include "diffsmooth/fsharp.h"
#include "diffsmooth/timer.h"

#define VEC1_FILE "../data/vec1.dat"
#define VEC2_FILE "../data/vec2.dat"

#if defined TAPENADE
  #if defined REV_MODE
    #if defined UNFUSED
      #include "tapanade/submitted/4/nmf_unfused_b-all.h"
    #else
      #include "tapanade/submitted/3/nmf_b-all.h"
    #endif
  #else
    #if defined UNFUSED
      #include "tapanade/submitted/4/nmf_unfused_d-all.h"
    #else
      #include "tapanade/submitted/3/nmf_d-all.h"
    #endif
  #endif
#else
  #if defined DPS
    #include "diffsmooth/nmf_dps.h"
  #elif defined NOFUSION
    #include "diffsmooth/nmf_nofusion.h"
  #elif defined NOMOTION
    #include "diffsmooth/nmf_nomotion.h"
  #elif defined NONMOTION
    #include "diffsmooth/nmf_nonmotion.h"
  #else
    #include "diffsmooth/nmf.h"
  #endif
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
  assert(K == 1);
  int rng = 42;
  srand(rng);
  array_array_number_t A = matrix_fill(M, N, 0.0);
  double** A_arr = malloc(M * sizeof(double*));
  array_number_t v = vector_fill(M, 0.0);
  array_number_t u = vector_fill(N, 0.0);
  array_number_t vec1 = matrix_read(VEC1_FILE, 0, 1, M * N)->arr[0];
  array_number_t vec2 = matrix_read(VEC2_FILE, 0, 1, M + N)->arr[0];

  for (card_t m = 0; m < M; ++m) {
    for (card_t n = 0; n < N; ++n) {
      A->arr[m]->arr[n] = vec1->arr[m * N + n];
    }
    A_arr[m] = A->arr[m]->arr;
    v->arr[m] = vec2->arr[m];
  }
  for (card_t n = 0; n < N; ++n) {
    u->arr[n] = vec2->arr[M + n];
  }

  array_number_t ud = vector_fill(N, 0.0);
  

  mytimer_t t = tic();

  double total = 0;

  array_number_t s = (array_number_t)storage_alloc(sizeof(int) * 2);s->length=N;s->arr = (number_t*)storage_alloc(sizeof(number_t) * N);
  for (card_t count = 0; count < iters; ++count) {
    u->arr[0] += 1.0 / (2.0 + u->arr[0]);
    v->arr[0] += 1.0 / (2.0 + v->arr[0]);
    memset(ud->arr, 0, sizeof(double) * N);
    // total +=  matrixSum(update1(H, W, A)) + matrixSum(update2(H, W, A));
    // total += matrixSum(update3(H, W, A));
    #if defined TAPENADE
      #if defined REV_MODE
        double eb = 1;
        #if defined POISSON
          nmfMain_poisson_b(N, M, u->arr, ud->arr, v->arr, A_arr, eb);
        #else
          nmfMain_b(N, M, u->arr, ud->arr, v->arr, A_arr, eb);
        #endif
        total += vector_sum(ud);
      #else
        double sum = 0;
        double tmp;
        for(int i = 0; i<N; i++) {
          ud->arr[i] = 1;
          #if defined POISSON
            sum += nmfMain_poisson_d(N, M, u->arr, ud->arr, v->arr, A_arr, &tmp);
          #else
            sum += nmfMain_d(N, M, u->arr, ud->arr, v->arr, A_arr, &tmp);
          #endif
          ud->arr[i] = 0;
        }
        total += sum;
      #endif
    #else
      #if defined DPS
        array_number_t tmp = nmf_dps(s, u, v, A); 
      #else
        array_number_t tmp = nmf(u, v, A);
      #endif
      total += vector_sum(tmp);
    #endif
  }

  double elapsed = toc2(t);
  printf("total =%f, time per call = %f ms\n", total, elapsed / (double)(iters));
}

int main(int argc, char *argv[])
{
  if(argc != 3) {
    printf("You should use the following format for running this program: %s <M*10000+N> <Number of Iterations>\n", argv[0]);
    exit(1);
  }
  card_t dim = atoi(argv[1]);
  card_t M = dim / 10000;
  card_t N = dim % 10000;
  card_t iters = atoi(argv[2]);
  test_nmf(M, N, 1, iters);
}


