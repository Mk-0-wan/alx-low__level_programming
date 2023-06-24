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
		_putchar(48);
		for (mul = 1; mul <= 9; mul++)
		{
			prod = x * mul;
			_putchar(44);
			_putchar(32);
			if (prod <= 9)
			{
				_putchar(32);
				_putchar(prod + 48);
			}
			else
			{
				_putchar((prod / 10) + 48);
				_putchar((prod % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
