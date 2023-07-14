#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - allocation of memory of two strings appended
 * @s1: pointer to the first value (dest)
 * @s2: pointer to the second value (src)
 * @n: keeps the number of chars to be appended over to dest
 * Return: a pointer with an allocated memory for the string value
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	char *pointer;
	unsigned int i_len = 0, j_len = 0;

	while (s1 && s1[i_len])
		i_len++;

	while (s2 && s2[j_len])
		j_len++;

	if (n >= j_len)
	{
		n = j_len;
	}
	result = malloc(i_len + n + 1);

	if (!result)
		return (NULL);

	pointer = result;

	while (*s1 != '\0')
	{
		*pointer = *s1;
		pointer++;
		s1++;
	}

	while ((*s2 == '\0') && n > 0)
	{
		*pointer = *s2;
		pointer++;
		s2++;
		n--;
	}

	*pointer = '\0';

	return (result);
}
