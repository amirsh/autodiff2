#include <math.h>

array_number_t nmf(array_number_t u, array_number_t v, array_array_number_t AA) {
  array_number_t x130 = (array_number_t)storage_alloc(sizeof(int) * 2);x130->length=(u)->length;x130->arr = (number_t*)storage_alloc(sizeof(number_t) * (u)->length);
  for(int i = 0; i < x130->length; i++){
    tuple_number_t_number_t x128 = (tuple_number_t_number_t){._1=0, ._2=0};
    tuple_number_t_number_t x129 = x128;
    for (int x46 = 0; x46 < (v)->length; x46++) {
      tuple_number_t_number_t x45 = x129;
      tuple_number_t_number_t x126 = (tuple_number_t_number_t){._1=0, ._2=0};
      tuple_number_t_number_t x54 = x126;
      for (int x62 = 0; x62 < (u)->length; x62++) {
        tuple_number_t_number_t x61 = x54;
        number_t x123 = (v->arr[x62]);
        number_t x124 = (u->arr[x62]);
        index_t x122;
        if ((i) == (x62)) {
          x122 = 1;
        } else {
          x122 = 0;
        }
        array_number_t x18 = (AA->arr[x46]);
        tuple_number_t_index_t x93 = (tuple_number_t_index_t){._1=(x18->arr[x62]), ._2=0};
        number_t x111 = (v->arr[x62]);
        number_t x112 = (u->arr[x62]);
        index_t x110;
        if ((i) == (x62)) {
          x110 = 1;
        } else {
          x110 = 0;
        }
        number_t x97 = (x93)._1;
        index_t x95 = (x93)._2;
        number_t x98 = (x111) * (x112);
        number_t x96 = (x111) * (x110);
        number_t x85 = log((x123) * (x124));
        number_t x83 = ((x123) * (x122)) / ((x124) * (x123));
        number_t x86 = (x97) / (x98);
        number_t x84 = (((x95) * (x98)) - ((x97) * (x96))) / ((x98) * (x98));
        number_t x73 = (x61)._1;
        number_t x71 = (x61)._2;
        number_t x74 = (x85) + (x86);
        number_t x72 = (x83) + (x84);
        tuple_number_t_number_t x125 = (tuple_number_t_number_t){._1=(x73) + (x74), ._2=(x71) + (x72)};
        x61 = x125;
        x54 = x61;
      }
      
      number_t x57 = (x45)._1;
      number_t x55 = (x45)._2;
      number_t x58 = (x54)._1;
      number_t x56 = (x54)._2;
      tuple_number_t_number_t x127 = (tuple_number_t_number_t){._1=(x57) + (x58), ._2=(x55) + (x56)};
      x45 = x127;
      x129 = x45;
    }
    
    x130->arr[i] = (x129)._2;
    
  }
  return x130;
}