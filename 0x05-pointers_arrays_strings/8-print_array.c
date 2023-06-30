#include "main.h"

/**
 * print_array - prints a list of array
 * @a: place holder for the array
 * @n: number of the array to be printed out
 * Return : void
 */
void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		printf("%d", a[j]);
	}
	if (j != (n - 1))
	{
		printf(", ");
	}
	printf("\n");
}
