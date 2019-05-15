#pragma once

#include "fsharp.h"
#include <stdio.h>
#include <math.h>

array_array_array_number_t ba(array_number_t cam, array_number_t xs, index_t n) {
  array_array_array_number_t x775 = (array_array_array_number_t)storage_alloc(sizeof(int) * 2);x775->length=(cam)->length;x775->arr = (array_array_number_t*)storage_alloc(sizeof(array_array_number_t) * (cam)->length);
  for(int i = 0; i < x775->length; i++){
    array_array_number_t x774 = (array_array_number_t)storage_alloc(sizeof(int) * 2);x774->length=n;x774->arr = (array_number_t*)storage_alloc(sizeof(array_number_t) * n);
    for(int i0 = 0; i0 < x774->length; i0++){
      index_t x14 = (3) * (i0);
      number_t x83 = (cam->arr[0]);
      index_t x81;
      if ((i) == (0)) {
        x81 = 1;
      } else {
        x81 = 0;
      }
      number_t x84 = (cam->arr[0]);
      index_t x82;
      if ((i) == (0)) {
        x82 = 1;
      } else {
        x82 = 0;
      }
      number_t x134 = (x83) * (x84);
      number_t x132 = ((x81) * (x84)) + ((x83) * (x82));
      number_t x830 = (cam->arr[1]);
      index_t x810;
      if ((i) == (1)) {
        x810 = 1;
      } else {
        x810 = 0;
      }
      number_t x840 = (cam->arr[1]);
      index_t x820;
      if ((i) == (1)) {
        x820 = 1;
      } else {
        x820 = 0;
      }
      number_t x1330 = (0) + (x134);
      number_t x1310 = (0) + (x132);
      number_t x1340 = (x830) * (x840);
      number_t x1320 = ((x810) * (x840)) + ((x830) * (x820));
      number_t x831 = (cam->arr[2]);
      index_t x811;
      if ((i) == (2)) {
        x811 = 1;
      } else {
        x811 = 0;
      }
      number_t x841 = (cam->arr[2]);
      index_t x821;
      if ((i) == (2)) {
        x821 = 1;
      } else {
        x821 = 0;
      }
      number_t x1331 = (x1330) + (x1340);
      number_t x1311 = (x1310) + (x1320);
      number_t x1341 = (x831) * (x841);
      number_t x1321 = ((x811) * (x841)) + ((x831) * (x821));
      number_t x46 = sqrt((x1331) + (x1341));
      number_t x168 = ((x1311) + (x1321)) * (((1) / (x46)) * (0.5));
      number_t x439 = (cam->arr[1]);
      index_t x437;
      if ((i) == (1)) {
        x437 = 1;
      } else {
        x437 = 0;
      }
      number_t x440 = (1) / (x46);
      number_t x438 = (-(x168)) / ((x46) * (x46));
      index_t x428 = (11) + (x14);
      index_t j = (2) + (x428);
      tuple_number_t_index_t x00 = (tuple_number_t_index_t){._1=(xs->arr[j]), ._2=0};
      number_t x547 = (x00)._1;
      index_t x545 = (x00)._2;
      number_t x548 = (cam->arr[5]);
      index_t x546;
      if ((i) == (5)) {
        x546 = 1;
      } else {
        x546 = 0;
      }
      number_t x301 = (x439) * (x440);
      number_t x299 = ((x437) * (x440)) + ((x439) * (x438));
      number_t x302 = (x547) - (x548);
      index_t x300 = (x545) - (x546);
      number_t x415 = (cam->arr[2]);
      index_t x413;
      if ((i) == (2)) {
        x413 = 1;
      } else {
        x413 = 0;
      }
      number_t x416 = (1) / (x46);
      number_t x414 = (-(x168)) / ((x46) * (x46));
      index_t x404 = (11) + (x14);
      index_t j0 = (1) + (x404);
      tuple_number_t_index_t x000 = (tuple_number_t_index_t){._1=(xs->arr[j0]), ._2=0};
      number_t x535 = (x000)._1;
      index_t x533 = (x000)._2;
      number_t x536 = (cam->arr[4]);
      index_t x534;
      if ((i) == (4)) {
        x534 = 1;
      } else {
        x534 = 0;
      }
      number_t x289 = (x415) * (x416);
      number_t x287 = ((x413) * (x416)) + ((x415) * (x414));
      number_t x2901 = (x535) - (x536);
      index_t x288 = (x533) - (x534);
      number_t x217 = (x301) * (x302);
      number_t x215 = ((x299) * (x302)) + ((x301) * (x300));
      number_t x218 = (x289) * (x2901);
      number_t x216 = ((x287) * (x2901)) + ((x289) * (x288));
      number_t x475 = (cam->arr[2]);
      index_t x473;
      if ((i) == (2)) {
        x473 = 1;
      } else {
        x473 = 0;
      }
      number_t x476 = (1) / (x46);
      number_t x474 = (-(x168)) / ((x46) * (x46));
      index_t j1 = (11) + (x14);
      tuple_number_t_index_t x001 = (tuple_number_t_index_t){._1=(xs->arr[j1]), ._2=0};
      number_t x571 = (x001)._1;
      index_t x569 = (x001)._2;
      number_t x572 = (cam->arr[3]);
      index_t x570;
      if ((i) == (3)) {
        x570 = 1;
      } else {
        x570 = 0;
      }
      number_t x325 = (x475) * (x476);
      number_t x323 = ((x473) * (x476)) + ((x475) * (x474));
      number_t x326 = (x571) - (x572);
      index_t x324 = (x569) - (x570);
      number_t x463 = (cam->arr[0]);
      index_t x461;
      if ((i) == (0)) {
        x461 = 1;
      } else {
        x461 = 0;
      }
      number_t x464 = (1) / (x46);
      number_t x462 = (-(x168)) / ((x46) * (x46));
      index_t x452 = (11) + (x14);
      index_t j00 = (2) + (x452);
      tuple_number_t_index_t x0000 = (tuple_number_t_index_t){._1=(xs->arr[j00]), ._2=0};
      number_t x559 = (x0000)._1;
      index_t x557 = (x0000)._2;
      number_t x560 = (cam->arr[5]);
      index_t x558;
      if ((i) == (5)) {
        x558 = 1;
      } else {
        x558 = 0;
      }
      number_t x313 = (x463) * (x464);
      number_t x311 = ((x461) * (x464)) + ((x463) * (x462));
      number_t x314 = (x559) - (x560);
      index_t x312 = (x557) - (x558);
      number_t x229 = (x325) * (x326);
      number_t x227 = ((x323) * (x326)) + ((x325) * (x324));
      number_t x230 = (x313) * (x314);
      number_t x228 = ((x311) * (x314)) + ((x313) * (x312));
      number_t x511 = (cam->arr[0]);
      index_t x509;
      if ((i) == (0)) {
        x509 = 1;
      } else {
        x509 = 0;
      }
      number_t x512 = (1) / (x46);
      number_t x510 = (-(x168)) / ((x46) * (x46));
      index_t x500 = (11) + (x14);
      index_t j10 = (1) + (x500);
      tuple_number_t_index_t x002 = (tuple_number_t_index_t){._1=(xs->arr[j10]), ._2=0};
      number_t x595 = (x002)._1;
      index_t x593 = (x002)._2;
      number_t x596 = (cam->arr[4]);
      index_t x594;
      if ((i) == (4)) {
        x594 = 1;
      } else {
        x594 = 0;
      }
      number_t x349 = (x511) * (x512);
      number_t x347 = ((x509) * (x512)) + ((x511) * (x510));
      number_t x350 = (x595) - (x596);
      index_t x348 = (x593) - (x594);
      number_t x487 = (cam->arr[1]);
      index_t x485;
      if ((i) == (1)) {
        x485 = 1;
      } else {
        x485 = 0;
      }
      number_t x488 = (1) / (x46);
      number_t x486 = (-(x168)) / ((x46) * (x46));
      index_t j01 = (11) + (x14);
      tuple_number_t_index_t x0001 = (tuple_number_t_index_t){._1=(xs->arr[j01]), ._2=0};
      number_t x583 = (x0001)._1;
      index_t x581 = (x0001)._2;
      number_t x584 = (cam->arr[3]);
      index_t x582;
      if ((i) == (3)) {
        x582 = 1;
      } else {
        x582 = 0;
      }
      number_t x337 = (x487) * (x488);
      number_t x335 = ((x485) * (x488)) + ((x487) * (x486));
      number_t x338 = (x583) - (x584);
      index_t x336 = (x581) - (x582);
      number_t x241 = (x349) * (x350);
      number_t x239 = ((x347) * (x350)) + ((x349) * (x348));
      number_t x242 = (x337) * (x338);
      number_t x240 = ((x335) * (x338)) + ((x337) * (x336));
      tuple_number_t_number_t x765 = (tuple_number_t_number_t){._1=(x217) - (x218), ._2=(x215) - (x216)};
      tuple_number_t_number_t x766 = (tuple_number_t_number_t){._1=(x229) - (x230), ._2=(x227) - (x228)};
      tuple_number_t_number_t x767 = (tuple_number_t_number_t){._1=(x241) - (x242), ._2=(x239) - (x240)};
      array_tuple_number_t_number_t w_cross_X = (array_tuple_number_t_number_t)storage_alloc(sizeof(int) * 2);w_cross_X->length=3;w_cross_X->arr = (tuple_number_t_number_t*)storage_alloc(sizeof(tuple_number_t_number_t) * 3);
      w_cross_X->arr[0] = x765;
      w_cross_X->arr[1] = x766;
      w_cross_X->arr[2] = x767;
      number_t x619 = (cam->arr[0]);
      index_t x617;
      if ((i) == (0)) {
        x617 = 1;
      } else {
        x617 = 0;
      }
      number_t x620 = (1) / (x46);
      number_t x618 = (-(x168)) / ((x46) * (x46));
      index_t x656 = (11) + (x14);
      index_t j11 = (0) + (x656);
      tuple_number_t_index_t x00000 = (tuple_number_t_index_t){._1=(xs->arr[j11]), ._2=0};
      index_t j000 = (0) + (3);
      number_t x679 = (x00000)._1;
      index_t x677 = (x00000)._2;
      number_t x680 = (cam->arr[j000]);
      index_t x678;
      if ((i) == (j000)) {
        x678 = 1;
      } else {
        x678 = 0;
      }
      number_t x703 = (x619) * (x620);
      number_t x701 = ((x617) * (x620)) + ((x619) * (x618));
      number_t x704 = (x679) - (x680);
      index_t x702 = (x677) - (x678);
      number_t x728 = (x703) * (x704);
      number_t x726 = ((x701) * (x704)) + ((x703) * (x702));
      number_t x6190 = (cam->arr[1]);
      index_t x6170;
      if ((i) == (1)) {
        x6170 = 1;
      } else {
        x6170 = 0;
      }
      number_t x6200 = (1) / (x46);
      number_t x6180 = (-(x168)) / ((x46) * (x46));
      index_t x6560 = (11) + (x14);
      index_t j2 = (1) + (x6560);
      tuple_number_t_index_t x00010 = (tuple_number_t_index_t){._1=(xs->arr[j2]), ._2=0};
      index_t j0000 = (1) + (3);
      number_t x6790 = (x00010)._1;
      index_t x6770 = (x00010)._2;
      number_t x6800 = (cam->arr[j0000]);
      index_t x6780;
      if ((i) == (j0000)) {
        x6780 = 1;
      } else {
        x6780 = 0;
      }
      number_t x7030 = (x6190) * (x6200);
      number_t x7010 = ((x6170) * (x6200)) + ((x6190) * (x6180));
      number_t x7040 = (x6790) - (x6800);
      index_t x7020 = (x6770) - (x6780);
      number_t x7270 = (0) + (x728);
      number_t x7250 = (0) + (x726);
      number_t x7280 = (x7030) * (x7040);
      number_t x7260 = ((x7010) * (x7040)) + ((x7030) * (x7020));
      number_t x6191 = (cam->arr[2]);
      index_t x6171;
      if ((i) == (2)) {
        x6171 = 1;
      } else {
        x6171 = 0;
      }
      number_t x6201 = (1) / (x46);
      number_t x6181 = (-(x168)) / ((x46) * (x46));
      index_t x6561 = (11) + (x14);
      index_t j100 = (2) + (x6561);
      tuple_number_t_index_t x00001 = (tuple_number_t_index_t){._1=(xs->arr[j100]), ._2=0};
      index_t j010 = (2) + (3);
      number_t x6791 = (x00001)._1;
      index_t x6771 = (x00001)._2;
      number_t x6801 = (cam->arr[j010]);
      index_t x6781;
      if ((i) == (j010)) {
        x6781 = 1;
      } else {
        x6781 = 0;
      }
      number_t x7031 = (x6191) * (x6201);
      number_t x7011 = ((x6171) * (x6201)) + ((x6191) * (x6181));
      number_t x7041 = (x6791) - (x6801);
      index_t x7021 = (x6771) - (x6781);
      number_t x7271 = (x7270) + (x7280);
      number_t x7251 = (x7250) + (x7260);
      number_t x7281 = (x7031) * (x7041);
      number_t x7261 = ((x7011) * (x7041)) + ((x7031) * (x7021));
      number_t x388 = cos(x46);
      number_t x386 = (((x1311) + (x1321)) * (((1) / (x46)) * (0.5))) * (-(sin(x46)));
      number_t x277 = (x7271) + (x7281);
      number_t x275 = (x7251) + (x7261);
      number_t x278 = (1) - (x388);
      number_t x276 = -(x386);
      array_tuple_number_t_number_t x769 = (array_tuple_number_t_number_t)storage_alloc(sizeof(int) * 2);x769->length=3;x769->arr = (tuple_number_t_number_t*)storage_alloc(sizeof(tuple_number_t_number_t) * 3);
      for(int x376 = 0; x376 < x769->length; x376++){
        index_t x524 = (11) + (x14);
        index_t j20 = (x376) + (x524);
        tuple_number_t_index_t x0010 = (tuple_number_t_index_t){._1=(xs->arr[j20]), ._2=0};
        index_t j110 = (x376) + (3);
        number_t x631 = (x0010)._1;
        index_t x629 = (x0010)._2;
        number_t x632 = (cam->arr[j110]);
        index_t x630;
        if ((i) == (j110)) {
          x630 = 1;
        } else {
          x630 = 0;
        }
        number_t x643 = (x631) - (x632);
        index_t x641 = (x629) - (x630);
        number_t x644 = cos(x46);
        number_t x642 = (((x1311) + (x1321)) * (((1) / (x46)) * (0.5))) * (-(sin(x46)));
        tuple_number_t_number_t xi0 = (w_cross_X->arr[x376]);
        number_t x691 = (xi0)._1;
        number_t x689 = (xi0)._2;
        number_t x692 = sin(x46);
        number_t x690 = (((x1311) + (x1321)) * (((1) / (x46)) * (0.5))) * (cos(x46));
        number_t x715 = (x643) * (x644);
        number_t x713 = ((x641) * (x644)) + ((x643) * (x642));
        number_t x716 = (x691) * (x692);
        number_t x714 = ((x689) * (x692)) + ((x691) * (x690));
        number_t x739 = (cam->arr[x376]);
        index_t x737;
        if ((i) == (x376)) {
          x737 = 1;
        } else {
          x737 = 0;
        }
        number_t x740 = (1) / (x46);
        number_t x738 = (-(x168)) / ((x46) * (x46));
        number_t x751 = (x739) * (x740);
        number_t x749 = ((x737) * (x740)) + ((x739) * (x738));
        number_t x752 = (x277) * (x278);
        number_t x750 = ((x275) * (x278)) + ((x277) * (x276));
        number_t x763 = (x715) + (x716);
        number_t x761 = (x713) + (x714);
        number_t x764 = (x751) * (x752);
        number_t x762 = ((x749) * (x752)) + ((x751) * (x750));
        tuple_number_t_number_t x768 = (tuple_number_t_number_t){._1=(x763) + (x764), ._2=(x761) + (x762)};
        x769->arr[x376] = x768;
        
      }
      array_tuple_number_t_number_t Xcam = x769;
      tuple_number_t_number_t x38 = (Xcam->arr[2]);
      number_t x42 = (x38)._1;
      number_t x40 = (x38)._2;
      tuple_number_t_number_t xi = (Xcam->arr[0]);
      number_t x193 = (xi)._1;
      number_t x191 = (xi)._2;
      number_t x194 = (1) / (x42);
      number_t x192 = (-(x40)) / ((x42) * (x42));
      number_t x265 = (x193) * (x194);
      number_t x263 = ((x191) * (x194)) + ((x193) * (x192));
      number_t x266 = (x193) * (x194);
      number_t x264 = ((x191) * (x194)) + ((x193) * (x192));
      number_t x374 = (x265) * (x266);
      number_t x372 = ((x263) * (x266)) + ((x265) * (x264));
      tuple_number_t_number_t xi0 = (Xcam->arr[1]);
      number_t x1930 = (xi0)._1;
      number_t x1910 = (xi0)._2;
      number_t x1940 = (1) / (x42);
      number_t x1920 = (-(x40)) / ((x42) * (x42));
      number_t x2650 = (x1930) * (x1940);
      number_t x2630 = ((x1910) * (x1940)) + ((x1930) * (x1920));
      number_t x2660 = (x1930) * (x1940);
      number_t x2640 = ((x1910) * (x1940)) + ((x1930) * (x1920));
      number_t x3730 = (0) + (x374);
      number_t x3710 = (0) + (x372);
      number_t x3740 = (x2650) * (x2660);
      number_t x3720 = ((x2630) * (x2660)) + ((x2650) * (x2640));
      number_t x157 = (cam->arr[9]);
      index_t x155;
      if ((i) == (9)) {
        x155 = 1;
      } else {
        x155 = 0;
      }
      number_t x158 = (x3730) + (x3740);
      number_t x156 = (x3710) + (x3720);
      number_t x122 = (x157) * (x158);
      number_t x120 = ((x155) * (x158)) + ((x157) * (x156));
      number_t x145 = (cam->arr[10]);
      index_t x143;
      if ((i) == (10)) {
        x143 = 1;
      } else {
        x143 = 0;
      }
      number_t x146 = (x3730) + (x3740);
      number_t x144 = (x3710) + (x3720);
      number_t x109 = (x145) * (x146);
      number_t x107 = ((x143) * (x146)) + ((x145) * (x144));
      number_t x110 = (x3730) + (x3740);
      number_t x108 = (x3710) + (x3720);
      number_t x67 = (1) + (x122);
      number_t x68 = (x109) * (x110);
      number_t x66 = ((x107) * (x110)) + ((x109) * (x108));
      array_tuple_number_t_number_t x771 = (array_tuple_number_t_number_t)storage_alloc(sizeof(int) * 2);x771->length=2;x771->arr = (tuple_number_t_number_t*)storage_alloc(sizeof(tuple_number_t_number_t) * 2);
      for(int x98 = 0; x98 < x771->length; x98++){
        tuple_number_t_number_t xi1 = (Xcam->arr[x98]);
        number_t x253 = (xi1)._1;
        number_t x251 = (xi1)._2;
        number_t x254 = (1) / (x42);
        number_t x252 = (-(x40)) / ((x42) * (x42));
        number_t x361 = (x253) * (x254);
        number_t x359 = ((x251) * (x254)) + ((x253) * (x252));
        number_t x362 = (x67) + (x68);
        number_t x360 = (x120) + (x66);
        tuple_number_t_number_t x770 = (tuple_number_t_number_t){._1=(x361) * (x362), ._2=((x359) * (x362)) + ((x361) * (x360))};
        x771->arr[x98] = x770;
        
      }
      array_tuple_number_t_number_t distorted = x771;
      array_tuple_number_t_number_t v = (array_tuple_number_t_number_t)storage_alloc(sizeof(int) * 2);v->length=2;v->arr = (tuple_number_t_number_t*)storage_alloc(sizeof(tuple_number_t_number_t) * 2);
      for(int x48 = 0; x48 < v->length; x48++){
        index_t j00000 = (x48) + (7);
        tuple_number_t_number_t xi1 = (distorted->arr[x48]);
        number_t x181 = (xi1)._1;
        number_t x179 = (xi1)._2;
        number_t x182 = (cam->arr[6]);
        index_t x180;
        if ((i) == (6)) {
          x180 = 1;
        } else {
          x180 = 0;
        }
        number_t x205 = (cam->arr[j00000]);
        index_t x203;
        if ((i) == (j00000)) {
          x203 = 1;
        } else {
          x203 = 0;
        }
        number_t x206 = (x181) * (x182);
        number_t x204 = ((x179) * (x182)) + ((x181) * (x180));
        tuple_number_t_number_t x772 = (tuple_number_t_number_t){._1=(x205) + (x206), ._2=(x203) + (x204)};
        v->arr[x48] = x772;
        
      }
      array_number_t x773 = (array_number_t)storage_alloc(sizeof(int) * 2);x773->length=(v)->length;x773->arr = (number_t*)storage_alloc(sizeof(number_t) * (v)->length);
      for(int i00 = 0; i00 < x773->length; i00++){
        tuple_number_t_number_t s = (v->arr[i00]);
        x773->arr[i00] = (s)._2;
        
      }
      x774->arr[i0] = x773;
      
    }
    x775->arr[i] = x774;
    
  }
  return x775;
}
