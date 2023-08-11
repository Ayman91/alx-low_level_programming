#include <stdio.h>

/**
 * main - Entry point
 *
 * Description:
 * Task: "alphABET".
 * function that process status of n based on it's
 * status prints out a specific string.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}

	for (letter = 'A'; letter <= 'Z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
