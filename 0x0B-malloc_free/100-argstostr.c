#include "main.h"
/**
 * _strlen - length of a string of chars
 * @str: pointer to a string of chars
 * Return: length of the string pointer
 */
int _strlen(char *str)
{
	int len = 0;

	while (str && str[len])
	{
		len++;
	}
	return (len);
}
/**
 * argstostr - sorting the arguments passed
 * @ac: number of argument list passed
 * @av: array of arguments passed
 * Return: pointer to the a new appended string
 */
char *argstostr(int ac, char **av)
{
	int i = 0, j = 0, len = 0, t_len = 0;
	char *element, *strings;

	if (ac == 0 || av == NULL)
		return (NULL);
	/* getting the length of the array */
	while (i < ac)
	{
		t_len += _strlen(av[i] + 1);
		i++;
	}
	/* allocate memory to each string of char in the array */
	element = malloc((t_len + 1) * sizeof(char));
	/* creating also room for the null byte */
	MALLOC_CHECK(element);
	strings = element;
	while (j < ac)
	{
		for (len = 0; av[j][len]; len++)
			*element++ = av[j][len];
		*element++ = '\n';
		j++;
	}
	*element = '\0';
	return (strings);
}
