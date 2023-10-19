#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	int index_dest = 0, index_src = 0;

	/* Find the end of the destination string */
	while (dest[index_dest] != '\0')
		index_dest++;

	/* Append the source string to the destination string */
	while (src[index_src] != '\0')
	{
		dest[index_dest] = src[index_src];
		index_dest++;
		index_src++;
	}

	/* Add the terminating null byte */
	dest[index_dest] = '\0';

	return (dest);
}
