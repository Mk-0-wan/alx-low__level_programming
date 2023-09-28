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
	unsigned long bits_to_flip = 0;
	/* exclusive or of the two int's */
	unsigned long x0r_val = (n ^ m);

	while (x0r_val > 0) /* making sure all the bits value are used up */
	{
		bits_to_flip += x0r_val & 1; /* check the LSB */
		x0r_val >>= 1;/* divide by 2 to always get the LSB */
	}
	return (bits_to_flip);
}
int main(void)
{
    unsigned int n;

    n = flip_bits(1024, 1);
    printf("%u\n", n);
    n = flip_bits(402, 98);
    printf("%u\n", n);
    n = flip_bits(1024, 3);
    printf("%u\n", n);
    n = flip_bits(1024, 1025);
    printf("%u\n", n);
    return (0);
}
