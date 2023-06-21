#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * print_alphabet_x10 - print all the lowercase letters ten times.
 *
 * Return: void 0.
 */
void print_alphabet_x10(void)
{
	int i;
	int k;

	for (k = 0; k < 10; k++)
	{
		for (i = 97; i < 123; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
