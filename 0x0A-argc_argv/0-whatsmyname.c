#include "main.h"
#include <stdio.h>

/**
 * main - prints the name of the program
 * @argc: the number of command-line arguments
 * @argv: the array holding the command-line arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void)argc;  /* This line is to prevent unused variable warning */
	printf("%s\n", argv[0]);
	return (0);
}
