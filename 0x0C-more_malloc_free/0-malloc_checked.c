#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - returns a pointer to the allocated
 * memory address
 * @b: pointer to be allocated memory
 *
 * Return: s (pointer to the allocated mem)
 */
void *malloc_checked(unsigned int b)
{
	void *s = malloc(b);

	if (s = NULL)
	{
		exit(98);
}

	return s;
}
