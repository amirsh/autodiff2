#include "../../../diffsmooth/types.h"
#include "gmm_unfused.h"

number_t gmm_objective_d(array_array_number_t_struct *x, 
        array_array_number_t_struct *xd, array_number_t_struct *alphas, 
        array_number_t_struct *alphasd, array_array_number_t_struct *means, 
        array_array_number_t_struct *meansd, array_array_number_t_struct *qs, 
        array_array_number_t_struct *qsd, array_array_number_t_struct *ls, 
        array_array_number_t_struct *lsd, number_t wishart_gamma, number_t 
        wishart_m, number_t *gmm_objective) ;