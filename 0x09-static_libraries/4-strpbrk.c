#include "main.h"
/**
 * _strpbrk - Entry point
 * @s: pointer to a string
 * @accept: pointer to a string of accepted chars
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
		int k;

		while (*s)
		{
			for (k = 0; accept[k]; k++)
			{
			if (*s == accept[k])
			return (s);
			}
		s++;
		}

	return ('\0');
}
