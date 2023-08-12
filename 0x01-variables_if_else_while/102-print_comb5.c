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
			if (first_digit != second_digit)
			{
				putchar((first_digit / 10) + 48);
				putchar((first_digit % 10) + 48);
				putchar(' ');
				putchar((second_digit / 10) + 48);
				putchar((second_digit % 10) + 48);
				if (first_digit != 98 || second_digit != 99)
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
