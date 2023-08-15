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
	int lastDigit;

	if (n < 0)
	{
		lastDigit = -1 * (n % 10);
	}
	else
	{
		lastdigit = n % 10;
	}
	_putchar(lastDigit + '0');
	return (lastDigit);
}
