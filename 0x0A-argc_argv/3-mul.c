#include <stdio.h>
#include "main.h"
/**
 * _atoi - converts %s to %d
 * @s: %s to be converted
 * Return: int value from the string
 */
int _atoi(char* s)
{
	int index = 0;
	int d = 0;
	int n = 0;
	int len = 0;
	int f = 0;
	int digit = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	while(i < len && f == 0)
	{
		if (s[i] == '-')
		{
			++d;
		}

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';

			if (d % 2)
			{
				digit = -digit;
			}
			n = n * 10 + digit;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
			{
				break;
			}
			f = 0;
		}
		i++;
	}
	if (f == 0)
		return (0);

	return (n);
}
/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of passed arguments
 * Return: 0 (success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int r, n1, n2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	n1 = _atoi(argv[1]);
	n2 = _atoi(argv[2]);
	r = n1 * n2;

	printf("%d\n", r);

	return (0);
}
