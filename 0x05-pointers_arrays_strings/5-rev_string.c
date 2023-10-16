#include "main.h"

/**
 * rev_string - Reverses a string in place.
 * @s: The string to be reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
	int length = 0, index = 0;
	char temp;

	/* Compute string length */
	while (s[length] != '\0')
	{
		length++;
	}

	/* Swap characters to reverse the string */
	for (index = 0; index < length / 2; index++)
	{
		temp = s[index];
		s[index] = s[length - index - 1];
		s[length - index - 1] = temp;
	}
}
