#include <stdio.h>

/**
 * main - Entry point
 * Description: Solves the Fizz-Buzz test, printing numbers from 1 to 100,
 * but printing "Fizz" for multiples of three, "Buzz" for multiples of five,
 * and "FizzBuzz" for multiples of both three and five.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);

		if (i != 100)
			printf(" ");
	}
	printf("\n");

	return (0);
}
