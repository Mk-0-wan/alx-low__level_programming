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
 * argstostr - string
 * @ac: argument length
 * @av: string of char
 * Return: pointer
 */
char *argstostr(int ac, char **av)
{
	int i = 0, n = 0, len = 0;
	char *element, *string;

	if (ac <= 0 || av == NULL)
		return (NULL);

	while (i < ac)
	{
		len += _strlen(av[i]) + 1; /* 1 is space for additional new line */
		i++;
	}
	element = malloc(sizeof(char) * len + 1); /* null terminator */
	MALLOC_CHECK(element);
	string = element;

	i = 0;
	while (i < ac)
	{
		for (n = 0; av[i][n]; n++)
		{
			*element++ = av[i][n];
		}
		*element++ = '\n';
		i++;
	}
	*element = '\0';
	return (string);
}
