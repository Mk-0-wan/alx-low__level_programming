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

    /*set the number into the highest value which will depend on the system*/
    mask = _power(2, sizeof(unsigned long int) * 8 - 1); 
    /*now start comparing the bits using the bitwise operations*/
	while (mask != 0)
	{
        /*here we are checking for the only the two different state and returning a false bit value which is zero*/
		if ((n & mask) == 0 && (flag || mask == 0x01))
		{
			_putchar('0');
		}
        /*checking the true value which will always be 1 while also setting the value of flag to one*/
		else if ((n & mask) != 0)
		{
			_putchar('1');
			flag = 1;
		}
        /*shifting to the right means removing one bit in our case to get the actual value*/
		mask >>= 1;
	}
}
