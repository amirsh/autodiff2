
typedef double number_t;

typedef struct array_number_t_struct {
	number_t* arr;
	int length;
}* array_number_t;


typedef int card_t;

typedef number_t (*lambda_t)();

typedef void* env_t;

typedef int empty_env_t;

typedef struct closure_t {
	lambda_t lam;
	env_t env;
} closure_t;


array_number_t TOP_LEVEL_linalg_vectorMap2(closure_t f, array_number_t v1, array_number_t v2) {
	card_t macroDef12 = v1->length;
	array_number_t macroDef13 = (array_number_t)malloc(sizeof(int) * 2);
	macroDef13->length=macroDef12;
	macroDef13->arr = (number_t*)malloc(sizeof(number_t) * macroDef12);
		for(int i = 0; i < macroDef13->length; i++){
			
			macroDef13->arr[i] = f.lam(f.env, v1->arr[i], v2->arr[i]);;
		}
	return macroDef13;
}