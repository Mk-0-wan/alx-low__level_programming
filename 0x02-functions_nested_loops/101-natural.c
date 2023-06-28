#include <stdio.h>

/**
 * main - prints out the total of all the multiples of 3&5
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int a, b;

	for (a = 1; a < 1024; a++)
	{
		if ((a % 3) == 0 || (a % 5))
		{
			b += a;
		}
	}
	printf("%d\n", b);
	return (0);
}
