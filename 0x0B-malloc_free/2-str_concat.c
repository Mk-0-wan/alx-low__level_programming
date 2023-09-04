#include "main.h"

/**
 * str_concat - appending two strings together.
 * @s1: pointer to the string to append to
 * @s2: pointer to the string we are appending to s1
 * Return: pointer to the new created string.
 */
char *str_concat(char *s1, char *s2)
{
	size_t len = 0, i = 0, len1 = 0, j = 0;
	char *s;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	while (s1[len])
		len++;
	while (s2[len1])
		len1++;
	/* give the size according to the len of both strings */
	s = malloc((len + len1 + 1) * sizeof(char));
	MALLOC_CHECK(s);
	while (i < len)
	{
		/* copy into individual string to new mem */
		s[i] = s1[i];
		i++;
	}
	while (j < len1)
	{
		/* add to the remaining space */
		s[i + j] = s2[j];
		j++;
	}
	s[len + len1] = '\0';
	return (s);
}
