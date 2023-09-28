#include "main.h"

/**
 * flip_bits - number of bits to flip
 * in order to get two numbers matching together
 * @n: first integer
 * @m: second integer to compare to n
 * Return: unsigned int of number of bits to flip
 */
unsigned int flip_bits(unsigned long n, unsigned long m)
{
	unsigned int bits_to_flip = 0;
	/* exclusive or of the two int's */
	unsigned long int xor_val;

	xor_val = n ^ m;
	for (; xor_val > 0 ; xor_val >>= 1)/* making sure all the bits value are used up */
	{
		bits_to_flip += xor_val & 1; /* check the LSB */
	}
	return (bits_to_flip);
}
