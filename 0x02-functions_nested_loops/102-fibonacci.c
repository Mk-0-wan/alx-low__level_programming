#include <stdio.h>

/**
 * main - list out all the number of fibonacci numbers
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int k;
	long int a, b, c;

	a = 1;
	b = 2;
	printf("%ld, %ld", a, b);
	for (k = 0; k <= 50; k++)
	{
		c = a + b;
		printf(", %ld", c);
		a = b;
		b = c;
	}
	printf("\n");
}
