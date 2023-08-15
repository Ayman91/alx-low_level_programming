#include "main.h"

/**
 * main - Starting point
 *
 * Description:
 * Calculates the sum of all
 * numbers that are multiples of 3 or 5
 * below 1024 (excluding 1024).
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int sum, n;

	for (n = 0; n < 1024; n++)
	{
		if ((n % 3 == 0) || (n % 5 == 0))
		{
			sum += n;
		}
	}
	printf("%d\n", sum);
	return (0);
}

