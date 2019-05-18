#pragma once

#include "fsharp.h"
#include <stdio.h>
#include <math.h>

// > fondueJVM/test:run ba no-motion no-nmotion no-fusion

array_array_array_number_t ba(array_number_t cam, array_number_t xs, index_t n) {
  array_array_array_tuple_number_t_number_t m3 = (array_array_array_tuple_number_t_number_t)storage_alloc(sizeof(int) * 2);m3->length=(cam)->length;m3->arr = (array_array_tuple_number_t_number_t*)storage_alloc(sizeof(array_array_tuple_number_t_number_t) * (cam)->length);
  for(int ii = 0; ii < m3->length; ii++){
    index_t n0 = (cam)->length;
    array_index_t v2 = (array_index_t)storage_alloc(sizeof(int) * 2);v2->length=n0;v2->arr = (index_t*)storage_alloc(sizeof(index_t) * n0);
    for(int j = 0; j < v2->length; j++){
      index_t x794;
      if ((ii) == (j)) {
        x794 = 1;
      } else {
        x794 = 0;
      }
      v2->arr[j] = x794;
      
    }
    array_tuple_number_t_index_t cam_d = (array_tuple_number_t_index_t)storage_alloc(sizeof(int) * 2);cam_d->length=(cam)->length;cam_d->arr = (tuple_number_t_index_t*)storage_alloc(sizeof(tuple_number_t_index_t) * (cam)->length);
    for(int j0 = 0; j0 < cam_d->length; j0++){
      tuple_number_t_index_t x795 = (tuple_number_t_index_t){._1=(cam->arr[j0]), ._2=(v2->arr[j0])};
      cam_d->arr[j0] = x795;
      
    }
    index_t n00 = (xs)->length;
    array_index_t v20 = (array_index_t)storage_alloc(sizeof(int) * 2);v20->length=n00;v20->arr = (index_t*)storage_alloc(sizeof(index_t) * n00);
    for(int j1 = 0; j1 < v20->length; j1++){
      v20->arr[j1] = 0;
      
    }
    array_tuple_number_t_index_t x828 = (array_tuple_number_t_index_t)storage_alloc(sizeof(int) * 2);x828->length=(xs)->length;x828->arr = (tuple_number_t_index_t*)storage_alloc(sizeof(tuple_number_t_index_t) * (xs)->length);
    for(int j2 = 0; j2 < x828->length; j2++){
      tuple_number_t_index_t x827 = (tuple_number_t_index_t){._1=(xs->arr[j2]), ._2=(v20->arr[j2])};
      x828->arr[j2] = x827;
      
    }
    tuple_index_t_index_t x829 = (tuple_index_t_index_t){._1=n, ._2=0};
    array_tuple_number_t_index_t xs_d = x828;
    tuple_index_t_index_t n_d = x829;
    array_array_tuple_number_t_number_t x163 = (array_array_tuple_number_t_number_t)storage_alloc(sizeof(int) * 2);x163->length=(n_d)._1;x163->arr = (array_tuple_number_t_number_t*)storage_alloc(sizeof(array_tuple_number_t_number_t) * (n_d)._1);
    for(int x165 = 0; x165 < x163->length; x165++){
      tuple_index_t_index_t idx = (tuple_index_t_index_t){._1=x165, ._2=0};
      tuple_index_t_index_t x172 = (tuple_index_t_index_t){._1=3, ._2=0};
      index_t x176 = (x172)._1;
      index_t x174 = (x172)._2;
      index_t x177 = (idx)._1;
      index_t x175 = (idx)._2;
      tuple_index_t_index_t x1 = (tuple_index_t_index_t){._1=(x176) * (x177), ._2=((x174) * (x177)) + ((x176) * (x175))};
      tuple_index_t_index_t x184 = (tuple_index_t_index_t){._1=11, ._2=0};
      index_t x188 = (x184)._1;
      index_t x186 = (x184)._2;
      index_t x189 = (x1)._1;
      index_t x187 = (x1)._2;
      tuple_index_t_index_t x2 = (tuple_index_t_index_t){._1=(x188) + (x189), ._2=(x186) + (x187)};
      tuple_index_t_index_t x796 = (tuple_index_t_index_t){._1=3, ._2=0};
      array_tuple_number_t_index_t x5 = (array_tuple_number_t_index_t)storage_alloc(sizeof(int) * 2);x5->length=(x796)._1;x5->arr = (tuple_number_t_index_t*)storage_alloc(sizeof(tuple_number_t_index_t) * (x796)._1);
      for(int x191 = 0; x191 < x5->length; x191++){
        tuple_index_t_index_t i = (tuple_index_t_index_t){._1=x191, ._2=0};
        index_t x202 = (i)._1;
        index_t x200 = (i)._2;
        index_t x203 = (x2)._1;
        index_t x201 = (x2)._2;
        tuple_index_t_index_t x3 = (tuple_index_t_index_t){._1=(x202) + (x203), ._2=(x200) + (x201)};
        tuple_number_t_index_t x4 = (xs_d->arr[(x3)._1]);
        x5->arr[x191] = x4;
        
      }
      tuple_index_t_index_t x210 = (tuple_index_t_index_t){._1=0, ._2=0};
      tuple_index_t_index_t x211 = (tuple_index_t_index_t){._1=2, ._2=0};
      index_t x214 = (x210)._1;
      index_t x212 = (x210)._2;
      index_t x215 = (x211)._1;
      index_t x213 = (x211)._2;
      tuple_index_t_index_t x6 = (tuple_index_t_index_t){._1=(x214) + (x215), ._2=(x212) + (x213)};
      tuple_index_t_index_t x7 = (tuple_index_t_index_t){._1=(x6)._1, ._2=0};
      tuple_index_t_index_t x797 = (tuple_index_t_index_t){._1=0, ._2=0};
      tuple_index_t_index_t x8 = (tuple_index_t_index_t){._1=(x797)._1, ._2=0};
      tuple_index_t_index_t x9 = (tuple_index_t_index_t){._1=((x7)._1) - ((x8)._1), ._2=0};
      tuple_index_t_index_t x798 = (tuple_index_t_index_t){._1=1, ._2=0};
      tuple_index_t_index_t x10 = (tuple_index_t_index_t){._1=(x798)._1, ._2=0};
      tuple_index_t_index_t x11 = (tuple_index_t_index_t){._1=((x9)._1) + ((x10)._1), ._2=0};
      array_tuple_number_t_index_t x14 = (array_tuple_number_t_index_t)storage_alloc(sizeof(int) * 2);x14->length=(x11)._1;x14->arr = (tuple_number_t_index_t*)storage_alloc(sizeof(tuple_number_t_index_t) * (x11)._1);
      for(int x217 = 0; x217 < x14->length; x217++){
        tuple_index_t_index_t i0 = (tuple_index_t_index_t){._1=x217, ._2=0};
        tuple_index_t_index_t x237 = (tuple_index_t_index_t){._1=0, ._2=0};
        index_t x240 = (i0)._1;
        index_t x238 = (i0)._2;
        index_t x241 = (x237)._1;
        index_t x239 = (x237)._2;
        tuple_index_t_index_t x12 = (tuple_index_t_index_t){._1=(x240) + (x241), ._2=(x238) + (x239)};
        tuple_number_t_index_t x13 = (cam_d->arr[(x12)._1]);
        x14->arr[x217] = x13;
        
      }
      tuple_index_t_index_t x248 = (tuple_index_t_index_t){._1=3, ._2=0};
      tuple_index_t_index_t x249 = (tuple_index_t_index_t){._1=2, ._2=0};
      index_t x252 = (x248)._1;
      index_t x250 = (x248)._2;
      index_t x253 = (x249)._1;
      index_t x251 = (x249)._2;
      tuple_index_t_index_t x15 = (tuple_index_t_index_t){._1=(x252) + (x253), ._2=(x250) + (x251)};
      tuple_index_t_index_t x16 = (tuple_index_t_index_t){._1=(x15)._1, ._2=0};
      tuple_index_t_index_t x799 = (tuple_index_t_index_t){._1=3, ._2=0};
      tuple_index_t_index_t x17 = (tuple_index_t_index_t){._1=(x799)._1, ._2=0};
      tuple_index_t_index_t x18 = (tuple_index_t_index_t){._1=((x16)._1) - ((x17)._1), ._2=0};
      tuple_index_t_index_t x800 = (tuple_index_t_index_t){._1=1, ._2=0};
      tuple_index_t_index_t x19 = (tuple_index_t_index_t){._1=(x800)._1, ._2=0};
      tuple_index_t_index_t x20 = (tuple_index_t_index_t){._1=((x18)._1) + ((x19)._1), ._2=0};
      array_tuple_number_t_index_t x23 = (array_tuple_number_t_index_t)storage_alloc(sizeof(int) * 2);x23->length=(x20)._1;x23->arr = (tuple_number_t_index_t*)storage_alloc(sizeof(tuple_number_t_index_t) * (x20)._1);
      for(int x257 = 0; x257 < x23->length; x257++){
        tuple_index_t_index_t i1 = (tuple_index_t_index_t){._1=x257, ._2=0};
        tuple_index_t_index_t x289 = (tuple_index_t_index_t){._1=3, ._2=0};
        index_t x292 = (i1)._1;
        index_t x290 = (i1)._2;
        index_t x293 = (x289)._1;
        index_t x291 = (x289)._2;
        tuple_index_t_index_t x21 = (tuple_index_t_index_t){._1=(x292) + (x293), ._2=(x290) + (x291)};
        tuple_number_t_index_t x22 = (cam_d->arr[(x21)._1]);
        x23->arr[x257] = x22;
        
      }
      tuple_index_t_index_t x24 = (tuple_index_t_index_t){._1=(x5)->length, ._2=0};
      array_tuple_number_t_index_t x28 = (array_tuple_number_t_index_t)storage_alloc(sizeof(int) * 2);x28->length=(x24)._1;x28->arr = (tuple_number_t_index_t*)storage_alloc(sizeof(tuple_number_t_index_t) * (x24)._1);
      for(int x295 = 0; x295 < x28->length; x295++){
        tuple_index_t_index_t i2 = (tuple_index_t_index_t){._1=x295, ._2=0};
        tuple_number_t_index_t x25 = (x5->arr[(i2)._1]);
        tuple_number_t_index_t x26 = (x23->arr[(i2)._1]);
        number_t x336 = (x25)._1;
        index_t x334 = (x25)._2;
        number_t x337 = (x26)._1;
        index_t x335 = (x26)._2;
        tuple_number_t_index_t x27 = (tuple_number_t_index_t){._1=(x336) - (x337), ._2=(x334) - (x335)};
        x28->arr[x295] = x27;
        
      }
      tuple_index_t_index_t x29 = (tuple_index_t_index_t){._1=(x14)->length, ._2=0};
      array_tuple_number_t_number_t x32 = (array_tuple_number_t_number_t)storage_alloc(sizeof(int) * 2);x32->length=(x29)._1;x32->arr = (tuple_number_t_number_t*)storage_alloc(sizeof(tuple_number_t_number_t) * (x29)._1);
      for(int x297 = 0; x297 < x32->length; x297++){
        tuple_index_t_index_t i3 = (tuple_index_t_index_t){._1=x297, ._2=0};
        tuple_number_t_index_t x30 = (x14->arr[(i3)._1]);
        number_t x348 = (x30)._1;
        index_t x346 = (x30)._2;
        number_t x349 = (x30)._1;
        index_t x347 = (x30)._2;
        tuple_number_t_number_t x31 = (tuple_number_t_number_t){._1=(x348) * (x349), ._2=((x346) * (x349)) + ((x348) * (x347))};
        x32->arr[x297] = x31;
        
      }
      tuple_index_t_index_t x33 = (tuple_index_t_index_t){._1=(x32)->length, ._2=0};
      tuple_number_t_number_t x801 = (tuple_number_t_number_t){._1=0, ._2=0};
      tuple_number_t_number_t x36 = x801;
      for (int x365 = 0; x365 < (x33)._1; x365++) {
        tuple_number_t_number_t x364 = x36;
        tuple_index_t_index_t idx0 = (tuple_index_t_index_t){._1=x365, ._2=0};
        tuple_number_t_number_t x34 = (x32->arr[(idx0)._1]);
        number_t x388 = (x364)._1;
        number_t x386 = (x364)._2;
        number_t x389 = (x34)._1;
        number_t x387 = (x34)._2;
        tuple_number_t_number_t x35 = (tuple_number_t_number_t){._1=(x388) + (x389), ._2=(x386) + (x387)};
        x364 = x35;
        x36 = x364;
      }
      
      number_t x371 = sqrt((x36)._1);
      tuple_number_t_number_t x37 = (tuple_number_t_number_t){._1=x371, ._2=((x36)._2) / ((2) * (x371))};
      number_t x377 = (x37)._1;
      tuple_number_t_number_t x38 = (tuple_number_t_number_t){._1=cos(x377), ._2=((x37)._2) * (-(sin(x377)))};
      number_t x409 = (x37)._1;
      tuple_number_t_number_t x39 = (tuple_number_t_number_t){._1=sin(x409), ._2=((x37)._2) * (cos(x409))};
      tuple_index_t_index_t x428 = (tuple_index_t_index_t){._1=1, ._2=0};
      index_t x432 = (x428)._1;
      index_t x430 = (x428)._2;
      number_t x433 = (x37)._1;
      number_t x431 = (x37)._2;
      tuple_number_t_number_t x40 = (tuple_number_t_number_t){._1=(x432) / (x433), ._2=(((x430) * (x433)) - ((x432) * (x431))) / ((x433) * (x433))};
      tuple_index_t_index_t x41 = (tuple_index_t_index_t){._1=(x14)->length, ._2=0};
      array_tuple_number_t_number_t x44 = (array_tuple_number_t_number_t)storage_alloc(sizeof(int) * 2);x44->length=(x41)._1;x44->arr = (tuple_number_t_number_t*)storage_alloc(sizeof(tuple_number_t_number_t) * (x41)._1);
      for(int x463 = 0; x463 < x44->length; x463++){
        tuple_index_t_index_t i4 = (tuple_index_t_index_t){._1=x463, ._2=0};
        tuple_number_t_index_t x42 = (x14->arr[(i4)._1]);
        number_t x510 = (x42)._1;
        index_t x508 = (x42)._2;
        number_t x511 = (x40)._1;
        number_t x509 = (x40)._2;
        tuple_number_t_number_t x43 = (tuple_number_t_number_t){._1=(x510) * (x511), ._2=((x508) * (x511)) + ((x510) * (x509))};
        x44->arr[x463] = x43;
        
      }
      tuple_index_t_index_t x802 = (tuple_index_t_index_t){._1=1, ._2=0};
      tuple_number_t_number_t x45 = (x44->arr[(x802)._1]);
      tuple_index_t_index_t x803 = (tuple_index_t_index_t){._1=2, ._2=0};
      tuple_number_t_index_t x46 = (x28->arr[(x803)._1]);
      number_t x522 = (x45)._1;
      number_t x520 = (x45)._2;
      number_t x523 = (x46)._1;
      index_t x521 = (x46)._2;
      tuple_number_t_number_t x47 = (tuple_number_t_number_t){._1=(x522) * (x523), ._2=((x520) * (x523)) + ((x522) * (x521))};
      tuple_index_t_index_t x804 = (tuple_index_t_index_t){._1=2, ._2=0};
      tuple_number_t_number_t x48 = (x44->arr[(x804)._1]);
      tuple_index_t_index_t x805 = (tuple_index_t_index_t){._1=1, ._2=0};
      tuple_number_t_index_t x49 = (x28->arr[(x805)._1]);
      number_t x570 = (x48)._1;
      number_t x568 = (x48)._2;
      number_t x571 = (x49)._1;
      index_t x569 = (x49)._2;
      tuple_number_t_number_t x50 = (tuple_number_t_number_t){._1=(x570) * (x571), ._2=((x568) * (x571)) + ((x570) * (x569))};
      number_t x582 = (x47)._1;
      number_t x580 = (x47)._2;
      number_t x583 = (x50)._1;
      number_t x581 = (x50)._2;
      tuple_number_t_number_t x51 = (tuple_number_t_number_t){._1=(x582) - (x583), ._2=(x580) - (x581)};
      tuple_index_t_index_t x806 = (tuple_index_t_index_t){._1=2, ._2=0};
      tuple_number_t_number_t x52 = (x44->arr[(x806)._1]);
      tuple_index_t_index_t x807 = (tuple_index_t_index_t){._1=0, ._2=0};
      tuple_number_t_index_t x53 = (x28->arr[(x807)._1]);
      number_t x596 = (x52)._1;
      number_t x594 = (x52)._2;
      number_t x597 = (x53)._1;
      index_t x595 = (x53)._2;
      tuple_number_t_number_t x54 = (tuple_number_t_number_t){._1=(x596) * (x597), ._2=((x594) * (x597)) + ((x596) * (x595))};
      tuple_index_t_index_t x808 = (tuple_index_t_index_t){._1=0, ._2=0};
      tuple_number_t_number_t x55 = (x44->arr[(x808)._1]);
      tuple_index_t_index_t x809 = (tuple_index_t_index_t){._1=2, ._2=0};
      tuple_number_t_index_t x56 = (x28->arr[(x809)._1]);
      number_t x620 = (x55)._1;
      number_t x618 = (x55)._2;
      number_t x621 = (x56)._1;
      index_t x619 = (x56)._2;
      tuple_number_t_number_t x57 = (tuple_number_t_number_t){._1=(x620) * (x621), ._2=((x618) * (x621)) + ((x620) * (x619))};
      number_t x632 = (x54)._1;
      number_t x630 = (x54)._2;
      number_t x633 = (x57)._1;
      number_t x631 = (x57)._2;
      tuple_number_t_number_t x58 = (tuple_number_t_number_t){._1=(x632) - (x633), ._2=(x630) - (x631)};
      tuple_index_t_index_t x810 = (tuple_index_t_index_t){._1=0, ._2=0};
      tuple_number_t_number_t x59 = (x44->arr[(x810)._1]);
      tuple_index_t_index_t x811 = (tuple_index_t_index_t){._1=1, ._2=0};
      tuple_number_t_index_t x60 = (x28->arr[(x811)._1]);
      number_t x644 = (x59)._1;
      number_t x642 = (x59)._2;
      number_t x645 = (x60)._1;
      index_t x643 = (x60)._2;
      tuple_number_t_number_t x61 = (tuple_number_t_number_t){._1=(x644) * (x645), ._2=((x642) * (x645)) + ((x644) * (x643))};
      tuple_index_t_index_t x812 = (tuple_index_t_index_t){._1=1, ._2=0};
      tuple_number_t_number_t x62 = (x44->arr[(x812)._1]);
      tuple_index_t_index_t x813 = (tuple_index_t_index_t){._1=0, ._2=0};
      tuple_number_t_index_t x63 = (x28->arr[(x813)._1]);
      number_t x656 = (x62)._1;
      number_t x654 = (x62)._2;
      number_t x657 = (x63)._1;
      index_t x655 = (x63)._2;
      tuple_number_t_number_t x64 = (tuple_number_t_number_t){._1=(x656) * (x657), ._2=((x654) * (x657)) + ((x656) * (x655))};
      number_t x668 = (x61)._1;
      number_t x666 = (x61)._2;
      number_t x669 = (x64)._1;
      number_t x667 = (x64)._2;
      tuple_number_t_number_t x65 = (tuple_number_t_number_t){._1=(x668) - (x669), ._2=(x666) - (x667)};
      array_tuple_number_t_number_t x66 = (array_tuple_number_t_number_t)storage_alloc(sizeof(int) * 2);x66->length=3;x66->arr = (tuple_number_t_number_t*)storage_alloc(sizeof(tuple_number_t_number_t) * 3);
      x66->arr[0] = x51;
      x66->arr[1] = x58;
      x66->arr[2] = x65;
      tuple_index_t_index_t x67 = (tuple_index_t_index_t){._1=(x44)->length, ._2=0};
      array_tuple_number_t_number_t x71 = (array_tuple_number_t_number_t)storage_alloc(sizeof(int) * 2);x71->length=(x67)._1;x71->arr = (tuple_number_t_number_t*)storage_alloc(sizeof(tuple_number_t_number_t) * (x67)._1);
      for(int x671 = 0; x671 < x71->length; x671++){
        tuple_index_t_index_t i5 = (tuple_index_t_index_t){._1=x671, ._2=0};
        tuple_number_t_number_t x68 = (x44->arr[(i5)._1]);
        tuple_number_t_index_t x69 = (x28->arr[(i5)._1]);
        number_t x698 = (x68)._1;
        number_t x696 = (x68)._2;
        number_t x699 = (x69)._1;
        index_t x697 = (x69)._2;
        tuple_number_t_number_t x70 = (tuple_number_t_number_t){._1=(x698) * (x699), ._2=((x696) * (x699)) + ((x698) * (x697))};
        x71->arr[x671] = x70;
        
      }
      tuple_index_t_index_t x72 = (tuple_index_t_index_t){._1=(x71)->length, ._2=0};
      tuple_number_t_number_t x814 = (tuple_number_t_number_t){._1=0, ._2=0};
      tuple_number_t_number_t x75 = x814;
      for (int x675 = 0; x675 < (x72)._1; x675++) {
        tuple_number_t_number_t x674 = x75;
        tuple_index_t_index_t idx00 = (tuple_index_t_index_t){._1=x675, ._2=0};
        tuple_number_t_number_t x73 = (x71->arr[(idx00)._1]);
        number_t x722 = (x674)._1;
        number_t x720 = (x674)._2;
        number_t x723 = (x73)._1;
        number_t x721 = (x73)._2;
        tuple_number_t_number_t x74 = (tuple_number_t_number_t){._1=(x722) + (x723), ._2=(x720) + (x721)};
        x674 = x74;
        x75 = x674;
      }
      
      tuple_index_t_index_t x682 = (tuple_index_t_index_t){._1=1, ._2=0};
      index_t x686 = (x682)._1;
      index_t x684 = (x682)._2;
      number_t x687 = (x38)._1;
      number_t x685 = (x38)._2;
      tuple_number_t_number_t x76 = (tuple_number_t_number_t){._1=(x686) - (x687), ._2=(x684) - (x685)};
      number_t x710 = (x75)._1;
      number_t x708 = (x75)._2;
      number_t x711 = (x76)._1;
      number_t x709 = (x76)._2;
      tuple_number_t_number_t x77 = (tuple_number_t_number_t){._1=(x710) * (x711), ._2=((x708) * (x711)) + ((x710) * (x709))};
      tuple_index_t_index_t x78 = (tuple_index_t_index_t){._1=(x28)->length, ._2=0};
      array_tuple_number_t_number_t x81 = (array_tuple_number_t_number_t)storage_alloc(sizeof(int) * 2);x81->length=(x78)._1;x81->arr = (tuple_number_t_number_t*)storage_alloc(sizeof(tuple_number_t_number_t) * (x78)._1);
      for(int x725 = 0; x725 < x81->length; x725++){
        tuple_index_t_index_t i6 = (tuple_index_t_index_t){._1=x725, ._2=0};
        tuple_number_t_index_t x79 = (x28->arr[(i6)._1]);
        number_t x738 = (x79)._1;
        index_t x736 = (x79)._2;
        number_t x739 = (x38)._1;
        number_t x737 = (x38)._2;
        tuple_number_t_number_t x80 = (tuple_number_t_number_t){._1=(x738) * (x739), ._2=((x736) * (x739)) + ((x738) * (x737))};
        x81->arr[x725] = x80;
        
      }
      tuple_index_t_index_t x82 = (tuple_index_t_index_t){._1=(x66)->length, ._2=0};
      array_tuple_number_t_number_t x85 = (array_tuple_number_t_number_t)storage_alloc(sizeof(int) * 2);x85->length=(x82)._1;x85->arr = (tuple_number_t_number_t*)storage_alloc(sizeof(tuple_number_t_number_t) * (x82)._1);
      for(int x727 = 0; x727 < x85->length; x727++){
        tuple_index_t_index_t i7 = (tuple_index_t_index_t){._1=x727, ._2=0};
        tuple_number_t_number_t x83 = (x66->arr[(i7)._1]);
        number_t x752 = (x83)._1;
        number_t x750 = (x83)._2;
        number_t x753 = (x39)._1;
        number_t x751 = (x39)._2;
        tuple_number_t_number_t x84 = (tuple_number_t_number_t){._1=(x752) * (x753), ._2=((x750) * (x753)) + ((x752) * (x751))};
        x85->arr[x727] = x84;
        
      }
      tuple_index_t_index_t x86 = (tuple_index_t_index_t){._1=(x81)->length, ._2=0};
      array_tuple_number_t_number_t x90 = (array_tuple_number_t_number_t)storage_alloc(sizeof(int) * 2);x90->length=(x86)._1;x90->arr = (tuple_number_t_number_t*)storage_alloc(sizeof(tuple_number_t_number_t) * (x86)._1);
      for(int x741 = 0; x741 < x90->length; x741++){
        tuple_index_t_index_t i8 = (tuple_index_t_index_t){._1=x741, ._2=0};
        tuple_number_t_number_t x87 = (x81->arr[(i8)._1]);
        tuple_number_t_number_t x88 = (x85->arr[(i8)._1]);
        number_t x766 = (x87)._1;
        number_t x764 = (x87)._2;
        number_t x767 = (x88)._1;
        number_t x765 = (x88)._2;
        tuple_number_t_number_t x89 = (tuple_number_t_number_t){._1=(x766) + (x767), ._2=(x764) + (x765)};
        x90->arr[x741] = x89;
        
      }
      tuple_index_t_index_t x91 = (tuple_index_t_index_t){._1=(x44)->length, ._2=0};
      array_tuple_number_t_number_t x94 = (array_tuple_number_t_number_t)storage_alloc(sizeof(int) * 2);x94->length=(x91)._1;x94->arr = (tuple_number_t_number_t*)storage_alloc(sizeof(tuple_number_t_number_t) * (x91)._1);
      for(int x755 = 0; x755 < x94->length; x755++){
        tuple_index_t_index_t i9 = (tuple_index_t_index_t){._1=x755, ._2=0};
        tuple_number_t_number_t x92 = (x44->arr[(i9)._1]);
        number_t x780 = (x92)._1;
        number_t x778 = (x92)._2;
        number_t x781 = (x77)._1;
        number_t x779 = (x77)._2;
        tuple_number_t_number_t x93 = (tuple_number_t_number_t){._1=(x780) * (x781), ._2=((x778) * (x781)) + ((x780) * (x779))};
        x94->arr[x755] = x93;
        
      }
      tuple_index_t_index_t x95 = (tuple_index_t_index_t){._1=(x90)->length, ._2=0};
      array_tuple_number_t_number_t x99 = (array_tuple_number_t_number_t)storage_alloc(sizeof(int) * 2);x99->length=(x95)._1;x99->arr = (tuple_number_t_number_t*)storage_alloc(sizeof(tuple_number_t_number_t) * (x95)._1);
      for(int x769 = 0; x769 < x99->length; x769++){
        tuple_index_t_index_t i10 = (tuple_index_t_index_t){._1=x769, ._2=0};
        tuple_number_t_number_t x96 = (x90->arr[(i10)._1]);
        tuple_number_t_number_t x97 = (x94->arr[(i10)._1]);
        number_t x792 = (x96)._1;
        number_t x790 = (x96)._2;
        number_t x793 = (x97)._1;
        number_t x791 = (x97)._2;
        tuple_number_t_number_t x98 = (tuple_number_t_number_t){._1=(x792) + (x793), ._2=(x790) + (x791)};
        x99->arr[x769] = x98;
        
      }
      array_tuple_number_t_number_t x100 = x99;
      tuple_index_t_index_t x224 = (tuple_index_t_index_t){._1=9, ._2=0};
      tuple_index_t_index_t x225 = (tuple_index_t_index_t){._1=1, ._2=0};
      index_t x228 = (x224)._1;
      index_t x226 = (x224)._2;
      index_t x229 = (x225)._1;
      index_t x227 = (x225)._2;
      tuple_index_t_index_t x101 = (tuple_index_t_index_t){._1=(x228) + (x229), ._2=(x226) + (x227)};
      tuple_index_t_index_t x102 = (tuple_index_t_index_t){._1=(x101)._1, ._2=0};
      tuple_index_t_index_t x815 = (tuple_index_t_index_t){._1=9, ._2=0};
      tuple_index_t_index_t x103 = (tuple_index_t_index_t){._1=(x815)._1, ._2=0};
      tuple_index_t_index_t x104 = (tuple_index_t_index_t){._1=((x102)._1) - ((x103)._1), ._2=0};
      tuple_index_t_index_t x816 = (tuple_index_t_index_t){._1=1, ._2=0};
      tuple_index_t_index_t x105 = (tuple_index_t_index_t){._1=(x816)._1, ._2=0};
      tuple_index_t_index_t x106 = (tuple_index_t_index_t){._1=((x104)._1) + ((x105)._1), ._2=0};
      array_tuple_number_t_index_t x109 = (array_tuple_number_t_index_t)storage_alloc(sizeof(int) * 2);x109->length=(x106)._1;x109->arr = (tuple_number_t_index_t*)storage_alloc(sizeof(tuple_number_t_index_t) * (x106)._1);
      for(int x255 = 0; x255 < x109->length; x255++){
        tuple_index_t_index_t i11 = (tuple_index_t_index_t){._1=x255, ._2=0};
        tuple_index_t_index_t x277 = (tuple_index_t_index_t){._1=9, ._2=0};
        index_t x280 = (i11)._1;
        index_t x278 = (i11)._2;
        index_t x281 = (x277)._1;
        index_t x279 = (x277)._2;
        tuple_index_t_index_t x107 = (tuple_index_t_index_t){._1=(x280) + (x281), ._2=(x278) + (x279)};
        tuple_number_t_index_t x108 = (cam_d->arr[(x107)._1]);
        x109->arr[x255] = x108;
        
      }
      tuple_index_t_index_t x817 = (tuple_index_t_index_t){._1=1, ._2=0};
      tuple_index_t_index_t x110 = (tuple_index_t_index_t){._1=(x817)._1, ._2=0};
      tuple_index_t_index_t x818 = (tuple_index_t_index_t){._1=0, ._2=0};
      tuple_index_t_index_t x111 = (tuple_index_t_index_t){._1=(x818)._1, ._2=0};
      tuple_index_t_index_t x112 = (tuple_index_t_index_t){._1=((x110)._1) - ((x111)._1), ._2=0};
      tuple_index_t_index_t x819 = (tuple_index_t_index_t){._1=1, ._2=0};
      tuple_index_t_index_t x113 = (tuple_index_t_index_t){._1=(x819)._1, ._2=0};
      tuple_index_t_index_t x114 = (tuple_index_t_index_t){._1=((x112)._1) + ((x113)._1), ._2=0};
      array_tuple_number_t_number_t x117 = (array_tuple_number_t_number_t)storage_alloc(sizeof(int) * 2);x117->length=(x114)._1;x117->arr = (tuple_number_t_number_t*)storage_alloc(sizeof(tuple_number_t_number_t) * (x114)._1);
      for(int x301 = 0; x301 < x117->length; x301++){
        tuple_index_t_index_t i12 = (tuple_index_t_index_t){._1=x301, ._2=0};
        tuple_index_t_index_t x321 = (tuple_index_t_index_t){._1=0, ._2=0};
        index_t x324 = (i12)._1;
        index_t x322 = (i12)._2;
        index_t x325 = (x321)._1;
        index_t x323 = (x321)._2;
        tuple_index_t_index_t x115 = (tuple_index_t_index_t){._1=(x324) + (x325), ._2=(x322) + (x323)};
        tuple_number_t_number_t x116 = (x100->arr[(x115)._1]);
        x117->arr[x301] = x116;
        
      }
      tuple_index_t_index_t x820 = (tuple_index_t_index_t){._1=2, ._2=0};
      tuple_number_t_number_t x118 = (x100->arr[(x820)._1]);
      tuple_index_t_index_t x356 = (tuple_index_t_index_t){._1=1, ._2=0};
      index_t x360 = (x356)._1;
      index_t x358 = (x356)._2;
      number_t x361 = (x118)._1;
      number_t x359 = (x118)._2;
      tuple_number_t_number_t x119 = (tuple_number_t_number_t){._1=(x360) / (x361), ._2=(((x358) * (x361)) - ((x360) * (x359))) / ((x361) * (x361))};
      tuple_index_t_index_t x120 = (tuple_index_t_index_t){._1=(x117)->length, ._2=0};
      array_tuple_number_t_number_t x123 = (array_tuple_number_t_number_t)storage_alloc(sizeof(int) * 2);x123->length=(x120)._1;x123->arr = (tuple_number_t_number_t*)storage_alloc(sizeof(tuple_number_t_number_t) * (x120)._1);
      for(int x373 = 0; x373 < x123->length; x373++){
        tuple_index_t_index_t i13 = (tuple_index_t_index_t){._1=x373, ._2=0};
        tuple_number_t_number_t x121 = (x117->arr[(i13)._1]);
        number_t x420 = (x121)._1;
        number_t x418 = (x121)._2;
        number_t x421 = (x119)._1;
        number_t x419 = (x119)._2;
        tuple_number_t_number_t x122 = (tuple_number_t_number_t){._1=(x420) * (x421), ._2=((x418) * (x421)) + ((x420) * (x419))};
        x123->arr[x373] = x122;
        
      }
      tuple_index_t_index_t x124 = (tuple_index_t_index_t){._1=(x123)->length, ._2=0};
      array_tuple_number_t_number_t x127 = (array_tuple_number_t_number_t)storage_alloc(sizeof(int) * 2);x127->length=(x124)._1;x127->arr = (tuple_number_t_number_t*)storage_alloc(sizeof(tuple_number_t_number_t) * (x124)._1);
      for(int x405 = 0; x405 < x127->length; x405++){
        tuple_index_t_index_t i14 = (tuple_index_t_index_t){._1=x405, ._2=0};
        tuple_number_t_number_t x125 = (x123->arr[(i14)._1]);
        number_t x444 = (x125)._1;
        number_t x442 = (x125)._2;
        number_t x445 = (x125)._1;
        number_t x443 = (x125)._2;
        tuple_number_t_number_t x126 = (tuple_number_t_number_t){._1=(x444) * (x445), ._2=((x442) * (x445)) + ((x444) * (x443))};
        x127->arr[x405] = x126;
        
      }
      tuple_index_t_index_t x128 = (tuple_index_t_index_t){._1=(x127)->length, ._2=0};
      tuple_number_t_number_t x821 = (tuple_number_t_number_t){._1=0, ._2=0};
      tuple_number_t_number_t x131 = x821;
      for (int x449 = 0; x449 < (x128)._1; x449++) {
        tuple_number_t_number_t x448 = x131;
        tuple_index_t_index_t idx01 = (tuple_index_t_index_t){._1=x449, ._2=0};
        tuple_number_t_number_t x129 = (x127->arr[(idx01)._1]);
        number_t x498 = (x448)._1;
        number_t x496 = (x448)._2;
        number_t x499 = (x129)._1;
        number_t x497 = (x129)._2;
        tuple_number_t_number_t x130 = (tuple_number_t_number_t){._1=(x498) + (x499), ._2=(x496) + (x497)};
        x448 = x130;
        x131 = x448;
      }
      
      tuple_index_t_index_t x822 = (tuple_index_t_index_t){._1=0, ._2=0};
      tuple_number_t_index_t x132 = (x109->arr[(x822)._1]);
      number_t x474 = (x132)._1;
      index_t x472 = (x132)._2;
      number_t x475 = (x131)._1;
      number_t x473 = (x131)._2;
      tuple_number_t_number_t x133 = (tuple_number_t_number_t){._1=(x474) * (x475), ._2=((x472) * (x475)) + ((x474) * (x473))};
      tuple_index_t_index_t x482 = (tuple_index_t_index_t){._1=1, ._2=0};
      index_t x486 = (x482)._1;
      index_t x484 = (x482)._2;
      number_t x487 = (x133)._1;
      number_t x485 = (x133)._2;
      tuple_number_t_number_t x134 = (tuple_number_t_number_t){._1=(x486) + (x487), ._2=(x484) + (x485)};
      tuple_index_t_index_t x823 = (tuple_index_t_index_t){._1=1, ._2=0};
      tuple_number_t_index_t x135 = (x109->arr[(x823)._1]);
      number_t x534 = (x135)._1;
      index_t x532 = (x135)._2;
      number_t x535 = (x131)._1;
      number_t x533 = (x131)._2;
      tuple_number_t_number_t x136 = (tuple_number_t_number_t){._1=(x534) * (x535), ._2=((x532) * (x535)) + ((x534) * (x533))};
      number_t x546 = (x136)._1;
      number_t x544 = (x136)._2;
      number_t x547 = (x131)._1;
      number_t x545 = (x131)._2;
      tuple_number_t_number_t x137 = (tuple_number_t_number_t){._1=(x546) * (x547), ._2=((x544) * (x547)) + ((x546) * (x545))};
      number_t x558 = (x134)._1;
      number_t x556 = (x134)._2;
      number_t x559 = (x137)._1;
      number_t x557 = (x137)._2;
      tuple_number_t_number_t x138 = (tuple_number_t_number_t){._1=(x558) + (x559), ._2=(x556) + (x557)};
      tuple_index_t_index_t x139 = (tuple_index_t_index_t){._1=(x123)->length, ._2=0};
      array_tuple_number_t_number_t x142 = (array_tuple_number_t_number_t)storage_alloc(sizeof(int) * 2);x142->length=(x139)._1;x142->arr = (tuple_number_t_number_t*)storage_alloc(sizeof(tuple_number_t_number_t) * (x139)._1);
      for(int x585 = 0; x585 < x142->length; x585++){
        tuple_index_t_index_t i15 = (tuple_index_t_index_t){._1=x585, ._2=0};
        tuple_number_t_number_t x140 = (x123->arr[(i15)._1]);
        number_t x608 = (x140)._1;
        number_t x606 = (x140)._2;
        number_t x609 = (x138)._1;
        number_t x607 = (x138)._2;
        tuple_number_t_number_t x141 = (tuple_number_t_number_t){._1=(x608) * (x609), ._2=((x606) * (x609)) + ((x608) * (x607))};
        x142->arr[x585] = x141;
        
      }
      array_tuple_number_t_number_t x143 = x142;
      tuple_index_t_index_t x264 = (tuple_index_t_index_t){._1=7, ._2=0};
      tuple_index_t_index_t x265 = (tuple_index_t_index_t){._1=1, ._2=0};
      index_t x268 = (x264)._1;
      index_t x266 = (x264)._2;
      index_t x269 = (x265)._1;
      index_t x267 = (x265)._2;
      tuple_index_t_index_t x144 = (tuple_index_t_index_t){._1=(x268) + (x269), ._2=(x266) + (x267)};
      tuple_index_t_index_t x145 = (tuple_index_t_index_t){._1=(x144)._1, ._2=0};
      tuple_index_t_index_t x824 = (tuple_index_t_index_t){._1=7, ._2=0};
      tuple_index_t_index_t x146 = (tuple_index_t_index_t){._1=(x824)._1, ._2=0};
      tuple_index_t_index_t x147 = (tuple_index_t_index_t){._1=((x145)._1) - ((x146)._1), ._2=0};
      tuple_index_t_index_t x825 = (tuple_index_t_index_t){._1=1, ._2=0};
      tuple_index_t_index_t x148 = (tuple_index_t_index_t){._1=(x825)._1, ._2=0};
      tuple_index_t_index_t x149 = (tuple_index_t_index_t){._1=((x147)._1) + ((x148)._1), ._2=0};
      array_tuple_number_t_index_t x152 = (array_tuple_number_t_index_t)storage_alloc(sizeof(int) * 2);x152->length=(x149)._1;x152->arr = (tuple_number_t_index_t*)storage_alloc(sizeof(tuple_number_t_index_t) * (x149)._1);
      for(int x299 = 0; x299 < x152->length; x299++){
        tuple_index_t_index_t i16 = (tuple_index_t_index_t){._1=x299, ._2=0};
        tuple_index_t_index_t x309 = (tuple_index_t_index_t){._1=7, ._2=0};
        index_t x312 = (i16)._1;
        index_t x310 = (i16)._2;
        index_t x313 = (x309)._1;
        index_t x311 = (x309)._2;
        tuple_index_t_index_t x150 = (tuple_index_t_index_t){._1=(x312) + (x313), ._2=(x310) + (x311)};
        tuple_number_t_index_t x151 = (cam_d->arr[(x150)._1]);
        x152->arr[x299] = x151;
        
      }
      tuple_index_t_index_t x826 = (tuple_index_t_index_t){._1=6, ._2=0};
      tuple_number_t_index_t x153 = (cam_d->arr[(x826)._1]);
      tuple_index_t_index_t x154 = (tuple_index_t_index_t){._1=(x143)->length, ._2=0};
      array_tuple_number_t_number_t x157 = (array_tuple_number_t_number_t)storage_alloc(sizeof(int) * 2);x157->length=(x154)._1;x157->arr = (tuple_number_t_number_t*)storage_alloc(sizeof(tuple_number_t_number_t) * (x154)._1);
      for(int x367 = 0; x367 < x157->length; x367++){
        tuple_index_t_index_t i17 = (tuple_index_t_index_t){._1=x367, ._2=0};
        tuple_number_t_number_t x155 = (x143->arr[(i17)._1]);
        number_t x402 = (x155)._1;
        number_t x400 = (x155)._2;
        number_t x403 = (x153)._1;
        index_t x401 = (x153)._2;
        tuple_number_t_number_t x156 = (tuple_number_t_number_t){._1=(x402) * (x403), ._2=((x400) * (x403)) + ((x402) * (x401))};
        x157->arr[x367] = x156;
        
      }
      tuple_index_t_index_t x158 = (tuple_index_t_index_t){._1=(x152)->length, ._2=0};
      array_tuple_number_t_number_t x162 = (array_tuple_number_t_number_t)storage_alloc(sizeof(int) * 2);x162->length=(x158)._1;x162->arr = (tuple_number_t_number_t*)storage_alloc(sizeof(tuple_number_t_number_t) * (x158)._1);
      for(int x391 = 0; x391 < x162->length; x391++){
        tuple_index_t_index_t i18 = (tuple_index_t_index_t){._1=x391, ._2=0};
        tuple_number_t_index_t x159 = (x152->arr[(i18)._1]);
        tuple_number_t_number_t x160 = (x157->arr[(i18)._1]);
        number_t x460 = (x159)._1;
        index_t x458 = (x159)._2;
        number_t x461 = (x160)._1;
        number_t x459 = (x160)._2;
        tuple_number_t_number_t x161 = (tuple_number_t_number_t){._1=(x460) + (x461), ._2=(x458) + (x459)};
        x162->arr[x391] = x161;
        
      }
      x163->arr[x165] = x162;
      
    }
    m3->arr[ii] = x163;
    
  }
  array_array_array_number_t x832 = (array_array_array_number_t)storage_alloc(sizeof(int) * 2);x832->length=(m3)->length;x832->arr = (array_array_number_t*)storage_alloc(sizeof(array_array_number_t) * (m3)->length);
  for(int i19 = 0; i19 < x832->length; i19++){
    array_array_tuple_number_t_number_t m = (m3->arr[i19]);
    array_array_number_t x831 = (array_array_number_t)storage_alloc(sizeof(int) * 2);x831->length=(m)->length;x831->arr = (array_number_t*)storage_alloc(sizeof(array_number_t) * (m)->length);
    for(int i00 = 0; i00 < x831->length; i00++){
      array_tuple_number_t_number_t v = (m->arr[i00]);
      array_number_t x830 = (array_number_t)storage_alloc(sizeof(int) * 2);x830->length=(v)->length;x830->arr = (number_t*)storage_alloc(sizeof(number_t) * (v)->length);
      for(int i000 = 0; i000 < x830->length; i000++){
        tuple_number_t_number_t s = (v->arr[i000]);
        x830->arr[i000] = (s)._2;
        
      }
      x831->arr[i00] = x830;
      
    }
    x832->arr[i19] = x831;
    
  }
  return x832;
}
