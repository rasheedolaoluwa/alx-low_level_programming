#include "main.h"

/**
 * _memcpy - Copies memory area.
 * @dest: Memory where it is stored.
 * @src: Memory where it is copied from.
 * @n: Number of bytes.
 *
 * Return: Copied memory with n bytes changed.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int r;

	for (r = 0; r < n; r++)
	{
		dest[r] = src[r];
	}
	return (dest);
}
