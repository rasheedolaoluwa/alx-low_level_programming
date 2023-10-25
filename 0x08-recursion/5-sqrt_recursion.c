#include "main.h"

/**
 * helper - recursive helper function for _sqrt_recursion
 * @n: the number to find the square root of
 * @guess: the current guess
 *
 * Return: the square root, or -1 if n has no natural square root
 */
int helper(int n, int guess)
{
	if (guess * guess == n)
		return (guess);
	if (guess * guess > n)
		return (-1);
	return (helper(n, guess + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to find the square root of
 *
 * Return: the square root, or -1 if n has no natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (helper(n, 1));
}
