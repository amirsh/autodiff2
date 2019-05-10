#pragma once

#include "fsharp.h"
#include <stdio.h>
#include <math.h>

array_array_number_t ba_rod(array_number_t xs, index_t n) {
  array_array_number_t x5937 = (array_array_number_t)storage_alloc(sizeof(int) * 2);x5937->length=n;x5937->arr = (array_number_t*)storage_alloc(sizeof(array_number_t) * n);
  for(int idx = 0; idx < x5937->length; idx++){
    array_number_t cam = (array_number_t)storage_alloc(sizeof(int) * 2);cam->length=3;cam->arr = (number_t*)storage_alloc(sizeof(number_t) * 3);
    for(int i = 0; i < cam->length; i++){
      cam->arr[i] = (xs->arr[(i) + (0)]);
      
    }
    index_t offset = (11) + ((3) * (idx));
    array_number_t x = (array_number_t)storage_alloc(sizeof(int) * 2);x->length=3;x->arr = (number_t*)storage_alloc(sizeof(number_t) * 3);
    for(int i = 0; i < x->length; i++){
      x->arr[i] = (xs->arr[(i) + (offset)]);
      
    }
    array_number_t v = (array_number_t)storage_alloc(sizeof(int) * 2);v->length=(cam)->length;v->arr = (number_t*)storage_alloc(sizeof(number_t) * (cam)->length);
    for(int i = 0; i < v->length; i++){
      number_t x10 = (cam->arr[i]);
      v->arr[i] = (x10) * (x10);
      
    }
    index_t l = (v)->length;
    number_t sqtheta = 0;
    for (int idx0 = 0; idx0 < l; idx0++) {
      number_t acc = sqtheta;
      number_t cur = (v->arr[idx0]);
      acc = (acc) + (cur);
      sqtheta = acc;
    }
    
    number_t theta = sqrt(sqtheta);
    number_t costheta = cos(theta);
    number_t sintheta = sin(theta);
    number_t theta_inv = (1) / (theta);
    array_number_t w = (array_number_t)storage_alloc(sizeof(int) * 2);w->length=(cam)->length;w->arr = (number_t*)storage_alloc(sizeof(number_t) * (cam)->length);
    for(int i = 0; i < w->length; i++){
      number_t xi = (cam->arr[i]);
      w->arr[i] = (xi) * (theta_inv);
      
    }
    array_number_t w_cross_X = (array_number_t)storage_alloc(sizeof(int) * 2);w_cross_X->length=3;w_cross_X->arr = (number_t*)storage_alloc(sizeof(number_t) * 3);
    w_cross_X->arr[0] = (((w->arr[1])) * ((x->arr[2]))) - (((w->arr[2])) * ((x->arr[1])));
    w_cross_X->arr[1] = (((w->arr[2])) * ((x->arr[0]))) - (((w->arr[0])) * ((x->arr[2])));
    w_cross_X->arr[2] = (((w->arr[0])) * ((x->arr[1]))) - (((w->arr[1])) * ((x->arr[0])));
    array_number_t v0 = (array_number_t)storage_alloc(sizeof(int) * 2);v0->length=(w)->length;v0->arr = (number_t*)storage_alloc(sizeof(number_t) * (w)->length);
    for(int i = 0; i < v0->length; i++){
      number_t x00 = (w->arr[i]);
      number_t y0 = (x->arr[i]);
      v0->arr[i] = (x00) * (y0);
      
    }
    index_t l0 = (v0)->length;
    number_t x5936 = 0;
    for (int idx0 = 0; idx0 < l0; idx0++) {
      number_t acc = x5936;
      number_t cur = (v0->arr[idx0]);
      acc = (acc) + (cur);
      x5936 = acc;
    }
    
    number_t tmp = (x5936) * ((1) - (costheta));
    array_number_t v1 = (array_number_t)storage_alloc(sizeof(int) * 2);v1->length=(x)->length;v1->arr = (number_t*)storage_alloc(sizeof(number_t) * (x)->length);
    for(int i = 0; i < v1->length; i++){
      number_t xi = (x->arr[i]);
      v1->arr[i] = (xi) * (costheta);
      
    }
    array_number_t v2 = (array_number_t)storage_alloc(sizeof(int) * 2);v2->length=(w_cross_X)->length;v2->arr = (number_t*)storage_alloc(sizeof(number_t) * (w_cross_X)->length);
    for(int i = 0; i < v2->length; i++){
      number_t xi = (w_cross_X->arr[i]);
      v2->arr[i] = (xi) * (sintheta);
      
    }
    array_number_t x1 = (array_number_t)storage_alloc(sizeof(int) * 2);x1->length=(v1)->length;x1->arr = (number_t*)storage_alloc(sizeof(number_t) * (v1)->length);
    for(int i = 0; i < x1->length; i++){
      number_t x00 = (v1->arr[i]);
      number_t y0 = (v2->arr[i]);
      x1->arr[i] = (x00) + (y0);
      
    }
    array_number_t y = (array_number_t)storage_alloc(sizeof(int) * 2);y->length=(w)->length;y->arr = (number_t*)storage_alloc(sizeof(number_t) * (w)->length);
    for(int i = 0; i < y->length; i++){
      number_t xi = (w->arr[i]);
      y->arr[i] = (xi) * (tmp);
      
    }
    array_number_t m = (array_number_t)storage_alloc(sizeof(int) * 2);m->length=(x1)->length;m->arr = (number_t*)storage_alloc(sizeof(number_t) * (x1)->length);
    for(int i = 0; i < m->length; i++){
      number_t x00 = (x1->arr[i]);
      number_t y0 = (y->arr[i]);
      m->arr[i] = (x00) + (y0);
      
    }
    x5937->arr[idx] = m;
    
  }
  return x5937;
}