#include "main.h"

/**
 * string_nconcat - append two string together according to the given n
 * of chars to append to.
 * @s1: pointer to the first string of chars
 * @s2: pointer to the second string of chars
 * @n: number of string to append to s1
 * Return: pointer to the new appended string otherwise NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int len = 0, total_len = 0;
	char *temp;

	if (!s1 || !s2)
		return (NULL);

	len = _strlen(s2);
	if (n > len)
		n = len;

	total_len = _strlen(s1) + n;

	temp = malloc(sizeof(char) * (total_len + 1)); /* null terminator space */
	MALLOC_CHECK(temp);

	while (*s1 != '\0')
	{
		*temp = *s1;
		temp++;
		s1++;
	}

	while (n > 0)
	{
		*temp = *s2;
		temp++;
		s2++;
		n--;
	}
	*temp = '\0';
	return (temp - total_len);
}
