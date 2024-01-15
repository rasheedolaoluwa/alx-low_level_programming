#include "main.h"
/**
 * _strncat - concatenates two strings,
 * @dest: destination.
 * @src: source.
 * @n: amount of bytes used from src.
 * Return: the pointer to dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int byte1 = 0, byte2 = 0;

	while (*(dest + byte1) != '\0')
	{
		byte1++;
	}

	while (byte2 < n)
	{
		*(dest + byte1) = *(src + byte2);
		if (*(src + byte2) == '\0')
			break;
		byte1++;
		byte2++;
	}
	return (dest);
}

