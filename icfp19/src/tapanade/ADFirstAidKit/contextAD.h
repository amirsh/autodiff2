#ifndef CONTEXTAD_INCLUDED
#define CONTEXTAD_INCLUDED

void context_tgt_init(double epsilon, double seed) ;
void context_tgt_initreal8(char* varname, double *indep, double *indepd) ;
void context_tgt_initreal8array(char* varname, double *indep, double *indepd, int length) ;
void context_tgt_initreal4(char* varname, float *indep, float *indepd) ;
void context_tgt_initreal4array(char* varname, float *indep, float *indepd, int length) ;
void context_tgt_concludestart() ;
void context_tgt_concludereal8(char* varname, double dep, double depd) ;
void context_tgt_concludereal8array(char* varname, double *dep, double *depd, int length) ;
void context_tgt_concludereal4(char* varname, float dep, float depd) ;
void context_tgt_concludereal4array(char* varname, float *dep, float *depd, int length) ;
void context_tgt_conclude() ;
void context_adj_init(double seed) ;
void context_adj_initreal8(char* varname, double *dep, double *depb) ;
void context_adj_initreal8array(char* varname, double *dep, double *depb, int length) ;
void context_adj_initreal4(char* varname, float *dep, float *depb) ;
void context_adj_initreal4array(char* varname, float *dep, float *depb, int length) ;
void context_adj_concludestart() ;
void context_adj_concludereal8(char* varname, double dep, double depb) ;
void context_adj_concludereal8array(char* varname, double *dep, double *depb, int length) ;
void context_adj_concludereal4(char* varname, float dep, float depb) ;
void context_adj_concludereal4array(char* varname, float *dep, float *depb, int length) ;
void context_adj_conclude() ;

#endif
