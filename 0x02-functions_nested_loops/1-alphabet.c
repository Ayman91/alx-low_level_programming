#include"main.h"

/**
 * print_alphabet -function that utilizes on the _putchar
 * function to print the alphabet a - z to the console
*/

void print_alphabet(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
