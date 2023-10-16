#include "main.h"

/**
 * puts2 - Prints every other character of a string.
 * @str: The string to be processed
 *
 * Return: void
 */
void puts2(char *str)
{
	int index = 0;

	while (str[index] != '\0')
	{
		if (index % 2 == 0)
		{
			_putchar(str[index]);
		}
		index++;
	}
	_putchar('\n');
}
