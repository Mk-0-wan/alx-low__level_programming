#include "main.h"

/**
 * times_table - Entry point
 *
 * Return : void, only the multiples of 9
 */
void times_table(void)
{
	int x, mul, prod;

	for (x = 0; x <= 9; x++)
	{
		_putchar('0');
		for (mul = 0; mul <= 9; mul++)
		{
			_putchar(',');
			_putchar(' ');
			prod = x * mul;

			if (prod <= 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((prod / 10) + '0');
				_putchar((prod % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
