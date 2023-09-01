#include "main.h"
#include <stdio.h>

/**
 * _strcat - appends two strings together
 * @dest: pointer to the string to append to
 * @src: pointer to the string to append to the dest
 * Return: pointer to the newly created string
 */
char *_strcat(char *dest, char *src)
{
	char *tmp = dest;

	while (*dest != '\0')
		dest++;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (tmp);
}
