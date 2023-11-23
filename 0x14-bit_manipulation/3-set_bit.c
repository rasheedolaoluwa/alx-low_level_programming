#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a specified index in a number.
 * @n: Pointer to the number where the bit is to be set.
 * @index: The index at which to set the bit, starting from 0.
 *
 * Description: This function alters the value of a bit within a number pointed
 * to by 'n', setting it to 1 at the position specified by 'index'. It uses
 * bitwise OR operation to ensure only the specified bit is altered. If the
 * index is out of the range of an unsigned long int, the function returns -1
 * to indicate an error.
 *
 * Return: 1 if successful in setting the bit, or -1 if an error occurs (e.g.,
 * if the index is out of range).
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bitmask;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	bitmask = 1 << index;
	*n |= bitmask;
	return (1);
}
