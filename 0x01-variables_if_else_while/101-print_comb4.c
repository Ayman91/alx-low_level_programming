#include <stdio.h>

/**
 * main - Entry point
 *
 * Description:
 * Task: "The success combination in business is:
 * Do what you do better... and: do more of what you do...".
 * function that prints all possible different combinations of three digits.
 * Return: 0 Always (success).
 */
int main(void)
{
	int first_digit, second_digit, third_digit;
	int first_round = 1;

	for (first_digit = 0; first_digit <= 7; first_digit++)
	{
		for (second_digit = first_digit + 1; second_digit <= 8; second_digit++)
		{
			for (third_digit = second_digit + 1; third_digit <= 9; third_digit++)
			{
				if (!first_round)
				{
					putchar(',');
					putchar(' ');
				}
				putchar('0' + first_digit);
				putchar('0' + second_digit);
				putchar('0' + third_digit);
				first_round = 0;
			}
		}
	}
	putchar('\n');
	return (0);
}
