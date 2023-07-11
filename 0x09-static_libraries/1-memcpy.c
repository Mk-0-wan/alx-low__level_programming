#include "main.h"
/**
 * _memcpy - copy the strings of one pointer to another
 * @dest:input
 * @src:input
 * @n:input
 * Return: Always 0 (Success)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = n;
	int i = 0;

	for (; i < r; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
