#include "main.h"

/**
 * _strspn - return the length of the matching strings
 * @s: pointer to the original string
 * @accept: pointer to a string to match against the original
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int r, match;

	while (*s)
	{
		match = 0; /* checks for any match from s */
		for (r = 0; accept[r]; r++)
		{
			if (*s == accept[r]) /* looks for all the matching char */
			{
				match = 1;
				break; /* once you see one exit the loop */
			}
		}
		if (!match)
			break;
		n++; /* position of where the match ends */
		s++;
	}
	return (n);
}
