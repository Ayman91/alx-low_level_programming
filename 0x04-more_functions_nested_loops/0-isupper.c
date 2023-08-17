#include "main.h"

/**
 * _isupper - function that checks if a character is
 * uppercase
 *
 * @c: function argument type of integer
 *
 * Return: if uppercase (1), else (0).
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
