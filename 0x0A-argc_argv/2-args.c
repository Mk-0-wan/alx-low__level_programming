#include "main.h"
#include <stdio.h>

/**
 * main - print all arguments
 * @argc: arguments count
 * @argv: pointer to an array of strings
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	while (argc--)
	{
		printf("%s\n", *(argv++));
	}
	return (0);
}
