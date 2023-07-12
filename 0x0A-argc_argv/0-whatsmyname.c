#include <stdio.h>
#include "main.h"
/**
 * main - print name of the program
 * @argc: keeps count of the number of arguments
 * @argv: whole array of arguments passed
 * Return: Always 0 (success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}

