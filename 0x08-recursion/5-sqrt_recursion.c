#include "main.h"
/**
 * sqrT - this will act as our square root recursive function
 * @value: value given to find the square root
 * @guess: multiplied together and check if it matches the value passed
 * product of two identical number will always give you the square number
 * @precision: used to make the guessing have a limit of how
 * far they should be from the correct square root value
 * Return: int value found matching the n value when multiplied
 * together.
 */
int sqrT(int value, int guess, int precision)
{
	int x;

	if ((guess * guess) >= value && (guess * guess - value) <= precision)
	{
		return (guess);
	}
	x = sqrT(value, (guess + value / guess) / 2, precision);
	return (x);
}
/**
 * _sqrt_recursion - returns the square root of a given number
 * @n: integer passed
 * Return: int value of the square root value
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1); /* can't handle negative numbers */
	if (n == 0 || n == 1)
		return (1);
	/* call another recursive function */
	return (sqrT(n, n / 2, 0));
}

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int r;


	r = _sqrt_recursion(16777216);
	printf("%d\n", r);
	r = _sqrt_recursion(1);
	printf("%d\n", r);
	r = _sqrt_recursion(4096);
	printf("%d\n", r);
	return (0);
}
