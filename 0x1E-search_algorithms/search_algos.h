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

/**
 * struct listint_s - singly linked list
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
	int n;
	size_t index;
	struct listint_s *next;
} listint_t;

/* Function prototypes */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
listint_t *jump_list(listint_t *list, size_t size, int value);
/* Custom helper functions */
int btr(int *array, int T, int start, int end);
listint_t *getNode(listint_t *head, size_t index);

#endif
