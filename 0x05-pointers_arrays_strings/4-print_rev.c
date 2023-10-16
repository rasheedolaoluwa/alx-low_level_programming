#include "main.h"

/**
 * print_rev - Prints a string in reverse followed by a new line
 * @s: The string to be printed
 *
 * Return: void
 */
void print_rev(char *s)
{
	int length = 0;

	/* find the length of the string */
	while (s[length] != '\0')
	{
		length++;
	}

	/* start from the end of the string */
	for (length = length - 1; length >= 0; length--)
	{
		_putchar(s[length]);
	}

	/* print a new line */
	_putchar('\n');
}
