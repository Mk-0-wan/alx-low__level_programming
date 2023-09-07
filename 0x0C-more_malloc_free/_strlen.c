#include "main.h"

/**
 * _strlen - get the length of a string
 * @s: pointer to a string of chars
 * Return: length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len])
	{
		len++;
	}
	return (len);
}
