#include "main.h"
#include <stdio.h>
/**
 * main - prints the argv[0]
 * @argc: number of counts
 * @argv: list of array of array
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	/* nothing special just print out the first argument */
	(void)argc;

	printf("%s\n", argv[0]);

	return (0);
}
