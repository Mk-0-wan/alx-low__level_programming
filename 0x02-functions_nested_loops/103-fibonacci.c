#include <stdio.h>
/**
 * main - total number of all the even num is fibonacci
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	long int a, b, c, total;

	a = 1;
	b = 2;
	total = c = 0;

	while (a <= 4000000)
	{
		total = a + b;
		a = b;
		b = total;

		if ((a % 10) == 0)
		{
			c += a;
		}
	}
	printf("%ld\n", c);
	return (0);
}
