#include "main.h"

/**
 * _strncat - pointer to an appended string of chars specified
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 * @n: integer value of how many string of chars should be appended
 * to the destination string
 * Return: 0 success
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0, space_left;
	char *temp = dest;

	while (*dest != '\0')
	{
		dest++;
		dest_len++;
	}
	if (n > 0)
	{
		space_left = sizeof(dest) - dest_len - 1;
		if (n > space_left)
		{
			n = space_left;
		}
		else
		{
			return (temp);
		}
	}
	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	*dest = '\0';
	return (temp);
}
