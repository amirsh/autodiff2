#pragma once

#include "fsharp.h"
#include <stdio.h>
#include <math.h>

array_array_number_t ba_rod(array_number_t xs, index_t n) {
  array_array_number_t x5985 = (array_array_number_t)storage_alloc(sizeof(int) * 2);x5985->length=n;x5985->arr = (array_number_t*)storage_alloc(sizeof(array_number_t) * n);
  for(int idx = 0; idx < x5985->length; idx++){
    index_t offset = (11) + ((3) * (idx));
    number_t sqtheta = 0;
    for (int idx0 = 0; idx0 < 3; idx0++) {
      number_t acc = sqtheta;
      number_t x10 = (xs->arr[idx0]);
      number_t cur = (x10) * (x10);
      acc = (acc) + (cur);
      sqtheta = acc;
    }
    
    number_t theta = sqrt(sqtheta);
    number_t costheta = cos(theta);
    number_t sintheta = sin(theta);
    number_t theta_inv = (1) / (theta);
    number_t x5957 = (xs->arr[1]);
    number_t x5967 = (xs->arr[2]);
    number_t x5971 = (xs->arr[2]);
    number_t x5975 = (xs->arr[0]);
    number_t x5979 = (xs->arr[0]);
    number_t x5983 = (xs->arr[1]);
    array_number_t w_cross_X = (array_number_t)storage_alloc(sizeof(int) * 2);w_cross_X->length=3;w_cross_X->arr = (number_t*)storage_alloc(sizeof(number_t) * 3);
    w_cross_X->arr[0] = (((x5957) * (theta_inv)) * ((xs->arr[(2) + (offset)]))) - (((x5967) * (theta_inv)) * ((xs->arr[(1) + (offset)])));
    w_cross_X->arr[1] = (((x5971) * (theta_inv)) * ((xs->arr[offset]))) - (((x5975) * (theta_inv)) * ((xs->arr[(2) + (offset)])));
    w_cross_X->arr[2] = (((x5979) * (theta_inv)) * ((xs->arr[(1) + (offset)]))) - (((x5983) * (theta_inv)) * ((xs->arr[offset])));
    number_t x5984 = 0;
    for (int idx0 = 0; idx0 < 3; idx0++) {
      number_t acc = x5984;
      number_t xi = (xs->arr[idx0]);
      number_t x00 = (xi) * (theta_inv);
      number_t y0 = (xs->arr[(idx0) + (offset)]);
      number_t cur = (x00) * (y0);
      acc = (acc) + (cur);
      x5984 = acc;
    }
    
    number_t tmp = (x5984) * ((1) - (costheta));
    array_number_t m = (array_number_t)storage_alloc(sizeof(int) * 2);m->length=3;m->arr = (number_t*)storage_alloc(sizeof(number_t) * 3);
    for(int i = 0; i < m->length; i++){
      number_t xi = (xs->arr[(i) + (offset)]);
      number_t x00 = (xi) * (costheta);
      number_t xi0 = (w_cross_X->arr[i]);
      number_t y0 = (xi0) * (sintheta);
      number_t x000 = (x00) + (y0);
      number_t xi00 = (xs->arr[i]);
      number_t xi000 = (xi00) * (theta_inv);
      number_t y00 = (xi000) * (tmp);
      m->arr[i] = (x000) + (y00);
      
    }
    x5985->arr[idx] = m;
    
  }
  return x5985;
}

array_array_number_t ba_proj(array_number_t xs, index_t n) {
  array_array_number_t x6572 = (array_array_number_t)storage_alloc(sizeof(int) * 2);x6572->length=n;x6572->arr = (array_number_t*)storage_alloc(sizeof(array_number_t) * n);
  for(int idx = 0; idx < x6572->length; idx++){
    index_t offset = (11) + ((3) * (idx));
    index_t x6257 = 3;
    number_t x6261 = 0;
    for (int idx0 = 0; idx0 < x6257; idx0++) {
      number_t acc = x6261;
      index_t i1 = idx0;
      number_t x10 = (xs->arr[i1]);
      number_t cur = (x10) * (x10);
      acc = (acc) + (cur);
      x6261 = acc;
    }
    
    number_t x6265 = sqrt(x6261);
    number_t x6269 = cos(x6265);
    number_t x6273 = sin(x6265);
    number_t x6277 = (1) / (x6265);
    index_t x6347 = 1;
    number_t x6373 = (xs->arr[x6347]);
    number_t x6395 = (xs->arr[(2) + (offset)]);
    index_t x6417 = 5;
    number_t x6439 = (xs->arr[x6417]);
    index_t x6449 = 2;
    number_t x6459 = (xs->arr[x6449]);
    number_t x6469 = (xs->arr[(1) + (offset)]);
    index_t x6479 = 4;
    number_t x6489 = (xs->arr[x6479]);
    index_t x6493 = 2;
    number_t x6497 = (xs->arr[x6493]);
    number_t x6501 = (xs->arr[offset]);
    index_t x6505 = 3;
    number_t x6509 = (xs->arr[x6505]);
    index_t x6513 = 0;
    number_t x6517 = (xs->arr[x6513]);
    number_t x6521 = (xs->arr[(2) + (offset)]);
    index_t x6525 = 5;
    number_t x6529 = (xs->arr[x6525]);
    index_t x6533 = 0;
    number_t x6537 = (xs->arr[x6533]);
    number_t x6541 = (xs->arr[(1) + (offset)]);
    index_t x6545 = 4;
    number_t x6549 = (xs->arr[x6545]);
    index_t x6553 = 1;
    number_t x6557 = (xs->arr[x6553]);
    number_t x6561 = (xs->arr[offset]);
    index_t x6565 = 3;
    number_t x6569 = (xs->arr[x6565]);
    array_number_t x6285 = (array_number_t)storage_alloc(sizeof(int) * 2);x6285->length=3;x6285->arr = (number_t*)storage_alloc(sizeof(number_t) * 3);
    x6285->arr[0] = (((x6373) * (x6277)) * ((x6395) - (x6439))) - (((x6459) * (x6277)) * ((x6469) - (x6489)));
    x6285->arr[1] = (((x6497) * (x6277)) * ((x6501) - (x6509))) - (((x6517) * (x6277)) * ((x6521) - (x6529)));
    x6285->arr[2] = (((x6537) * (x6277)) * ((x6541) - (x6549))) - (((x6557) * (x6277)) * ((x6561) - (x6569)));
    index_t x6293 = 3;
    number_t x6570 = 0;
    for (int idx0 = 0; idx0 < x6293; idx0++) {
      number_t acc = x6570;
      index_t i2 = idx0;
      number_t xi = (xs->arr[i2]);
      number_t x00 = (xi) * (x6277);
      number_t x000 = (xs->arr[(idx0) + (offset)]);
      index_t i20 = (idx0) + (3);
      number_t y0 = (xs->arr[i20]);
      number_t y00 = (x000) - (y0);
      number_t cur = (x00) * (y00);
      acc = (acc) + (cur);
      x6570 = acc;
    }
    
    number_t x6297 = (x6570) * ((1) - (x6269));
    array_number_t x6571 = (array_number_t)storage_alloc(sizeof(int) * 2);x6571->length=3;x6571->arr = (number_t*)storage_alloc(sizeof(number_t) * 3);
    for(int i = 0; i < x6571->length; i++){
      number_t x00 = (xs->arr[(i) + (offset)]);
      index_t i4 = (i) + (3);
      number_t y0 = (xs->arr[i4]);
      number_t xi = (x00) - (y0);
      number_t x000 = (xi) * (x6269);
      number_t xi0 = (x6285->arr[i]);
      number_t y00 = (xi0) * (x6273);
      number_t x001 = (x000) + (y00);
      index_t i3 = i;
      number_t xi1 = (xs->arr[i3]);
      number_t xi00 = (xi1) * (x6277);
      number_t y000 = (xi00) * (x6297);
      x6571->arr[i] = (x001) + (y000);
      
    }
    array_number_t Xcam = x6571;
    number_t y = (1) / ((Xcam->arr[2]));
    index_t l = 2;
    number_t rsq = 0;
    for (int idx0 = 0; idx0 < l; idx0++) {
      number_t acc = rsq;
      number_t xi = (Xcam->arr[idx0]);
      number_t x10 = (xi) * (y);
      number_t cur = (x10) * (x10);
      acc = (acc) + (cur);
      rsq = acc;
    }
    
    index_t x6325 = 9;
    index_t x6351 = 10;
    number_t L = ((1) + (((xs->arr[x6325])) * (rsq))) + ((((xs->arr[x6351])) * (rsq)) * (rsq));
    number_t y0 = (xs->arr[6]);
    array_number_t m = (array_number_t)storage_alloc(sizeof(int) * 2);m->length=2;m->arr = (number_t*)storage_alloc(sizeof(number_t) * 2);
    for(int i = 0; i < m->length; i++){
      index_t i1 = (i) + (7);
      number_t x00 = (xs->arr[i1]);
      number_t xi = (Xcam->arr[i]);
      number_t xi0 = (xi) * (y);
      number_t xi00 = (xi0) * (L);
      number_t y00 = (xi00) * (y0);
      m->arr[i] = (x00) + (y00);
      
    }
    x6572->arr[idx] = m;
    
  }
  return x6572;
}
