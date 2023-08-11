#include <stdio.h>

/**
 * main - Entry point
 *
 * Description:
 * Task: "When I was having that alphabet soup,
 * I never thought that it would pay off".
 * function that process alphabetic characters and prints out them except the.
 * character "q" and "e".
 * Return: 0 Always (success).
 */
int main(void)
{
	char hex_char;

	for (hex_char = '0'; hex_char <= 'f'; hex_char++)
	{
		if (hex_char <= '9' || (hex_char >= 'a' && hex_char <= 'f'))
		{
			putchar(hex_char);
		}
	}
	putchar('\n');
	return (0);
}
