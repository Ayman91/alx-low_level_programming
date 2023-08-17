#include <unistd.h>
#include "main.h"

/**
 * _putchar - function that prints out a character.
 * @c: function argument type of integer.
 *
 * Return: 1 (success) - -1 (error)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
