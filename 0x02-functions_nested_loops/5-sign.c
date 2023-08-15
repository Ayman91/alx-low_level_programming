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
	int sign;

	switch (n)
	{
		case 0:
		_putchar(48);
		sign = 0;
		break;
		case 1:
		_putchar(43);
		sign = 1;
		break;
		default:
		_putchar(45);
		sign = -1;
		break;
	}
return (sign);
}
