#include <math.h>

struct array_array_tuple_number_t_index_t;
struct array_array_index_t;

typedef struct array_array_tuple_number_t_index_t {
  array_tuple_number_t_index_t* arr;
  int length;
}* array_array_tuple_number_t_index_t;
typedef struct array_array_index_t {
  array_index_t* arr;
  int length;
}* array_array_index_t;


array_number_t nmf(array_number_t u, array_number_t v, array_array_number_t AA) {
  index_t x1 = (u)->length;
  array_tuple_number_t_number_t x125 = (array_tuple_number_t_number_t)storage_alloc(sizeof(int) * 2);x125->length=x1;x125->arr = (tuple_number_t_number_t*)storage_alloc(sizeof(tuple_number_t_number_t) * x1);
  for(int ii = 0; ii < x125->length; ii++){
    index_t x92 = (u)->length;
    array_index_t x95 = (array_index_t)storage_alloc(sizeof(int) * 2);x95->length=x92;x95->arr = (index_t*)storage_alloc(sizeof(index_t) * x92);
    for(int j = 0; j < x95->length; j++){
      index_t x93 = (ii) == (j);
      index_t x94;
      if (x93) {
        x94 = 1;
      } else {
        x94 = 0;
      }
      x95->arr[j] = x94;
      
    }
    index_t x96 = (u)->length;
    array_tuple_number_t_index_t x100 = (array_tuple_number_t_index_t)storage_alloc(sizeof(int) * 2);x100->length=x96;x100->arr = (tuple_number_t_index_t*)storage_alloc(sizeof(tuple_number_t_index_t) * x96);
    for(int j0 = 0; j0 < x100->length; j0++){
      number_t x97 = (u->arr[j0]);
      index_t x98 = (x95->arr[j0]);
      tuple_number_t_index_t x99 = (tuple_number_t_index_t){._1=x97, ._2=x98};
      x100->arr[j0] = x99;
      
    }
    index_t x102 = (v)->length;
    array_index_t x103 = (array_index_t)storage_alloc(sizeof(int) * 2);x103->length=x102;x103->arr = (index_t*)storage_alloc(sizeof(index_t) * x102);
    for(int j1 = 0; j1 < x103->length; j1++){
      x103->arr[j1] = 0;
      
    }
    index_t x104 = (v)->length;
    array_tuple_number_t_index_t x108 = (array_tuple_number_t_index_t)storage_alloc(sizeof(int) * 2);x108->length=x104;x108->arr = (tuple_number_t_index_t*)storage_alloc(sizeof(tuple_number_t_index_t) * x104);
    for(int j2 = 0; j2 < x108->length; j2++){
      number_t x105 = (v->arr[j2]);
      index_t x106 = (x103->arr[j2]);
      tuple_number_t_index_t x107 = (tuple_number_t_index_t){._1=x105, ._2=x106};
      x108->arr[j2] = x107;
      
    }
    index_t x110 = (AA)->length;
    array_number_t x111 = (AA->arr[0]);
    index_t x112 = (x111)->length;
    array_array_index_t x114 = (array_array_index_t)storage_alloc(sizeof(int) * 2);x114->length=x110;x114->arr = (array_index_t*)storage_alloc(sizeof(array_index_t) * x110);
    for(int i = 0; i < x114->length; i++){
      array_index_t x113 = (array_index_t)storage_alloc(sizeof(int) * 2);x113->length=x112;x113->arr = (index_t*)storage_alloc(sizeof(index_t) * x112);
      for(int j3 = 0; j3 < x113->length; j3++){
        x113->arr[j3] = 0;
        
      }
      x114->arr[i] = x113;
      
    }
    index_t x115 = (AA)->length;
    array_array_tuple_number_t_index_t x123 = (array_array_tuple_number_t_index_t)storage_alloc(sizeof(int) * 2);x123->length=x115;x123->arr = (array_tuple_number_t_index_t*)storage_alloc(sizeof(array_tuple_number_t_index_t) * x115);
    for(int i0 = 0; i0 < x123->length; i0++){
      array_number_t x116 = (AA->arr[i0]);
      array_index_t x117 = (x114->arr[i0]);
      index_t x118 = (x116)->length;
      array_tuple_number_t_index_t x122 = (array_tuple_number_t_index_t)storage_alloc(sizeof(int) * 2);x122->length=x118;x122->arr = (tuple_number_t_index_t*)storage_alloc(sizeof(tuple_number_t_index_t) * x118);
      for(int j4 = 0; j4 < x122->length; j4++){
        number_t x119 = (x116->arr[j4]);
        index_t x120 = (x117->arr[j4]);
        tuple_number_t_index_t x121 = (tuple_number_t_index_t){._1=x119, ._2=x120};
        x122->arr[j4] = x121;
        
      }
      x123->arr[i0] = x122;
      
    }
    tuple_index_t_index_t x284 = (tuple_index_t_index_t){._1=1, ._2=0};
    array_array_tuple_number_t_index_t x2 = (array_array_tuple_number_t_index_t)storage_alloc(sizeof(int) * 2);x2->length=(x284)._1;x2->arr = (array_tuple_number_t_index_t*)storage_alloc(sizeof(array_tuple_number_t_index_t) * (x284)._1);
    for(int x131 = 0; x131 < x2->length; x131++){
      x2->arr[x131] = x100;
      
    }
    tuple_index_t_index_t x285 = (tuple_index_t_index_t){._1=1, ._2=0};
    array_array_tuple_number_t_index_t x3 = (array_array_tuple_number_t_index_t)storage_alloc(sizeof(int) * 2);x3->length=(x285)._1;x3->arr = (array_tuple_number_t_index_t*)storage_alloc(sizeof(array_tuple_number_t_index_t) * (x285)._1);
    for(int x133 = 0; x133 < x3->length; x133++){
      x3->arr[x133] = x108;
      
    }
    tuple_index_t_index_t x4 = (tuple_index_t_index_t){._1=(x3)->length, ._2=0};
    tuple_index_t_index_t x286 = (tuple_index_t_index_t){._1=0, ._2=0};
    array_tuple_number_t_index_t x5 = (x3->arr[(x286)._1]);
    tuple_index_t_index_t x6 = (tuple_index_t_index_t){._1=(x5)->length, ._2=0};
    array_array_tuple_number_t_index_t x10 = (array_array_tuple_number_t_index_t)storage_alloc(sizeof(int) * 2);x10->length=(x6)._1;x10->arr = (array_tuple_number_t_index_t*)storage_alloc(sizeof(array_tuple_number_t_index_t) * (x6)._1);
    for(int x135 = 0; x135 < x10->length; x135++){
      tuple_index_t_index_t i1 = (tuple_index_t_index_t){._1=x135, ._2=0};
      array_tuple_number_t_index_t x9 = (array_tuple_number_t_index_t)storage_alloc(sizeof(int) * 2);x9->length=(x4)._1;x9->arr = (tuple_number_t_index_t*)storage_alloc(sizeof(tuple_number_t_index_t) * (x4)._1);
      for(int x137 = 0; x137 < x9->length; x137++){
        tuple_index_t_index_t j5 = (tuple_index_t_index_t){._1=x137, ._2=0};
        array_tuple_number_t_index_t x7 = (x3->arr[(j5)._1]);
        tuple_number_t_index_t x8 = (x7->arr[(i1)._1]);
        x9->arr[x137] = x8;
        
      }
      x10->arr[x135] = x9;
      
    }
    tuple_index_t_index_t x11 = (tuple_index_t_index_t){._1=(x10)->length, ._2=0};
    tuple_index_t_index_t x287 = (tuple_index_t_index_t){._1=0, ._2=0};
    array_tuple_number_t_index_t x12 = (x2->arr[(x287)._1]);
    tuple_index_t_index_t x13 = (tuple_index_t_index_t){._1=(x12)->length, ._2=0};
    tuple_index_t_index_t x14 = (tuple_index_t_index_t){._1=(x2)->length, ._2=0};
    tuple_index_t_index_t x288 = (tuple_index_t_index_t){._1=0, ._2=0};
    array_tuple_number_t_index_t x15 = (x2->arr[(x288)._1]);
    tuple_index_t_index_t x16 = (tuple_index_t_index_t){._1=(x15)->length, ._2=0};
    array_array_tuple_number_t_index_t x20 = (array_array_tuple_number_t_index_t)storage_alloc(sizeof(int) * 2);x20->length=(x16)._1;x20->arr = (array_tuple_number_t_index_t*)storage_alloc(sizeof(array_tuple_number_t_index_t) * (x16)._1);
    for(int x139 = 0; x139 < x20->length; x139++){
      tuple_index_t_index_t i2 = (tuple_index_t_index_t){._1=x139, ._2=0};
      array_tuple_number_t_index_t x19 = (array_tuple_number_t_index_t)storage_alloc(sizeof(int) * 2);x19->length=(x14)._1;x19->arr = (tuple_number_t_index_t*)storage_alloc(sizeof(tuple_number_t_index_t) * (x14)._1);
      for(int x141 = 0; x141 < x19->length; x141++){
        tuple_index_t_index_t j6 = (tuple_index_t_index_t){._1=x141, ._2=0};
        array_tuple_number_t_index_t x17 = (x2->arr[(j6)._1]);
        tuple_number_t_index_t x18 = (x17->arr[(i2)._1]);
        x19->arr[x141] = x18;
        
      }
      x20->arr[x139] = x19;
      
    }
    array_array_tuple_number_t_number_t x33 = (array_array_tuple_number_t_number_t)storage_alloc(sizeof(int) * 2);x33->length=(x11)._1;x33->arr = (array_tuple_number_t_number_t*)storage_alloc(sizeof(array_tuple_number_t_number_t) * (x11)._1);
    for(int x143 = 0; x143 < x33->length; x143++){
      tuple_index_t_index_t r = (tuple_index_t_index_t){._1=x143, ._2=0};
      array_tuple_number_t_number_t x32 = (array_tuple_number_t_number_t)storage_alloc(sizeof(int) * 2);x32->length=(x13)._1;x32->arr = (tuple_number_t_number_t*)storage_alloc(sizeof(tuple_number_t_number_t) * (x13)._1);
      for(int x145 = 0; x145 < x32->length; x145++){
        tuple_index_t_index_t c = (tuple_index_t_index_t){._1=x145, ._2=0};
        array_tuple_number_t_index_t x21 = (x10->arr[(r)._1]);
        array_tuple_number_t_index_t x22 = (x20->arr[(c)._1]);
        tuple_index_t_index_t x23 = (tuple_index_t_index_t){._1=(x21)->length, ._2=0};
        array_tuple_number_t_number_t x27 = (array_tuple_number_t_number_t)storage_alloc(sizeof(int) * 2);x27->length=(x23)._1;x27->arr = (tuple_number_t_number_t*)storage_alloc(sizeof(tuple_number_t_number_t) * (x23)._1);
        for(int x151 = 0; x151 < x27->length; x151++){
          tuple_index_t_index_t i3 = (tuple_index_t_index_t){._1=x151, ._2=0};
          tuple_number_t_index_t x24 = (x21->arr[(i3)._1]);
          tuple_number_t_index_t x25 = (x22->arr[(i3)._1]);
          number_t x168 = (x24)._1;
          index_t x166 = (x24)._2;
          number_t x169 = (x25)._1;
          index_t x167 = (x25)._2;
          tuple_number_t_number_t x26 = (tuple_number_t_number_t){._1=(x168) * (x169), ._2=((x166) * (x169)) + ((x168) * (x167))};
          x27->arr[x151] = x26;
          
        }
        tuple_index_t_index_t x28 = (tuple_index_t_index_t){._1=(x27)->length, ._2=0};
        tuple_number_t_number_t x289 = (tuple_number_t_number_t){._1=0, ._2=0};
        tuple_number_t_number_t x31 = x289;
        for (int x157 = 0; x157 < (x28)._1; x157++) {
          tuple_number_t_number_t x156 = x31;
          tuple_index_t_index_t idx = (tuple_index_t_index_t){._1=x157, ._2=0};
          tuple_number_t_number_t x29 = (x27->arr[(idx)._1]);
          number_t x182 = (x156)._1;
          number_t x180 = (x156)._2;
          number_t x183 = (x29)._1;
          number_t x181 = (x29)._2;
          tuple_number_t_number_t x30 = (tuple_number_t_number_t){._1=(x182) + (x183), ._2=(x180) + (x181)};
          x156 = x30;
          x31 = x156;
        }
        
        x32->arr[x145] = x31;
        
      }
      x33->arr[x143] = x32;
      
    }
    tuple_index_t_index_t x34 = (tuple_index_t_index_t){._1=(x33)->length, ._2=0};
    array_array_tuple_number_t_number_t x40 = (array_array_tuple_number_t_number_t)storage_alloc(sizeof(int) * 2);x40->length=(x34)._1;x40->arr = (array_tuple_number_t_number_t*)storage_alloc(sizeof(array_tuple_number_t_number_t) * (x34)._1);
    for(int x147 = 0; x147 < x40->length; x147++){
      tuple_index_t_index_t i4 = (tuple_index_t_index_t){._1=x147, ._2=0};
      array_tuple_number_t_number_t x35 = (x33->arr[(i4)._1]);
      tuple_index_t_index_t x36 = (tuple_index_t_index_t){._1=(x35)->length, ._2=0};
      array_tuple_number_t_number_t x39 = (array_tuple_number_t_number_t)storage_alloc(sizeof(int) * 2);x39->length=(x36)._1;x39->arr = (tuple_number_t_number_t*)storage_alloc(sizeof(tuple_number_t_number_t) * (x36)._1);
      for(int x149 = 0; x149 < x39->length; x149++){
        tuple_index_t_index_t i00 = (tuple_index_t_index_t){._1=x149, ._2=0};
        tuple_number_t_number_t x37 = (x35->arr[(i00)._1]);
        tuple_number_t_number_t x38 = (tuple_number_t_number_t){._1=log((x37)._1), ._2=((x37)._2) / ((x37)._1)};
        x39->arr[x149] = x38;
        
      }
      x40->arr[x147] = x39;
      
    }
    tuple_index_t_index_t x50 = (tuple_index_t_index_t){._1=(x10)->length, ._2=0};
    tuple_index_t_index_t x290 = (tuple_index_t_index_t){._1=0, ._2=0};
    array_tuple_number_t_index_t x51 = (x2->arr[(x290)._1]);
    tuple_index_t_index_t x52 = (tuple_index_t_index_t){._1=(x51)->length, ._2=0};
    tuple_index_t_index_t x53 = (tuple_index_t_index_t){._1=(x2)->length, ._2=0};
    tuple_index_t_index_t x291 = (tuple_index_t_index_t){._1=0, ._2=0};
    array_tuple_number_t_index_t x54 = (x2->arr[(x291)._1]);
    tuple_index_t_index_t x55 = (tuple_index_t_index_t){._1=(x54)->length, ._2=0};
    array_array_tuple_number_t_index_t x59 = (array_array_tuple_number_t_index_t)storage_alloc(sizeof(int) * 2);x59->length=(x55)._1;x59->arr = (array_tuple_number_t_index_t*)storage_alloc(sizeof(array_tuple_number_t_index_t) * (x55)._1);
    for(int x171 = 0; x171 < x59->length; x171++){
      tuple_index_t_index_t i5 = (tuple_index_t_index_t){._1=x171, ._2=0};
      array_tuple_number_t_index_t x58 = (array_tuple_number_t_index_t)storage_alloc(sizeof(int) * 2);x58->length=(x53)._1;x58->arr = (tuple_number_t_index_t*)storage_alloc(sizeof(tuple_number_t_index_t) * (x53)._1);
      for(int x185 = 0; x185 < x58->length; x185++){
        tuple_index_t_index_t j7 = (tuple_index_t_index_t){._1=x185, ._2=0};
        array_tuple_number_t_index_t x56 = (x2->arr[(j7)._1]);
        tuple_number_t_index_t x57 = (x56->arr[(i5)._1]);
        x58->arr[x185] = x57;
        
      }
      x59->arr[x171] = x58;
      
    }
    array_array_tuple_number_t_number_t x72 = (array_array_tuple_number_t_number_t)storage_alloc(sizeof(int) * 2);x72->length=(x50)._1;x72->arr = (array_tuple_number_t_number_t*)storage_alloc(sizeof(array_tuple_number_t_number_t) * (x50)._1);
    for(int x187 = 0; x187 < x72->length; x187++){
      tuple_index_t_index_t r0 = (tuple_index_t_index_t){._1=x187, ._2=0};
      array_tuple_number_t_number_t x71 = (array_tuple_number_t_number_t)storage_alloc(sizeof(int) * 2);x71->length=(x52)._1;x71->arr = (tuple_number_t_number_t*)storage_alloc(sizeof(tuple_number_t_number_t) * (x52)._1);
      for(int x189 = 0; x189 < x71->length; x189++){
        tuple_index_t_index_t c0 = (tuple_index_t_index_t){._1=x189, ._2=0};
        array_tuple_number_t_index_t x60 = (x10->arr[(r0)._1]);
        array_tuple_number_t_index_t x61 = (x59->arr[(c0)._1]);
        tuple_index_t_index_t x62 = (tuple_index_t_index_t){._1=(x60)->length, ._2=0};
        array_tuple_number_t_number_t x66 = (array_tuple_number_t_number_t)storage_alloc(sizeof(int) * 2);x66->length=(x62)._1;x66->arr = (tuple_number_t_number_t*)storage_alloc(sizeof(tuple_number_t_number_t) * (x62)._1);
        for(int x199 = 0; x199 < x66->length; x199++){
          tuple_index_t_index_t i6 = (tuple_index_t_index_t){._1=x199, ._2=0};
          tuple_number_t_index_t x63 = (x60->arr[(i6)._1]);
          tuple_number_t_index_t x64 = (x61->arr[(i6)._1]);
          number_t x222 = (x63)._1;
          index_t x220 = (x63)._2;
          number_t x223 = (x64)._1;
          index_t x221 = (x64)._2;
          tuple_number_t_number_t x65 = (tuple_number_t_number_t){._1=(x222) * (x223), ._2=((x220) * (x223)) + ((x222) * (x221))};
          x66->arr[x199] = x65;
          
        }
        tuple_index_t_index_t x67 = (tuple_index_t_index_t){._1=(x66)->length, ._2=0};
        tuple_number_t_number_t x292 = (tuple_number_t_number_t){._1=0, ._2=0};
        tuple_number_t_number_t x70 = x292;
        for (int x205 = 0; x205 < (x67)._1; x205++) {
          tuple_number_t_number_t x204 = x70;
          tuple_index_t_index_t idx0 = (tuple_index_t_index_t){._1=x205, ._2=0};
          tuple_number_t_number_t x68 = (x66->arr[(idx0)._1]);
          number_t x258 = (x204)._1;
          number_t x256 = (x204)._2;
          number_t x259 = (x68)._1;
          number_t x257 = (x68)._2;
          tuple_number_t_number_t x69 = (tuple_number_t_number_t){._1=(x258) + (x259), ._2=(x256) + (x257)};
          x204 = x69;
          x70 = x204;
        }
        
        x71->arr[x189] = x70;
        
      }
      x72->arr[x187] = x71;
      
    }
    tuple_index_t_index_t x73 = (tuple_index_t_index_t){._1=(x123)->length, ._2=0};
    array_array_tuple_number_t_number_t x81 = (array_array_tuple_number_t_number_t)storage_alloc(sizeof(int) * 2);x81->length=(x73)._1;x81->arr = (array_tuple_number_t_number_t*)storage_alloc(sizeof(array_tuple_number_t_number_t) * (x73)._1);
    for(int x191 = 0; x191 < x81->length; x191++){
      tuple_index_t_index_t i7 = (tuple_index_t_index_t){._1=x191, ._2=0};
      array_tuple_number_t_index_t x74 = (x123->arr[(i7)._1]);
      array_tuple_number_t_number_t x75 = (x72->arr[(i7)._1]);
      tuple_index_t_index_t x76 = (tuple_index_t_index_t){._1=(x74)->length, ._2=0};
      array_tuple_number_t_number_t x80 = (array_tuple_number_t_number_t)storage_alloc(sizeof(int) * 2);x80->length=(x76)._1;x80->arr = (tuple_number_t_number_t*)storage_alloc(sizeof(tuple_number_t_number_t) * (x76)._1);
      for(int x201 = 0; x201 < x80->length; x201++){
        tuple_index_t_index_t i01 = (tuple_index_t_index_t){._1=x201, ._2=0};
        tuple_number_t_index_t x77 = (x74->arr[(i01)._1]);
        tuple_number_t_number_t x78 = (x75->arr[(i01)._1]);
        number_t x246 = (x77)._1;
        index_t x244 = (x77)._2;
        number_t x247 = (x78)._1;
        number_t x245 = (x78)._2;
        tuple_number_t_number_t x79 = (tuple_number_t_number_t){._1=(x246) / (x247), ._2=(((x244) * (x247)) - ((x246) * (x245))) / ((x247) * (x247))};
        x80->arr[x201] = x79;
        
      }
      x81->arr[x191] = x80;
      
    }
    tuple_index_t_index_t x41 = (tuple_index_t_index_t){._1=(x40)->length, ._2=0};
    array_array_tuple_number_t_number_t x49 = (array_array_tuple_number_t_number_t)storage_alloc(sizeof(int) * 2);x49->length=(x41)._1;x49->arr = (array_tuple_number_t_number_t*)storage_alloc(sizeof(array_tuple_number_t_number_t) * (x41)._1);
    for(int x193 = 0; x193 < x49->length; x193++){
      tuple_index_t_index_t i8 = (tuple_index_t_index_t){._1=x193, ._2=0};
      array_tuple_number_t_number_t x42 = (x40->arr[(i8)._1]);
      array_tuple_number_t_number_t x43 = (x81->arr[(i8)._1]);
      tuple_index_t_index_t x44 = (tuple_index_t_index_t){._1=(x42)->length, ._2=0};
      array_tuple_number_t_number_t x48 = (array_tuple_number_t_number_t)storage_alloc(sizeof(int) * 2);x48->length=(x44)._1;x48->arr = (tuple_number_t_number_t*)storage_alloc(sizeof(tuple_number_t_number_t) * (x44)._1);
      for(int x211 = 0; x211 < x48->length; x211++){
        tuple_index_t_index_t i02 = (tuple_index_t_index_t){._1=x211, ._2=0};
        tuple_number_t_number_t x45 = (x42->arr[(i02)._1]);
        tuple_number_t_number_t x46 = (x43->arr[(i02)._1]);
        number_t x282 = (x45)._1;
        number_t x280 = (x45)._2;
        number_t x283 = (x46)._1;
        number_t x281 = (x46)._2;
        tuple_number_t_number_t x47 = (tuple_number_t_number_t){._1=(x282) + (x283), ._2=(x280) + (x281)};
        x48->arr[x211] = x47;
        
      }
      x49->arr[x193] = x48;
      
    }
    tuple_index_t_index_t x89 = (tuple_index_t_index_t){._1=(x49)->length, ._2=0};
    tuple_number_t_number_t x294 = (tuple_number_t_number_t){._1=0, ._2=0};
    tuple_number_t_number_t x90 = x294;
    for (int x197 = 0; x197 < (x89)._1; x197++) {
      tuple_number_t_number_t x196 = x90;
      tuple_index_t_index_t idx1 = (tuple_index_t_index_t){._1=x197, ._2=0};
      array_tuple_number_t_number_t x83 = (x49->arr[(idx1)._1]);
      tuple_index_t_index_t x84 = (tuple_index_t_index_t){._1=(x83)->length, ._2=0};
      tuple_number_t_number_t x293 = (tuple_number_t_number_t){._1=0, ._2=0};
      tuple_number_t_number_t x87 = x293;
      for (int x209 = 0; x209 < (x84)._1; x209++) {
        tuple_number_t_number_t x208 = x87;
        tuple_index_t_index_t idx00 = (tuple_index_t_index_t){._1=x209, ._2=0};
        tuple_number_t_number_t x85 = (x83->arr[(idx00)._1]);
        number_t x270 = (x208)._1;
        number_t x268 = (x208)._2;
        number_t x271 = (x85)._1;
        number_t x269 = (x85)._2;
        tuple_number_t_number_t x86 = (tuple_number_t_number_t){._1=(x270) + (x271), ._2=(x268) + (x269)};
        x208 = x86;
        x87 = x208;
      }
      
      number_t x234 = (x196)._1;
      number_t x232 = (x196)._2;
      number_t x235 = (x87)._1;
      number_t x233 = (x87)._2;
      tuple_number_t_number_t x88 = (tuple_number_t_number_t){._1=(x234) + (x235), ._2=(x232) + (x233)};
      x196 = x88;
      x90 = x196;
    }
    
    x125->arr[ii] = x90;
    
  }
  index_t x126 = (x125)->length;
  array_number_t x129 = (array_number_t)storage_alloc(sizeof(int) * 2);x129->length=x126;x129->arr = (number_t*)storage_alloc(sizeof(number_t) * x126);
  for(int i9 = 0; i9 < x129->length; i9++){
    tuple_number_t_number_t x127 = (x125->arr[i9]);
    number_t x128 = (x127)._2;
    x129->arr[i9] = x128;
    
  }
  return x129;
}
