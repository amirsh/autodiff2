#define NBDirsMax 1000

void gmm_objective_dv(int d, int k, int n, double *alphas, double (*alphasd)[
        NBDirsMax], double *means, double (*meansd)[NBDirsMax], double *icf, 
        double (*icfd)[NBDirsMax], double *x, double (*xd)[NBDirsMax], double 
        wishart_gamma, double wishart_m, double *err, double (*errd)[NBDirsMax
        ], int nbdirs);