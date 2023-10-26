#include "main.h"

/**
 * check_match - Checks if two strings are identical considering wildcard.
 * @s1: The first string.
 * @s2: The second string.
 * @i: The index of the first string.
 * @j: The index of the second string.
 *
 * Return: 1 if the strings are identical, 0 otherwise.
 */
int check_match(char *s1, char *s2, int i, int j)
{
	/* base case if we reach the end of both strings */
	if (s1[i] == '\0' && s2[j] == '\0')
		return (1);

	/* if the characters match, or if s2 has a wildcard '*' */
	if ((s1[i] == s2[j]) || (s2[j] == '*'))
	{
		if (s2[j] == '*' && s1[i] != '\0')
			return (check_match(s1, s2, i + 1, j) || check_match(s1, s2, i, j + 1));
		return (check_match(s1, s2, i + 1, j + 1));
	}

	return (0);
}

/**
 * wildcmp - Compares two strings considering wildcard.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: 1 if the strings are identical, 0 otherwise.
 */
int wildcmp(char *s1, char *s2)
{
	return (check_match(s1, s2, 0, 0));
}
