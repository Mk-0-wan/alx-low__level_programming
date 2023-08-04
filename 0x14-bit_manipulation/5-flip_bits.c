#include "main.h"
/**
 * flip_bits - return the counts of bits required to flip from int n to m
 * @n: original int number where will compare
 * the number of bits to the second number
 * @m: the second int number to compare with the first
 * Return: the number of bits you
 * need to flip to get from first int to the second int
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int num_bits = 0;
	unsigned long int exclusive_or = (n ^ m);
	unsigned long int mask = 1; /*same as one bit, helps determine the bits changed by exclusive_or*/

	while (mask <= exclusive_or)
	{
		if (mask & exclusive_or)
		{
			num_bits++;
		}
		mask = mask << 1;/*increment no. of bits*/
	}
	return (num_bits);
}
