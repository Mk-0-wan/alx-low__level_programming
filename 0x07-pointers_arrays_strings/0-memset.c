#include "main.h"
/**
 * _memset - putting stirngs of chars
 * @s:return pointer to the mem area s
 * @b:chars to be repeated
 * @n:size of the array
 * Return: pointer
 */ 
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	
	for (i = 0;i < n; i++)
	{
		s[i] = b;
	}
	return s;
}
