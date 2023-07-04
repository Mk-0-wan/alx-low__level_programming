#include "main.h"
/**
 * _strchr - getting a char from a string of char
 * @s:input
 * @c:char to be on the look for
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c);
{
	int i;
	
	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return (NULL);
}
