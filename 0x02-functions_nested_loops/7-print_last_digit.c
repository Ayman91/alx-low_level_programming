#include "main.h"

/**
 * print_last_digit - prints last digit of a
 * given number.
 *
 * @n: function parameter of integer input.
 *
 * Return: lastDigit
*/

int print_last_digit(int n)
{
	int last = n % 10;

	if (last < 0)
	{
		last = last * -1;
	}
	_putchar('0' + last);
	return (last);
}
