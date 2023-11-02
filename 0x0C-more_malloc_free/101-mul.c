#include "main.h"

/**
 * is_digit - checks if a string consists of digits only
 * @s: string to check
 *
 * Return: 1 if s consists of digits only, 0 otherwise
 */
int is_digit(char *s)
{
	while (*s)
	{
		if (*s < '0' || *s > '9')
			return (0);
		s++;
	}
	return (1);
}

/**
 * main - multiplies two positive numbers and prints the result
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, 98 on error
 */
int main(int argc, char *argv[])
{
	if (argc != 3 || !is_digit(argv[1]) || !is_digit(argv[2]))
	{
		printf("Error\n");
		exit(98);
	}
	printf("%lu\n", atol(argv[1]) * atol(argv[2]));
	return (0);
}
