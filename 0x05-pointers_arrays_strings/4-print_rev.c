#include "main.h"

/**
 * print_rev - displays a string in reverse order followed by a newline.
 *
 * @s: pointer to the string to be printed
 *
 * Return: None
*/


void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	while (i--)
		_putchar(s[i]);
	_putchar('\n');
}
