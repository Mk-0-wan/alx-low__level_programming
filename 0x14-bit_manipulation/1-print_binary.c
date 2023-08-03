#include "main.h"
/**
 * print_binary - prints a binary number using bit shifting and masks
 * @n: number to print
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned int mask = 32768; 
	char flag = 0; /*will be used for bit comparison*/

	while (mask > 0)
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
