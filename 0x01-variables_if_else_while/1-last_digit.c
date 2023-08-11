#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description:
 * Task: "The last digit".
 * function that process status of n based on it's
 * status prints out a specific string.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;
	int lastN;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastN = n % 10;
	if (lastN > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastN);
	} else if (lastN == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastN);
	} else if (lastN < 6 && lastN != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastN);
	}
	return (0);
}
