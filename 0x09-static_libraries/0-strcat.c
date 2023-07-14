#include "main.h"
/**
 * _strcat - Entry point adding two
 * strings together
 * @dest:where to add to
 * @src:second one to add to
 * Return: the two string attached together
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest = '\0';
	return (dest);
}
