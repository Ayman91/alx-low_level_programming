#include "main.h"

/**
* print_numbers - print 0 - 9
*
* Return: The function always returns 0 to indicate success.
*/

void print_numbers(void)
{
	for (int num = 0; num <= 9; num++)
		_putchar(num + 48);
	_putchar('\n');
}
