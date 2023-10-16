#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to be converted.
 *
 * Return: The integer value of the converted string.
 */
int _atoi(char *s)
{
	int i = 0, sign = 1, num = 0;

	/* Determine sign of the integer value */
	while ((s[i] < '0' || s[i] > '9') && (s[i] != '\0'))
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		i++;
	}

	/* Calculate the integer value */
	while ((s[i] >= '0') && (s[i] <= '9'))
	{
		num = (num * 10) + (s[i] - '0');
		i++;
	}

	return (num * sign);
}

/**
 * main - Entry point function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char s[] = "   -9876543210abcd";
	int number;

	number = _atoi(s);
	printf("%d\n", number);

	return (0);
}
