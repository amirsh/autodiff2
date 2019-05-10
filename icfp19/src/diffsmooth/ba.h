#include <stdlib.h>
#include <math.h>
#include <float.h>

#define BA_NCAMPARAMS 11
#define BA_ROT_IDX 0
#define BA_C_IDX 3
#define BA_F_IDX 6
#define BA_X0_IDX 7
#define BA_RAD_IDX 9

void project(double *cam, double *X, double *proj);
void project_d(double *cam, double *camd, double *X, double *Xd, double *proj,
        double *projd);
void ba_init();