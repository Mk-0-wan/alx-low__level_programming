#include "main.h"

/**
 * get_bit - retrieve a bit at a given position
 * @n: integer to get the bit from
 * @index: position of the targeted bit.
 *
 * Return: bit value at that position
 */
int get_bit(unsigned long n, unsigned int index)
{
	unsigned int r;

	if ((1 << index) == 0) /* set a bit field according to index */
		return (-1);/* index val is invalid */

	r = (n & (1 << index)) ? 1 : 0;/* check the bit val */
	return (r);
}
