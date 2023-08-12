#include <stdio.h>

/**
 * main - Entry point
 *
 * Description:
 * Task: "Software is eating the World".
 * function that prints all possible different combinations
 * of two two-digit numbers.
 *
 * Return: 0 Always (success).
 */
int main(void)
{
	int first_digit, second_digit;

	for (first_digit = 0; first_digit <= 99; first_digit++)
	{
		for (second_digit = 0; second_digit <= 99; second_digit++)
		{
			if (first_digit <= second_digit)
			{
				putchar('0' + first_digit / 10);
				putchar('0' + first_digit % 10);
				putchar(' ');
				putchar('0' + second_digit / 10);
				putchar('0' + second_digit % 10);
				if (first_digit < 99 || second_digit < 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
