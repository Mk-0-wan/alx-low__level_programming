#include "main.h"

/**
 * _puts - output the strings to the stdio
 * @s:param where the string will be passed
 * Return: void
 */
void _puts(char *s)
{
	for (; *s != '\0'; s++)
	{
		_putchar(*s);
	}
	_putchar('\n');
}
