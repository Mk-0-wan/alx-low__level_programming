#include "main.h"
/**
 * _pow_recursion - replica of the pow function in c
 * @x: value to calculate the power from
 * @y: value holding the power
 * Return: an int holding the power value
 */
int _pow_recursion(int x, int y)
{
	if (y < 0) /* both exit points at -1 and 1*/
		return (-1);

	if (y == 0)
		return (1);
	/* 2 x 2 ^ (y - 1) */
	return (x * _pow_recursion(x, (y - 1)));
	/* value multiplied by the power of the remaining powered values minus 1 */
}
