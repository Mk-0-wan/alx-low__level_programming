#include "main.h"
/**
 * swap - swapping values btwn ints
 * @a: first param for variable one
 * @b: second param ofr variable two
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int k = *a;
	*a = *b;
	*b = k;

}
