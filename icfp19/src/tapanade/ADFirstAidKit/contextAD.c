#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "contextAD.h"

static int dbad_mode, dbad_phase ;
static double dbad_ddeps = 1.e-6 ;
static double dbad_seed = 0.137 ;
static double dbad_currentSeed = 0.0 ;
static double dbad_condensed_val, dbad_condensed_tgt, dbad_condensed_adj ;

double dbad_nextRandom() {
  dbad_currentSeed += dbad_seed ;
  if (dbad_currentSeed>1.0) dbad_currentSeed-=1.0 ;
  /* Return a value in range [1.0 2.0[ */
  return dbad_currentSeed+1.0 ;
}

void context_tgt_init(double epsilon, double seed) {
  dbad_mode = 1 ;
  dbad_ddeps = epsilon ;
  dbad_seed = seed ;
  char* phase = getenv("DBAD_PHASE") ;
  if (phase==NULL) {
    printf("Please set DBAD_PHASE environment variable to 1 (perturbed) or 2 (tangent)\n") ;
    exit(0) ;
  } else if (strcmp(phase,"2")==0) {
    printf("Tangent code,  seed=%7.1e\n", seed) ;
    printf("=============================================\n") ;
    dbad_phase = 2 ;
    dbad_currentSeed = 0.0 ;
  } else if (strcmp(phase,"1")==0) {
    printf("Perturbed run, seed=%7.1e, epsilon=%7.1e\n", seed, epsilon) ;
    printf("=============================================\n") ;
    dbad_phase = 1 ;
    dbad_currentSeed = 0.0 ;
  } else if (strcmp(phase,"99")==0) {
    printf("INTERNAL INTERFACE TESTS, seed=%7.1e, epsilon=%7.1e\n", seed, epsilon) ;
    printf("=============================================\n") ;
    dbad_phase = 99 ;
  } else {
    printf("DBAD_PHASE environment variable must be set to 1 or 2\n") ;
    exit(0) ;
  }
}
/** Version of context_tgt_init called from Fortran */
void context_tgt_init_(double *epsilon, double *seed) {
  context_tgt_init(*epsilon, *seed) ;
}

void context_tgt_initreal8(char* varname, double *indep, double *indepd) {
  *indepd = dbad_nextRandom() ;
  if (dbad_phase==1)
    *indep = (*indep)+dbad_ddeps*(*indepd) ;
  else if (dbad_phase==99)
    printf("initreal8_ of %s: %24.16e //%24.16e\n", varname, *indep, *indepd) ;
}
/** Version of context_tgt_initreal8 called from Fortran */
void context_tgt_initreal8_(char* varname, double *indep, double *indepd) {
  context_tgt_initreal8(varname, indep, indepd) ;
}

void context_tgt_initreal8array(char* varname, double *indep, double *indepd, int length) {
  int i ;
  for (i=0 ; i<length ; ++i) {
    indepd[i] = dbad_nextRandom() ;
  }
  if (dbad_phase==1) {
    for (i=0 ; i<length ; ++i) {
      indep[i] = indep[i]+dbad_ddeps*indepd[i] ;
    }
  } else if (dbad_phase==99) {
    printf("initreal8array_ of %s, length=%i:\n", varname, length) ;
    for (i=0 ; i<length ; ++i)
      printf("    %i:%24.16e //%24.16e",i,indep[i],indepd[i]) ;
    printf("\n") ;
  }
}
/** Version of context_tgt_initreal8array called from Fortran */
void context_tgt_initreal8array_(char* varname, double *indep, double *indepd, int *length) {
  context_tgt_initreal8array(varname, indep, indepd, *length) ;
}

void context_tgt_initreal4(char* varname, float *indep, float *indepd) {
  *indepd = (float)dbad_nextRandom() ;
  if (dbad_phase==1)
    *indep = (*indep)+dbad_ddeps*(*indepd) ;
  else if (dbad_phase==99)
    printf("initreal4_ of %s: %24.16e //%24.16e\n", varname, *indep, *indepd) ;
}
/** Version of context_tgt_initreal4 called from Fortran */
void context_tgt_initreal4_(char* varname, float *indep, float *indepd) {
  context_tgt_initreal4(varname, indep, indepd) ;
}

void context_tgt_initreal4array(char* varname, float *indep, float *indepd, int length) {
  int i ;
  for (i=0 ; i<length ; ++i) {
    indepd[i] = (float)dbad_nextRandom() ;
  }
  if (dbad_phase==1) {
    for (i=0 ; i<length ; ++i) {
      indep[i] = indep[i]+dbad_ddeps*indepd[i] ;
    }
  } else if (dbad_phase==99) {
    printf("initreal4array_ of %s, length=%i:\n", varname, length) ;
    for (i=0 ; i<length ; ++i)
      printf("    %i:%24.16e //%24.16e",i,indep[i],indepd[i]) ;
    printf("\n") ;
  }
}
/** Version of context_tgt_initreal4array called from Fortran */
void context_tgt_initreal4array_(char* varname, float *indep, float *indepd, int *length) {
  context_tgt_initreal4array(varname, indep, indepd, *length) ;
}

void context_tgt_concludestart() {
  dbad_currentSeed= 0.0 ;
  dbad_condensed_val = 0.0 ;
  dbad_condensed_tgt = 0.0 ;
}
/** Version of context_tgt_concludestart called from Fortran */
void context_tgt_concludestart_() {
  context_tgt_concludestart() ;
}

void context_tgt_concludereal8(char* varname, double dep, double depd) {
  double depb = dbad_nextRandom() ;
  dbad_condensed_val += depb*(dep) ;
  if (dbad_phase==2)
    dbad_condensed_tgt += depb*(depd) ;
  else if (dbad_phase==99)
    printf("concludereal8_ of %s %24.16e //%24.16e //%24.16e\n", varname, depb, dep, depd) ;
}
/** Version of context_tgt_concludereal8 called from Fortran */
void context_tgt_concludereal8_(char* varname, double *dep, double *depd) {
  if (dbad_phase==99)
      printf("concludereal8_ of %s: \n", varname);
  context_tgt_concludereal8(varname, *dep, *depd) ;
}

void context_tgt_concludereal8array(char* varname, double *dep, double *depd, int length) {
  int i ;
  double depb ;
  for (i=0 ; i<length ; ++i) {
    depb = dbad_nextRandom() ;
    dbad_condensed_val += depb*dep[i] ;
    if (dbad_phase==2) {
       dbad_condensed_tgt += depb*depd[i] ;
    }
  }
}
/** Version of context_tgt_concludereal8array called from Fortran */
void context_tgt_concludereal8array_(char* varname, double *dep, double *depd, int *length) {
  if (dbad_phase==99)
      printf("concludereal8array_ of %s: \n", varname);
  context_tgt_concludereal8array(varname, dep, depd, *length) ;
}

void context_tgt_concludereal4(char* varname, float dep, float depd) {
  float depb = (float)dbad_nextRandom() ;
  dbad_condensed_val += depb*(dep) ;
  if (dbad_phase==2)
    dbad_condensed_tgt += depb*(depd) ;
  else if (dbad_phase==99)
    printf("concludereal4_ of %s %24.16e //%24.16e //%24.16e\n", varname, depb, dep, depd) ;
}
/** Version of context_tgt_concludereal4 called from Fortran */
void context_tgt_concludereal4_(char* varname, float *dep, float *depd) {
  context_tgt_concludereal4(varname, *dep, *depd) ;
}

void context_tgt_concludereal4array(char* varname, float *dep, float *depd, int length) {
  int i ;
  float depb ;
  for (i=0 ; i<length ; ++i) {
    depb = (float)dbad_nextRandom() ;
    dbad_condensed_val += depb*dep[i] ;
    if (dbad_phase==2) {
       dbad_condensed_tgt += depb*depd[i] ;
    } else if (dbad_phase==99)
       printf("concludereal4array_ of %s: \n", varname);
  }
}
/** Version of context_tgt_concludereal4array called from Fortran */
void context_tgt_concludereal4array_(char* varname, float *dep, float *depd, int *length) {
  context_tgt_concludereal4array(varname, dep, depd, *length) ;
}

void context_tgt_conclude() {
  if (dbad_phase==2) {
    printf("[seed:%7.1e] Condensed result : %24.16e\n", dbad_seed, dbad_condensed_val) ;
    printf("[seed:%7.1e] Condensed tangent: %24.16e\n", dbad_seed, dbad_condensed_tgt) ;
  } else if (dbad_phase==1) {
    printf("[seed:%7.1e] Condensed perturbed result : %24.16e (epsilon:%7.1e)\n",
           dbad_seed, dbad_condensed_val, dbad_ddeps) ;
  }
}
/** Version of context_tgt_conclude called from Fortran */
void context_tgt_conclude_() {
  context_tgt_conclude() ;
}

void context_adj_init(double seed) {
  dbad_mode = 0 ;
  dbad_seed = seed ;
  char* phase = getenv("DBAD_PHASE") ;
  if (phase==NULL) {
    dbad_phase = 0 ;
  } else if (strcmp(phase,"99")==0) {
    dbad_phase = 99 ;
    printf("INTERNAL INTERFACE TESTS, seed=%7.1e\n", seed) ;
  } else {
    dbad_phase = 0 ;
  }
  printf("Adjoint code,  seed=%7.1e\n", seed) ;
  printf("===================================\n") ;
  dbad_currentSeed = 0.0 ;
}
/** Version of context_adj_init called from Fortran */
void context_adj_init_(double *seed) {
  context_adj_init(*seed) ;
}

void context_adj_initreal8(char* varname, double *dep, double *depb) {
  *depb = dbad_nextRandom() ;
  if (dbad_phase==99)
    printf("initreal8_ of %s %24.16e\n", varname, *depb) ;
}
/** Version of context_adj_initreal8 called from Fortran */
void context_adj_initreal8_(char* varname, double *dep, double *depb) {
  if (dbad_phase==99)
    printf("initreal8_ of %s \n", varname) ;
  context_adj_initreal8(varname, dep, depb) ;
}

void context_adj_initreal8array(char* varname, double *dep, double *depb, int length) {
  int i ;
  for (i=0 ; i<length ; ++i) {
    depb[i] = dbad_nextRandom() ;
  }
  if (dbad_phase==99) {
    printf("initreal8array_ length=%i\n", length) ;
    for (i=0 ; i<length ; ++i)
      printf("    of %s %i:%24.16e", varname, i, depb[i]) ;
    printf("\n") ;
  }
}
/** Version of context_adj_initreal8array called from Fortran */
void context_adj_initreal8array_(char* varname, double *dep, double *depb, int *length) {
  if (dbad_phase==99)
    printf("initreal8array_ of %s \n", varname) ;
  context_adj_initreal8array(varname, dep, depb, *length) ;
}

void context_adj_initreal4(char* varname, float *dep, float *depb) {
  *depb = (float)dbad_nextRandom() ;
  if (dbad_phase==99)
    printf("initreal4_ of %s %24.16e\n", varname, *depb) ;
}
/** Version of context_adj_initreal4 called from Fortran */
void context_adj_initreal4_(char* varname, float *dep, float *depb) {
  context_adj_initreal4(varname, dep, depb) ;
}

void context_adj_initreal4array(char* varname, float *dep, float *depb, int length) {
  int i ;
  for (i=0 ; i<length ; ++i) {
    depb[i] = (float)dbad_nextRandom() ;
  }
  if (dbad_phase==99) {
    printf("initreal4array_ length=%i\n", length) ;
    for (i=0 ; i<length ; ++i)
      printf("    of %s %i:%24.16e",varname, i, depb[i]) ;
    printf("\n") ;
  }
}
/** Version of context_adj_initreal4array called from Fortran */
void context_adj_initreal4array_(char* varname, float *dep, float *depb, int *length) {
  context_adj_initreal4array(varname, dep, depb, *length) ;
}

void context_adj_concludestart() {
  dbad_currentSeed= 0.0 ;
  dbad_condensed_adj = 0.0 ;
}
/** Version of context_adj_concludestart called from Fortran */
void context_adj_concludestart_() {
  context_adj_concludestart() ;
}

void context_adj_concludereal8(char* varname, double dep, double depb) {
  double depd = dbad_nextRandom() ;
  dbad_condensed_adj += depd*depb ;
  if (dbad_phase==99)
    printf("concludereal8_ of %s %24.16e //%24.16e\n", varname, depb, depd) ;
}
/** Version of context_adj_concludereal8 called from Fortran */
void context_adj_concludereal8_(char* varname, double *dep, double *depb) {
  if (dbad_phase==99)
    printf("concludereal8_ of %s \n", varname) ;
  context_adj_concludereal8(varname, *dep, *depb) ;
}

void context_adj_concludereal8array(char* varname, double *dep, double *depb, int length) {
  int i ;
  double depd ;
  for (i=0 ; i<length ; ++i) {
    depd = dbad_nextRandom() ;
    dbad_condensed_adj += depd*depb[i] ;
  }
}
/** Version of context_adj_concludereal8array called from Fortran */
void context_adj_concludereal8array_(char* varname, double *dep, double *depb, int *length) {
  if (dbad_phase==99)
    printf("concludereal8array_ of %s \n", varname) ;
  context_adj_concludereal8array(varname, dep, depb, *length) ;
}

void context_adj_concludereal4(char* varname, float dep, float depb) {
  float depd = (float)dbad_nextRandom() ;
  dbad_condensed_adj += depd*depb ;
  if (dbad_phase==99)
    printf("concludereal4_ of %s %24.16e //%24.16e\n", varname, depb, depd) ;
}
/** Version of context_adj_concludereal4 called from Fortran */
void context_adj_concludereal4_(char* varname, float *dep, float *depb) {
  if (dbad_phase==99)
    printf("concludereal4_ of %s \n", varname) ;
  context_adj_concludereal4(varname, *dep, *depb) ;
}

void context_adj_concludereal4array(char* varname, float *dep, float *depb, int length) {
  int i ;
  float depd ;
  for (i=0 ; i<length ; ++i) {
    depd = (float)dbad_nextRandom() ;
    dbad_condensed_adj += depd*depb[i] ;
  }
  if (dbad_phase==99)
    printf("concludereal4array of %s\n", varname) ;
}
/** Version of context_adj_concludereal4array called from Fortran */
void context_adj_concludereal4array_(char* varname, float *dep, float *depb, int *length) {
  if (dbad_phase==99)
    printf("concludereal4array_ of %s \n", varname) ;
  context_adj_concludereal4array(varname, dep, depb, *length) ;
}

void context_adj_conclude() {
  printf("[seed:%7.1e] Condensed adjoint: %24.16e\n", dbad_seed, dbad_condensed_adj) ;
}
/** Version of context_adj_conclude called from Fortran */
void context_adj_conclude_() {
  context_adj_conclude() ;
}
