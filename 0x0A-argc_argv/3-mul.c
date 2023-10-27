#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point, multiplies two numbers
 * @argc: the number of arguments
 * @argv: array of pointers to the arguments
 *
 * Return: 0 (Success), or 1 if the program does not receive two arguments
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);
	int product = num1 * num2;

	printf("%d\n", product);

	return (0);
}
