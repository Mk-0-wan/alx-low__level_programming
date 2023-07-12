#include <stdio.h>
#include "main.h"
/**
 * main - prints all the arguments passed
 * @argc: number of arguments passed
 * @argv: array containing arguments passed
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int i = 0;

	for (; i < argc; i++)
	{
		printf("%s\n", argv[]);
	}

	return (0);
}
