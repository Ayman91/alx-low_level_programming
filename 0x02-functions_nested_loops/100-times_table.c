#include "main.h"

/**
 * print_times_table - prints time table of n
 *
 * @n: integer number as function parameter
*/

void print_times_table(int n)
{
	int pro, multi, num;

	if (n <= 15 && n >= 0)
	{
		for (num = 0; num <= n; num++)
		{
			_putchar(48);
			for (multi = 1; multi <= n; multi++)
			{
				_putchar(',');
				_putchar(' ');

				pro = num * multi;

				if (pro <= 9)
					_putchar(' ');
				if (pro <= 99)
					_putchar(' ');

				if (pro >= 100)
				{
					_putchar((pro / 100) + 48);
					_putchar((pro / 10) % 10 + 48);
				} else if (pro <= 99 && pro >= 10)
					_putchar((pro / 10) + 48);
				_putchar((pro % 10) + 48);
			}
			_putchar('\n');
		}
	}
}
