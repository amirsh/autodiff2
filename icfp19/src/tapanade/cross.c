
typedef double number_t;
typedef struct array_number_t_struct {
	number_t* arr;
	int length;
}* array_number_t;

array_number_t cross(array_number_t a, array_number_t b) {
	array_number_t array40 = (array_number_t)malloc(sizeof(int) * 2);
	array40->length=3;
	array40->arr = (number_t*)malloc(sizeof(number_t) * 3);
	array40->arr[0] = ((a->arr[1]) * (b->arr[2])) - ((a->arr[2]) * (b->arr[1]));
	array40->arr[1] = ((a->arr[2]) * (b->arr[0])) - ((a->arr[0]) * (b->arr[2]));
	array40->arr[2] = ((a->arr[0]) * (b->arr[1])) - ((a->arr[1]) * (b->arr[0]));;
	return array40;
}
