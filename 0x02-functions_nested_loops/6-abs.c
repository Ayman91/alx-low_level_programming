#include "main.h"

/**
 * _abs - function that computes the absolute
 * value of an integer
 *
 * @n: this is function parameter of type integer
 *
 * Return: Always 0 (Success)
*/

int _abs(int n)
{
	if (n < 0)
	{
		n = (-1) * n;
	}
	return (n);
}
