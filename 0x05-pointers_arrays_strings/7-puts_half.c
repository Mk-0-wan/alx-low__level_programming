#include "main.h"

/**
 * puts_half - prints the last half of string
 * @str: place holder of the string
 * Return : void
 */
void puts_half(char *str)
{
	int index;
	int chars = 0;

	while (str[chars] != '\0')
	{
		chars++;
	}

	if ((chars % 2) == 1)
	{
		index = (chars - 1) / 2;
		index += 1;
	}
	else
	{
		index = chars / 2;
	}

	for (; index < chars; index++)
	{
		_putchar(str[index]);
	}
	_putchar('\n');
}
