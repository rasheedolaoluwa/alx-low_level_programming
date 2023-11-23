#include "main.h"

/**
 * _pow - Calculates the result of a base number raised to a power.
 * @base: The base of the exponent.
 * @power: The power to which the base is raised.
 *
 * Description: This function iteratively multiplies the base by itself
 * 'power' number of times. It's used for calculating powers of numbers,
 * specifically used here for binary operations.
 *
 * Return: The result of raising 'base' to the power of 'power'.
 */
unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned long int num;
	unsigned int a;

	num = 1;
	for (a = 1; a <= power; a++)
		num *= base;
	return (num);
}

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be represented in binary.
 *
 * Description: This function calculates the binary equivalent of a given
 * unsigned long integer. It uses bitwise operations and the _pow function
 * to determine each bit's value. The binary number is printed starting
 * from the most significant bit.
 *
 * Return: None. The function outputs the binary representation directly.
 */
void print_binary(unsigned long int n)
{
	unsigned long int divisor, check;
	char flag;

	flag = 0;
	divisor = _pow(2, sizeof(unsigned long int) * 8 - 1);
	while (divisor != 0)
	{
		check = n & divisor;
		if (check == divisor)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag == 1 || divisor == 1)
		{
			_putchar('0');
		}
		divisor >>= 1;
	}
}
