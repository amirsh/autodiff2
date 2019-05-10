#include "../../../diffsmooth/types.h"
#include "gmm_unfused.h"

void gmm_objective_b(array_array_number_t_struct *x, 
        array_array_number_t_struct *xb, array_number_t_struct *alphas, 
        array_number_t_struct *alphasb, array_array_number_t_struct *means, 
        array_array_number_t_struct *meansb, array_array_number_t_struct *qs, 
        array_array_number_t_struct *qsb, array_array_number_t_struct *ls, 
        array_array_number_t_struct *lsb, number_t wishart_gamma, number_t 
        wishart_m, number_t gmm_objectiveb);