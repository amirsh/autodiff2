#pragma once

#include "fsharp.h"
#include "../tapanade/submitted/9/ba_rod.h"

array_array_number_t ba_rod(array_number_t xs, index_t n) {
  double** res_st = (double**)storage_alloc(sizeof(double*) * n);
  double* res_st_full = (double*)storage_alloc(sizeof(double) * n * 3);
  for(int i = 0; i < n; i++) {
    res_st[i] = &res_st_full[i * 3];
  }
  array_array_number_t x5937 = (array_array_number_t)storage_alloc(sizeof(int) * 2);x5937->length=n;x5937->arr = (array_number_t*)storage_alloc(sizeof(array_number_t) * n);
  for(int idx = 0; idx < x5937->length; idx++){
    array_number_t m = (array_number_t)storage_alloc(sizeof(int) * 2);m->length=3;m->arr = res_st[idx];
    x5937->arr[idx] = m;
  }
  ba_rod_native(3, xs->arr, n, res_st);
  return x5937;
}
