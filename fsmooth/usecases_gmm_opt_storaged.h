#ifndef __USECASES_BA_H__ 
#define __USECASES_BA_H__ 
#include "runtime/fsharp.h"
#include <stdio.h>
#include <math.h>
#include "linalg_storaged.h"

index_t TOP_LEVEL_usecases_gmm_tri_dps(storage_t stgVar1248, index_t n_dps, card_t n_shp) {
	
	return ((n_dps) * ((n_dps) + (1))) / (2);
}

number_t TOP_LEVEL_usecases_gmm_gmm_objective_dps(storage_t stgVar175, array_array_number_t x_dps, array_number_t alphas_dps, array_array_number_t means_dps, array_array_number_t qs_dps, array_array_number_t ls_dps, number_t wishart_gamma_dps, number_t wishart_m_dps, matrix_shape_t x_shp, card_t alphas_shp, matrix_shape_t means_shp, matrix_shape_t qs_shp, matrix_shape_t ls_shp, card_t wishart_gamma_shp, card_t wishart_m_shp) {
	card_t n_shp = x_shp.card;
	card_t macroDef354 = x_dps->length;
	card_t n_dps = macroDef354;
	card_t macroDef355 = alphas_dps->length;
	card_t K_dps = macroDef355;
	number_t macroDef356 = 0;
	for(int idx_dps = 0; idx_dps <= (n_dps) - (1); idx_dps++){
		number_t macroDef357 = -1000;
	for(int idx0_dps = 0; idx0_dps <= (K_dps) - (1); idx0_dps++){
		card_t v_shp = qs_shp.elem;
		card_t size393 = width_card_t(v_shp);
	array_number_t stgVar198 = storage_alloc(size393);
	number_t macroDef359;array_number_t v_dps = qs_dps->arr[idx0_dps];
	number_t macroDef358 = 0;
	array_number_t cur_dps_range = v_dps;
	storage_t stgVar200 = empty_storage;
	for(int cur_dps_idx = 0; cur_dps_idx < cur_dps_range->length; cur_dps_idx++){
		number_t cur_dps = cur_dps_range->arr[cur_dps_idx];
		
		macroDef358 = (macroDef358) + (cur_dps);;
	}
	macroDef359 = macroDef358;;
	storage_free(stgVar198, size393);
		card_t q_shp = qs_shp.elem;
		card_t size397 = width_card_t(q_shp);
	array_number_t stgVar201 = storage_alloc(size397);
	number_t macroDef367;array_number_t q_dps = qs_dps->arr[idx0_dps];
	card_t l_shp = ls_shp.elem;
	card_t size396 = width_card_t(l_shp);
	array_number_t stgVar203 = storage_alloc(size396);
	number_t macroDef366;array_number_t l_dps = ls_dps->arr[idx0_dps];
	card_t x0_shp = x_shp.elem;
	card_t size395 = width_card_t(x0_shp);
	array_number_t stgVar205 = storage_alloc(size395);
	number_t macroDef365;array_number_t x0_dps = x_dps->arr[idx_dps];
	card_t y_shp = means_shp.elem;
	card_t size394 = width_card_t(y_shp);
	array_number_t stgVar207 = storage_alloc(size394);
	number_t macroDef364;array_number_t y_dps = means_dps->arr[idx0_dps];
	card_t macroDef363 = x0_dps->length;
	number_t macroDef360 = 0;
	for(int idx1_dps = 0; idx1_dps <= (macroDef363) - (1); idx1_dps++){
		index_t n0_dps = (idx1_dps) - (1);
		index_t tis_dps = ((n0_dps) * ((n0_dps) + (1))) / (2);
		card_t s_shp = 0;
		card_t s_dps = 0;
		card_t macroDef361 = l_dps->length;
		card_t e_dps = macroDef361;
		number_t macroDef362 = 0;
	for(int idx2_dps = 0; idx2_dps <= (((e_dps) - (s_dps)) + (1)) - (1); idx2_dps++){
		number_t cur_dps = (double)(((s_dps)) + (idx2_dps));
		index_t idx3_dps = (int)(cur_dps);
		index_t j_dps = (idx3_dps) - (tis_dps);
		bool_t isInRange_dps = 0;
	if((j_dps) >= (0)) {
		
		isInRange_dps = (j_dps) < (idx1_dps);;
	} else {
		
		isInRange_dps = false;;
	}
		number_t ite389 = 0;
	if(isInRange_dps) {
		number_t x1_dps = x0_dps->arr[j_dps];
		number_t y0_dps = y_dps->arr[j_dps];
		ite389 = (macroDef362) + ((l_dps->arr[idx3_dps]) * ((x1_dps) - (y0_dps)));;
	} else {
		
		ite389 = macroDef362;;
	}
		macroDef362 = ite389;;
	}
		number_t sum_dps = macroDef362;
		number_t x1_dps = x0_dps->arr[idx1_dps];
		number_t y0_dps = y_dps->arr[idx1_dps];
		number_t x1_dps0 = (sum_dps) + ((exp(q_dps->arr[idx1_dps])) * ((x1_dps) - (y0_dps)));
		number_t cur_dps = (x1_dps0) * (x1_dps0);
		macroDef360 = (macroDef360) + (cur_dps);;
	}
	macroDef364 = macroDef360;;
	storage_free(stgVar207, size394);
	macroDef365 = macroDef364;;
	storage_free(stgVar205, size395);
	macroDef366 = macroDef365;;
	storage_free(stgVar203, size396);
	macroDef367 = macroDef366;;
	storage_free(stgVar201, size397);
		number_t cur_dps = ((alphas_dps->arr[idx0_dps]) + (macroDef359)) - ((0.5) * (macroDef367));
		number_t ite390 = 0;
	if((macroDef357) > (cur_dps)) {
		
		ite390 = macroDef357;;
	} else {
		
		ite390 = cur_dps;;
	}
		macroDef357 = ite390;;
	}
		number_t mx148_dps = macroDef357;
		number_t macroDef368 = 0;
	for(int idx0_dps = 0; idx0_dps <= (K_dps) - (1); idx0_dps++){
		card_t v149_shp = qs_shp.elem;
		card_t size398 = width_card_t(v149_shp);
	array_number_t stgVar257 = storage_alloc(size398);
	number_t macroDef370;array_number_t v149_dps = qs_dps->arr[idx0_dps];
	number_t macroDef369 = 0;
	array_number_t cur_dps_range = v149_dps;
	storage_t stgVar259 = empty_storage;
	for(int cur_dps_idx = 0; cur_dps_idx < cur_dps_range->length; cur_dps_idx++){
		number_t cur_dps = cur_dps_range->arr[cur_dps_idx];
		
		macroDef369 = (macroDef369) + (cur_dps);;
	}
	macroDef370 = macroDef369;;
	storage_free(stgVar257, size398);
		card_t q150_shp = qs_shp.elem;
		card_t size402 = width_card_t(q150_shp);
	array_number_t stgVar260 = storage_alloc(size402);
	number_t macroDef378;array_number_t q150_dps = qs_dps->arr[idx0_dps];
	card_t l151_shp = ls_shp.elem;
	card_t size401 = width_card_t(l151_shp);
	array_number_t stgVar262 = storage_alloc(size401);
	number_t macroDef377;array_number_t l151_dps = ls_dps->arr[idx0_dps];
	card_t x152_shp = x_shp.elem;
	card_t size400 = width_card_t(x152_shp);
	array_number_t stgVar264 = storage_alloc(size400);
	number_t macroDef376;array_number_t x152_dps = x_dps->arr[idx_dps];
	card_t y153_shp = means_shp.elem;
	card_t size399 = width_card_t(y153_shp);
	array_number_t stgVar266 = storage_alloc(size399);
	number_t macroDef375;array_number_t y153_dps = means_dps->arr[idx0_dps];
	card_t macroDef374 = x152_dps->length;
	number_t macroDef371 = 0;
	for(int idx1_dps = 0; idx1_dps <= (macroDef374) - (1); idx1_dps++){
		index_t n154_dps = (idx1_dps) - (1);
		index_t tis155_dps = ((n154_dps) * ((n154_dps) + (1))) / (2);
		card_t s156_shp = 0;
		card_t s156_dps = 0;
		card_t macroDef372 = l151_dps->length;
		card_t e157_dps = macroDef372;
		number_t macroDef373 = 0;
	for(int idx2_dps = 0; idx2_dps <= (((e157_dps) - (s156_dps)) + (1)) - (1); idx2_dps++){
		number_t cur_dps = (double)(((s156_dps)) + (idx2_dps));
		index_t idx158_dps = (int)(cur_dps);
		index_t j159_dps = (idx158_dps) - (tis155_dps);
		bool_t isInRange160_dps = 0;
	if((j159_dps) >= (0)) {
		
		isInRange160_dps = (j159_dps) < (idx1_dps);;
	} else {
		
		isInRange160_dps = false;;
	}
		number_t ite391 = 0;
	if(isInRange160_dps) {
		number_t x161_dps = x152_dps->arr[j159_dps];
		number_t y162_dps = y153_dps->arr[j159_dps];
		ite391 = (macroDef373) + ((l151_dps->arr[idx158_dps]) * ((x161_dps) - (y162_dps)));;
	} else {
		
		ite391 = macroDef373;;
	}
		macroDef373 = ite391;;
	}
		number_t sum163_dps = macroDef373;
		number_t x164_dps = x152_dps->arr[idx1_dps];
		number_t y165_dps = y153_dps->arr[idx1_dps];
		number_t x1166_dps = (sum163_dps) + ((exp(q150_dps->arr[idx1_dps])) * ((x164_dps) - (y165_dps)));
		number_t cur_dps = (x1166_dps) * (x1166_dps);
		macroDef371 = (macroDef371) + (cur_dps);;
	}
	macroDef375 = macroDef371;;
	storage_free(stgVar266, size399);
	macroDef376 = macroDef375;;
	storage_free(stgVar264, size400);
	macroDef377 = macroDef376;;
	storage_free(stgVar262, size401);
	macroDef378 = macroDef377;;
	storage_free(stgVar260, size402);
		number_t x168_dps = ((alphas_dps->arr[idx0_dps]) + (macroDef370)) - ((0.5) * (macroDef378));
		number_t cur_dps = exp((x168_dps) - (mx148_dps));
		macroDef368 = (macroDef368) + (cur_dps);;
	}
		number_t semx170172_dps = macroDef368;
		number_t cur_dps = (log(semx170172_dps)) + (mx148_dps);
		macroDef356 = (macroDef356) + (cur_dps);;
	}
	number_t macroDef379 = -1000;
	array_number_t cur_dps_range = alphas_dps;
	storage_t stgVar306 = empty_storage;
	for(int cur_dps_idx = 0; cur_dps_idx < cur_dps_range->length; cur_dps_idx++){
		number_t cur_dps = cur_dps_range->arr[cur_dps_idx];
		number_t ite392 = 0;
	if((macroDef379) > (cur_dps)) {
		
		ite392 = macroDef379;;
	} else {
		
		ite392 = cur_dps;;
	}
		macroDef379 = ite392;;
	}
	number_t mx_dps = macroDef379;
	card_t macroDef381 = alphas_dps->length;
	number_t macroDef380 = 0;
	for(int idx_dps = 0; idx_dps <= (macroDef381) - (1); idx_dps++){
		number_t x0_dps = alphas_dps->arr[idx_dps];
		number_t cur_dps = exp((x0_dps) - (mx_dps));
		macroDef380 = (macroDef380) + (cur_dps);;
	}
	number_t semx174_dps = macroDef380;
	number_t macroDef382 = 0;
	for(int idx_dps = 0; idx_dps <= (K_dps) - (1); idx_dps++){
		card_t v_shp = qs_shp.elem;
		card_t size403 = width_card_t(v_shp);
	array_number_t stgVar327 = storage_alloc(size403);
	number_t macroDef385;array_number_t v_dps = qs_dps->arr[idx_dps];
	card_t macroDef384 = v_dps->length;
	number_t macroDef383 = 0;
	for(int idx0_dps = 0; idx0_dps <= (macroDef384) - (1); idx0_dps++){
		number_t value_dps = v_dps->arr[idx0_dps];
		number_t x1_dps = exp(value_dps);
		number_t cur_dps = (x1_dps) * (x1_dps);
		macroDef383 = (macroDef383) + (cur_dps);;
	}
	macroDef385 = macroDef383;;
	storage_free(stgVar327, size403);
		card_t x0_shp = ls_shp.elem;
		card_t size404 = width_card_t(x0_shp);
	array_number_t stgVar341 = storage_alloc(size404);
	number_t macroDef388;array_number_t x0_dps = ls_dps->arr[idx_dps];
	card_t macroDef387 = x0_dps->length;
	number_t macroDef386 = 0;
	for(int idx0_dps = 0; idx0_dps <= (macroDef387) - (1); idx0_dps++){
		number_t x1_dps = x0_dps->arr[idx0_dps];
		number_t cur_dps = (x1_dps) * (x1_dps);
		macroDef386 = (macroDef386) + (cur_dps);;
	}
	macroDef388 = macroDef386;;
	storage_free(stgVar341, size404);
		number_t cur_dps = (macroDef385) + (macroDef388);
		macroDef382 = (macroDef382) + (cur_dps);;
	}
	return ((macroDef356) - (((double)((n_dps))) * ((log(semx174_dps)) + (mx_dps)))) + ((0.5) * (macroDef382));
}

#endif