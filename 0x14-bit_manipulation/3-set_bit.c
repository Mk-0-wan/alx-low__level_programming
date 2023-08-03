#include "main.h"
/**
 * set_bit - the value of a bit to 1 at a given index.
 * @index: starting point
 * @n: pointer number of i
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int change;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	change = 1 << index;
	*n = *n | change;

	return (1);
}
