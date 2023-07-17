#include <stdlib.h>
#include "main.h"
/**
 * _realloc - changes the memory
 * @ptr: pointer to the previous memory
 * @old_size: size of the old allocated memory
 * @new_size: size of the newly allocated memory
 * Return: pointer to the newly allocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *s;
	char *old;
	unsigned int i;

	/*
	 * if the new size is the same as the old
	 * one return the same memory allocated pointer
	 */
	if (new_size == old_size)
		return (ptr);
	/*if new is equal to zero and ptr is NULL free the memory allocated to ptr*/
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
		return (malloc(new_size));

	s = malloc(new_size);
	if (!s)
		return (NULL);

	old = ptr;
	if (new_size < old_size)
		for (i = 0; i < new_size; i++)
			s[i] = old[i];

	if (new_size > old_size)
		for (i = 0; i < old_size; i++)
			s[i] = old[i];
	/*deallocate the older pointer and return the allocated new pointer*/
	free(ptr);
	return (s);
}
