#include "main.h"

/**
 * _strlen - function that calculates and returns length of a string.
 *
 * @s: string input parameter
 *
 * Return: length of the string
*/

int _strlen(char *s)
{
	int counter = 0;

	for (counter; *s != '\0'; s++)
		++counter;
	return (counter);
}
