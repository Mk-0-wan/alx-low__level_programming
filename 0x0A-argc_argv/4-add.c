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
	int i, result = 0;

	for (i = 1; i < argc; i++)
	{
		if (!atoi(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		result += atoi(argv[i]);
	}
	printf("%d\n", result);
	return (0);
}
