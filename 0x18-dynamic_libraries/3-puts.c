#include "main.h"
/**
 * _puts - prints a str, followed by a new line,
 * @str: pointer to the string to print
 * Return: void
*/


void _puts(char *str)
{
int idx = 0;
while (str[idx])
{
	_putchar(str[idx]);
	idx++;
}
_putchar('\n');
}

