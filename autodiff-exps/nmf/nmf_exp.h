
array_array_number_t update1(array_array_number_t m1, array_array_number_t m2, array_array_number_t m3) {
  array_array_number_t x15325 = (array_array_number_t)storage_alloc(sizeof(int) * 2);x15325->length=(m1)->length;x15325->arr = (array_number_t*)storage_alloc(sizeof(array_number_t) * (m1)->length);
  for(int ii = 0; ii < x15325->length; ii++){
    array_number_t x15324 = (array_number_t)storage_alloc(sizeof(int) * 2);x15324->length=((m1->arr[0]))->length;x15324->arr = (number_t*)storage_alloc(sizeof(number_t) * ((m1->arr[0]))->length);
    for(int jj = 0; jj < x15324->length; jj++){
      number_t x15323 = 0;
      for (int x15089 = 0; x15089 < (m2)->length; x15089++) {
        number_t x15167 = x15323;
        array_number_t x15273 = (m2->arr[x15089]);
        number_t x15322 = 0;
        for (int x15123 = 0; x15123 < (x15273)->length; x15123++) {
          number_t x15158 = x15322;
          x15158 = (x15158) + (((x15273->arr[x15123])) * (((m1->arr[x15123])->arr[jj])));
          x15322 = x15158;
        }
        
        x15167 = (x15167) + (((x15273->arr[ii])) / (x15322));
        x15323 = x15167;
      }
      
      x15324->arr[jj] = x15323;
      
    }
    x15325->arr[ii] = x15324;
    
  }
  return x15325;
}

array_array_number_t update2(array_array_number_t m1, array_array_number_t m2, array_array_number_t m3) {
  array_array_number_t x11635 = (array_array_number_t)storage_alloc(sizeof(int) * 2);x11635->length=(m1)->length;x11635->arr = (array_number_t*)storage_alloc(sizeof(array_number_t) * (m1)->length);
  for(int ii = 0; ii < x11635->length; ii++){
    array_number_t x11634 = (array_number_t)storage_alloc(sizeof(int) * 2);x11634->length=((m1->arr[0]))->length;x11634->arr = (number_t*)storage_alloc(sizeof(number_t) * ((m1->arr[0]))->length);
    for(int jj = 0; jj < x11634->length; jj++){
      number_t x11402 = 0;
      for (int x11264 = 0; x11264 < (m3)->length; x11264++) {
        array_number_t x11630 = (m2->arr[x11264]);
        number_t x11379 = 0;
        for (int x11332 = 0; x11332 < (x11630)->length; x11332++) {
          x11379 = (x11379) + (((x11630->arr[x11332])) * (((m1->arr[x11332])->arr[jj])));
        }
        number_t x11632 = x11379;
        
        x11402 = (x11402) + ((((m3->arr[x11264])->arr[jj])) * (((0) - ((x11630->arr[ii]))) * ((1) * ((1) / ((x11632) * (x11632))))));
      }
      number_t x11633 = x11402;
      
      x11634->arr[jj] = x11633;
      
    }
    x11635->arr[ii] = x11634;
    
  }
  return x11635;
}

array_array_number_t update3(array_array_number_t m1, array_array_number_t m2, array_array_number_t m3) {
  array_array_number_t x17885 = (array_array_number_t)storage_alloc(sizeof(int) * 2);x17885->length=(m1)->length;x17885->arr = (array_number_t*)storage_alloc(sizeof(array_number_t) * (m1)->length);
  for(int ii = 0; ii < x17885->length; ii++){
    array_number_t x17884 = (array_number_t)storage_alloc(sizeof(int) * 2);x17884->length=((m1->arr[0]))->length;x17884->arr = (number_t*)storage_alloc(sizeof(number_t) * ((m1->arr[0]))->length);
    for(int jj = 0; jj < x17884->length; jj++){
      number_t x17882 = 0;
      for (int x17308 = 0; x17308 < (m2)->length; x17308++) {
        number_t x17484 = x17882;
        array_number_t x17702 = (m2->arr[x17308]);
        number_t x17881 = 0;
        for (int x17370 = 0; x17370 < (x17702)->length; x17370++) {
          number_t x17475 = x17881;
          x17475 = (x17475) + (((x17702->arr[x17370])) * (((m1->arr[x17370])->arr[jj])));
          x17881 = x17475;
        }
        
        x17484 = (x17484) + (((x17702->arr[ii])) / (x17881));
        x17882 = x17484;
      }
      
      number_t x17883 = 0;
      for (int x17304 = 0; x17304 < (m3)->length; x17304++) {
        number_t x17464 = x17883;
        array_number_t x17878 = (m2->arr[x17304]);
        number_t x17880 = 0;
        for (int x17386 = 0; x17386 < (x17878)->length; x17386++) {
          number_t x17449 = x17880;
          x17449 = (x17449) + (((x17878->arr[x17386])) * (((m1->arr[x17386])->arr[jj])));
          x17880 = x17449;
        }
        
        x17464 = (x17464) + (((0) - ((((m3->arr[x17304])->arr[jj])) * ((x17878->arr[ii])))) / ((x17880) * (x17880)));
        // x17883 = x17464 + (((x17878->arr[ii])) / (x17880));
        x17883 = x17464;
      }
      
      // x17884->arr[jj] = x17883;
      x17884->arr[jj] = (x17882) + (x17883);
      
    }
    x17885->arr[ii] = x17884;
    
  }
  return x17885;
}

array_number_t nmf_uv(array_number_t u, array_number_t v, array_array_number_t AA) {
//   array_number_t x20434 = (array_number_t)storage_alloc(sizeof(int) * 2);x20434->length=(u)->length;x20434->arr = (number_t*)storage_alloc(sizeof(number_t) * (u)->length);
//   for(int i = 0; i < x20434->length; i++){
//     number_t x20433 = 0;
//     for (int x19178 = 0; x19178 < (v)->length; x19178++) {
//       number_t x19286 = x20433;
//       number_t x20430 = (v->arr[x19178]);
//       number_t x20432 = (x20430) * ((u->arr[i]));
//       number_t x20428 = (v->arr[x19178]);
//       x19286 = (x19286) + (((x20428) / ((x20428) * ((u->arr[i])))) + (((0) - ((((AA->arr[x19178])->arr[i])) * (x20430))) / ((x20432) * (x20432))));
//       x20433 = x19286;
//     }
    
//     x20434->arr[i] = x20433;
    
//   }
//   return x20434;
// }
/* */
//   index_t x20775 = (u)->length;
//   index_t x20834 = (v)->length;
//   array_number_t x20796 = (array_number_t)storage_alloc(sizeof(int) * 2);x20796->length=x20775;x20796->arr = (number_t*)storage_alloc(sizeof(number_t) * x20775);
//   for(int i = 0; i < x20796->length; i++){
//     number_t x20816 = (u->arr[i]);
//     number_t x20795 = 0;
//     for (int x19520 = 0; x19520 < x20834; x19520++) {
//       number_t x19628 = x20795;
//       number_t x25334 = (v->arr[x19520]);
//       array_number_t x25310 = (AA->arr[x19520]);
//       number_t x25322 = (x25310->arr[i]);
//       number_t x25340 = (x25334) * (x20816);
//       number_t x25330 = (x25322) * (x25334);
//       number_t x25328 = (0) - (x25330);
//       number_t x25336 = (x25340) * (x25340);
//       number_t x25296 = (x25334) / (x25340);
//       number_t x25278 = (x25328) / (x25336);
//       number_t x20785 = (x25296) + (x25278);
//       number_t x20786 = (x19628) + (x20785);
//       x19628 = x20786;
//       x20795 = x19628;
//     }
    
//     x20796->arr[i] = x20795;
    
//   }
//   return x20796;
// }
/* */
//   array_number_t x23596 = (array_number_t)storage_alloc(sizeof(int) * 2);x23596->length=(u)->length;x23596->arr = (number_t*)storage_alloc(sizeof(number_t) * (u)->length);
//   for(int i = 0; i < x23596->length; i++){
//     number_t x23592 = (u->arr[i]);
//     number_t x23595 = 0;
//     for (int x23364 = 0; x23364 < (v)->length; x23364++) {
//       number_t x23454 = x23595;
//       number_t x23574 = (v->arr[x23364]);
//       number_t x23594 = (x23574) * (x23592);
//       x23454 = (x23454) + (((x23574) / ((x23574) * (x23592))) + (((0) - ((((AA->arr[x23364])->arr[i])) * (x23574))) / ((x23594) * (x23594))));
//       x23595 = x23454;
//     }
    
//     x23596->arr[i] = x23595;
    
//   }
//   return x23596;
// }
  index_t x23562 = (u)->length;
  index_t x23577 = (v)->length;
  array_number_t x23579 = (array_number_t)storage_alloc(sizeof(int) * 2);x23579->length=x23562;x23579->arr = (number_t*)storage_alloc(sizeof(number_t) * x23562);
  for(int i = 0; i < x23579->length; i++){
    number_t x23564 = (u->arr[i]);
    number_t x23568 = (1) / (x23564);
    number_t x23578 = 0;
    for (int x22307 = 0; x22307 < x23577; x22307++) {
      number_t x22415 = x23578;
      number_t x23563 = (v->arr[x22307]);
      number_t x23565 = (x23563) * (x23564);
      array_number_t x23569 = (AA->arr[x22307]);
      number_t x23570 = (x23569->arr[i]);
      number_t x23571 = (x23570) * (x23563);
      number_t x23572 = -(x23571);
      number_t x23573 = (x23565) * (x23565);
      number_t x23574 = (x23572) / (x23573);
      number_t x23575 = (x23568) + (x23574);
      number_t x23576 = (x22415) + (x23575);
      x22415 = x23576;
      x23578 = x22415;
    }
    
    x23579->arr[i] = x23578;
    
  }
  return x23579;
}


array_number_t nmf_uv_dps(storage_t s, array_number_t u, array_number_t v, array_array_number_t AA) {
/* I'm manually optimizing this code. */
//   array_number_t x20434 = (array_number_t)s;
//   for(int i = 0; i < n; i++){
//     number_t x20433 = 0;
//     number_t ui = u->arr[i];
//     // number_t one_ui =  1 / ui;
//     for (int x19178 = 0; x19178 < m; x19178++) {
//       number_t x19286 = x20433;
//       number_t x20430 = (v->arr[x19178]);
//       number_t x20432 = (x20430) * ((ui));
//       number_t x20428 = x20430;
//       // x19286 = (x19286) + one_ui - ((((((AA->arr[x19178])->arr[i]) * one_ui)) / x20432));
//       x19286 = (x19286) + (1 / ui) - ((((((AA->arr[x19178])->arr[i]))) / (ui * x20432)));
//       x20433 = x19286;
//     }
    
//     x20434->arr[i] = x20433;
    
//   }
//   return x20434;
// }
/* */
  index_t x23562 = (u)->length;
  index_t x23577 = (v)->length;
  array_number_t x23579 = (array_number_t)s;
  for(int i = 0; i < x23579->length; i++){
    number_t x23564 = (u->arr[i]);
    number_t x23568 = (1) / (x23564);
    number_t x23578 = 0;
    for (int x22307 = 0; x22307 < x23577; x22307++) {
      number_t x22415 = x23578;
      number_t x23563 = (v->arr[x22307]);
      number_t x23565 = (x23563) * (x23564);
      array_number_t x23569 = (AA->arr[x22307]);
      number_t x23570 = (x23569->arr[i]);
      number_t x23571 = (x23570) * (x23563);
      number_t x23572 = -(x23571);
      number_t x23573 = (x23565) * (x23565);
      number_t x23574 = (x23572) / (x23573);
      number_t x23575 = (x23568) + (x23574);
      number_t x23576 = (x22415) + (x23575);
      x22415 = x23576;
      x23578 = x22415;
    }
    
    x23579->arr[i] = x23578;
    
  }
  return x23579;
}

array_number_t nmf_uv_poisson(array_number_t u, array_number_t v, array_array_number_t AA) {
  index_t x23894 = (u)->length;
  index_t x23903 = (v)->length;
  array_number_t x23905 = (array_number_t)storage_alloc(sizeof(int) * 2);x23905->length=x23894;x23905->arr = (number_t*)storage_alloc(sizeof(number_t) * x23894);
  for(int i = 0; i < x23905->length; i++){
    number_t x23899 = (u->arr[i]);
    number_t x23904 = 0;
    for (int x23685 = 0; x23685 < x23903; x23685++) {
      number_t x23793 = x23904;
      number_t x23895 = (v->arr[x23685]);
      array_number_t x23897 = (AA->arr[x23685]);
      number_t x23898 = (x23897->arr[i]);
      number_t x23900 = (x23898) / (x23899);
      number_t x23901 = (x23895) - (x23900);
      number_t x23902 = (x23793) + (x23901);
      x23793 = x23902;
      x23904 = x23793;
    }
    
    x23905->arr[i] = x23904;
    
  }
  return x23905;
}

array_number_t nmf_uv_poisson_dps(storage_t s, array_number_t u, array_number_t v, array_array_number_t AA) {
  index_t x23894 = (u)->length;
  index_t x23903 = (v)->length;
  array_number_t x23905 = (array_number_t)s;
  for(int i = 0; i < x23905->length; i++){
    number_t x23899 = (u->arr[i]);
    number_t x23904 = 0;
    for (int x23685 = 0; x23685 < x23903; x23685++) {
      number_t x23793 = x23904;
      number_t x23895 = (v->arr[x23685]);
      array_number_t x23897 = (AA->arr[x23685]);
      number_t x23898 = (x23897->arr[i]);
      number_t x23900 = (x23898) / (x23899);
      number_t x23901 = (x23895) - (x23900);
      number_t x23902 = (x23793) + (x23901);
      x23793 = x23902;
      x23904 = x23793;
    }
    
    x23905->arr[i] = x23904;
    
  }
  return x23905;
}
