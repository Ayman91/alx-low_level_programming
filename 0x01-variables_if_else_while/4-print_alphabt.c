#include <stdio.h>

/**
 * main - Entry point
 *
 * Description:
 * Task: "When I was having that alphabet soup,
 * I never thought that it would pay off".
 * function that process alphabetic characters and prints out them except the.
 * character "q" and "e".
 * return: 0 Always (success).
 */
int main(void)
{
	char currentChar = 'a';

	while (currentChar <= 'z')
	{
		if (currentChar != 'q' && currentChar != 'e')
		{
			putchar(currentChar);
		}
		currentChar++;
	}
	putchar('\n');
	return (0);
}
