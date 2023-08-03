#include "main.h"
/**
 * _power - calculate (base and power)
 * @base: base of the exponet
 * @pow: power of the exponet
 * Return: value of base and power
 */
unsigned long int _power(unsigned int base, unsigned int pow)
{
	unsigned long int x;
	unsigned int j;

	x = 1;
	for (j = 1; j <= pow; j++)
		x *= base;
	return (x);
}
/**
 * print_binary - prints a binary number using bit shifting and masks
 * @n: number to print
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask; 
	char flag = 0; /*will be used for bit comparison*/

    mask = _power(2, sizeof(unsigned long int) * 8 - 1); 
	while (mask != 0)
	{
		if ((n & mask) == 0 && (flag || mask == 0x01))
		{
			_putchar('0');
		}
		else if ((n & mask) != 0)
		{
			_putchar('1');
			flag = 1;
		}
		mask >>= 1;
	}
}
