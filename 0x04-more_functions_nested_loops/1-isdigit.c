#include "main.h"

/**
 * _isdigit - Function for validating if the given input 'c'
 * is a digit in the range of 0-9.
 *
 * @c: function argument type of integer
 *
 * Return: Returns 1 if the character is a digit,
 * and 0 if it is not.
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
