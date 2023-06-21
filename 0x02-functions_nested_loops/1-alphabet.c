#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * print-alphabets - prints all the lowercase letters
 *
 * Return: void 0.
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
