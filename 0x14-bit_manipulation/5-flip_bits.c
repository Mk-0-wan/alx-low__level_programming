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
	unsigned int num_bits;
	unsigned long int exclusive_or;
	unsigned long int mask;
	/*Getting only the least possible bits*/
	exclusive_or = (n ^ m);
	/*same as one bit, helps determine the bits changed by exclusive_or*/
	mask = 1;
	while (mask <= exclusive_or)
	{
		if (mask & exclusive_or)
		{
			num_bits++;
		}
		/*keep on shifting to the left which increments the number of bit by 1*/
		mask = mask << 1;
	}
	return (num_bits);
}
