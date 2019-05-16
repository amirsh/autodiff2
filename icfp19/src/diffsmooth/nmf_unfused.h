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
  index_t x155 = (u)->length;
  array_tuple_number_t_number_t x450 = (array_tuple_number_t_number_t)storage_alloc(sizeof(int) * 2);x450->length=x155;x450->arr = (tuple_number_t_number_t*)storage_alloc(sizeof(tuple_number_t_number_t) * x155);
  for(int ii = 0; ii < x450->length; ii++){
    index_t x156 = (u)->length;
    array_index_t x159 = (array_index_t)storage_alloc(sizeof(int) * 2);x159->length=x156;x159->arr = (index_t*)storage_alloc(sizeof(index_t) * x156);
    for(int j = 0; j < x159->length; j++){
      index_t x157 = (ii) == (j);
      index_t x158;
      if (x157) {
        x158 = 1;
      } else {
        x158 = 0;
      }
      x159->arr[j] = x158;
      
    }
    index_t x160 = (u)->length;
    array_tuple_number_t_index_t x164 = (array_tuple_number_t_index_t)storage_alloc(sizeof(int) * 2);x164->length=x160;x164->arr = (tuple_number_t_index_t*)storage_alloc(sizeof(tuple_number_t_index_t) * x160);
    for(int j = 0; j < x164->length; j++){
      number_t x161 = (u->arr[j]);
      index_t x162 = (x159->arr[j]);
      tuple_number_t_index_t x163 = (tuple_number_t_index_t){._1=x161, ._2=x162};
      x164->arr[j] = x163;
      
    }
    index_t x427 = (v)->length;
    array_index_t x428 = (array_index_t)storage_alloc(sizeof(int) * 2);x428->length=x427;x428->arr = (index_t*)storage_alloc(sizeof(index_t) * x427);
    for(int j = 0; j < x428->length; j++){
      x428->arr[j] = 0;
      
    }
    index_t x429 = (v)->length;
    array_tuple_number_t_index_t x433 = (array_tuple_number_t_index_t)storage_alloc(sizeof(int) * 2);x433->length=x429;x433->arr = (tuple_number_t_index_t*)storage_alloc(sizeof(tuple_number_t_index_t) * x429);
    for(int j = 0; j < x433->length; j++){
      number_t x430 = (v->arr[j]);
      index_t x431 = (x428->arr[j]);
      tuple_number_t_index_t x432 = (tuple_number_t_index_t){._1=x430, ._2=x431};
      x433->arr[j] = x432;
      
    }
    index_t x435 = (AA)->length;
    array_number_t x436 = (AA->arr[0]);
    index_t x437 = (x436)->length;
    array_array_index_t x439 = (array_array_index_t)storage_alloc(sizeof(int) * 2);x439->length=x435;x439->arr = (array_index_t*)storage_alloc(sizeof(array_index_t) * x435);
    for(int i = 0; i < x439->length; i++){
      array_index_t x438 = (array_index_t)storage_alloc(sizeof(int) * 2);x438->length=x437;x438->arr = (index_t*)storage_alloc(sizeof(index_t) * x437);
      for(int j = 0; j < x438->length; j++){
        x438->arr[j] = 0;
        
      }
      x439->arr[i] = x438;
      
    }
    index_t x440 = (AA)->length;
    array_array_tuple_number_t_index_t x448 = (array_array_tuple_number_t_index_t)storage_alloc(sizeof(int) * 2);x448->length=x440;x448->arr = (array_tuple_number_t_index_t*)storage_alloc(sizeof(array_tuple_number_t_index_t) * x440);
    for(int i = 0; i < x448->length; i++){
      array_number_t x441 = (AA->arr[i]);
      array_index_t x442 = (x439->arr[i]);
      index_t x443 = (x441)->length;
      array_tuple_number_t_index_t x447 = (array_tuple_number_t_index_t)storage_alloc(sizeof(int) * 2);x447->length=x443;x447->arr = (tuple_number_t_index_t*)storage_alloc(sizeof(tuple_number_t_index_t) * x443);
      for(int j = 0; j < x447->length; j++){
        number_t x444 = (x441->arr[j]);
        index_t x445 = (x442->arr[j]);
        tuple_number_t_index_t x446 = (tuple_number_t_index_t){._1=x444, ._2=x445};
        x447->arr[j] = x446;
        
      }
      x448->arr[i] = x447;
      
    }
    tuple_index_t_index_t x165 = (tuple_index_t_index_t){._1=1, ._2=0};
    index_t x166 = (x165)._1;
    array_array_tuple_number_t_index_t x167 = (array_array_tuple_number_t_index_t)storage_alloc(sizeof(int) * 2);x167->length=x166;x167->arr = (array_tuple_number_t_index_t*)storage_alloc(sizeof(array_tuple_number_t_index_t) * x166);
    for(int x2 = 0; x2 < x167->length; x2++){
      x167->arr[x2] = x164;
      
    }
    tuple_index_t_index_t x168 = (tuple_index_t_index_t){._1=1, ._2=0};
    index_t x169 = (x168)._1;
    array_array_tuple_number_t_index_t x170 = (array_array_tuple_number_t_index_t)storage_alloc(sizeof(int) * 2);x170->length=x169;x170->arr = (array_tuple_number_t_index_t*)storage_alloc(sizeof(array_tuple_number_t_index_t) * x169);
    for(int x4 = 0; x4 < x170->length; x4++){
      x170->arr[x4] = x433;
      
    }
    index_t x171 = (x170)->length;
    tuple_index_t_index_t x172 = (tuple_index_t_index_t){._1=x171, ._2=0};
    tuple_index_t_index_t x173 = (tuple_index_t_index_t){._1=0, ._2=0};
    index_t x174 = (x173)._1;
    array_tuple_number_t_index_t x175 = (x170->arr[x174]);
    index_t x176 = (x175)->length;
    tuple_index_t_index_t x177 = (tuple_index_t_index_t){._1=x176, ._2=0};
    index_t x178 = (x177)._1;
    array_array_tuple_number_t_index_t x187 = (array_array_tuple_number_t_index_t)storage_alloc(sizeof(int) * 2);x187->length=x178;x187->arr = (array_tuple_number_t_index_t*)storage_alloc(sizeof(array_tuple_number_t_index_t) * x178);
    for(int x6 = 0; x6 < x187->length; x6++){
      tuple_index_t_index_t x179 = (tuple_index_t_index_t){._1=x6, ._2=0};
      index_t x180 = (x172)._1;
      array_tuple_number_t_index_t x186 = (array_tuple_number_t_index_t)storage_alloc(sizeof(int) * 2);x186->length=x180;x186->arr = (tuple_number_t_index_t*)storage_alloc(sizeof(tuple_number_t_index_t) * x180);
      for(int x8 = 0; x8 < x186->length; x8++){
        tuple_index_t_index_t x181 = (tuple_index_t_index_t){._1=x8, ._2=0};
        index_t x182 = (x181)._1;
        array_tuple_number_t_index_t x183 = (x170->arr[x182]);
        index_t x184 = (x179)._1;
        tuple_number_t_index_t x185 = (x183->arr[x184]);
        x186->arr[x8] = x185;
        
      }
      x187->arr[x6] = x186;
      
    }
    index_t x188 = (x187)->length;
    tuple_index_t_index_t x189 = (tuple_index_t_index_t){._1=x188, ._2=0};
    tuple_index_t_index_t x190 = (tuple_index_t_index_t){._1=0, ._2=0};
    index_t x191 = (x190)._1;
    array_tuple_number_t_index_t x192 = (x167->arr[x191]);
    index_t x193 = (x192)->length;
    tuple_index_t_index_t x194 = (tuple_index_t_index_t){._1=x193, ._2=0};
    index_t x195 = (x167)->length;
    tuple_index_t_index_t x196 = (tuple_index_t_index_t){._1=x195, ._2=0};
    tuple_index_t_index_t x197 = (tuple_index_t_index_t){._1=0, ._2=0};
    index_t x198 = (x197)._1;
    array_tuple_number_t_index_t x199 = (x167->arr[x198]);
    index_t x200 = (x199)->length;
    tuple_index_t_index_t x201 = (tuple_index_t_index_t){._1=x200, ._2=0};
    index_t x202 = (x201)._1;
    array_array_tuple_number_t_index_t x211 = (array_array_tuple_number_t_index_t)storage_alloc(sizeof(int) * 2);x211->length=x202;x211->arr = (array_tuple_number_t_index_t*)storage_alloc(sizeof(array_tuple_number_t_index_t) * x202);
    for(int x30 = 0; x30 < x211->length; x30++){
      tuple_index_t_index_t x203 = (tuple_index_t_index_t){._1=x30, ._2=0};
      index_t x204 = (x196)._1;
      array_tuple_number_t_index_t x210 = (array_tuple_number_t_index_t)storage_alloc(sizeof(int) * 2);x210->length=x204;x210->arr = (tuple_number_t_index_t*)storage_alloc(sizeof(tuple_number_t_index_t) * x204);
      for(int x36 = 0; x36 < x210->length; x36++){
        tuple_index_t_index_t x205 = (tuple_index_t_index_t){._1=x36, ._2=0};
        index_t x206 = (x205)._1;
        array_tuple_number_t_index_t x207 = (x167->arr[x206]);
        index_t x208 = (x203)._1;
        tuple_number_t_index_t x209 = (x207->arr[x208]);
        x210->arr[x36] = x209;
        
      }
      x211->arr[x30] = x210;
      
    }
    index_t x212 = (x189)._1;
    array_array_tuple_number_t_number_t x254 = (array_array_tuple_number_t_number_t)storage_alloc(sizeof(int) * 2);x254->length=x212;x254->arr = (array_tuple_number_t_number_t*)storage_alloc(sizeof(array_tuple_number_t_number_t) * x212);
    for(int x34 = 0; x34 < x254->length; x34++){
      tuple_index_t_index_t x213 = (tuple_index_t_index_t){._1=x34, ._2=0};
      index_t x214 = (x194)._1;
      array_tuple_number_t_number_t x253 = (array_tuple_number_t_number_t)storage_alloc(sizeof(int) * 2);x253->length=x214;x253->arr = (tuple_number_t_number_t*)storage_alloc(sizeof(tuple_number_t_number_t) * x214);
      for(int x58 = 0; x58 < x253->length; x58++){
        tuple_index_t_index_t x215 = (tuple_index_t_index_t){._1=x58, ._2=0};
        index_t x216 = (x213)._1;
        array_tuple_number_t_index_t x217 = (x187->arr[x216]);
        index_t x218 = (x215)._1;
        array_tuple_number_t_index_t x219 = (x211->arr[x218]);
        index_t x220 = (x217)->length;
        tuple_index_t_index_t x221 = (tuple_index_t_index_t){._1=x220, ._2=0};
        index_t x222 = (x221)._1;
        array_tuple_number_t_number_t x237 = (array_tuple_number_t_number_t)storage_alloc(sizeof(int) * 2);x237->length=x222;x237->arr = (tuple_number_t_number_t*)storage_alloc(sizeof(tuple_number_t_number_t) * x222);
        for(int x68 = 0; x68 < x237->length; x68++){
          tuple_index_t_index_t x223 = (tuple_index_t_index_t){._1=x68, ._2=0};
          index_t x224 = (x223)._1;
          tuple_number_t_index_t x225 = (x217->arr[x224]);
          index_t x226 = (x223)._1;
          tuple_number_t_index_t x227 = (x219->arr[x226]);
          number_t x228 = (x225)._1;
          index_t x229 = (x225)._2;
          number_t x230 = (x227)._1;
          index_t x231 = (x227)._2;
          number_t x232 = (x228) * (x230);
          number_t x233 = (x229) * (x230);
          number_t x234 = (x228) * (x231);
          number_t x235 = (x233) + (x234);
          tuple_number_t_number_t x236 = (tuple_number_t_number_t){._1=x232, ._2=x235};
          x237->arr[x68] = x236;
          
        }
        index_t x238 = (x237)->length;
        tuple_index_t_index_t x239 = (tuple_index_t_index_t){._1=x238, ._2=0};
        tuple_number_t_number_t x250 = (tuple_number_t_number_t){._1=0, ._2=0};
        index_t x251 = (x239)._1;
        tuple_number_t_number_t x252 = x250;
        for (int x78 = 0; x78 < x251; x78++) {
          tuple_number_t_number_t x77 = x252;
          tuple_index_t_index_t x240 = (tuple_index_t_index_t){._1=x78, ._2=0};
          index_t x241 = (x240)._1;
          tuple_number_t_number_t x242 = (x237->arr[x241]);
          number_t x243 = (x77)._1;
          number_t x244 = (x77)._2;
          number_t x245 = (x242)._1;
          number_t x246 = (x242)._2;
          number_t x247 = (x243) + (x245);
          number_t x248 = (x244) + (x246);
          tuple_number_t_number_t x249 = (tuple_number_t_number_t){._1=x247, ._2=x248};
          x77 = x249;
          x252 = x77;
        }
        
        x253->arr[x58] = x252;
        
      }
      x254->arr[x34] = x253;
      
    }
    index_t x255 = (x254)->length;
    tuple_index_t_index_t x256 = (tuple_index_t_index_t){._1=x255, ._2=0};
    index_t x257 = (x256)._1;
    array_array_tuple_number_t_number_t x274 = (array_array_tuple_number_t_number_t)storage_alloc(sizeof(int) * 2);x274->length=x257;x274->arr = (array_tuple_number_t_number_t*)storage_alloc(sizeof(array_tuple_number_t_number_t) * x257);
    for(int x56 = 0; x56 < x274->length; x56++){
      tuple_index_t_index_t x258 = (tuple_index_t_index_t){._1=x56, ._2=0};
      index_t x259 = (x258)._1;
      array_tuple_number_t_number_t x260 = (x254->arr[x259]);
      index_t x261 = (x260)->length;
      tuple_index_t_index_t x262 = (tuple_index_t_index_t){._1=x261, ._2=0};
      index_t x263 = (x262)._1;
      array_tuple_number_t_number_t x273 = (array_tuple_number_t_number_t)storage_alloc(sizeof(int) * 2);x273->length=x263;x273->arr = (tuple_number_t_number_t*)storage_alloc(sizeof(tuple_number_t_number_t) * x263);
      for(int x64 = 0; x64 < x273->length; x64++){
        tuple_index_t_index_t x264 = (tuple_index_t_index_t){._1=x64, ._2=0};
        index_t x265 = (x264)._1;
        tuple_number_t_number_t x266 = (x260->arr[x265]);
        number_t x267 = (x266)._1;
        number_t x268 = log(x267);
        number_t x269 = (x266)._2;
        number_t x270 = (x266)._1;
        number_t x271 = (x269) / (x270);
        tuple_number_t_number_t x272 = (tuple_number_t_number_t){._1=x268, ._2=x271};
        x273->arr[x64] = x272;
        
      }
      x274->arr[x56] = x273;
      
    }
    index_t x300 = (x187)->length;
    tuple_index_t_index_t x301 = (tuple_index_t_index_t){._1=x300, ._2=0};
    tuple_index_t_index_t x302 = (tuple_index_t_index_t){._1=0, ._2=0};
    index_t x303 = (x302)._1;
    array_tuple_number_t_index_t x304 = (x167->arr[x303]);
    index_t x305 = (x304)->length;
    tuple_index_t_index_t x306 = (tuple_index_t_index_t){._1=x305, ._2=0};
    index_t x307 = (x167)->length;
    tuple_index_t_index_t x308 = (tuple_index_t_index_t){._1=x307, ._2=0};
    tuple_index_t_index_t x309 = (tuple_index_t_index_t){._1=0, ._2=0};
    index_t x310 = (x309)._1;
    array_tuple_number_t_index_t x311 = (x167->arr[x310]);
    index_t x312 = (x311)->length;
    tuple_index_t_index_t x313 = (tuple_index_t_index_t){._1=x312, ._2=0};
    index_t x314 = (x313)._1;
    array_array_tuple_number_t_index_t x323 = (array_array_tuple_number_t_index_t)storage_alloc(sizeof(int) * 2);x323->length=x314;x323->arr = (array_tuple_number_t_index_t*)storage_alloc(sizeof(array_tuple_number_t_index_t) * x314);
    for(int x32 = 0; x32 < x323->length; x32++){
      tuple_index_t_index_t x315 = (tuple_index_t_index_t){._1=x32, ._2=0};
      index_t x316 = (x308)._1;
      array_tuple_number_t_index_t x322 = (array_tuple_number_t_index_t)storage_alloc(sizeof(int) * 2);x322->length=x316;x322->arr = (tuple_number_t_index_t*)storage_alloc(sizeof(tuple_number_t_index_t) * x316);
      for(int x40 = 0; x40 < x322->length; x40++){
        tuple_index_t_index_t x317 = (tuple_index_t_index_t){._1=x40, ._2=0};
        index_t x318 = (x317)._1;
        array_tuple_number_t_index_t x319 = (x167->arr[x318]);
        index_t x320 = (x315)._1;
        tuple_number_t_index_t x321 = (x319->arr[x320]);
        x322->arr[x40] = x321;
        
      }
      x323->arr[x32] = x322;
      
    }
    index_t x324 = (x301)._1;
    array_array_tuple_number_t_number_t x366 = (array_array_tuple_number_t_number_t)storage_alloc(sizeof(int) * 2);x366->length=x324;x366->arr = (array_tuple_number_t_number_t*)storage_alloc(sizeof(array_tuple_number_t_number_t) * x324);
    for(int x38 = 0; x38 < x366->length; x38++){
      tuple_index_t_index_t x325 = (tuple_index_t_index_t){._1=x38, ._2=0};
      index_t x326 = (x306)._1;
      array_tuple_number_t_number_t x365 = (array_tuple_number_t_number_t)storage_alloc(sizeof(int) * 2);x365->length=x326;x365->arr = (tuple_number_t_number_t*)storage_alloc(sizeof(tuple_number_t_number_t) * x326);
      for(int x60 = 0; x60 < x365->length; x60++){
        tuple_index_t_index_t x327 = (tuple_index_t_index_t){._1=x60, ._2=0};
        index_t x328 = (x325)._1;
        array_tuple_number_t_index_t x329 = (x187->arr[x328]);
        index_t x330 = (x327)._1;
        array_tuple_number_t_index_t x331 = (x323->arr[x330]);
        index_t x332 = (x329)->length;
        tuple_index_t_index_t x333 = (tuple_index_t_index_t){._1=x332, ._2=0};
        index_t x334 = (x333)._1;
        array_tuple_number_t_number_t x349 = (array_tuple_number_t_number_t)storage_alloc(sizeof(int) * 2);x349->length=x334;x349->arr = (tuple_number_t_number_t*)storage_alloc(sizeof(tuple_number_t_number_t) * x334);
        for(int x70 = 0; x70 < x349->length; x70++){
          tuple_index_t_index_t x335 = (tuple_index_t_index_t){._1=x70, ._2=0};
          index_t x336 = (x335)._1;
          tuple_number_t_index_t x337 = (x329->arr[x336]);
          index_t x338 = (x335)._1;
          tuple_number_t_index_t x339 = (x331->arr[x338]);
          number_t x340 = (x337)._1;
          index_t x341 = (x337)._2;
          number_t x342 = (x339)._1;
          index_t x343 = (x339)._2;
          number_t x344 = (x340) * (x342);
          number_t x345 = (x341) * (x342);
          number_t x346 = (x340) * (x343);
          number_t x347 = (x345) + (x346);
          tuple_number_t_number_t x348 = (tuple_number_t_number_t){._1=x344, ._2=x347};
          x349->arr[x70] = x348;
          
        }
        index_t x350 = (x349)->length;
        tuple_index_t_index_t x351 = (tuple_index_t_index_t){._1=x350, ._2=0};
        tuple_number_t_number_t x362 = (tuple_number_t_number_t){._1=0, ._2=0};
        index_t x363 = (x351)._1;
        tuple_number_t_number_t x364 = x362;
        for (int x82 = 0; x82 < x363; x82++) {
          tuple_number_t_number_t x81 = x364;
          tuple_index_t_index_t x352 = (tuple_index_t_index_t){._1=x82, ._2=0};
          index_t x353 = (x352)._1;
          tuple_number_t_number_t x354 = (x349->arr[x353]);
          number_t x355 = (x81)._1;
          number_t x356 = (x81)._2;
          number_t x357 = (x354)._1;
          number_t x358 = (x354)._2;
          number_t x359 = (x355) + (x357);
          number_t x360 = (x356) + (x358);
          tuple_number_t_number_t x361 = (tuple_number_t_number_t){._1=x359, ._2=x360};
          x81 = x361;
          x364 = x81;
        }
        
        x365->arr[x60] = x364;
        
      }
      x366->arr[x38] = x365;
      
    }
    index_t x367 = (x448)->length;
    tuple_index_t_index_t x368 = (tuple_index_t_index_t){._1=x367, ._2=0};
    index_t x369 = (x368)._1;
    array_array_tuple_number_t_number_t x395 = (array_array_tuple_number_t_number_t)storage_alloc(sizeof(int) * 2);x395->length=x369;x395->arr = (array_tuple_number_t_number_t*)storage_alloc(sizeof(array_tuple_number_t_number_t) * x369);
    for(int x42 = 0; x42 < x395->length; x42++){
      tuple_index_t_index_t x370 = (tuple_index_t_index_t){._1=x42, ._2=0};
      index_t x371 = (x370)._1;
      array_tuple_number_t_index_t x372 = (x448->arr[x371]);
      index_t x373 = (x370)._1;
      array_tuple_number_t_number_t x374 = (x366->arr[x373]);
      index_t x375 = (x372)->length;
      tuple_index_t_index_t x376 = (tuple_index_t_index_t){._1=x375, ._2=0};
      index_t x377 = (x376)._1;
      array_tuple_number_t_number_t x394 = (array_tuple_number_t_number_t)storage_alloc(sizeof(int) * 2);x394->length=x377;x394->arr = (tuple_number_t_number_t*)storage_alloc(sizeof(tuple_number_t_number_t) * x377);
      for(int x66 = 0; x66 < x394->length; x66++){
        tuple_index_t_index_t x378 = (tuple_index_t_index_t){._1=x66, ._2=0};
        index_t x379 = (x378)._1;
        tuple_number_t_index_t x380 = (x372->arr[x379]);
        index_t x381 = (x378)._1;
        tuple_number_t_number_t x382 = (x374->arr[x381]);
        number_t x383 = (x380)._1;
        index_t x384 = (x380)._2;
        number_t x385 = (x382)._1;
        number_t x386 = (x382)._2;
        number_t x387 = (x383) / (x385);
        number_t x388 = (x384) * (x385);
        number_t x389 = (x383) * (x386);
        number_t x390 = (x388) - (x389);
        number_t x391 = (x385) * (x385);
        number_t x392 = (x390) / (x391);
        tuple_number_t_number_t x393 = (tuple_number_t_number_t){._1=x387, ._2=x392};
        x394->arr[x66] = x393;
        
      }
      x395->arr[x42] = x394;
      
    }
    index_t x275 = (x274)->length;
    tuple_index_t_index_t x276 = (tuple_index_t_index_t){._1=x275, ._2=0};
    index_t x277 = (x276)._1;
    array_array_tuple_number_t_number_t x299 = (array_array_tuple_number_t_number_t)storage_alloc(sizeof(int) * 2);x299->length=x277;x299->arr = (array_tuple_number_t_number_t*)storage_alloc(sizeof(array_tuple_number_t_number_t) * x277);
    for(int x62 = 0; x62 < x299->length; x62++){
      tuple_index_t_index_t x278 = (tuple_index_t_index_t){._1=x62, ._2=0};
      index_t x279 = (x278)._1;
      array_tuple_number_t_number_t x280 = (x274->arr[x279]);
      index_t x281 = (x278)._1;
      array_tuple_number_t_number_t x282 = (x395->arr[x281]);
      index_t x283 = (x280)->length;
      tuple_index_t_index_t x284 = (tuple_index_t_index_t){._1=x283, ._2=0};
      index_t x285 = (x284)._1;
      array_tuple_number_t_number_t x298 = (array_tuple_number_t_number_t)storage_alloc(sizeof(int) * 2);x298->length=x285;x298->arr = (tuple_number_t_number_t*)storage_alloc(sizeof(tuple_number_t_number_t) * x285);
      for(int x72 = 0; x72 < x298->length; x72++){
        tuple_index_t_index_t x286 = (tuple_index_t_index_t){._1=x72, ._2=0};
        index_t x287 = (x286)._1;
        tuple_number_t_number_t x288 = (x280->arr[x287]);
        index_t x289 = (x286)._1;
        tuple_number_t_number_t x290 = (x282->arr[x289]);
        number_t x291 = (x288)._1;
        number_t x292 = (x288)._2;
        number_t x293 = (x290)._1;
        number_t x294 = (x290)._2;
        number_t x295 = (x291) + (x293);
        number_t x296 = (x292) + (x294);
        tuple_number_t_number_t x297 = (tuple_number_t_number_t){._1=x295, ._2=x296};
        x298->arr[x72] = x297;
        
      }
      x299->arr[x62] = x298;
      
    }
    tuple_number_t_number_t x422 = (tuple_number_t_number_t){._1=0, ._2=0};
    index_t x423 = (x299)->length;
    tuple_index_t_index_t x424 = (tuple_index_t_index_t){._1=x423, ._2=0};
    index_t x425 = (x424)._1;
    tuple_number_t_number_t x426 = x422;
    for (int x12 = 0; x12 < x425; x12++) {
      tuple_number_t_number_t x11 = x426;
      tuple_index_t_index_t x397 = (tuple_index_t_index_t){._1=x12, ._2=0};
      index_t x398 = (x397)._1;
      array_tuple_number_t_number_t x399 = (x299->arr[x398]);
      index_t x400 = (x399)->length;
      tuple_index_t_index_t x401 = (tuple_index_t_index_t){._1=x400, ._2=0};
      tuple_number_t_number_t x412 = (tuple_number_t_number_t){._1=0, ._2=0};
      index_t x413 = (x401)._1;
      tuple_number_t_number_t x414 = x412;
      for (int x28 = 0; x28 < x413; x28++) {
        tuple_number_t_number_t x27 = x414;
        tuple_index_t_index_t x402 = (tuple_index_t_index_t){._1=x28, ._2=0};
        index_t x403 = (x402)._1;
        tuple_number_t_number_t x404 = (x399->arr[x403]);
        number_t x405 = (x27)._1;
        number_t x406 = (x27)._2;
        number_t x407 = (x404)._1;
        number_t x408 = (x404)._2;
        number_t x409 = (x405) + (x407);
        number_t x410 = (x406) + (x408);
        tuple_number_t_number_t x411 = (tuple_number_t_number_t){._1=x409, ._2=x410};
        x27 = x411;
        x414 = x27;
      }
      
      number_t x415 = (x11)._1;
      number_t x416 = (x11)._2;
      number_t x417 = (x414)._1;
      number_t x418 = (x414)._2;
      number_t x419 = (x415) + (x417);
      number_t x420 = (x416) + (x418);
      tuple_number_t_number_t x421 = (tuple_number_t_number_t){._1=x419, ._2=x420};
      x11 = x421;
      x426 = x11;
    }
    
    x450->arr[ii] = x426;
    
  }
  index_t x451 = (x450)->length;
  array_number_t x454 = (array_number_t)storage_alloc(sizeof(int) * 2);x454->length=x451;x454->arr = (number_t*)storage_alloc(sizeof(number_t) * x451);
  for(int i = 0; i < x454->length; i++){
    tuple_number_t_number_t x452 = (x450->arr[i]);
    number_t x453 = (x452)._2;
    x454->arr[i] = x453;
    
  }
  return x454;
}
