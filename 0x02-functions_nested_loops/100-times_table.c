#include "main.h"

/**
 * print_times_table - making the times tabel from the give param
 * @n: multiplication tabel origin
 *
 * Return: void (just make the multi table)
 */
void print_times_table(int n)
{
	int first, second, value;

	if (n >= 0 && n <= 15)
	{
		for (first = 0; first <= n; first++)
		{
			_putchar(48);
			for (second = 0; second <= n; second++)
			{
				value = first * second;
				_putchar(44);
				_putchar(32);
				if (value <= 9)
				{
					_putchar(32);
					_putchar(32);
					_putchar(value + 48);
				}
				else if (value <= 99)
				{
					_putchar(32);
					_putchar((value / 10) + 48);
					_putchar((value % 10) + 48);
				}
				else
				{
					_putchar(((value / 100) % 10) + 48);
					_putchar(((value / 10) % 10) + 48);
					_putchar((value % 10) + 48);
				}
			}
			_putchar('\n');
		}
	}
}
