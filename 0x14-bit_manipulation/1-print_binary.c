#include "main.h"
#include <unistd.h>

/**
 * print_binary - prints binary representation of a bit value
 * no use of malloc or arrays together with / and % operators.
 * @n: digit to convert to binary
 * Return: void
 */
void print_binary(unsigned long n)
{
	unsigned long int mask;
	int bit = 0;


	if (n == 0)
		write(1, "0", 1);

	/* create a bit field */
	mask = 1UL << (sizeof(unsigned long) * CHAR_BIT - 1);


	/* get the bits value */
	while (mask != 0)
	{
		if (n & mask)
		{
			write(1, "1", 1); /* if both match and return true */
			bit = 1;
		}
		else if (bit) /* otherwise set the val to false */
			write(1, "0", 1);
		mask >>= 1; /* shift one bit right */
	}
}
