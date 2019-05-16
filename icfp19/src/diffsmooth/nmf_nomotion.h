#include <math.h>

// > fondueJVM/test:run nmf no-motion

array_number_t nmf(array_number_t u, array_number_t v, array_array_number_t AA) {
  index_t x205 = (u)->length;
  index_t x206 = (v)->length;
  array_number_t x226 = (array_number_t)storage_alloc(sizeof(int) * 2);x226->length=x205;x226->arr = (number_t*)storage_alloc(sizeof(number_t) * x205);
  for(int i = 0; i < x226->length; i++){
    number_t x225 = 0;
    for (int x46 = 0; x46 < x206; x46++) {
      number_t x181 = x225;
      number_t x207 = (v->arr[x46]);
      array_number_t x215 = (AA->arr[x46]);
      number_t x223 = 0;
      for (int x62 = 0; x62 < x205; x62++) {
        number_t x177 = x223;
        number_t x208 = (u->arr[x62]);
        number_t x209 = (x207) * (x208);
        index_t x210 = (i) == (x62);
        index_t x211;
        if (x210) {
          x211 = 1;
        } else {
          x211 = 0;
        }
        number_t x212 = (x207) * (x211);
        number_t x213 = (x208) * (x207);
        number_t x214 = (x212) / (x213);
        number_t x216 = (x215->arr[x62]);
        number_t x217 = (x216) * (x212);
        number_t x218 = -(x217);
        number_t x219 = (x209) * (x209);
        number_t x220 = (x218) / (x219);
        number_t x221 = (x214) + (x220);
        number_t x222 = (x177) + (x221);
        x177 = x222;
        x223 = x177;
      }
      
      number_t x224 = (x181) + (x223);
      x181 = x224;
      x225 = x181;
    }
    
    x226->arr[i] = x225;
    
  }
  return x226;
}
