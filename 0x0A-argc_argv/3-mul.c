#include "main.h"
#include <stdio.h>
/**
 * main - multiple of two arguments
 * @argc: argument count
 * @argv: list of arguments passed
 * Return: 0 success 1 error
 */
int main(int argc, char *argv[])
{
	int x = 0, y = 0, result = 0;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		x = _atoi(argv[1]);
		y = _atoi(argv[2]);
		result = (x * y);
		printf("%d\n", result);
	}
	return (0);
}
