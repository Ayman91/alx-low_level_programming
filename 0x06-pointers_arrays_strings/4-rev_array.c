#include "main.h"

/**
 * reverse_array - function that reverses array of integers.
 * @a: array of integers
 * @n: number of array elements
 *
 * Return: nothing.
*/

void reverse_array(int *a, int n)
{
	int i, j, t;

	for (i = 0, j = (n - 1); i < j; i++, j--)
	{
		t = a[i];
		a[i] = a[j];
		a[j] = t;
	}
}
