#include "main.h"

/**
 * print_alphabet_x10 - Prints 10 times the alphabet, in lowercase,
 *                      followed by a new line.
 */
void print_alphabet_x10(void)
{
	int round;
	char letter;

	for (round = 0; round < 10; round++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}
