#include "main.h"

/**
 * _strcmp - compare string values
 * @s1: input value
 * @s2: input value
 *
 * Description: This function compares the characters of two strings s1 and s2
 * character by character. If a discrepancy is found, it returns the ASCII
 * difference of the characters, else it returns 0 if the strings are identical.
 *
 * Return: s1[i] - s2[i] if the strings are different, 0 if they are identical.
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
