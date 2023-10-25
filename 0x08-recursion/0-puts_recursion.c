#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line using recursion
 * @s: the string to print
 */
void _puts_recursion(char *s)
{
    if (*s == '\0')  /* Base case: if the string is at its end, print a new line and return */
    {
        _putchar('\n');
        return;
    }
    _putchar(*s);  /* Recursive case: print the current character */
    _puts_recursion(s + 1);  /* call the function with the next character */
}
