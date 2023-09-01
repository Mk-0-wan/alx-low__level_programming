#include "main.h"
#include <stdio.h>
/**
 * main - prints the argv[0]
 * @argc: number of counts
 * @argv: list of array of array
 * Return: 0 success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
