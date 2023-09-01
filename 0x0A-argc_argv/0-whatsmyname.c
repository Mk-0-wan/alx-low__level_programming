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
	if (argc < 1)
		return (-1);

	printf("%s\n", argv[0]);

	return (0);
}
