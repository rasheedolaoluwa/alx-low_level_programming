#include "main.h"

/**
 * _puts - Prints a string followed by a new line.
 * @str: The string to be printed.
 */
void _puts(char *str)
{
	int index = 0;

	while (str[index] != '\0')
	{
		_putchar(str[index]);
		index++;
	}
	_putchar('\n');
}

/**
 * main - Entry point.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	_puts("\"Programming is fun");
	return (0);
}
