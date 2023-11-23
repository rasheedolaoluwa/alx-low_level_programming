#include "main.h"
#include <stdlib.h>

/**
 * clear_bit - Sets the value of a bit to 0 at a specified index in a number.
 * @n: Pointer to the number in which the bit is to be cleared.
 * @index: The index at which to clear the bit, starting from 0.
 *
 * Description: This function modifies the value of a bit within a number
 * pointed to by 'n', setting it to 0 at the position specified by 'index'.
 * It uses bitwise AND and NOT operations to ensure only the specified bit
 * is altered. If the index is beyond the range of bits in an unsigned long int
 * the function returns -1, indicating an error.
 *
 * Return: 1 if the bit was successfully cleared, or -1 if an error occurs
 * (e.g., if the index is out of range).
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(*n) * 8 - 1)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
