#include "main.h"
/**
 * _strcpy - a copied string of chars
 * @copy: pointer to the new copied string
 * @original: pointer to the original string
 * Return: pointer to the newly copied string
 */
char *_strcpy(char *copy, char *original)
{
	unsigned int i = 0;

	while (original[i] != '\0')
	{
		copy[i] = original[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
