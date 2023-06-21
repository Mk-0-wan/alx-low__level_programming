#include "main.h"

/**
 * print_sign - Entry point
 *
 * print_sign - assingning signs to each digit
 * @n: used to keep the values of int
 *
 * Return: + is gt 1, 0 is eq 0 and - lt.
 */
int print_sign(int n)
{
	if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else if (n > 1)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
