#include "main.h"

/**
 * print_name - prints a name
 * @name: name to print
 * @f: function pointer to a printing function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
