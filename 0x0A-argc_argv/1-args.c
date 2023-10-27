#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: the number of command-line arguments
 * @argv: the array holding the command-line arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void)argv;  /* This line is to prevent unused variable warning */
	printf("%d\n", argc - 1);
	return (0);
}
