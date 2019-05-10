#ifndef __USECASES_BA_H__ 
#define __USECASES_BA_H__ 
#include "fsharp.h"
#include <stdio.h>
#include <math.h>
#include "linalg.h"

array_number_t TOP_LEVEL_usecases_ba_radial_distort(array_number_t rad_params, array_number_t proj) {
	number_t rsq = TOP_LEVEL_linalg_sqnorm(proj);
	number_t L = ((1) + ((rad_params->arr[0]) * (rsq))) + (((rad_params->arr[1]) * (rsq)) * (rsq));
	return TOP_LEVEL_linalg_mult_by_scalar(proj, L);
}

array_number_t TOP_LEVEL_usecases_ba_rodrigues_rotate_point(array_number_t rot, array_number_t x) {
	number_t sqtheta = TOP_LEVEL_linalg_sqnorm(rot);
	array_number_t ite106 = 0;
	if((sqtheta) != (0)) {
		number_t theta = sqrt(sqtheta);
		number_t costheta = cos(theta);
		number_t sintheta = sin(theta);
		number_t theta_inv = (1) / (theta);
		array_number_t w = TOP_LEVEL_linalg_mult_by_scalar(rot, theta_inv);
		array_number_t w_cross_X = TOP_LEVEL_linalg_cross(w, x);
		number_t tmp = (TOP_LEVEL_linalg_dot_prod(w, x)) * ((1) - (costheta));
		array_number_t v1 = TOP_LEVEL_linalg_mult_by_scalar(x, costheta);
		array_number_t v2 = TOP_LEVEL_linalg_mult_by_scalar(w_cross_X, sintheta);
		ite106 = TOP_LEVEL_linalg_vectorAdd(TOP_LEVEL_linalg_vectorAdd(v1, v2), TOP_LEVEL_linalg_mult_by_scalar(w, tmp));;
	} else {
		
		ite106 = TOP_LEVEL_linalg_vectorAdd(x, TOP_LEVEL_linalg_cross(rot, x));;
	}
	return ite106;
}

array_number_t TOP_LEVEL_usecases_ba_project(array_number_t cam, array_number_t x) {
	index_t N_CAM_PARAMS = 11;
	index_t ROT_IDX = 0;
	index_t CENTER_IDX = 3;
	index_t FOCAL_IDX = 6;
	index_t X0_IDX = 7;
	index_t RAD_IDX = 9;
	array_number_t Xcam = TOP_LEVEL_usecases_ba_rodrigues_rotate_point(array_slice(cam, ROT_IDX, (ROT_IDX) + (2)), TOP_LEVEL_linalg_vectorSub(x, array_slice(cam, CENTER_IDX, (CENTER_IDX) + (2))));
	array_number_t distorted = TOP_LEVEL_usecases_ba_radial_distort(array_slice(cam, RAD_IDX, (RAD_IDX) + (1)), TOP_LEVEL_linalg_mult_by_scalar(array_slice(Xcam, 0, 1), (1) / (Xcam->arr[2])));
	return TOP_LEVEL_linalg_vectorAdd(array_slice(cam, X0_IDX, (X0_IDX) + (1)), TOP_LEVEL_linalg_mult_by_scalar(distorted, cam->arr[FOCAL_IDX]));
}

#endif
