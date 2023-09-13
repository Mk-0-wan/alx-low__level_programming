#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - just performs a function call
 * @argc: number of arguments passed
 * @argv: array of arguments passed
 * Return: (0) success
 */
int main(int argc, char *argv[])
{
	op_t opx;
	int x = 0, y = 0, result = 0;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	/* store the operation to the char *op pointer inside the struct */
	opx.op = argv[2];

	/* check out for wrong divisions with zeros */
	if ((*(argv[2]) == '/' || *(argv[2]) == '%') && !atoi(argv[3]))
	{
		printf("Error\n");
		exit(100);
	}

	/* store the arguments in an int variable */
	x = atoi(argv[1]);
	y = atoi(argv[3]);

	opx.f = get_op_func(argv[2]);
	/* check if the function pointer is NULL and elements */
	if (!opx.f || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	result = opx.f(x, y);
	printf("%d\n", result);
	return (0);
}
