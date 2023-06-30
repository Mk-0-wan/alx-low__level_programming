#include "main.h"

/**
 * puts2 - output 2char ahead
 * @str: place holder for the actual string
 * Return: void
 */
void puts2(char *str)
{
	int index;
	int len = 0;

	while (s[index++])
	{
		len++;
	}

	for (index = 0; index < len; index += 2)
	{
		_putchar(s[index]);
	}
	_putchar('\n');
}
