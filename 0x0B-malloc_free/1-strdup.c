#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space
 *           in memory, which contains a copy of the string given.
 * @str: the string to duplicate
 *
 * Return: a pointer to the duplicated string, or NULL if it
 * fails or str is NULL
 */
char *_strdup(char *str)
{
	char *duplicate;
	unsigned int i, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	duplicate = malloc((len + 1) * sizeof(char));
	if (duplicate == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		duplicate[i] = str[i];
	duplicate[len] = '\0';

	return (duplicate);
}
