#include "main.h"

/**
 * print_sign - Prints "+" if n is greater than zero,
 * "0" if n is zero, and "-" if n is less than zero.
 *
 * @n: Integer input for the function.
 *
 * Return: 1 if positive, 0 if zero, and -1 if negative.
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
