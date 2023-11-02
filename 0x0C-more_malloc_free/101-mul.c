#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char *argv[])
{
	long int num1, num2;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	if (num1 == 0 || num2 == 0)
	{
		printf("Error\n");
		exit(98);
	}

	/* Blank line added after declarations */

	printf("%ld\n", num1 * num2);

	return (0);
}
