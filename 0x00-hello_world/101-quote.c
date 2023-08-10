#include <unistd.h>

/**
 * main - Entry point
 *
 * Description:
 * The main function, a quote is written to error output using write.
 * message: "and that piece of art is useful\" - Dora Korpar, 2015-10-19".
 * The program exits with a status of 1.
 *
 * Return: Always 1 (Success)
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
