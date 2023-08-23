#include "main.h"

/**
 * swap_int - exchanges the values of two integers
 * provided as input parameters.
 *
 * @a: the first input parameter
 * @b: the second input parameter
 *
 * Returns: None
*/

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
