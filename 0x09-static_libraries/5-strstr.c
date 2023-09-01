#include "main.h"
#include <stdio.h>

/**
 * _strstr - looking for matching string of chars
 * @haystack: pointer to a string to search from
 * @needle: pointer to the string searching for
 * Return: pointer to the string found
 */
char *_strstr(char *haystack, char *needle)
{
	char *match;
	/* check for NULL values */
	if (haystack == NULL || needle == NULL)
		return (NULL);

	while (*haystack != '\0')
	{
		/* looking for matching sub-string */
		if (*haystack == *needle && *needle != '\0')
		{
			match = haystack; /* match found and start counting */
			while (*haystack == *needle)
			{
				haystack++;
				needle++;
			}
			if (*needle == '\0')
				return (match); /* return the sub-string */
		}
		else
			haystack++; /* keep on moving the pointer */
	}
	return (0);
}
