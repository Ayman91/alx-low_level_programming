#include "main.h"

/**
 * _puts - custom function that displays a string
 * followed by a newline on the standard output.
 *
 * @str: string to be displayed
 *
 * Return: None
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++;
	}
	_putchar('\n');
}
