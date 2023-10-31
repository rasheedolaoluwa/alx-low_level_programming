#include "main.h"
#include <stdlib.h>

/**
 * wordcount - Counts the number of words in a string.
 * @str: The string.
 *
 * Return: The number of words in the string.
 */
int wordcount(char *str)
{
	int i, words = 0, in_word = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && in_word == 0)
		{
			in_word = 1;
			words++;
		}
		else if (str[i] == ' ')
			in_word = 0;
	}
	return (words);
}

/**
 * strtow - Splits a string into words.
 * @str: The string.
 *
 * Return: Pointer to an array of strings (words),
 *         or NULL if failure.
 */
char **strtow(char *str)
{
	int i, j = 0, k = 0, l = 0, words, len = 0;
	char **tab;

	if (str == NULL || *str == '\0')
		return (NULL);

	words = wordcount(str);
	if (words == 0)
		return (NULL);

	tab = malloc(sizeof(char *) * (words + 1));
	if (tab == NULL)
		return (NULL);

	for (i = 0; i < words; i++)
	{
		while (str[j] == ' ')
			j++;

		l = j;
		while (str[l] != ' ' && str[l] != '\0')
			l++;

		len = l - j;
		tab[i] = malloc(sizeof(char) * (len + 1));
		if (tab[i] == NULL)
		{
			while (i >= 0)
				free(tab[i--]);
			free(tab);
			return (NULL);
		}

		for (k = 0; k < len; k++, j++)
			tab[i][k] = str[j];
		tab[i][k] = '\0';
	}
	tab[i] = NULL;
	return (tab);
}
