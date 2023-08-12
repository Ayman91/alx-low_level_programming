#include <stdio.h>

/**
 * main - Entry point
 *
 * Description:
 * Task: "Hexadecimal".
 * function that prints all the numbers of base 16
 * in lowercase, followed by a new line.
 *
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
