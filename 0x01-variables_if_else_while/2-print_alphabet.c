#include <stdio.h>

/**
 * main - Entry point
 *
 * Description:
 * Task: "I sometimes suffer from insomnia. And when I can't fall asleep,
 * I play what I call the alphabet game".
 * function that loops through alphabetic characters
 * and prints put every character in a new line.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char startingLetter = 'a';
	char endingLetter = 'z';

	for (; startingLetter <= endingLetter; startingLetter++)
	{
		putchar(startingLetter);
	}
	putchar('\n');
	return (0);
}
