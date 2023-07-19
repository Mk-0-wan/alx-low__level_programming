#include "3-calc.h"

/**
 * op_add -  sums two numbers
 * @a: argv[1]
 * @b: argv[2]
 *
 * Return: sum of numbers
 */

int op_add(int a, int b)
{
	return ((a) + (b));
}

/**
 * op_sub - subtracts two numbers
 * @a: argv[1]
 * @b: argv[2]
 *
 * Return: difference between the numbers
 */

int op_sub(int a, int b)
{
	return ((a) - (b));
}

/**
 * op_mul - multiply two numbers
 * @a: argv[1]
 * @b: argv[2]
 *
 * Return: product of the numbers
 */

int op_mul(int a, int b)
{
	return ((a) * (b));
}

/**
 * op_div - division operation of two numbers
 * @a: argv[1]
 * @b: argv[2]
 *
 * Return: quotient of the numbers
 */

int op_div(int a, int b)
{
	return ((a) / (b));
}

/**
 * op_mod - modulus of two numbers
 * @a: argv[1]
 * @b: argv[2]
 *
 * Return: division remainder of the numbers
 */

int op_mod(int a, int b)
{
	return ((a) % (b));
}
