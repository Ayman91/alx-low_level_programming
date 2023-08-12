#include <stdio.h>

/**
 * main - Entry point
 *
 * Description:
 * Task: "Patience, persistence and perspiration
 * make an unbeatable combination for success".
 * function that prints all possible combinations
 * of single-digit numbers.
 *
 * Return: 0 Always (success).
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + '0');
		if (n < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
