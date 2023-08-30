#include "main.h"
/**
 * _strlen_recursion - string length calculation
 * @s: pointer to a string
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	unsigned int x = 0;
	/* count the number of move you have made with the pointer */
	/* keep track of it */
	/* update the x value and return it as the value */
	if (*s)
	{
		x++;
		x += _strlen_recursion(s + 1);
	}
	return (x); /* add the null terminator */
}
