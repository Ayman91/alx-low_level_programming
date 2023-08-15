#include <stdio.h>

/**
* main - Entry point
*
* Description:
* whatever:
*
* Return: 0 Always (Success)
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
