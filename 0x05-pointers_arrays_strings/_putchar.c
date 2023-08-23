#include <unistd.h>

/**
 * _putchar - custom function that writes a character to stdout
 * @c: The character to print
 *
 * Return: 1 (Success).
 * -1 (error).
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
