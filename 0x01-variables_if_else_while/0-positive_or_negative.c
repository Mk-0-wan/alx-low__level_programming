#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - this function is used to check whether the
 *random numbers provided are positive or negative
 *
 *Return: Always - 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	return (0);
}

