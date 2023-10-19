#include "main.h"

/**
 * _strncat - Concatenates two strings using at most n bytes from src.
 * @dest: The destination string.
 * @src: The source string.
 * @n: The maximum number of bytes to use from src.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int index_dest = 0, index_src = 0;

	/* Find the end of the destination string */
	while (dest[index_dest] != '\0')
		index_dest++;

	/* Append the source string to the destination string */
	while (index_src < n && src[index_src] != '\0')
	{
		dest[index_dest] = src[index_src];
		index_dest++;
		index_src++;
	}

	/* Add the terminating null byte */
	dest[index_dest] = '\0';

	return (dest);
}
