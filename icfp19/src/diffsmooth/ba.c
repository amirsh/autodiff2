#include <stdlib.h>
#include <math.h>
#include <float.h>
#include "ba.h"

#ifdef DPS
  #ifdef OLD_FUSED
	#include "usecases_ba_opt.h"
    #include "usecases_ba_opt_dps_d.h"
  #endif
#elif defined FUSED
  #include "usecases_ba_opt.h"
  #if defined AOS
    #include "ba_diff_fused_aos.h"
  #elif defined SOA
    #include "ba_diff_fused_soa.h"
  #endif
#else
  #ifdef OLD_FUSED
	#include "usecases_ba_opt.h"
    #include "usecases_ba_opt_d.h"
  #else
    #include "usecases_ba_d.h"
  #endif
#endif

array_number_t cam, camd;
array_number_t X, Xd;
storage_t s;

void ba_init() {
	s = storage_alloc(256);	
	cam = (array_number_t)storage_alloc(sizeof(int) * 2);	
	cam->length=11;
	X = (array_number_t)storage_alloc(sizeof(int) * 2);
	X->length=3;
	camd = (array_number_t)storage_alloc(sizeof(int) * 2);
	camd->length=11;
	Xd = (array_number_t)storage_alloc(sizeof(int) * 2);
	Xd->length=3;
}

void project(double *cam_arr, double *X_arr, double *proj)
{
	cam->arr = cam_arr;
	X->arr = X_arr;
	proj = TOP_LEVEL_usecases_ba_project(cam, X)->arr;
}

void project_d(double *cam_arr, double *camd_arr, double *X_arr, double *Xd_arr, double *proj,
        double *projd) {
	cam->arr = cam_arr;
	camd->arr = camd_arr;
	X->arr = X_arr;
	Xd->arr = Xd_arr;
#ifdef DPS
	projd = TOP_LEVEL_usecases_ba_project_dps_d(s, cam, X, camd, Xd, 11, 3, 11, 3)->arr;
#else
	projd = TOP_LEVEL_usecases_ba_project_d(cam, X, camd, Xd)->arr;
#endif
}
