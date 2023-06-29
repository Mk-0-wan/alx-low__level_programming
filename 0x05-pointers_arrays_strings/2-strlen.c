#include "main.h"
/**
 * _strlne - calculate the length of chars
 * @s: param for the string passed
 * Return: value of length
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s++)
	{
		length++;
	}
	return (length);
}
