#include "main.h"

/**
 * print_line - Draws a straight line in the terminal.
 * @n: The number of underscores to be printed.
 */
void print_line(int n)
{
	int count;

	for (count = 0; count < n; count++)
		_putchar('_');
	_putchar('\n');
}
