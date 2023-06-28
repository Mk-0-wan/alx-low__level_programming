#include <stdio.h>
/**
 * print_to_98 - truncate or add a given int to 98
 * @n: starting point for the expression
 *
 * Return : void nothing but the list of all the x int times
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		for (; n > 98; n--)
		{
			printf("%d, ", n);
		}
	}
	else if (n < 98)
	{
		for (; n < 98; n++)
		{
			printf("%d, ", n);
		}
	}
	else
	{
		printf("%d", n);
	}
	printf("\n");
}

