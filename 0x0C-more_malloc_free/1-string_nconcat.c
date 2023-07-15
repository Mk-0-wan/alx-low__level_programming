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
	unsigned int i = 0, j = 0, i_len = 0, j_len = 0;

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

	while (i < i_len)
	{
		s[i] = s1[i];
		i++;
	}

	while (n < j_len && i < (i_len + n))
		s[i++] = s2[j++];

	while (n >= j_len && i < (i_len + j_len))
		s[i++] = s2[j++];

	s[i] = '\0';

	return (s);
}
