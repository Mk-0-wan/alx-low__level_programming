#include "main.h"
#include <stdlib.h>

/**
 * print_last_digit - Entry point
 *
 * @num1: used to store the digits passed in as the argument for conversion
 *
 * Return: void returns the results
 *
 */
int print_last_digit(int num1)
{
	int x;

	if (num1 < 0)
	{
		x = (abs(num1) % 10);
		_putchar(x + '0');
		return (x);
	}
	else
	{
		x = num1 % 10;
		_putchar(x + '0');
		return (x);
	}
}
