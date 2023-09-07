#include "main.h"

/**
 * malloc_checked - returns a pointer to a heap memory
 * @b: size for the heap memory
 * Return: 98 (error) pointer to the memory heap if successful
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	MALLOC_CHECK(ptr);

	return (ptr);
}
