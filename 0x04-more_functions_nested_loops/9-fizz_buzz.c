#include "main.h"

/**
 * main - Print numbers 1 to 100, replacing multiples of 3 with Fizz,
 * multiples of 5 with Buzz, and multiples of 3 and 5 with FizzBuzz.
 * Separate each number and word with a space.
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0 && !(n % 5 == 0))
			printf("Fizz");
		else if (n % 5 == 0 && !(n % 3 == 0))
			printf("Buzz");
		else if (n % 3 == 0 && n % 5 == 0)
			printf("FizzBuzz");
		else
			printf("%d", n);
		if (n != 100)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
