#include "main.h"
/**
 * sqrT - this will act as our square root recursive function
 * @value: value given to find the square root
 * @guess: multiplied together and check if it matches the value passed
 * product of two identical number will always give you the square number
 * Will use that to our advantage to guess the x values for value
 * Return: int value found matching the n value when multiplied
 * together.
 */
int sqrT(int value, int guess)
{
	if ((guess * guess) < value) /* no square root found */
		return (-1);
	if ((guess * guess) == value) /* square root found (x)**2 */
		return (guess);
	return (sqrT(value, (guess + 1)));
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

	/* call another recursive function */
	return (sqrT(n, 0));
}
