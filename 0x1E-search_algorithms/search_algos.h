#ifndef __SEARCH_ALGO__
#define __SEARCH_ALGO__

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define Length(A) ((sizeof(A)) / (sizeof(A[0])))
#define Min(z, h)\
	((z) + (((h) - (z)) &\
		(((h) - (z)) >> (((sizeof(int)) * (8) - (1))))))
#define Max(z, h)\
	((h) - (((h) - (z)) &\
		(((h) - (z)) >> (((sizeof(int)) * (8) - (1))))))
#define MASK(x) ((x) >> ((sizeof(int)) * (8) - (1)))
#define Absolute(y) (((y) + (MASK(y))) ^ (MASK(y)))

/* Function prototypes */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);

#endif
