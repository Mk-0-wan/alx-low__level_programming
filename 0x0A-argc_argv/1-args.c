#include "main.h"
#include <stdio.h>

/**
 * main - prints the length of arguments passed
 * @argc: number of arguments passed
 * @argv: list of arguments passed
 * Return: 0 successful
 */
int main(int argc, char *argv[])
{
	int count = 0;
	(void)argv;

	count = argc - 1; /* remove the first file name count */
	printf("%d\n", count);
	return (0);
}
