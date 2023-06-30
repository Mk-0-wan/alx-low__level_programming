#include "main.h"
#include <stdio.h>
/**
 * print_rev - output the reverse order of a string
 * @s: placeholder for the string passed as an argument
 *
 * Return: void only prints out the result
 */
void print_rev(char *s)
{
	int len;

	while (s[len] != '\0')
	{
		len++;
	}

	for (len -= 1; len >= 0; len--)
	{
		_putchar(s[len]);
	}
	_putchar('\n');
}
