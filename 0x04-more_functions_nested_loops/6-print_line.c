#include "main.h"

/**
 * print_line - Prints a horizontal straight
 * line made of '_' characters.
 *
 * @n: Number of times the '_' character should be printed.
*/

void print_line(int n)
{
	int ch;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (ch = 1; ch <= n; ch++)
			_putchar('_');
		_putchar('\n');
	}
}
