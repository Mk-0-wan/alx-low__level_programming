#include "main.h"

/**
 * _memcpy - make a copy of memory copy blocks (mostly on void pointers)
 * @s1: pointer to the  destination string
 * @s2: pointer to the source string
 * @n: number of memory blocks to copy over
 * Return: pointer to the newly copied memory blocks
 */
char *_memcpy(char *s1, char *s2, unsigned int n)
{
	int i = 0, safe = n;

	for (; i < safe; i++)
	{
		s1[i] = s2[i];
		n--;
	}
	return (s1);
}
/**
 * _realloc - a replica of the original realloc
 * @ptr: pointer to the original memory block
 * @old_size: represent the old size in bytes of the old memory block
 * @new_size: represent new_size in bytes the new memory block
 * Return: pointer to a new size memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *temp;
	int copy = 0;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
	{
		temp = malloc(new_size);
		if (!temp)
			return (NULL);
		else
			return (temp);
	}

	if (new_size == old_size)
		return (NULL);

	temp = malloc(new_size);
	if (!temp)
	{
		return (NULL);
	}

	copy = (old_size < new_size) ? old_size : new_size;
	_memcpy((char *)temp, (char *)ptr, copy);

	free(ptr);
	return (temp);
}
