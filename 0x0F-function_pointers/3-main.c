#include "3-calc.h"

/**
 * main - simple calculator
 * @argv: array of arguments
 * @argc: argument count
 *
 * Return: 0 Always (success)
 */

int main(int argc, char *argv[])
{
	int (*f)(int, int);
	char op;
	int a, b, c;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	f = get_op_func(argv[2]);

	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	op = *argv[2];

	if ((op == '/' || op == '%') && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	c = f(a, b);
	printf("%d\n", c);
	return (0);
}
