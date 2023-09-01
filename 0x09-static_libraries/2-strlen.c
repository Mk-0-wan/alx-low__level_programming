#include "main.h"

/**
 * _strlen - return the length of an array
 * @s: array of chars
 * Return: number of chars in a string
 */
int _strlen(char *s)
{
	size_t len = 0;

	while (s && s[len])
	{
		len++;
	}
	return (len);
}
