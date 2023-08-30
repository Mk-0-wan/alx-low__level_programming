#include "main.h"
/**
 * factorial - function that prints the factorial value of
 * given number.
 * @n: an integer number
 * Return: factorial value of the given number.
 */
int factorial(int n)
{
	if (n < 0) /* two exit points */
		return (-1);
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1)); /* products of all the numbers below it. */
}
