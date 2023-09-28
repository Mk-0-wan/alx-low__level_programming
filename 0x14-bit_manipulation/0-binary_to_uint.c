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

/**
 * _atoi - return an int value from a string
 * @str: string value passed
 * Return: the int value from a string
 */
int _atoi(char *str)
{
	int sign = 1, i = 0;
	unsigned int result = 0;

	while (!(str[i] <= '9' && str[i] >= '0') && str[i] != '\0')
	{
		if (str[i] == '-')
		{
			sign *= -1;
		}
		i++;
	}
	while (str[i] <= '9' && (str[i] >= '0' && str[i] != '\0'))
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	result *= sign;
	return (result);
}
/**
 * binary_to_uint - transforms string binary to int.
 * @b: pointer to a memory location containing bit representation of number
 * Return: digit value of the binary representation
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0;
	unsigned int pos = 0;
	unsigned int rem = 0;
	unsigned int bin = 0;
	int i = 0;
	char *local;


	if (!b)
		return (0);

	local = (char *)b;

	while (local[i] != '\0')
	{
		if (local[i] != '1' && local[i] != '0')
			return (0);

		else
			bin = _atoi(local);
		i++;
	}

	while (bin > 0)
	{
		rem = bin % 10;
		bin /= 10;
		dec += rem  * _pow_recursion(2, pos);
		pos++;
	}
	return (dec);
}
