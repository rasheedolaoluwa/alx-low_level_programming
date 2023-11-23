#include "main.h"

/**
 * flip_bits - Counts the number of bits needed to be flipped to convert
 * one number to another.
 * @n: The first number.
 * @m: The second number.
 *
 * Description: This function determines the number of bits that must be
 * flipped to transform the number 'n' into 'm'. It performs an exclusive OR
 * (XOR) operation between 'n' and 'm' to identify differing bits and then
 * counts these differing bits. This count represents the number of flips
 * needed to convert 'n' to 'm'.
 *
 * Return: The number of bits that need to be flipped.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int bitPosition, flipCount = 0;
	unsigned long int currentBit;
	unsigned long int differingBits = n ^ m;

	for (bitPosition = 63; bitPosition >= 0; bitPosition--)
	{
		currentBit = differingBits >> bitPosition;
		if (currentBit & 1)
			flipCount++;
	}

	return (flipCount);
}
