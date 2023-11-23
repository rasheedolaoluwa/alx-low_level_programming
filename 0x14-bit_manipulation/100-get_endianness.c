#include "main.h"

/**
 * get_endianness - Checks the endianness of the system.
 *
 * Description: This function determines the byte order of the system's
 * architecture. It does so by storing a value and then checking the first
 * byte to see if it's the least significant byte (indicating little endian)
 * or the most significant byte (indicating big endian).
 *
 * Return: 0 if the system is big endian, 1 if it's little endian.
 */
int get_endianness(void)
{
	int testValue;
	char *bytePtr;

	testValue = 1;
	bytePtr = (char *)&testValue;
	return (*bytePtr);
}
