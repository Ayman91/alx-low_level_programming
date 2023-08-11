#include <stdio.h>

/**
 * main - Entry point
 *
 * Description:
 * Task: "Numbers".
 * function that prints single digit numbers of base 10.
 * starting from 0, followed by a new line.
 *
 * Return: 0 Always (success).
 */
int main(void)
{
	int digit;

	for (digit = 0; digit <= 9; digit++)
	{
		printf("%d", digit);
	}
	printf("\n");
	return (0);
}
