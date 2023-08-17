#include "main.h"

/**
* print_numbers - print 0 - 9
*
* Return: The function always returns 0 to indicate success.
*/

void print_numbers(void)
{
	int num = 0;

	do {
		_putchar(num + 48);
		num++;
	} while (num >= 0 && num <= 9);
	_putchar('\n');
}