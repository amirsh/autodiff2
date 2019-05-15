#include <math.h>

array_number_t nmf_dps(storage_t x190, array_number_t u, array_number_t v, array_array_number_t AA) {
  index_t x174 = (u)->length;
  index_t x187 = (v)->length;
  array_number_t x189 = (array_number_t)x190;
  x189->length=x174;
  x189->arr=(number_t*)(STG_OFFSET(x189, VECTOR_HEADER_BYTES));

  for(int i = 0; i < x189->length; i++){
    number_t x175 = (u->arr[i]);
    number_t x178 = (1) / (x175);
    number_t x188 = 0;
    for (int x46 = 0; x46 < x187; x46++) {
      number_t x132 = x188;
      number_t x176 = (v->arr[x46]);
      number_t x177 = (x176) * (x175);
      array_number_t x179 = (AA->arr[x46]);
      number_t x180 = (x179->arr[i]);
      number_t x181 = (x180) * (x176);
      number_t x182 = -(x181);
      number_t x183 = (x177) * (x177);
      number_t x184 = (x182) / (x183);
      number_t x185 = (x178) + (x184);
      number_t x186 = (x132) + (x185);
      x132 = x186;
      x188 = x132;
    }
    
    x189->arr[i] = x188;

  }
  return x189;
}
