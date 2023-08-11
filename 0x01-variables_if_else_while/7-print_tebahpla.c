#include <stdio.h>

/**
 * main - Entry point
 *
 * Description:
 * Task: "Smile in the mirror"
 * function that prints the lowercase alphabet in
 * reverse, followed by a new line.
 *
 * Return: 0 Always (success).
 */
int main(void)
{
	char currentChar = 'z';

	while (currentChar >= 'a')
	{
		putchar(currentChar);
		currentChar--;
	}
	putchar('\n');
	return (0);
}
