#pragma once

#include "fsharp.h"
#include <stdio.h>
#include <math.h>

array_number_t vector_dot(array_number_t v1, array_number_t v2) {
  array_number_t x37 = (array_number_t)storage_alloc(sizeof(int) * 2);x37->length=(v1)->length;x37->arr = (number_t*)storage_alloc(sizeof(number_t) * (v1)->length);
  for(int i = 0; i < x37->length; i++){
    x37->arr[i] = (v2->arr[i]);
    
  }
  return x37;
}

array_number_t vector_dot_dps(storage_t x37, array_number_t v1, array_number_t v2) {
  array_number_t x39 = (array_number_t)x37;
  x39->length=(v1)->length;
  x39->arr=(number_t*)(STG_OFFSET(x39, STRUCT_HEADER_BYTES));

  for(int i = 0; i < x39->length; i++){
    x39->arr[i] = (v2->arr[i]);

  }
  return x39;
}

// manually modified the return type
array_number_t vector_max(array_number_t v) {
  index_t x25 = (v)->length;
  index_t x30 = 0;
  for (int x4 = 0; x4 < x25; x4++) {
    index_t x14 = x30;
    number_t x26 = (v->arr[x14]);
    number_t x27 = (v->arr[x4]);
    index_t x28 = (x26) > (x27);
    index_t x29;
    if (x28) {
      x29 = x14;
    } else {
      x29 = x4;
    }
    x14 = x29;
    x30 = x14;
  }
  
  array_number_t x33 = (array_number_t)storage_alloc(sizeof(int) * 2);x33->length=x25;x33->arr = (number_t*)storage_alloc(sizeof(number_t) * x25);
  for(int i = 0; i < x33->length; i++){
    index_t x31 = (i) == (x30);
    index_t x32;
    if (x31) {
      x32 = 1;
    } else {
      x32 = 0;
    }
    x33->arr[i] = x32;
    
  }
  return x33;
}

// manually modified the return type
array_number_t vector_max_dps(storage_t x34, array_number_t v) {
  index_t x25 = (v)->length;
  index_t x30 = 0;
  for (int x4 = 0; x4 < x25; x4++) {
    index_t x14 = x30;
    number_t x26 = (v->arr[x14]);
    number_t x27 = (v->arr[x4]);
    index_t x28 = (x26) > (x27);
    index_t x29;
    if (x28) {
      x29 = x14;
    } else {
      x29 = x4;
    }
    x14 = x29;
    x30 = x14;
  }
  
  array_number_t x33 = (array_number_t)x34;
  x33->length=x25;
  x33->arr=(number_t*)(STG_OFFSET(x33, STRUCT_HEADER_BYTES));

  for(int i = 0; i < x33->length; i++){
    index_t x31 = (i) == (x30);
    index_t x32;
    if (x31) {
      x32 = 1;
    } else {
      x32 = 0;
    }
    x33->arr[i] = x32;

  }
  return x33;
}

array_number_t vector_lse(array_number_t v) {
  index_t x130 = (v)->length;
  index_t x135 = 0;
  for (int x16 = 0; x16 < x130; x16++) {
    index_t x72 = x135;
    number_t x131 = (v->arr[x72]);
    number_t x132 = (v->arr[x16]);
    index_t x133 = (x131) > (x132);
    index_t x134;
    if (x133) {
      x134 = x72;
    } else {
      x134 = x16;
    }
    x72 = x134;
    x135 = x72;
  }
  
  number_t x136 = (v->arr[x135]);
  number_t x142 = 0;
  for (int x22 = 0; x22 < x130; x22++) {
    number_t x53 = x142;
    number_t x137 = (v->arr[x22]);
    number_t x139 = (x137) - (x136);
    number_t x140 = exp(x139);
    number_t x141 = (x53) + (x140);
    x53 = x141;
    x142 = x53;
  }
  
  array_number_t x159 = (array_number_t)storage_alloc(sizeof(int) * 2);x159->length=x130;x159->arr = (number_t*)storage_alloc(sizeof(number_t) * x130);
  for(int i = 0; i < x159->length; i++){
    index_t x143 = (i) == (x135);
    number_t x158;
    if (x143) {
      number_t x151 = 0;
      for (int x22 = 0; x22 < x130; x22++) {
        number_t x54 = x151;
        index_t x144 = (i) == (x22);
        number_t x150;
        if (x144) {
          x150 = x54;
        } else {
          number_t x145 = (v->arr[x22]);
          number_t x146 = (x145) - (x136);
          number_t x147 = exp(x146);
          number_t x148 = (-1) * (x147);
          number_t x149 = (x54) + (x148);
          x150 = x149;
        }
        x54 = x150;
        x151 = x54;
      }
      
      number_t x152 = (x151) / (x142);
      number_t x153 = (x152) + (1);
      x158 = x153;
    } else {
      number_t x154 = (v->arr[i]);
      number_t x155 = (x154) - (x136);
      number_t x156 = exp(x155);
      number_t x157 = (x156) / (x142);
      x158 = x157;
    }
    x159->arr[i] = x158;
    
  }
  return x159;
}

array_number_t vector_lse_dps(storage_t x160, array_number_t v) {
  index_t x130 = (v)->length;
  index_t x135 = 0;
  for (int x16 = 0; x16 < x130; x16++) {
    index_t x72 = x135;
    number_t x131 = (v->arr[x72]);
    number_t x132 = (v->arr[x16]);
    index_t x133 = (x131) > (x132);
    index_t x134;
    if (x133) {
      x134 = x72;
    } else {
      x134 = x16;
    }
    x72 = x134;
    x135 = x72;
  }
  
  number_t x136 = (v->arr[x135]);
  number_t x142 = 0;
  for (int x22 = 0; x22 < x130; x22++) {
    number_t x53 = x142;
    number_t x137 = (v->arr[x22]);
    number_t x139 = (x137) - (x136);
    number_t x140 = exp(x139);
    number_t x141 = (x53) + (x140);
    x53 = x141;
    x142 = x53;
  }
  
  array_number_t x159 = (array_number_t)x160;
  x159->length=x130;
  x159->arr=(number_t*)(STG_OFFSET(x159, STRUCT_HEADER_BYTES));

  for(int i = 0; i < x159->length; i++){
    index_t x143 = (i) == (x135);
    number_t x158;
    if (x143) {
      number_t x151 = 0;
      for (int x22 = 0; x22 < x130; x22++) {
        number_t x54 = x151;
        index_t x144 = (i) == (x22);
        number_t x150;
        if (x144) {
          x150 = x54;
        } else {
          number_t x145 = (v->arr[x22]);
          number_t x146 = (x145) - (x136);
          number_t x147 = exp(x146);
          number_t x148 = (-1) * (x147);
          number_t x149 = (x54) + (x148);
          x150 = x149;
        }
        x54 = x150;
        x151 = x54;
      }
      
      number_t x152 = (x151) / (x142);
      number_t x153 = (x152) + (1);
      x158 = x153;
    } else {
      number_t x154 = (v->arr[i]);
      number_t x155 = (x154) - (x136);
      number_t x156 = exp(x155);
      number_t x157 = (x156) / (x142);
      x158 = x157;
    }
    x159->arr[i] = x158;

  }
  return x159;
}

array_number_t vector_mults(array_number_t v, number_t s) {
  array_number_t x31 = (array_number_t)storage_alloc(sizeof(int) * 2);x31->length=(v)->length;x31->arr = (number_t*)storage_alloc(sizeof(number_t) * (v)->length);
  for(int i = 0; i < x31->length; i++){
    x31->arr[i] = ((v->arr[i])) * ((s) + (s));
    
  }
  return x31;
}

array_number_t vector_mults_dps(storage_t x31, array_number_t v, number_t s) {
  array_number_t x33 = (array_number_t)x31;
  x33->length=(v)->length;
  x33->arr=(number_t*)(STG_OFFSET(x33, STRUCT_HEADER_BYTES));

  for(int i = 0; i < x33->length; i++){
    x33->arr[i] = ((v->arr[i])) * ((s) + (s));

  }
  return x33;
}
