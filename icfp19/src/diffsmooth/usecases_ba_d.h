#ifndef __USECASES_BA_D_H__ 
#define __USECASES_BA_D_H__ 
#include "fsharp.h"
#include <stdio.h>
#include <math.h>
#include "usecases_ba.h"
#include "linalg_d.h"

array_number_t TOP_LEVEL_usecases_ba_radial_distort_d(array_number_t rad_params, array_number_t proj, array_number_t rad_params_d, array_number_t proj_d) {
	number_t rsq = TOP_LEVEL_linalg_sqnorm(proj);
	number_t rsq_d = TOP_LEVEL_linalg_sqnorm_d(proj, proj_d);
	number_t L = ((1) + ((rad_params->arr[0]) * (rsq))) + (((rad_params->arr[1]) * (rsq)) * (rsq));
	number_t L_d = ((0) + (((rad_params_d->arr[0]) * (rsq)) + ((rad_params->arr[0]) * (rsq_d)))) + (((((rad_params_d->arr[1]) * (rsq)) + ((rad_params->arr[1]) * (rsq_d))) * (rsq)) + (((rad_params->arr[1]) * (rsq)) * (rsq_d)));
	return TOP_LEVEL_linalg_mult_by_scalar_d(proj, L, proj_d, L_d);
}

array_number_t TOP_LEVEL_usecases_ba_rodrigues_rotate_point_d(array_number_t rot, array_number_t x, array_number_t rot_d, array_number_t x_d) {
	number_t sqtheta = TOP_LEVEL_linalg_sqnorm(rot);
	number_t sqtheta_d = TOP_LEVEL_linalg_sqnorm_d(rot, rot_d);
	array_number_t ite1248 ;
	if((sqtheta) != (0)) {
		number_t theta = sqrt(sqtheta);
		number_t theta_d = (sqtheta_d) / ((2) * (sqrt(sqtheta)));
		number_t costheta = cos(theta);
		number_t costheta_d = (theta_d) * (-(sin(theta)));
		number_t sintheta = sin(theta);
		number_t sintheta_d = (theta_d) * (cos(theta));
		number_t theta_inv = (1) / (theta);
		number_t theta_inv_d = (((0) * (theta)) - ((1) * (theta_d))) / ((theta) * (theta));
		array_number_t w = TOP_LEVEL_linalg_mult_by_scalar(rot, theta_inv);
		array_number_t w_d = TOP_LEVEL_linalg_mult_by_scalar_d(rot, theta_inv, rot_d, theta_inv_d);
		array_number_t w_cross_X = TOP_LEVEL_linalg_cross(w, x);
		array_number_t w_cross_X_d = TOP_LEVEL_linalg_cross_d(w, x, w_d, x_d);
		number_t tmp = (TOP_LEVEL_linalg_dot_prod(w, x)) * ((1) - (costheta));
		number_t tmp_d = ((TOP_LEVEL_linalg_dot_prod_d(w, x, w_d, x_d)) * ((1) - (costheta))) + ((TOP_LEVEL_linalg_dot_prod(w, x)) * ((0) - (costheta_d)));
		array_number_t v1 = TOP_LEVEL_linalg_mult_by_scalar(x, costheta);
		array_number_t v1_d = TOP_LEVEL_linalg_mult_by_scalar_d(x, costheta, x_d, costheta_d);
		array_number_t v2 = TOP_LEVEL_linalg_mult_by_scalar(w_cross_X, sintheta);
		array_number_t v2_d = TOP_LEVEL_linalg_mult_by_scalar_d(w_cross_X, sintheta, w_cross_X_d, sintheta_d);
		ite1248 = TOP_LEVEL_linalg_vectorAdd_d(TOP_LEVEL_linalg_vectorAdd(v1, v2), TOP_LEVEL_linalg_mult_by_scalar(w, tmp), TOP_LEVEL_linalg_vectorAdd_d(v1, v2, v1_d, v2_d), TOP_LEVEL_linalg_mult_by_scalar_d(w, tmp, w_d, tmp_d));;
	} else {
		
		ite1248 = TOP_LEVEL_linalg_vectorAdd_d(x, TOP_LEVEL_linalg_cross(rot, x), x_d, TOP_LEVEL_linalg_cross_d(rot, x, rot_d, x_d));;
	}
	return ite1248;
}

array_number_t TOP_LEVEL_usecases_ba_project_d(array_number_t cam, array_number_t x, array_number_t cam_d, array_number_t x_d) {
	index_t N_CAM_PARAMS = 11;
	index_t N_CAM_PARAMS_d = 0;
	index_t ROT_IDX = 0;
	index_t ROT_IDX_d = 0;
	index_t CENTER_IDX = 3;
	index_t CENTER_IDX_d = 0;
	index_t FOCAL_IDX = 6;
	index_t FOCAL_IDX_d = 0;
	index_t X0_IDX = 7;
	index_t X0_IDX_d = 0;
	index_t RAD_IDX = 9;
	index_t RAD_IDX_d = 0;
	array_number_t Xcam = TOP_LEVEL_usecases_ba_rodrigues_rotate_point(array_slice(cam, ROT_IDX, (ROT_IDX) + (2)), TOP_LEVEL_linalg_vectorSub(x, array_slice(cam, CENTER_IDX, (CENTER_IDX) + (2))));
	array_number_t Xcam_d = TOP_LEVEL_usecases_ba_rodrigues_rotate_point_d(array_slice(cam, ROT_IDX, (ROT_IDX) + (2)), TOP_LEVEL_linalg_vectorSub(x, array_slice(cam, CENTER_IDX, (CENTER_IDX) + (2))), TOP_LEVEL_linalg_vectorSlice_d(3, ROT_IDX, cam, 3, 0, cam_d), TOP_LEVEL_linalg_vectorSub_d(x, array_slice(cam, CENTER_IDX, (CENTER_IDX) + (2)), x_d, TOP_LEVEL_linalg_vectorSlice_d(3, CENTER_IDX, cam, 3, 0, cam_d)));
	array_number_t distorted = TOP_LEVEL_usecases_ba_radial_distort(array_slice(cam, RAD_IDX, (RAD_IDX) + (1)), TOP_LEVEL_linalg_mult_by_scalar(array_slice(Xcam, 0, 1), (1) / (Xcam->arr[2])));
	array_number_t distorted_d = TOP_LEVEL_usecases_ba_radial_distort_d(array_slice(cam, RAD_IDX, (RAD_IDX) + (1)), TOP_LEVEL_linalg_mult_by_scalar(array_slice(Xcam, 0, 1), (1) / (Xcam->arr[2])), TOP_LEVEL_linalg_vectorSlice_d(2, RAD_IDX, cam, 2, 0, cam_d), TOP_LEVEL_linalg_mult_by_scalar_d(array_slice(Xcam, 0, 1), (1) / (Xcam->arr[2]), TOP_LEVEL_linalg_vectorSlice_d(2, 0, Xcam, 2, 0, Xcam_d), (((0) * (Xcam->arr[2])) - ((1) * (Xcam_d->arr[2]))) / ((Xcam->arr[2]) * (Xcam->arr[2]))));
	return TOP_LEVEL_linalg_vectorAdd_d(array_slice(cam, X0_IDX, (X0_IDX) + (1)), TOP_LEVEL_linalg_mult_by_scalar(distorted, cam->arr[FOCAL_IDX]), TOP_LEVEL_linalg_vectorSlice_d(2, X0_IDX, cam, 2, 0, cam_d), TOP_LEVEL_linalg_mult_by_scalar_d(distorted, cam->arr[FOCAL_IDX], distorted_d, cam_d->arr[FOCAL_IDX]));
}

#endif
