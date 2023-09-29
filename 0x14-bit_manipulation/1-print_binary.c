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
	uli mask;
	int bit = 0;


	if (n == 0)
		_putchar('0');

	/* create a bit field */
	mask = 1UL << (sizeof(uli) * BITZ - 1);


	/* get the bits value */
	while (mask != 0)
	{
		if (n & mask)
		{
			_putchar('1');
			bit = 1;
		}
		else if (bit) /* otherwise set the val to false */
			_putchar('0');
		mask >>= 1; /* shift one bit right */
	}
}
