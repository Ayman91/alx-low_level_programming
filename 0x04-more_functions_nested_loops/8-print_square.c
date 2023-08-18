#include "main.h"

/**
 * print_square - Prints a square pattern using underscores '_'
 * based on the provided number 'n'.
 *
 * @n: Number of '_' characters per side of the square.
 *
 * Return:void
 */

void print_square(int n)
{

	int i = 0, j;

	while (i < n && n > 0)
	{
		j = 0;
		while (j < n)
		{
			_putchar('#');
			j++;
		}

		_putchar('\n');
		i++;
	}
	if (i == 0)
		_putchar('\n');

}
