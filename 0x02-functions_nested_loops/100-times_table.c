#include "main.h"

/**
 * print_times_table - prints the n times table.
 * @n: The multiplication table requested.
 */

void print_times_table(int n)
{
	int i, x, y;

	if (n <= 15 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');

			for (x = 1; x <= n; x++)
			{
				_putchar(',');
				_putchar(' ');

				y = i * x;

				if (y <= 99)
					_putchar(' ');
				if (y <= 9)
					_putchar(' ');

				if (y >= 100)
				{
					_putchar((y / 100) + '0');
					_putchar(((y / 10)) % 10 + '0');
				}
				else if (y <= 99 && y >= 10)
				{
					_putchar((y / 10) + '0');
				}
				_putchar((y % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
