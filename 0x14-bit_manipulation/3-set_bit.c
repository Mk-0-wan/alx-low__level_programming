#include "main.h"

/**
 * set_bit - setting bits at a given position
 * @n: integer to get the check the bit from
 * @index: position of the bit
 * Return: 1 on success, -1 on failure
 */
int set_bit(unsigned long *n, unsigned int index)
{
	unsigned long int mask = 0x01;

	mask <<= index; /* set a bit field according to index */
	if (mask == 0 || index >= (sizeof(unsigned long int) * CHAR_BIT))
		return (-1);

	*n |= mask;/* enable the bit */

	return (1);
}
