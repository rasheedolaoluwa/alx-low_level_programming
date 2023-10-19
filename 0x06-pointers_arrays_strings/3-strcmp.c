#include "main.h"

/**
 * _strcmp - compare string values
 * @s1: input value
 * @s2: input value
 *
 * Description: Compares two strings character by character.
 * If a discrepancy is found, returns the ASCII difference.
 * Returns 0 if the strings are identical.
 *
 * Return: s1[i] - s2[i] if different, 0 if identical.
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
