#include <math.h>

array_number_t nmf(array_number_t u, array_number_t v, array_array_number_t AA) {
  index_t x205 = (u)->length;
  index_t x218 = (v)->length;
  array_number_t x220 = (array_number_t)storage_alloc(sizeof(int) * 2);x220->length=x205;x220->arr = (number_t*)storage_alloc(sizeof(number_t) * x205);
  for(int i = 0; i < x220->length; i++){
    number_t x207 = (u->arr[i]);
    number_t x209 = (1) / (x207);
    number_t x219 = 0;
    for (int x46 = 0; x46 < x218; x46++) {
      number_t x181 = x219;
      number_t x206 = (v->arr[x46]);
      number_t x208 = (x206) * (x207);
      array_number_t x210 = (AA->arr[x46]);
      number_t x211 = (x210->arr[i]);
      number_t x212 = (x211) * (x206);
      number_t x213 = -(x212);
      number_t x214 = (x208) * (x208);
      number_t x215 = (x213) / (x214);
      number_t x216 = (x209) + (x215);
      number_t x217 = (x181) + (x216);
      x181 = x217;
      x219 = x181;
    }
    
    x220->arr[i] = x219;
    
  }
  return x220;
}
