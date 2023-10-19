#include "main.h"

/**
 * cap_string - Capitalizes the first letter of each word in a string.
 * @s: The string to be modified.
 *
 * Return: A pointer to the modified string.
 */
char *cap_string(char *s)
{
	int i = 0;

	/* Capitalize the first character if it is a lowercase letter */
	if (s[i] >= 'a' && s[i] <= 'z')
	{
		s[i] = s[i] - ('a' - 'A');
	}

	/* Iterate through the string */
	for (i = 1; s[i] != '\0'; i++)
	{
		/* Check for delimiters which signify the end of a word */
		if (s[i - 1] == ' ' || s[i - 1] == '\t' || s[i - 1] == '\n' || s[i - 1] == ',' ||
			s[i - 1] == ';' || s[i - 1] == '.' || s[i - 1] == '!' || s[i - 1] == '?' ||
			s[i - 1] == '"' || s[i - 1] == '(' || s[i - 1] == ')' || s[i - 1] == '{' ||
			s[i - 1] == '}')
		{
			/* If the character is a lowercase letter, capitalize it */
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] = s[i] - ('a' - 'A');
			}
		}
	}

	return (s);
}
