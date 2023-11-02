#include "main.h"

/**
 * is_digit - checks if a string is a digit
 * @str: string to check
 * Return: 0 if digit, 1 if not
 */
int is_digit(char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (1);
		str++;
	}
	return (0);
}

/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if successful, 98 if error
 */
int main(int argc, char *argv[])
{
	if (argc != 3 || is_digit(argv[1]) || is_digit(argv[2]))
	{
		printf("Error\n");
		exit(98);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
