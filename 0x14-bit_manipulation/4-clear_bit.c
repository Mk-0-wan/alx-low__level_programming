#include "main.h"

/**
 * clear_bit - changes the value of a bit at a given position
 * @n: num  of bits which are represented by x 
 * @index: checking point
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int x;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	x = ~(1 << index);
	*n = *n & x;

	return (1);
}
