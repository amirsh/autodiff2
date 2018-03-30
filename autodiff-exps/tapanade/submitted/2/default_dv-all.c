#ifdef __cplusplus
extern "C" {
#endif
/*        Generated by TAPENADE     (INRIA, Ecuador team)
    Tapenade 3.13 (r6666M) -  1 Mar 2018 15:30
*/
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "gmm_d-all.h"
#include "../../gmm.h"
/*        Generated by TAPENADE     (INRIA, Ecuador team)
    Tapenade 3.13 (r6666M) -  1 Mar 2018 15:30
*/
/*
  Differentiation of arr_max in forward (tangent) mode:
   variations   of useful results: arr_max
   with respect to varying inputs: *x
   Plus diff mem management of: x:in
*/
// name of top routine:
// gmm_objective
// dependent output variables:
// err
// independent variables:
// 
void arr_max_dv(int n, double *x, double (*xd)[NBDirsMax], double *arr_max, 
        double arr_maxd[NBDirsMax], int nbdirs) {
    double m;
    double md[NBDirsMax];
    int i;
    int nd;
    for (nd = 0; nd < nbdirs; ++nd)
        md[nd] = xd[0][nd];
    m = x[0];
    for (i = 1; i < n; ++i)
        if (x[i] > m) {
            for (nd = 0; nd < nbdirs; ++nd)
                md[nd] = xd[i][nd];
            m = x[i];
        }
    *arr_max = m;
    for (nd = 0; nd < nbdirs; ++nd)
        arr_maxd[nd] = md[nd];
}

/*
  Differentiation of logsumexp in forward (tangent) mode:
   variations   of useful results: logsumexp
   with respect to varying inputs: *x
   Plus diff mem management of: x:in
*/
void logsumexp_dv(int n, double *x, double (*xd)[NBDirsMax], double *logsumexp
        , double logsumexpd[NBDirsMax], int nbdirs) {
    int i;
    double mx, semx;
    double mxd[NBDirsMax], semxd[NBDirsMax];
    double arg1;
    double arg1d[NBDirsMax];
    int nd;
    arr_max_dv(n, x, xd, &mx, mxd, nbdirs);
    semx = 0.;
    for (nd = 0; nd < nbdirs; ++nd)
        semxd[nd] = 0.0;
    for (i = 0; i < n; ++i) {
        arg1 = x[i] - mx;
        for (nd = 0; nd < nbdirs; ++nd) {
            arg1d[nd] = xd[i][nd] - mxd[nd];
            semxd[nd] = semxd[nd] + arg1d[nd]*exp(arg1);
        }
        semx = semx + exp(arg1);
    }
    *logsumexp = log(semx) + mx;
    for (nd = 0; nd < nbdirs; ++nd)
        logsumexpd[nd] = semxd[nd]/semx + mxd[nd];
}

/*
  Differentiation of sqnorm in forward (tangent) mode:
   variations   of useful results: sqnorm
   with respect to varying inputs: *x
   Plus diff mem management of: x:in
*/
void sqnorm_dv(int d, double *x, double (*xd)[NBDirsMax], double *sqnorm, 
        double sqnormd[NBDirsMax], int nbdirs) {
    int i;
    double out;
    double outd[NBDirsMax];
    int nd;
    out = 0;
    for (nd = 0; nd < nbdirs; ++nd)
        outd[nd] = 0.0;
    for (i = 0; i < d; ++i) {
        for (nd = 0; nd < nbdirs; ++nd)
            outd[nd] = outd[nd] + xd[i][nd]*x[i] + x[i]*xd[i][nd];
        out += x[i]*x[i];
    }
    *sqnorm = out;
    for (nd = 0; nd < nbdirs; ++nd)
        sqnormd[nd] = outd[nd];
}

/*
  Differentiation of log_wishart_prior in forward (tangent) mode:
   variations   of useful results: log_wishart_prior
   with respect to varying inputs: *Qdiags *icf
   Plus diff mem management of: Qdiags:in icf:in
*/
void log_wishart_prior_dv(int p, int k, double wishart_gamma, double wishart_m
        , double *sum_qs, double *Qdiags, double (*Qdiagsd)[NBDirsMax], double
        *icf, double (*icfd)[NBDirsMax], double *log_wishart_prior, double 
        log_wishart_priord[NBDirsMax], int nbdirs) {
    int n, ik, icf_sz;
    double out, C, frobenius;
    double outd[NBDirsMax], frobeniusd[NBDirsMax];
    double result1;
    double result1d[NBDirsMax];
    int arg1;
    double result2;
    double result2d[NBDirsMax];
    int nd;
    icf_sz = p*(p+1)/2;
    out = 0;
    for (nd = 0; nd < nbdirs; ++nd)
        outd[nd] = 0.0;
    for (ik = 0; ik < k; ++ik) {
        sqnorm_dv(p, &Qdiags[ik*p], &Qdiagsd[ik*p], &result1, result1d, nbdirs
                 );
        arg1 = icf_sz - p;
        sqnorm_dv(arg1, &icf[ik*icf_sz + p], &icfd[ik*icf_sz + p], &result2, 
                  result2d, nbdirs);
        for (nd = 0; nd < nbdirs; ++nd) {
            frobeniusd[nd] = result1d[nd] + result2d[nd];
            outd[nd] = outd[nd] + 0.5*frobeniusd[nd];
        }
        frobenius = result1 + result2;
        out = out + 0.5*frobenius;
    }
    *log_wishart_prior = out;
    for (nd = 0; nd < nbdirs; ++nd)
        // the last bit is here so that tapenade would recognize that means and inv_cov_factors are variables
        log_wishart_priord[nd] = outd[nd];
}

/*
  Differentiation of preprocess_qs in forward (tangent) mode:
   variations   of useful results: *Qdiags *sum_qs
   with respect to varying inputs: *Qdiags *sum_qs *icf
   Plus diff mem management of: Qdiags:in sum_qs:in icf:in

 - k*C + (Qdiags[0] - Qdiags[0]) + (icf[0] - icf[0]) */
void preprocess_qs_dv(int d, int k, double *icf, double (*icfd)[NBDirsMax], 
        double *sum_qs, double (*sum_qsd)[NBDirsMax], double *Qdiags, double (
        *Qdiagsd)[NBDirsMax], int nbdirs) {
    int icf_sz, ik, id;
    double q;
    double qd[NBDirsMax];
    int nd;
    icf_sz = d*(d+1)/2;
    for (ik = 0; ik < k; ++ik) {
        for (nd = 0; nd < nbdirs; ++nd)
            sum_qsd[ik][nd] = 0.0;
        sum_qs[ik] = 0.;
        for (id = 0; id < d; ++id) {
            for (nd = 0; nd < nbdirs; ++nd) {
                qd[nd] = icfd[ik*icf_sz + id][nd];
                sum_qsd[ik][nd] = sum_qsd[ik][nd] + qd[nd];
            }
            q = icf[ik*icf_sz + id];
            sum_qs[ik] += q;
            for (nd = 0; nd < nbdirs; ++nd)
                Qdiagsd[ik*d + id][nd] = qd[nd]*exp(q);
            Qdiags[ik*d + id] = exp(q);
        }
    }
}

/*
  Differentiation of Qtimesx in forward (tangent) mode:
   variations   of useful results: *out
   with respect to varying inputs: *out *Qdiag *x *ltri
   Plus diff mem management of: out:in Qdiag:in x:in ltri:in
*/
void Qtimesx_dv(int d, double *Qdiag, double (*Qdiagd)[NBDirsMax], double *
        ltri, double (*ltrid)[NBDirsMax], double *x, double (*xd)[NBDirsMax], 
        double *out, double (*outd)[NBDirsMax], int nbdirs) {
    // strictly lower triangular part
    int id, i, j, Lparamsidx;
    int nd;
    for (id = 0; id < d; ++id) {
        for (nd = 0; nd < nbdirs; ++nd)
            outd[id][nd] = Qdiagd[id][nd]*x[id] + Qdiag[id]*xd[id][nd];
        out[id] = Qdiag[id]*x[id];
    }
    Lparamsidx = 0;
    for (i = 0; i < d; ++i)
        for (j = i+1; j < d; ++j) {
            for (nd = 0; nd < nbdirs; ++nd)
                outd[j][nd] = outd[j][nd] + ltrid[Lparamsidx][nd]*x[i] + ltri[
                    Lparamsidx]*xd[i][nd];
            out[j] = out[j] + ltri[Lparamsidx]*x[i];
            Lparamsidx = Lparamsidx + 1;
        }
}

/*
  Differentiation of subtract in forward (tangent) mode:
   variations   of useful results: *out
   with respect to varying inputs: *out *x *y
   Plus diff mem management of: out:in x:in y:in
*/
// out = a - b
void subtract_dv(int d, double *x, double (*xd)[NBDirsMax], double *y, double 
        (*yd)[NBDirsMax], double *out, double (*outd)[NBDirsMax], int nbdirs) 
{
    int id;
    int nd;
    for (id = 0; id < d; ++id) {
        for (nd = 0; nd < nbdirs; ++nd)
            outd[id][nd] = xd[id][nd] - yd[id][nd];
        out[id] = x[id] - y[id];
    }
}

/*
  Differentiation of gmm_objective in forward (tangent) mode:
   variations   of useful results: alloc(*Qxcentered) alloc(*xcentered)
                alloc(*Qdiags) alloc(*sum_qs) alloc(*main_term)
                *err
   with respect to varying inputs: alloc(*Qxcentered) alloc(*xcentered)
                alloc(*Qdiags) alloc(*sum_qs) alloc(*main_term)
                *err *x *means *icf *alphas
   RW status of diff variables: alloc(*Qxcentered):in-out alloc(*xcentered):in-out
                alloc(*Qdiags):in-out alloc(*sum_qs):in-out alloc(*main_term):in-out
                *err:in-out *x:in *means:in *icf:in *alphas:in
   Plus diff mem management of: err:in x:in means:in icf:in alphas:in
*/
void gmm_objective_dv(int d, int k, int n, double *alphas, double (*alphasd)[
        NBDirsMax], double *means, double (*meansd)[NBDirsMax], double *icf, 
        double (*icfd)[NBDirsMax], double *x, double (*xd)[NBDirsMax], double 
        wishart_gamma, double wishart_m, double *err, double (*errd)[NBDirsMax
        ], int nbdirs) {
    int ik, ix, icf_sz;
    double *main_term, *sum_qs, *Qdiags, *xcentered, *Qxcentered;
    double *main_termd, *sum_qsd, *Qdiagsd, *xcenteredd, *Qxcenteredd;
    double slse, lse_alphas, CONSTANT;
    double slsed[NBDirsMax], lse_alphasd[NBDirsMax];
    double result1;
    double result1d[NBDirsMax];
    int nd;
    int ii1;
    // CONSTANT = -n*d*0.5*log(2 * PI);
    icf_sz = d*(d+1)/2;
    main_termd[] = (double (*)[NBDirsMax])malloc(k*sizeof(double [NBDirsMax])*
        nbdirs);
    for (ii1 = 0; ii1 < k; ++ii1)
        main_termd[ii1][nd] = 0.0;
    main_term = (double *)malloc(k*sizeof(double));
    sum_qsd[] = (double (*)[NBDirsMax])malloc(k*sizeof(double [NBDirsMax])*
        nbdirs);
    for (ii1 = 0; ii1 < k; ++ii1)
        sum_qsd[ii1][nd] = 0.0;
    sum_qs = (double *)malloc(k*sizeof(double));
    Qdiagsd[] = (double (*)[NBDirsMax])malloc(d*k*sizeof(double [NBDirsMax])*
        nbdirs);
    for (ii1 = 0; ii1 < d*k; ++ii1)
        Qdiagsd[ii1][nd] = 0.0;
    Qdiags = (double *)malloc(d*k*sizeof(double));
    xcenteredd[] = (double (*)[NBDirsMax])malloc(d*sizeof(double [NBDirsMax])*
        nbdirs);
    for (ii1 = 0; ii1 < d; ++ii1)
        xcenteredd[ii1][nd] = 0.0;
    xcentered = (double *)malloc(d*sizeof(double));
    Qxcenteredd[] = (double (*)[NBDirsMax])malloc(d*sizeof(double [NBDirsMax])
        *nbdirs);
    for (ii1 = 0; ii1 < d; ++ii1)
        Qxcenteredd[ii1][nd] = 0.0;
    Qxcentered = (double *)malloc(d*sizeof(double));
    preprocess_qs_dv(d, k, icf, icfd, sum_qs, sum_qsd, Qdiags, Qdiagsd, nbdirs
                    );
    slse = 0.;
    for (nd = 0; nd < nbdirs; ++nd)
        slsed[nd] = 0.0;
    for (ix = 0; ix < n; ++ix) {
        for (ik = 0; ik < k; ++ik) {
            subtract_dv(d, &x[ix*d], &xd[ix*d], &means[ik*d], &meansd[ik*d], 
                        xcentered, xcenteredd, nbdirs);
            Qtimesx_dv(d, &Qdiags[ik*d], &Qdiagsd[ik*d], &icf[ik*icf_sz + d], 
                       &icfd[ik*icf_sz + d], xcentered, xcenteredd, Qxcentered
                       , Qxcenteredd, nbdirs);
            sqnorm_dv(d, Qxcentered, Qxcenteredd, &result1, result1d, nbdirs);
            for (nd = 0; nd < nbdirs; ++nd)
                main_termd[ik][nd] = alphasd[ik][nd] + sum_qsd[ik][nd] - 0.5*
                    result1d[nd];
            main_term[ik] = alphas[ik] + sum_qs[ik] - 0.5*result1;
        }
        logsumexp_dv(k, main_term, main_termd, &result1, result1d, nbdirs);
        for (nd = 0; nd < nbdirs; ++nd)
            slsed[nd] = slsed[nd] + result1d[nd];
        slse = slse + result1;
    }
    free(main_termd[]);
    free(main_term);
    free(xcenteredd[]);
    free(xcentered);
    free(Qxcenteredd[]);
    free(Qxcentered);
    logsumexp_dv(k, alphas, alphasd, &lse_alphas, lse_alphasd, nbdirs);
    for (nd = 0; nd < nbdirs; ++nd)
        *errd[nd] = slsed[nd] - n*lse_alphasd[nd];
    *err = slse - n*lse_alphas;
    /*CONSTANT + */
    log_wishart_prior_dv(d, k, wishart_gamma, wishart_m, sum_qs, Qdiags, 
                         Qdiagsd, icf, icfd, &result1, result1d, nbdirs);
    for (nd = 0; nd < nbdirs; ++nd)
        *errd[nd] = *errd[nd] + result1d[nd];
    *err = *err + result1;
    free(sum_qsd[]);
    free(sum_qs);
    free(Qdiagsd[]);
    free(Qdiags);
    // this is here so that tapenade would recognize that means and inv_cov_factors are variables
    *err = *err;
}
#ifdef __cplusplus
}
#endif