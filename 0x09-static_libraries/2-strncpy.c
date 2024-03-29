#include "main.h"

/**
 * _strncpy - Copies a string.
 * @dest: The buffer to copy to.
 * @src: The string to copy.
 * @n: The maximum number of characters to copy.
 *
 * Return: A pointer to the destination string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}
