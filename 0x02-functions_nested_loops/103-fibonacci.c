#include <stdio.h>

/**
 * main - Entry point, computes and prints the sum of the even-valued
 *        terms in the Fibonacci sequence whose values do not exceed 4,000,000.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int n1 = 1, n2 = 2, next = 0, sum_even = 2;

	while (next <= 4000000)
	{
		next = n1 + n2;
		if (next % 2 == 0 && next <= 4000000)
			sum_even += next;
		n1 = n2;
		n2 = next;
	}

	printf("%lu\n", sum_even);

	return (0);
}
