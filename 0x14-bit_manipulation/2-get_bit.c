#include "main.h"

/**
 * get_bit - Retrieves the value of a bit at a specified index in a number.
 * @n: The number whose bits are to be checked.
 * @index: The index at which to check the bit, starting from 0.
 *
 * Description: This function checks the value of a bit at a specific index
 * within a number 'n'. It uses bitwise operations to isolate the bit at the
 * given index. If the index is out of the range of the number of bits in an
 * unsigned long int, the function returns -1 to indicate an error.
 *
 * Return: 1 if the bit at the index is 1, 0 if it's 0, or -1 if an error
 * occurs (e.g., if the index is out of range).
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	mask = 1 << index;
	if (n & mask)
		return (1);
	return (0);
}
