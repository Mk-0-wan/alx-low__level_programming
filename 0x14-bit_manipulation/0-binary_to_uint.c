#include "main.h"
/**
 * _strlen - counts the number of chars in the string
 * @str: the actual string
 * Return: length of the string
 */
int _strlen(const char *str)
{
	unsigned int len;

	len = 0;
	while (*str++)
	{
		len++;
	}
	return (len);
}
/**
 * binary_to_uint - converts string of binary into actual numbers of base 10
 * @b: the string containing the entire bits
 * Return: integer in base 10
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0, s = 0, decimal = 0, j = 0;
	unsigned int number, *digits;

	if (b == NULL || (b[i] != '1' && b[i] != '0'))
	{
		return (0);
	}

	digits = malloc(_strlen(b) * sizeof(int));

	if (!digits)
	{
		printf("Memory allocation failed");
		exit(98);
	}

	while (b[i] != '\0')
	{
		if (b[i] >= '0' && b[i] <= '9')
		{
			number = b[i] - '0';
			digits[j++] = number;
		}
		else
			break;
		i++;
	}

	for (; s < j; s++)
	{
		decimal = decimal * 2 + digits[s];
	}

	free(digits);
	return (decimal);
}
