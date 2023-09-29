#include "main.h"

/**
 * get_bit - retrieve a bit at a given position
 * @n: integer to get the bit from
 * @index: position of the targeted bit.
 *
 * Return: bit value at that position
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(uli) * BITZ))
		return (-1);/* index val is invalid */

	return ((n >> (index - 1)) & 1);/* check the bit val */
}
