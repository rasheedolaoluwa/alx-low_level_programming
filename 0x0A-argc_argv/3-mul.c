#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point, multiplies two numbers.
 * @argc: The number of arguments
 * @argv: Array of pointers to the arguments
 *
 * Return: 0 on success, or 1 if the program does not receive two arguments
 */
int main(int argc, char *argv[])
{
	int num1, num2, product;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	product = num1 * num2;

	printf("%d\n", product);

	return (0);
}
