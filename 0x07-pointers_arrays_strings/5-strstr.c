#include "main.h"

/**
 * _strstr - Locates a substring.
 * @haystack: The string to be searched.
 * @needle: The substring to be located.
 *
 * Return: A pointer to the beginning of the located substring,
 *         or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, start;

	i = 0;
	while (haystack[i] != '\0')
	{
		start = i;
		j = 0;
		while (needle[j] != '\0' && haystack[i] == needle[j] && haystack[i] != '\0')
		{
			i++;
			j++;
		}
		if (needle[j] == '\0')
			return (&haystack[start]);
		i = start + 1;
	}
	return (NULL);
}
