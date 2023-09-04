#include "main.h"
/**
 * _strdup - duplicates the string passed to it
 * @str: pointer to a string of chars
 * Return: a pointer to a newly duplicated string from the original.
 */
char *_strdup(char *str)
{
	char *cp_str = str;
	size_t len = 0, i = 0;

	if (!str)
		return (NULL);
	while (str[len])
		len++;

	cp_str = malloc(len * sizeof(char));
	MALLOC_CHECK(cp_str);

	while (i < len)
	{
		cp_str[i] = str[i]; /* copy over each char */
		i++;
	}
	return (cp_str);
}
