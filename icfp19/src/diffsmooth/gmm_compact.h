#include <stdlib.h>
#include <math.h>
#include <float.h>
#include "types.h"

void gmm_init(int d_p, int k_p, int n_p) {}

tuple_number_t_number_t pair(number_t _1, number_t _2) {
  tuple_number_t_number_t res;
  res._1 = _1;
  res._2 = _2;
  return res;
}

number_t gmm_objective(array_array_number_t x, array_number_t alphas, array_array_number_t means, array_array_number_t qs, array_array_number_t ls, number_t wishart_gamma, number_t wishart_m) {
//   card_t macroDef175 = x->length;
//   card_t n = macroDef175;
//   card_t macroDef176 = alphas->length;
//   card_t K = macroDef176;
//   number_t macroDef189 = 0;
//   for(int idx = 0; idx < n; idx++){
//     number_t acc0 = macroDef189;
//     index_t i = idx;
//     number_t macroDef182 = -1000;
//   for(int idx0 = 0; idx0 < K; idx0++){
//     number_t acc2 = macroDef182;
//     index_t k = idx0;
//     array_number_t v = qs->arr[k];
//     number_t macroDef177 = 0;
//   for(int cur_idx = 0; cur_idx < v->length; cur_idx++){
//     number_t cur = v->arr[cur_idx];
    
//     macroDef177 = (macroDef177) + (cur);;
//   }
//     array_number_t q = qs->arr[k];
//     array_number_t l = ls->arr[k];
//     array_number_t x0 = x->arr[i];
//     array_number_t y = means->arr[k];
//     card_t macroDef180 = x0->length;
//     number_t macroDef181 = 0;
//   for(int idx1 = 0; idx1 <= (macroDef180) - (1); idx1++){
//     number_t acc4 = macroDef181;
//     index_t i0 = idx1;
//     index_t n0 = (i0) - (1);
//     index_t tis = ((n0) * ((n0) + (1))) / (2);
//     card_t s = 0;
//     card_t macroDef178 = l->length;
//     card_t e = macroDef178;
//     number_t macroDef179 = 0;
//   for(int idx2 = 0; idx2 <= (((e) - (s)) + (1)) - (1); idx2++){
//     number_t acc6 = macroDef179;
//     index_t i1 = idx2;
//     number_t cur = (double)(((s)) + (i1));
//     index_t idx3 = (int)(cur);
//     index_t j = (idx3) - (tis);
//     bool_t isInRange = 0;
//   if((j) >= (0)) {
    
//     isInRange = (j) < (i0);;
//   } else {
    
//     isInRange = false;;
//   }
//     number_t ite198 = 0;
//   if(isInRange) {
//     number_t x1 = x0->arr[j];
//     number_t y0 = y->arr[j];
//     ite198 = (acc6) + ((l->arr[idx3]) * ((x1) - (y0)));;
//   } else {
    
//     ite198 = acc6;;
//   }
//     macroDef179 = ite198;;
//   }
//     number_t sum = macroDef179;
//     number_t x1 = x0->arr[i0];
//     number_t y0 = y->arr[i0];
//     number_t x10 = (sum) + ((exp(q->arr[i0])) * ((x1) - (y0)));
//     number_t cur = (x10) * (x10);
//     macroDef181 = (acc4) + (cur);;
//   }
//     number_t cur = ((alphas->arr[k]) + (macroDef177)) - ((0.5) * (macroDef181));
//     number_t ite199 = 0;
//   if((acc2) > (cur)) {
    
//     ite199 = acc2;;
//   } else {
    
//     ite199 = cur;;
//   }
//     macroDef182 = ite199;;
//   }
//     number_t mx148 = macroDef182;
//     number_t macroDef188 = 0;
//   for(int idx0 = 0; idx0 < K; idx0++){
//     number_t acc2 = macroDef188;
//     index_t i0 = idx0;
//     array_number_t v149 = qs->arr[i0];
//     number_t macroDef183 = 0;
//   for(int cur_idx = 0; cur_idx < v149->length; cur_idx++){
//     number_t cur = v149->arr[cur_idx];
    
//     macroDef183 = (macroDef183) + (cur);;
//   }
//     array_number_t q150 = qs->arr[i0];
//     array_number_t l151 = ls->arr[i0];
//     array_number_t x152 = x->arr[i];
//     array_number_t y153 = means->arr[i0];
//     card_t macroDef186 = x152->length;
//     number_t macroDef187 = 0;
//   for(int idx1 = 0; idx1 <= (macroDef186) - (1); idx1++){
//     number_t acc4 = macroDef187;
//     index_t i1 = idx1;
//     index_t n154 = (i1) - (1);
//     index_t tis155 = ((n154) * ((n154) + (1))) / (2);
//     card_t s156 = 0;
//     card_t macroDef184 = l151->length;
//     card_t e157 = macroDef184;
//     number_t macroDef185 = 0;
//   for(int idx2 = 0; idx2 <= (((e157) - (s156)) + (1)) - (1); idx2++){
//     number_t acc6 = macroDef185;
//     index_t i2 = idx2;
//     number_t cur = (double)(((s156)) + (i2));
//     index_t idx158 = (int)(cur);
//     index_t j159 = (idx158) - (tis155);
//     bool_t isInRange160 = 0;
//   if((j159) >= (0)) {
    
//     isInRange160 = (j159) < (i1);;
//   } else {
    
//     isInRange160 = false;;
//   }
//     number_t ite200 = 0;
//   if(isInRange160) {
//     number_t x161 = x152->arr[j159];
//     number_t y162 = y153->arr[j159];
//     ite200 = (acc6) + ((l151->arr[idx158]) * ((x161) - (y162)));;
//   } else {
    
//     ite200 = acc6;;
//   }
//     macroDef185 = ite200;;
//   }
//     number_t sum163 = macroDef185;
//     number_t x164 = x152->arr[i1];
//     number_t y165 = y153->arr[i1];
//     number_t x1166 = (sum163) + ((exp(q150->arr[i1])) * ((x164) - (y165)));
//     number_t cur = (x1166) * (x1166);
//     macroDef187 = (acc4) + (cur);;
//   }
//     number_t x168 = ((alphas->arr[i0]) + (macroDef183)) - ((0.5) * (macroDef187));
//     number_t cur = exp((x168) - (mx148));
//     macroDef188 = (acc2) + (cur);;
//   }
//     number_t semx170172 = macroDef188;
//     number_t cur = (log(semx170172)) + (mx148);
//     macroDef189 = (acc0) + (cur);;
//   }
//   number_t macroDef190 = -1000;
//   for(int cur_idx = 0; cur_idx < alphas->length; cur_idx++){
//     number_t cur = alphas->arr[cur_idx];
//     number_t ite201 = 0;
//   if((macroDef190) > (cur)) {
    
//     ite201 = macroDef190;;
//   } else {
    
//     ite201 = cur;;
//   }
//     macroDef190 = ite201;;
//   }
//   number_t mx = macroDef190;
//   card_t macroDef191 = alphas->length;
//   number_t macroDef192 = 0;
//   for(int idx = 0; idx <= (macroDef191) - (1); idx++){
//     number_t acc0 = macroDef192;
//     index_t i = idx;
//     number_t x0 = alphas->arr[i];
//     number_t cur = exp((x0) - (mx));
//     macroDef192 = (acc0) + (cur);;
//   }
//   number_t semx174 = macroDef192;
//   number_t macroDef197 = 0;
//   for(int idx = 0; idx < K; idx++){
//     number_t acc0 = macroDef197;
//     index_t k = idx;
//     array_number_t v = qs->arr[k];
//     card_t macroDef193 = v->length;
//     number_t macroDef194 = 0;
//   for(int idx0 = 0; idx0 <= (macroDef193) - (1); idx0++){
//     number_t acc2 = macroDef194;
//     index_t i = idx0;
//     number_t value = v->arr[i];
//     number_t x1 = exp(value);
//     number_t cur = (x1) * (x1);
//     macroDef194 = (acc2) + (cur);;
//   }
//     array_number_t x0 = ls->arr[k];
//     card_t macroDef195 = x0->length;
//     number_t macroDef196 = 0;
//   for(int idx0 = 0; idx0 <= (macroDef195) - (1); idx0++){
//     number_t acc2 = macroDef196;
//     index_t i = idx0;
//     number_t x1 = x0->arr[i];
//     number_t cur = (x1) * (x1);
//     macroDef196 = (acc2) + (cur);;
//   }
//     number_t cur = (macroDef194) + (macroDef196);
//     macroDef197 = (acc0) + (cur);;
//   }
//   return ((macroDef189) - (((double)((n))) * ((log(semx174)) + (mx)))) + ((0.5) * (macroDef197));
// }
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


// number_t gmm_objective_d(array_array_number_t x, array_number_t alphas, array_array_number_t means, array_array_number_t qs, array_array_number_t ls, number_t wishart_gamma, number_t wishart_m, array_array_number_t x_d, array_number_t alphas_d, array_array_number_t means_d, array_array_number_t qs_d, array_array_number_t ls_d, number_t wishart_gamma_d, number_t wishart_m_d) {
//   card_t macroDef157 = x->length;
//   card_t n = macroDef157;
//   card_t macroDef158 = alphas->length;
//   card_t K = macroDef158;
//   number_t macroDef159 = -1000;
//   for(int idx = 0; idx < K; idx++){
//     number_t cur = alphas->arr[idx];
//     number_t ite220 = 0;
//   if((macroDef159) > (cur)) {
    
//     ite220 = macroDef159;;
//   } else {
    
//     ite220 = cur;;
//   }
//     macroDef159 = ite220;;
//   }
//   number_t mx = macroDef159;
//   number_t macroDef160 = 0;
//   for(int idx = 0; idx < K; idx++){
//     number_t x0 = alphas->arr[idx];
//     number_t cur = exp((x0) - (mx));
//     macroDef160 = (macroDef160) + (cur);;
//   }
//   number_t semx = macroDef160;
//   tuple_number_t_number_t macroDef161 = pair(-1000, 0);
//   for(int idx = 0; idx < K; idx++){
//     number_t acc = macroDef161._1;
//     number_t acc_d = macroDef161._2;
//     number_t cur = alphas->arr[idx];
//     number_t cur_d = alphas_d->arr[idx];
//     number_t ite221 = 0;
//   if((acc) > (cur)) {
    
//     ite221 = acc;;
//   } else {
    
//     ite221 = cur;;
//   }
//     number_t ite222 = 0;
//   if((acc) > (cur)) {
    
//     ite222 = acc_d;;
//   } else {
    
//     ite222 = cur_d;;
//   }
//     macroDef161 = pair(ite221, ite222);;
//   }
//   number_t mx_d = macroDef161._2;
//   number_t macroDef162 = 0;
//   for(int idx = 0; idx < K; idx++){
//     number_t x0 = alphas->arr[idx];
//     number_t x0_d = alphas_d->arr[idx];
//     number_t cur_d = ((x0_d) - (mx_d)) * (exp((x0) - (mx)));
//     macroDef162 = (macroDef162) + (cur_d);;
//   }
//   number_t semx_d = macroDef162;
//   number_t macroDef209 = 0;
//   for(int idx = 0; idx < n; idx++){
//     number_t macroDef169 = -1000;
//   for(int idx0 = 0; idx0 < K; idx0++){
//     array_number_t v = qs->arr[idx0];
//     card_t macroDef163 = v->length;
//     card_t l2 = macroDef163;
//     array_number_t l3 = ls->arr[idx0];
//     array_number_t x0 = x->arr[idx];
//     array_number_t y = means->arr[idx0];
//     card_t macroDef164 = x0->length;
//     card_t l01 = macroDef164;
//     number_t macroDef165 = 0;
//   for(int idx1 = 0; idx1 < l2; idx1++){
//     number_t cur = v->arr[idx1];
//     macroDef165 = (macroDef165) + (cur);;
//   }
//     number_t macroDef168 = 0;
//   for(int idx1 = 0; idx1 < l01; idx1++){
//     index_t n0 = (idx1) - (1);
//     index_t tis = ((n0) * ((n0) + (1))) / (2);
//     card_t macroDef166 = l3->length;
//     number_t macroDef167 = 0;
//   for(int idx2 = 0; idx2 < macroDef166; idx2++){
//     index_t j = (idx2) - (tis);
//     bool_t isInRange = 0;
//   if((j) >= (0)) {
    
//     isInRange = (j) < (idx1);;
//   } else {
    
//     isInRange = false;;
//   }
//     number_t ite223 = 0;
//   if(isInRange) {
//     number_t x1 = x0->arr[j];
//     number_t y0 = y->arr[j];
//     ite223 = (macroDef167) + ((l3->arr[idx2]) * ((x1) - (y0)));;
//   } else {
    
//     ite223 = macroDef167;;
//   }
//     macroDef167 = ite223;;
//   }
//     number_t sum = macroDef167;
//     number_t x1 = x0->arr[idx1];
//     number_t y0 = y->arr[idx1];
//     number_t x10 = (sum) + ((exp(v->arr[idx1])) * ((x1) - (y0)));
//     number_t cur = (x10) * (x10);
//     macroDef168 = (macroDef168) + (cur);;
//   }
//     number_t cur = ((alphas->arr[idx0]) + (macroDef165)) - ((0.5) * (macroDef168));
//     number_t ite224 = 0;
//   if((macroDef169) > (cur)) {
    
//     ite224 = macroDef169;;
//   } else {
    
//     ite224 = cur;;
//   }
//     macroDef169 = ite224;;
//   }
//     number_t mx1 = macroDef169;
//     tuple_number_t_number_t macroDef185 = pair(-1000, 0);
//   for(int idx0 = 0; idx0 < K; idx0++){
//     number_t acc0 = macroDef185._1;
//     number_t acc0_d = macroDef185._2;
//     array_number_t v = qs->arr[idx0];
//     card_t macroDef170 = v->length;
//     card_t l2 = macroDef170;
//     array_number_t l3 = ls->arr[idx0];
//     array_number_t x0 = x->arr[idx];
//     array_number_t y = means->arr[idx0];
//     card_t macroDef171 = x0->length;
//     card_t l01 = macroDef171;
//     number_t macroDef172 = 0;
//   for(int idx1 = 0; idx1 < l2; idx1++){
//     number_t cur = v->arr[idx1];
//     macroDef172 = (macroDef172) + (cur);;
//   }
//     number_t macroDef175 = 0;
//   for(int idx1 = 0; idx1 < l01; idx1++){
//     index_t n0 = (idx1) - (1);
//     index_t tis = ((n0) * ((n0) + (1))) / (2);
//     card_t macroDef173 = l3->length;
//     number_t macroDef174 = 0;
//   for(int idx2 = 0; idx2 < macroDef173; idx2++){
//     index_t j = (idx2) - (tis);
//     bool_t isInRange = 0;
//   if((j) >= (0)) {
    
//     isInRange = (j) < (idx1);;
//   } else {
    
//     isInRange = false;;
//   }
//     number_t ite225 = 0;
//   if(isInRange) {
//     number_t x1 = x0->arr[j];
//     number_t y0 = y->arr[j];
//     ite225 = (macroDef174) + ((l3->arr[idx2]) * ((x1) - (y0)));;
//   } else {
    
//     ite225 = macroDef174;;
//   }
//     macroDef174 = ite225;;
//   }
//     number_t sum = macroDef174;
//     number_t x1 = x0->arr[idx1];
//     number_t y0 = y->arr[idx1];
//     number_t x10 = (sum) + ((exp(v->arr[idx1])) * ((x1) - (y0)));
//     number_t cur = (x10) * (x10);
//     macroDef175 = (macroDef175) + (cur);;
//   }
//     number_t cur = ((alphas->arr[idx0]) + (macroDef172)) - ((0.5) * (macroDef175));
//     array_number_t v_d = qs_d->arr[idx0];
//     array_number_t l_d = ls_d->arr[idx0];
//     array_number_t x0_d = x_d->arr[idx];
//     array_number_t y_d = means_d->arr[idx0];
//     number_t macroDef176 = 0;
//   for(int idx1 = 0; idx1 < l2; idx1++){
//     number_t cur_d = v_d->arr[idx1];
//     macroDef176 = (macroDef176) + (cur_d);;
//   }
//     number_t macroDef179 = 0;
//   for(int idx1 = 0; idx1 < l01; idx1++){
//     index_t n0 = (idx1) - (1);
//     index_t tis = ((n0) * ((n0) + (1))) / (2);
//     card_t macroDef177 = l3->length;
//     number_t macroDef178 = 0;
//   for(int idx2 = 0; idx2 < macroDef177; idx2++){
//     index_t j = (idx2) - (tis);
//     bool_t isInRange = 0;
//   if((j) >= (0)) {
    
//     isInRange = (j) < (idx1);;
//   } else {
    
//     isInRange = false;;
//   }
//     number_t ite226 = 0;
//   if(isInRange) {
//     number_t x1 = x0->arr[j];
//     number_t y00 = y->arr[j];
//     ite226 = (macroDef178) + ((l3->arr[idx2]) * ((x1) - (y00)));;
//   } else {
    
//     ite226 = macroDef178;;
//   }
//     macroDef178 = ite226;;
//   }
//     number_t sum = macroDef178;
//     number_t x1 = x0->arr[idx1];
//     number_t y00 = y->arr[idx1];
//     number_t x10 = (sum) + ((exp(v->arr[idx1])) * ((x1) - (y00)));
//     number_t cur00 = (x10) * (x10);
//     macroDef179 = (macroDef179) + (cur00);;
//   }
//     number_t macroDef184 = 0;
//   for(int idx1 = 0; idx1 < l01; idx1++){
//     index_t n0 = (idx1) - (1);
//     index_t tis = ((n0) * ((n0) + (1))) / (2);
//     card_t macroDef180 = l3->length;
//     number_t macroDef181 = 0;
//   for(int idx2 = 0; idx2 < macroDef180; idx2++){
//     index_t j = (idx2) - (tis);
//     bool_t isInRange = 0;
//   if((j) >= (0)) {
    
//     isInRange = (j) < (idx1);;
//   } else {
    
//     isInRange = false;;
//   }
//     number_t ite227 = 0;
//   if(isInRange) {
//     number_t x1 = x0->arr[j];
//     number_t y00 = y->arr[j];
//     ite227 = (macroDef181) + ((l3->arr[idx2]) * ((x1) - (y00)));;
//   } else {
    
//     ite227 = macroDef181;;
//   }
//     macroDef181 = ite227;;
//   }
//     number_t sum = macroDef181;
//     card_t macroDef182 = l3->length;
//     number_t macroDef183 = 0;
//   for(int idx2 = 0; idx2 < macroDef182; idx2++){
//     index_t j = (idx2) - (tis);
//     bool_t isInRange = 0;
//   if((j) >= (0)) {
    
//     isInRange = (j) < (idx1);;
//   } else {
    
//     isInRange = false;;
//   }
//     number_t ite228 = 0;
//   if(isInRange) {
//     number_t x1 = x0->arr[j];
//     number_t y00 = y->arr[j];
//     number_t x1_d = x0_d->arr[j];
//     number_t y0_d = y_d->arr[j];
//     ite228 = (macroDef183) + (((l_d->arr[idx2]) * ((x1) - (y00))) + ((l3->arr[idx2]) * ((x1_d) - (y0_d))));;
//   } else {
    
//     ite228 = macroDef183;;
//   }
//     macroDef183 = ite228;;
//   }
//     number_t sum_d = macroDef183;
//     number_t x1 = x0->arr[idx1];
//     number_t y00 = y->arr[idx1];
//     number_t x10 = (sum) + ((exp(v->arr[idx1])) * ((x1) - (y00)));
//     number_t x1_d = x0_d->arr[idx1];
//     number_t y0_d = y_d->arr[idx1];
//     number_t x1_d0 = (sum_d) + ((((v_d->arr[idx1]) * (exp(v->arr[idx1]))) * ((x1) - (y00))) + ((exp(v->arr[idx1])) * ((x1_d) - (y0_d))));
//     number_t cur_d = ((x1_d0) * (x10)) + ((x10) * (x1_d0));
//     macroDef184 = (macroDef184) + (cur_d);;
//   }
//     number_t cur_d = ((alphas_d->arr[idx0]) + (macroDef176)) - (((0) * (macroDef179)) + ((0.5) * (macroDef184)));
//     number_t ite229 = 0;
//   if((acc0) > (cur)) {
    
//     ite229 = acc0;;
//   } else {
    
//     ite229 = cur;;
//   }
//     number_t ite230 = 0;
//   if((acc0) > (cur)) {
    
//     ite230 = acc0_d;;
//   } else {
    
//     ite230 = cur_d;;
//   }
//     macroDef185 = pair(ite229, ite230);;
//   }
//     number_t mx_d0 = macroDef185._2;
//     number_t macroDef192 = 0;
//   for(int idx0 = 0; idx0 < K; idx0++){
//     array_number_t v = qs->arr[idx0];
//     card_t macroDef186 = v->length;
//     card_t l2 = macroDef186;
//     array_number_t l3 = ls->arr[idx0];
//     array_number_t x0 = x->arr[idx];
//     array_number_t y = means->arr[idx0];
//     card_t macroDef187 = x0->length;
//     card_t l01 = macroDef187;
//     number_t macroDef188 = 0;
//   for(int idx1 = 0; idx1 < l2; idx1++){
//     number_t cur = v->arr[idx1];
//     macroDef188 = (macroDef188) + (cur);;
//   }
//     number_t macroDef191 = 0;
//   for(int idx1 = 0; idx1 < l01; idx1++){
//     index_t n0 = (idx1) - (1);
//     index_t tis = ((n0) * ((n0) + (1))) / (2);
//     card_t macroDef189 = l3->length;
//     number_t macroDef190 = 0;
//   for(int idx2 = 0; idx2 < macroDef189; idx2++){
//     index_t j = (idx2) - (tis);
//     bool_t isInRange = 0;
//   if((j) >= (0)) {
    
//     isInRange = (j) < (idx1);;
//   } else {
    
//     isInRange = false;;
//   }
//     number_t ite231 = 0;
//   if(isInRange) {
//     number_t x1 = x0->arr[j];
//     number_t y0 = y->arr[j];
//     ite231 = (macroDef190) + ((l3->arr[idx2]) * ((x1) - (y0)));;
//   } else {
    
//     ite231 = macroDef190;;
//   }
//     macroDef190 = ite231;;
//   }
//     number_t sum = macroDef190;
//     number_t x1 = x0->arr[idx1];
//     number_t y0 = y->arr[idx1];
//     number_t x10 = (sum) + ((exp(v->arr[idx1])) * ((x1) - (y0)));
//     number_t cur = (x10) * (x10);
//     macroDef191 = (macroDef191) + (cur);;
//   }
//     number_t x00 = ((alphas->arr[idx0]) + (macroDef188)) - ((0.5) * (macroDef191));
//     number_t cur = exp((x00) - (mx1));
//     macroDef192 = (macroDef192) + (cur);;
//   }
//     number_t semx1 = macroDef192;
//     number_t macroDef208 = 0;
//   for(int idx0 = 0; idx0 < K; idx0++){
//     array_number_t v = qs->arr[idx0];
//     card_t macroDef193 = v->length;
//     card_t l2 = macroDef193;
//     array_number_t l3 = ls->arr[idx0];
//     array_number_t x0 = x->arr[idx];
//     array_number_t y = means->arr[idx0];
//     card_t macroDef194 = x0->length;
//     card_t l01 = macroDef194;
//     number_t macroDef195 = 0;
//   for(int idx1 = 0; idx1 < l2; idx1++){
//     number_t cur = v->arr[idx1];
//     macroDef195 = (macroDef195) + (cur);;
//   }
//     number_t macroDef198 = 0;
//   for(int idx1 = 0; idx1 < l01; idx1++){
//     index_t n0 = (idx1) - (1);
//     index_t tis = ((n0) * ((n0) + (1))) / (2);
//     card_t macroDef196 = l3->length;
//     number_t macroDef197 = 0;
//   for(int idx2 = 0; idx2 < macroDef196; idx2++){
//     index_t j = (idx2) - (tis);
//     bool_t isInRange = 0;
//   if((j) >= (0)) {
    
//     isInRange = (j) < (idx1);;
//   } else {
    
//     isInRange = false;;
//   }
//     number_t ite232 = 0;
//   if(isInRange) {
//     number_t x1 = x0->arr[j];
//     number_t y0 = y->arr[j];
//     ite232 = (macroDef197) + ((l3->arr[idx2]) * ((x1) - (y0)));;
//   } else {
    
//     ite232 = macroDef197;;
//   }
//     macroDef197 = ite232;;
//   }
//     number_t sum = macroDef197;
//     number_t x1 = x0->arr[idx1];
//     number_t y0 = y->arr[idx1];
//     number_t x10 = (sum) + ((exp(v->arr[idx1])) * ((x1) - (y0)));
//     number_t cur = (x10) * (x10);
//     macroDef198 = (macroDef198) + (cur);;
//   }
//     number_t x00 = ((alphas->arr[idx0]) + (macroDef195)) - ((0.5) * (macroDef198));
//     array_number_t v_d = qs_d->arr[idx0];
//     array_number_t l_d = ls_d->arr[idx0];
//     array_number_t x0_d = x_d->arr[idx];
//     array_number_t y_d = means_d->arr[idx0];
//     number_t macroDef199 = 0;
//   for(int idx1 = 0; idx1 < l2; idx1++){
//     number_t cur_d = v_d->arr[idx1];
//     macroDef199 = (macroDef199) + (cur_d);;
//   }
//     number_t macroDef202 = 0;
//   for(int idx1 = 0; idx1 < l01; idx1++){
//     index_t n0 = (idx1) - (1);
//     index_t tis = ((n0) * ((n0) + (1))) / (2);
//     card_t macroDef200 = l3->length;
//     number_t macroDef201 = 0;
//   for(int idx2 = 0; idx2 < macroDef200; idx2++){
//     index_t j = (idx2) - (tis);
//     bool_t isInRange = 0;
//   if((j) >= (0)) {
    
//     isInRange = (j) < (idx1);;
//   } else {
    
//     isInRange = false;;
//   }
//     number_t ite233 = 0;
//   if(isInRange) {
//     number_t x1 = x0->arr[j];
//     number_t y00 = y->arr[j];
//     ite233 = (macroDef201) + ((l3->arr[idx2]) * ((x1) - (y00)));;
//   } else {
    
//     ite233 = macroDef201;;
//   }
//     macroDef201 = ite233;;
//   }
//     number_t sum = macroDef201;
//     number_t x1 = x0->arr[idx1];
//     number_t y00 = y->arr[idx1];
//     number_t x10 = (sum) + ((exp(v->arr[idx1])) * ((x1) - (y00)));
//     number_t cur = (x10) * (x10);
//     macroDef202 = (macroDef202) + (cur);;
//   }
//     number_t macroDef207 = 0;
//   for(int idx1 = 0; idx1 < l01; idx1++){
//     index_t n0 = (idx1) - (1);
//     index_t tis = ((n0) * ((n0) + (1))) / (2);
//     card_t macroDef203 = l3->length;
//     number_t macroDef204 = 0;
//   for(int idx2 = 0; idx2 < macroDef203; idx2++){
//     index_t j = (idx2) - (tis);
//     bool_t isInRange = 0;
//   if((j) >= (0)) {
    
//     isInRange = (j) < (idx1);;
//   } else {
    
//     isInRange = false;;
//   }
//     number_t ite234 = 0;
//   if(isInRange) {
//     number_t x1 = x0->arr[j];
//     number_t y00 = y->arr[j];
//     ite234 = (macroDef204) + ((l3->arr[idx2]) * ((x1) - (y00)));;
//   } else {
    
//     ite234 = macroDef204;;
//   }
//     macroDef204 = ite234;;
//   }
//     number_t sum = macroDef204;
//     card_t macroDef205 = l3->length;
//     number_t macroDef206 = 0;
//   for(int idx2 = 0; idx2 < macroDef205; idx2++){
//     index_t j = (idx2) - (tis);
//     bool_t isInRange = 0;
//   if((j) >= (0)) {
    
//     isInRange = (j) < (idx1);;
//   } else {
    
//     isInRange = false;;
//   }
//     number_t ite235 = 0;
//   if(isInRange) {
//     number_t x1 = x0->arr[j];
//     number_t y00 = y->arr[j];
//     number_t x1_d = x0_d->arr[j];
//     number_t y0_d = y_d->arr[j];
//     ite235 = (macroDef206) + (((l_d->arr[idx2]) * ((x1) - (y00))) + ((l3->arr[idx2]) * ((x1_d) - (y0_d))));;
//   } else {
    
//     ite235 = macroDef206;;
//   }
//     macroDef206 = ite235;;
//   }
//     number_t sum_d = macroDef206;
//     number_t x1 = x0->arr[idx1];
//     number_t y00 = y->arr[idx1];
//     number_t x10 = (sum) + ((exp(v->arr[idx1])) * ((x1) - (y00)));
//     number_t x1_d = x0_d->arr[idx1];
//     number_t y0_d = y_d->arr[idx1];
//     number_t x1_d0 = (sum_d) + ((((v_d->arr[idx1]) * (exp(v->arr[idx1]))) * ((x1) - (y00))) + ((exp(v->arr[idx1])) * ((x1_d) - (y0_d))));
//     number_t cur_d = ((x1_d0) * (x10)) + ((x10) * (x1_d0));
//     macroDef207 = (macroDef207) + (cur_d);;
//   }
//     number_t x0_d0 = ((alphas_d->arr[idx0]) + (macroDef199)) - (((0) * (macroDef202)) + ((0.5) * (macroDef207)));
//     number_t cur_d = ((x0_d0) - (mx_d0)) * (exp((x00) - (mx1)));
//     macroDef208 = (macroDef208) + (cur_d);;
//   }
//     number_t semx_d0 = macroDef208;
//     number_t cur_d = ((semx_d0) / (semx1)) + (mx_d0);
//     macroDef209 = (macroDef209) + (cur_d);;
//   }
//   number_t macroDef214 = 0;
//   for(int idx = 0; idx < K; idx++){
//     array_number_t v = qs->arr[idx];
//     card_t macroDef210 = v->length;
//     card_t l2 = macroDef210;
//     array_number_t x0 = ls->arr[idx];
//     card_t macroDef211 = x0->length;
//     card_t l3 = macroDef211;
//     number_t macroDef212 = 0;
//   for(int idx0 = 0; idx0 < l2; idx0++){
//     number_t value = v->arr[idx0];
//     number_t x1 = exp(value);
//     number_t cur = (x1) * (x1);
//     macroDef212 = (macroDef212) + (cur);;
//   }
//     number_t macroDef213 = 0;
//   for(int idx0 = 0; idx0 < l3; idx0++){
//     number_t x1 = x0->arr[idx0];
//     number_t cur = (x1) * (x1);
//     macroDef213 = (macroDef213) + (cur);;
//   }
//     number_t cur = (macroDef212) + (macroDef213);
//     macroDef214 = (macroDef214) + (cur);;
//   }
//   number_t macroDef219 = 0;
//   for(int idx = 0; idx < K; idx++){
//     array_number_t v = qs->arr[idx];
//     array_number_t v_d = qs_d->arr[idx];
//     card_t macroDef215 = v->length;
//     card_t l2 = macroDef215;
//     array_number_t x0 = ls->arr[idx];
//     array_number_t x0_d = ls_d->arr[idx];
//     card_t macroDef216 = x0->length;
//     card_t l3 = macroDef216;
//     number_t macroDef217 = 0;
//   for(int idx0 = 0; idx0 < l2; idx0++){
//     number_t value = v->arr[idx0];
//     number_t value_d = v_d->arr[idx0];
//     number_t x1 = exp(value);
//     number_t x1_d = (value_d) * (x1);
//     number_t cur_d = ((x1_d) * (x1)) + ((x1) * (x1_d));
//     macroDef217 = (macroDef217) + (cur_d);;
//   }
//     number_t macroDef218 = 0;
//   for(int idx0 = 0; idx0 < l3; idx0++){
//     number_t x1 = x0->arr[idx0];
//     number_t x1_d = x0_d->arr[idx0];
//     number_t cur_d = ((x1_d) * (x1)) + ((x1) * (x1_d));
//     macroDef218 = (macroDef218) + (cur_d);;
//   }
//     number_t cur_d = (macroDef217) + (macroDef218);
//     macroDef219 = (macroDef219) + (cur_d);;
//   }
//   return ((macroDef209) - (((0) * ((log(semx)) + (mx))) + (((double)((n))) * (((semx_d) / (semx)) + (mx_d))))) + (((0) * (macroDef214)) + ((0.5) * (macroDef219)));
// }
number_t gmm_objective_d(array_array_number_t x, array_number_t alphas, array_array_number_t means, array_array_number_t qs, array_array_number_t ls, number_t wishart_gamma, number_t wishart_m, array_array_number_t xd, array_number_t alphasd, array_array_number_t meansd, array_array_number_t qsd, array_array_number_t lsd, number_t wishart_gammad, number_t wishart_md) {
  tuple_number_t_number_t x9680 = {-1000, 0};
  for (int x7922 = 0; x7922 < (alphas)->length; x7922++) {
    tuple_number_t_number_t x7921 = x9680;
    tuple_number_t_number_t x19643;
    if (((x7921)._1) > ((alphas->arr[x7922]))) {
      x19643 = x7921;
    } else {
      x19643 = {(alphas->arr[x7922]), (alphasd->arr[x7922])};
    }
    x7921 = x19643;
    x9680 = x7921;
  }
  
  tuple_number_t_number_t x10064 = {0, 0};
  for (int x7996 = 0; x7996 < (alphas)->length; x7996++) {
    tuple_number_t_number_t x7995 = x10064;
    number_t x9052 = exp(((alphas->arr[x7996])) - ((x9680)._1));
    x7995 = {((x7995)._1) + (x9052), ((x7995)._2) + ((((alphasd->arr[x7996])) - ((x9680)._2)) * (x9052))};
    x10064 = x7995;
  }
  
  tuple_number_t_number_t x19649 = {0, 0};
  for (int x7978 = 0; x7978 < (x)->length; x7978++) {
    tuple_number_t_number_t x7977 = x19649;
    array_number_t x19586 = (x->arr[x7978]);
    tuple_number_t_number_t x19538 = {-1000, 0};
    for (int x8052 = 0; x8052 < (alphas)->length; x8052++) {
      tuple_number_t_number_t x8051 = x19538;
      array_number_t x19536 = (qs->arr[x8052]);
      tuple_number_t_number_t x19582 = {0, 0};
      for (int x8186 = 0; x8186 < (x19536)->length; x8186++) {
        tuple_number_t_number_t x8185 = x19582;
        x8185 = {((x8185)._1) + ((x19536->arr[x8186])), ((x8185)._2) + (((qsd->arr[x8052])->arr[x8186]))};
        x19582 = x8185;
      }
      
      array_number_t x19434 = (ls->arr[x8052]);
      tuple_number_t_number_t x19490 = {0, 0};
      for (int x8182 = 0; x8182 < (x19586)->length; x8182++) {
        tuple_number_t_number_t x8181 = x19490;
        index_t x19532 = (((x8182) - (1)) * (((x8182) - (1)) + (1))) / (2);
        tuple_number_t_number_t x19578 = {0, 0};
        for (int x8322 = 0; x8322 < (x19434)->length; x8322++) {
          tuple_number_t_number_t x8321 = x19578;
          index_t x19524 = (x8322) - (x19532);
          number_t x19570 = ((x19586->arr[x19524])) - (((means->arr[x8052])->arr[x19524]));
          number_t x19480 = (x19434->arr[x8322]);
          tuple_index_t_index_t x19644;
          if ((x19524) >= (0)) {
            x19644 = {(x19524) < (x8182), 0};
          } else {
            x19644 = {0, 0};
          }
          tuple_number_t_number_t x19645;
          if ((x19644)._1) {
            x19645 = {((x8321)._1) + ((x19480) * (x19570)), ((x8321)._2) + (((((lsd->arr[x8052])->arr[x8322])) * (x19570)) + ((x19480) * ((0) - (((meansd->arr[x8052])->arr[x19524])))))};
          } else {
            x19645 = x8321;
          }
          x8321 = x19645;
          x19578 = x8321;
        }
        
        number_t x19488 = exp((x19536->arr[x8182]));
        number_t x19428 = ((x19586->arr[x8182])) - (((means->arr[x8052])->arr[x8182]));
        number_t x19486 = (x19488) * (x19428);
        number_t x19426 = (((((qsd->arr[x8052])->arr[x8182])) * (x19488)) * (x19428)) + ((x19488) * ((0) - (((meansd->arr[x8052])->arr[x8182]))));
        number_t x19522 = (x19578)._1;
        number_t x19568 = (x19522) + (x19486);
        number_t x19268 = (x19578)._2;
        x8181 = {((x8181)._1) + ((x19568) * (x19568)), ((x8181)._2) + ((((x19268) + (x19426)) * (x19568)) + ((x19568) * ((x19268) + (x19426))))};
        x19490 = x8181;
      }
      
      number_t x19564 = ((alphas->arr[x8052])) + ((x19582)._1);
      number_t x19470 = (0.5) * ((x19490)._1);
      tuple_number_t_number_t x19646;
      if (((x8051)._1) > ((x19564) - (x19470))) {
        x19646 = x8051;
      } else {
        x19646 = {(x19564) - (x19470), (((alphasd->arr[x8052])) + ((x19582)._2)) - ((0.5) * ((x19490)._2))};
      }
      x8051 = x19646;
      x19538 = x8051;
    }
    
    tuple_number_t_number_t x10272 = {0, 0};
    for (int x8090 = 0; x8090 < (alphas)->length; x8090++) {
      tuple_number_t_number_t x8089 = x10272;
      array_number_t x19562 = (qs->arr[x8090]);
      array_number_t x19516 = (ls->arr[x8090]);
      tuple_number_t_number_t x19560 = {0, 0};
      for (int x8282 = 0; x8282 < (x19562)->length; x8282++) {
        tuple_number_t_number_t x8281 = x19560;
        x8281 = {((x8281)._1) + ((x19562->arr[x8282])), ((x8281)._2) + (((qsd->arr[x8090])->arr[x8282]))};
        x19560 = x8281;
      }
      
      tuple_number_t_number_t x19514 = {0, 0};
      for (int x8278 = 0; x8278 < (x19586)->length; x8278++) {
        tuple_number_t_number_t x8277 = x19514;
        index_t x19512 = (((x8278) - (1)) * (((x8278) - (1)) + (1))) / (2);
        tuple_number_t_number_t x19558 = {0, 0};
        for (int x8438 = 0; x8438 < (x19516)->length; x8438++) {
          tuple_number_t_number_t x8437 = x19558;
          index_t x19504 = (x8438) - (x19512);
          number_t x19550 = ((x19586->arr[x19504])) - (((means->arr[x8090])->arr[x19504]));
          number_t x19454 = (x19516->arr[x8438]);
          tuple_index_t_index_t x19647;
          if ((x19504) >= (0)) {
            x19647 = {(x19504) < (x8278), 0};
          } else {
            x19647 = {0, 0};
          }
          tuple_number_t_number_t x19648;
          if ((x19647)._1) {
            x19648 = {((x8437)._1) + ((x19454) * (x19550)), ((x8437)._2) + (((((lsd->arr[x8090])->arr[x8438])) * (x19550)) + ((x19454) * ((0) - (((meansd->arr[x8090])->arr[x19504])))))};
          } else {
            x19648 = x8437;
          }
          x8437 = x19648;
          x19558 = x8437;
        }
        
        number_t x19462 = exp((x19562->arr[x8278]));
        number_t x19406 = ((x19586->arr[x8278])) - (((means->arr[x8090])->arr[x8278]));
        number_t x19460 = (x19462) * (x19406);
        number_t x19404 = (((((qsd->arr[x8090])->arr[x8278])) * (x19462)) * (x19406)) + ((x19462) * ((0) - (((meansd->arr[x8090])->arr[x8278]))));
        number_t x19502 = (x19558)._1;
        number_t x19548 = (x19502) + (x19460);
        number_t x19246 = (x19558)._2;
        x8277 = {((x8277)._1) + ((x19548) * (x19548)), ((x8277)._2) + ((((x19246) + (x19404)) * (x19548)) + ((x19548) * ((x19246) + (x19404))))};
        x19514 = x8277;
      }
      
      number_t x10066 = exp(((((alphas->arr[x8090])) + ((x19560)._1)) - ((0.5) * ((x19514)._1))) - ((x19538)._1));
      x8089 = {((x8089)._1) + (x10066), ((x8089)._2) + ((((((alphasd->arr[x8090])) + ((x19560)._2)) - ((0.5) * ((x19514)._2))) - ((x19538)._2)) * (x10066))};
      x10272 = x8089;
    }
    
    x7977 = {((x7977)._1) + ((log((x10272)._1)) + ((x19538)._1)), ((x7977)._2) + ((((x10272)._2) / ((x10272)._1)) + ((x19538)._2))};
    x19649 = x7977;
  }
  
  tuple_number_t_number_t x19650 = {0, 0};
  for (int x7962 = 0; x7962 < (alphas)->length; x7962++) {
    tuple_number_t_number_t x7961 = x19650;
    array_number_t x19592 = (ls->arr[x7962]);
    array_number_t x19498 = (qs->arr[x7962]);
    tuple_number_t_number_t x19544 = {0, 0};
    for (int x8060 = 0; x8060 < (x19498)->length; x8060++) {
      tuple_number_t_number_t x8059 = x19544;
      number_t x8094 = exp((x19498->arr[x8060]));
      x8059 = {((x8059)._1) + ((x8094) * (x8094)), ((x8059)._2) + ((((((qsd->arr[x7962])->arr[x8060])) * (x8094)) * (x8094)) + ((x8094) * ((((qsd->arr[x7962])->arr[x8060])) * (x8094))))};
      x19544 = x8059;
    }
    
    tuple_number_t_number_t x19444 = {0, 0};
    for (int x8056 = 0; x8056 < (x19592)->length; x8056++) {
      tuple_number_t_number_t x8055 = x19444;
      number_t x19588 = (x19592->arr[x8056]);
      x8055 = {((x8055)._1) + ((x19588) * (x19588)), ((x8055)._2) + (((((lsd->arr[x7962])->arr[x8056])) * (x19588)) + ((x19588) * (((lsd->arr[x7962])->arr[x8056]))))};
      x19444 = x8055;
    }
    
    x7961 = {((x7961)._1) + (((x19544)._1) + ((x19444)._1)), ((x7961)._2) + (((x19544)._2) + ((x19444)._2))};
    x19650 = x7961;
  }
  
  return (((x19649)._2) - (((double)((x)->length)) * ((((x10064)._2) / ((x10064)._1)) + ((x9680)._2)))) + ((0.5) * ((x19650)._2));
}

