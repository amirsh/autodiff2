#ifndef __FSHARP_CLIB_H__ 
#define __FSHARP_CLIB_H__ 

#include <stdio.h>
#include <stdlib.h>
#include "types.h"
#include "mem_mng.h"

#define STRUCT_HEADER_BYTES (sizeof(number_t*) + sizeof(int))
#define VECTOR_HEADER_BYTES (STRUCT_HEADER_BYTES)
#define VECTOR_ALL_BYTES(rows,tp) ((rows) * sizeof(tp) + VECTOR_HEADER_BYTES)
#define MATRIX_HEADER_BYTES(rows,vtp) (STRUCT_HEADER_BYTES + (sizeof(vtp) * (rows)))
// #define MATRIX_ROWS_OFFSET(rows,cols,row,tp,vtp) (MATRIX_HEADER_BYTES(rows,vtp) + (VECTOR_ALL_BYTES(cols,tp)) * (row))
#define MATRIX_ALL_BYTES(rows,cols,tp,vtp) (MATRIX_HEADER_BYTES(rows,vtp) + (VECTOR_ALL_BYTES(cols,tp)) * (rows))
#define MATRIX3_HEADER_BYTES(rows,cols,mtp) (STRUCT_HEADER_BYTES + (sizeof(mtp) * (rows)))
#define STG_OFFSET(stg, offset) (storage_t)(((unsigned char*)(stg)) + (offset))

#define false 0
#define true 1

// extern int closure_mem = 0;

storage_t empty_storage = (void*)0;

empty_env_t make_empty_env() {
	return 0;
}

closure_t make_closure(lambda_t lam, env_t env) {
	closure_t c;
	c.lam = lam;
	c.env = env;
	return c;
}

void array_print_row(FILE *stream, array_number_t arr, string_t sep) {
	for (int i = 0; i < arr->length; i++) {
		fprintf(stream, "%f", arr->arr[i]);
		if (i != arr->length - 1)
			fprintf(stream, "%s", sep);
	}
}

void array_print(array_number_t arr) {
	printf("[");
	array_print_row(stdout, arr, ", ");
	printf("]\n");
}

// clock_t benchmarked_time = 0;
// clock_t start_time = 0;

// void start_timing() {
// 	start_time = clock();
// }

// void pause_timing() {
// 	benchmarked_time += clock() - start_time;
// }

/* Memory allocation constructs */

storage_t vector_alloc(index_t size) {
	// start_timing();
	storage_t area = storage_alloc(VECTOR_ALL_BYTES(size, number_t));
	array_number_t boxed_vector = (array_number_t)area;
	boxed_vector->length = size;
	boxed_vector->arr = (number_t*)(((char*)area) + VECTOR_HEADER_BYTES);
	// pause_timing();
	return area;
}

storage_t matrix_alloc(index_t size) {
	// start_timing();
	storage_t area = storage_alloc(VECTOR_HEADER_BYTES + sizeof(array_number_t) * size);
	array_array_number_t boxed_vector = (array_array_number_t)area;
	boxed_vector->length = size;
	boxed_vector->arr = (array_number_t*)(((int*)area) + 2);
	// pause_timing();
	return area;
}

storage_t matrix3d_alloc(index_t size) {
	// start_timing();
	storage_t area = storage_alloc(VECTOR_HEADER_BYTES + sizeof(array_array_number_t) * size);
	array_array_array_number_t boxed_vector = (array_array_array_number_t)area;
	boxed_vector->length = size;
	boxed_vector->arr = (array_array_number_t*)(((int*)area) + 2);
	// pause_timing();
	return area;
}

array_number_t array_slice(array_number_t arr, index_t start, index_t end) {
	index_t size = end - start + 1;
	array_number_t res = (array_number_t)vector_alloc(size);
	for (int i = 0; i < size; i++) {
		res->arr[i] = arr->arr[start + i];
	}
	return res;
}

array_array_number_t matrix_slice(array_array_number_t arr, index_t start, index_t end) {
	index_t size = end - start + 1;
	array_array_number_t res = (array_array_number_t) matrix_alloc(size);
	for (int i = 0; i < size; i++) {
		res->arr[i] = arr->arr[start + i];
	}
	return res;
}

void number_print(number_t num) {
	printf("%f\n", num);
}

void matrix_print(array_array_number_t arr) {
	printf("[\n   ");
	for (int i = 0; i < arr->length; i++) {
		if (i != 0)
			printf(" , ");
		array_print(arr -> arr[i]);
	}
	printf("]\n");
}

void matrix3d_print(array_array_array_number_t arr) {
	printf("[\n   ");
	for (int i = 0; i < arr->length; i++) {
		if (i != 0)
			printf(" , ");
		matrix_print(arr->arr[i]);
	}
	printf("]\n");
}

void array_tuple_print(array_tuple_number_t_number_t arr) {
	printf("[");
	for (int i = 0; i < arr->length; i++) {
		printf("(%f, %f)", arr->arr[i]._1, arr->arr[i]._2);
		if (i != arr->length - 1)
			printf(", ");
	}
	printf("]\n");
}

array_number_t array_tuple_2(array_tuple_number_t_number_t arr) {
	array_number_t res = vector_alloc(arr->length);
	for (int i = 0; i < arr->length; i++) {
		res->arr[i] = arr->arr[i]._2;
	}
	return res;
}

array_array_number_t matrix_read_s(storage_t storage, string_t name, int start_line, int rows, int cols) {
	// printf("reading from file `%s` starting line %d, %d rows\n", name, start_line, rows);
	FILE * fp;
    fp = fopen(name, "r");
    if (fp == NULL) {
        printf("Couldn't read the file `%s`.", name);
        exit(1);
    }

    for(int i = 0; i < start_line; i++) {
    	while(getc(fp) != '\n') {}
    }
	array_array_number_t res = (array_array_number_t)storage;
	res->length = rows;
	res->arr = (array_number_t*)STG_OFFSET(storage, VECTOR_HEADER_BYTES);
	for(int row_index=0; row_index<rows; row_index++) {
		// char cur = 0;
		// int length = 0;
		// int elems = 1;
		// while(1) {
		// 	char prevCur = cur;
		// 	cur = getc(fp);
		// 	printf("read character '%c'\n", cur);
		// 	if(cur == '\n')
		// 		break;
		// 	else if(((cur >= '0' && cur <= '9') || cur == '-') && prevCur == ' ')
		// 		elems++;
		// 	length++;
		// }

		// fseek(fp, -length-2, SEEK_CUR);
		int elems = cols;
		// TODO make its memory usage better
		array_number_t one_row = (array_number_t)malloc(VECTOR_ALL_BYTES(elems,number_t));
		one_row->length = elems;
		one_row->arr = (number_t*)(((char*)one_row) + VECTOR_HEADER_BYTES);
		for(int i=0; i<elems; i++) {
			fscanf(fp, "%lf", &one_row->arr[i]);
		}
		// array_print(one_row);
		res->arr[row_index] = one_row;
	}
	// printf("finished reading!\n");
	// matrix_print(res);
	fclose(fp);
	return res;
}

array_array_number_t matrix_read(string_t name, int start_line, int rows, int cols) {
	return matrix_read_s(matrix_alloc(rows), name, start_line, rows, cols);
}

number_t gamma_ln(number_t x) {
	// TODO needs to be implemented.
	return x;
}

void vector_alloc_cps(index_t size, closure_t closure) {
	array_number_t res = (array_number_t)vector_alloc(size);
	(closure.lam)(closure.env, res);
	free(res);
}


array_number_t vector_build_given_storage(storage_t storage, closure_t closure) {
	array_number_t res = (array_number_t)storage;
	for (int i = 0; i < res->length; i++) {
		res->arr[i] = closure.lam(closure.env, i).number_t_value;
	}
	return res;
}

// cardinality related methods

matrix_shape_t nested_shape_card_t(card_t elem, card_t card) {
	matrix_shape_t res;
	res.elem = elem;
	res.card = card;
	return res;
}


matrix3d_shape_t nested_shape_matrix_shape_t(matrix_shape_t elem, card_t card) {
	matrix3d_shape_t res;
	res.elem = elem;
	res.card = card;
	return res;
}

card_t width_card_t(card_t shape) {
  return VECTOR_ALL_BYTES(shape, number_t);
}

card_t width_matrix_shape_t(matrix_shape_t shape) {
  card_t rows = shape.card;
  card_t cols = shape.elem;
  return width_card_t(cols) * rows + MATRIX_HEADER_BYTES(rows,array_number_t);
}

card_t width_matrix3d_shape_t(matrix3d_shape_t shape) {
  card_t rows = shape.card;
  matrix_shape_t cols = shape.elem;
  return width_matrix_shape_t(cols) * rows + MATRIX_HEADER_BYTES(rows,array_number_t);
}

card_t width_tuple_card_t_card_t(tuple_card_t_card_t shape) {
  return 0;
}

// tuple related methods

tuple_number_t_number_t pair(number_t _1, number_t _2) {
	tuple_number_t_number_t res;
	res._1 = _1;
	res._2 = _2;
	return res;
}

tuple_index_t_index_t pair_i_i(index_t _1, index_t _2) {
	tuple_index_t_index_t res;
	res._1 = _1;
	res._2 = _2;
	return res;
}

tuple_card_t_card_t pair_c_c(card_t _1, card_t _2) {
	tuple_card_t_card_t res;
	res._1 = _1;
	res._2 = _2;
	return res;
}

tuple_array_number_t_array_number_t pair_v_v(array_number_t _1, array_number_t _2) {
	tuple_array_number_t_array_number_t res;
	res._1 = _1;
	res._2 = _2;
	return res;
}

#endif