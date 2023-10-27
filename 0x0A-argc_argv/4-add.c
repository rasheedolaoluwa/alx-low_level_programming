#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point, adds positive numbers
 * @argc: the number of arguments
 * @argv: array of pointers to the arguments
 *
 * Return: 0 (Success), or 1 if one of the numbers contains non-digits
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i, j;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}
