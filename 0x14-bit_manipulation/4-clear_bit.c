#include "main.h"

/**
 * clear_bit - clear bit at a given position
 * @n: pointer to a memory address containing int values
 * @index: position of bit to clear
 * Return: 1 on success, -1 failure
 */
int clear_bit(unsigned long *n, unsigned int index)
{
	unsigned long int mask = 0x01;

	mask <<= index; /* set a bit field according to index */
	if (mask == 0 || index >= (sizeof(unsigned long int) * CHAR_BIT))
		return (-1);

	*n &= mask;/* enable the bit */

	return (1);

}
