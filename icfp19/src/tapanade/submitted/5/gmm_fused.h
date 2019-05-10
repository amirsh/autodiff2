// name of top routine:
// gmm_objective
// dependent output variables:
// 
// independent variables:
// 
#include <stdlib.h>
#include <math.h>
#include "../../../diffsmooth/types.h"

number_t gmm_objective(array_array_number_t x, array_number_t alphas, array_array_number_t means, array_array_number_t qs, array_array_number_t ls, number_t wishart_gamma, number_t wishart_m) {
  index_t x266 = (x)->length;
  index_t x11886 = (alphas)->length;
  number_t x11865 = -1000;
  for (int idx = 0; idx < (alphas)->length; idx++) {
    number_t acc = x11865;
    number_t cur = (alphas->arr[idx]);
    number_t x11896;
    if ((acc) > (cur)) {
      x11896 = acc;
    } else {
      x11896 = cur;
    }
    acc = x11896;
    x11865 = acc;
  }
  
  number_t x11909 = 0;
  for (int idx = 0; idx < x266; idx++) {
    number_t acc = x11909;
    array_number_t x11878 = (x->arr[idx]);
    array_number_t x11857 = (x->arr[idx]);
    number_t x11833 = -1000;
    for (int idx0 = 0; idx0 < x11886; idx0++) {
      number_t acc0 = x11833;
      array_number_t x11874 = (ls->arr[idx0]);
      array_number_t x11850 = (qs->arr[idx0]);
      number_t x11897 = 0;
      for (int idx00 = 0; idx00 < (x11850)->length; idx00++) {
        number_t acc00 = x11897;
        acc00 = (acc00) + ((x11850->arr[idx00]));
        x11897 = acc00;
      }
      
      number_t x11901 = 0;
      for (int idx00 = 0; idx00 < (x11878)->length; idx00++) {
        number_t acc00 = x11901;
        index_t x40 = (idx00) - (1);
        number_t x11900 = 0;
        for (int idx000 = 0; idx000 < (x11874)->length; idx000++) {
          number_t acc000 = x11900;
          index_t j = (idx000) - (((x40) * ((x40) + (1))) / (2));
          index_t x11898;
          if ((j) >= (0)) {
            x11898 = (j) < (idx00);
          } else {
            x11898 = 0;
          }
          number_t x11899;
          if (x11898) {
            x11899 = (acc000) + (((x11874->arr[idx000])) * (((x11878->arr[j])) - (((means->arr[idx0])->arr[j]))));
          } else {
            x11899 = acc000;
          }
          acc000 = x11899;
          x11900 = acc000;
        }
        
        number_t x418 = (x11900) + ((exp(((qs->arr[idx0])->arr[idx00]))) * (((x11878->arr[idx00])) - (((means->arr[idx0])->arr[idx00]))));
        acc00 = (acc00) + ((x418) * (x418));
        x11901 = acc00;
      }
      
      number_t cur = (((alphas->arr[idx0])) + (x11897)) - ((0.5) * (x11901));
      number_t x11902;
      if ((acc0) > (cur)) {
        x11902 = acc0;
      } else {
        x11902 = cur;
      }
      acc0 = x11902;
      x11833 = acc0;
    }
    
    number_t x11908 = 0;
    for (int idx0 = 0; idx0 < x11886; idx0++) {
      number_t acc0 = x11908;
      array_number_t x11870 = (qs->arr[idx0]);
      array_number_t x11846 = (ls->arr[idx0]);
      number_t x11903 = 0;
      for (int idx00 = 0; idx00 < (x11870)->length; idx00++) {
        number_t acc00 = x11903;
        acc00 = (acc00) + ((x11870->arr[idx00]));
        x11903 = acc00;
      }
      
      number_t x11907 = 0;
      for (int idx00 = 0; idx00 < (x11857)->length; idx00++) {
        number_t acc00 = x11907;
        index_t x40 = (idx00) - (1);
        number_t x11906 = 0;
        for (int idx000 = 0; idx000 < (x11846)->length; idx000++) {
          number_t acc000 = x11906;
          index_t j = (idx000) - (((x40) * ((x40) + (1))) / (2));
          index_t x11904;
          if ((j) >= (0)) {
            x11904 = (j) < (idx00);
          } else {
            x11904 = 0;
          }
          number_t x11905;
          if (x11904) {
            x11905 = (acc000) + (((x11846->arr[idx000])) * (((x11857->arr[j])) - (((means->arr[idx0])->arr[j]))));
          } else {
            x11905 = acc000;
          }
          acc000 = x11905;
          x11906 = acc000;
        }
        
        number_t x272 = (x11906) + ((exp(((qs->arr[idx0])->arr[idx00]))) * (((x11857->arr[idx00])) - (((means->arr[idx0])->arr[idx00]))));
        acc00 = (acc00) + ((x272) * (x272));
        x11907 = acc00;
      }
      
      acc0 = (acc0) + (exp(((((alphas->arr[idx0])) + (x11903)) - ((0.5) * (x11907))) - (x11833)));
      x11908 = acc0;
    }
    
    acc = (acc) + ((log(x11908)) + (x11833));
    x11909 = acc;
  }
  
  number_t x11910 = 0;
  for (int idx = 0; idx < (alphas)->length; idx++) {
    number_t acc = x11910;
    acc = (acc) + (exp(((alphas->arr[idx])) - (x11865)));
    x11910 = acc;
  }
  
  number_t x11913 = 0;
  for (int idx = 0; idx < x11886; idx++) {
    number_t acc = x11913;
    array_number_t x11882 = (qs->arr[idx]);
    array_number_t x11861 = (ls->arr[idx]);
    number_t x11911 = 0;
    for (int idx0 = 0; idx0 < (x11882)->length; idx0++) {
      number_t acc0 = x11911;
      number_t x1078 = exp((x11882->arr[idx0]));
      acc0 = (acc0) + ((x1078) * (x1078));
      x11911 = acc0;
    }
    
    number_t x11912 = 0;
    for (int idx0 = 0; idx0 < (x11861)->length; idx0++) {
      number_t acc0 = x11912;
      number_t x1080 = (x11861->arr[idx0]);
      acc0 = (acc0) + ((x1080) * (x1080));
      x11912 = acc0;
    }
    
    acc = (acc) + ((x11911) + (x11912));
    x11913 = acc;
  }
  
  return ((x11909) - (((double)(x266)) * ((log(x11910)) + (x11865)))) + ((0.5) * (x11913));
}
