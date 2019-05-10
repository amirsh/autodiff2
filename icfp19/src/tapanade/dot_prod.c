
typedef double number_t;
typedef struct array_number_t_struct {
	number_t* arr;
	int length;
}* array_number_t;

number_t dot_prod(array_number_t a, array_number_t b) {
	number_t macroDef26 = 0;
	for(int cur_idx = 0; cur_idx < a->length; cur_idx++){
		macroDef26 = (macroDef26) + (a->arr[cur_idx]*b->arr[cur_idx]);;
	}
	return macroDef26;
}
