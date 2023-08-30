#include "main.h"
/**
 * is_prime_number_rc - indicates if its a prime number
 * @n: input int datatype given
 * @x: divisor
 * Return: 1 if prime 0 false
 */
int is_prime_number_rc(int n, int x)
{
	if (n <= 0 || n == 1) /* absolute values and negative ints */
		return (0);
	if (n == x) /* exit point (number is a prime) */
		return (1);
	if (n % x == 0) /* prime only divisible by themselves and 1 */
		return (0);
	return (is_prime_number_rc(n, (x + 1))); /* move to the next divisor */
}
/**
 * is_prime_number - indicates if its a prime number
 * @n: input int datatype given
 * Return: calls another recursive function
 */
int is_prime_number(int n)
{
	return (is_prime_number_rc(n, 2)); /* Starting at the lowest prime number 2 */
}
