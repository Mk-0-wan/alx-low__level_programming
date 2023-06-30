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
		k = (index - 1) / 2;
		k += 1;
	}
	else
	{
		k = index / 2;
	}

	for (; k > index; k++)
	{
		_putchar(str[k]);
	}
	_putchar('\n');
}
