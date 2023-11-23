#include "main.h"

/**
 * binary_to_uint - Converts a binary number, represented as a string, to an
 *                  unsigned integer.
 * @b: Pointer to a string containing a binary number.
 *
 * Description: This function iterates through each character of the string,
 * ensuring they are valid binary digits ('0' or '1'). It then converts the
 * binary number to its decimal equivalent. If the string is NULL or contains
 * characters other than '0' or '1', the function returns 0.
 *
 * Return: The decimal value of the binary number, or 0 in case of an error or
 * invalid input.
 */
unsigned int binary_to_uint(const char *b)
{
	int a;
	unsigned int num;

	num = 0;
	if (!b)
		return (0);
	for (a = 0; b[a] != '\0'; a++)
	{
		if (b[a] != '0' && b[a] != '1')
			return (0);
	}
	for (a = 0; b[a] != '\0'; a++)
	{
		num <<= 1;
		if (b[a] == '1')
			num += 1;
	}
	return (num);
}
