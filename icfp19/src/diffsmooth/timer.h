#pragma once

#include <stdlib.h>
#include <time.h>

/** Timing */

typedef struct mytimer_t {
	clock_t start;
} mytimer_t;

// mytimer_t tic();

// void toc(mytimer_t t, char* s);

mytimer_t tic() {
	mytimer_t res;
	res.start = clock();
	return res;
}

void toc(mytimer_t t, char* s) {
	clock_t end = clock();
	float milliseconds = (float)(end - t.start) * 1000.0 / CLOCKS_PER_SEC;
	printf("%s -- %d (ms)\n", s, (int)milliseconds);
}

float toc2(mytimer_t t) {
	clock_t end = clock();
	float milliseconds = (float)(end - t.start) * 1000.0 / CLOCKS_PER_SEC;
	// printf("%s -- %d (ms)\n", s, (int)milliseconds);
	return milliseconds;
}

