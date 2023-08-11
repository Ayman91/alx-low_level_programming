#include <stdio.h>

/**
 * main - Entry point
 *
 * Description:
 * Task: "alphABET".
 * function that loops through alphabetic charaters
 * the first for loop will prints (Lowercase) alphabets
 * the second for loop will prints (Uppercase) alphabets
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
