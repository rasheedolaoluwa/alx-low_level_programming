#include "main.h"

/**
 * print_square - Prints a square using the # character.
 * @size: The size of the square.
 */
void print_square(int size)
{
	int width, length;

	if (size > 0)
	{
		for (width = 0; width < size; width++)
		{
			for (length = 0; length < size; length++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
