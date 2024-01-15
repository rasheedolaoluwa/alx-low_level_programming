#include "main.h"
#include <studio.h>
/**
 * _isupper - check if c is uppercase
 *
 * @c: input for character
 *
 * Retrun: 1 if its uppercase, o if not
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}

