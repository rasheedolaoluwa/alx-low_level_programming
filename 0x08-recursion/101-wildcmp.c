#include "main.h"

/**
 * wildcmp - compares two strings, considering wildcards
 * @s1: the primary string
 * @s2: the string to compare, can contain wildcard '*'
 *
 * Return: 1 if considered identical, otherwise 0
 */
int wildcmp(char *s1, char *s2)
{
	if (!*s1)
	{
		while (*s2 == '*')
			s2++;
		return (!*s2);
	}
	if (*s2 == '*')
	{
		if (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1))
			return (1);
	}
	else if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	return (0);
}
