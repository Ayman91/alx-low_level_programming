#include "main.h"

/**
 * print_diagonal - Prints a diagonal pattern using
 * backslashes '' based on the provided number 'n'.
 *
 * @n: Number of '\' characters to be printed for the diagonal.
 * Return:void
 */

void print_diagonal(int n)
{

	int i = 0, ii;

	while (i < n && n > 0)
	{
		ii = 0;
		while (ii < i)
		{
			_putchar(' ');
			ii++;
		}

		_putchar('\\');
		_putchar('\n');
		i++;
	}
	if (i == 0)
		_putchar('\n');
}
