#include <stdio.h>

/**
 * main - Entry point
 *
 * Description:
 * Task: "Numberz"
 * function prints single digit numbers of base 10 starting from 0,
 * followed by a new line.
 * 
 * Return: 0 Always (success).
 */
int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		putchar(n + '0');
		n++;
	}
	putchar('\n');
	return (0);
}
