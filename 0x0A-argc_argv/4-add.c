#include "main.h"
#include <stdio.h>

/**
 * main - add all the arguments together
 * @argc: arguments count
 * @argv: list of arguments passed
 * Return: 0 if blank value given 1 code fail
 */
int main(int argc, char *argv[])
{
	int x = 0, i = 1, result = 0;

	if (argc < 1)
		return (0);

	for (; i < argc; i++)
	{
		x = _atoi(argv[i]);
		if (!x)
		{
			printf("Error\n");
			return (1);
		}
		result += x;
	}
	printf("%d\n", result);
	return (0);
}
