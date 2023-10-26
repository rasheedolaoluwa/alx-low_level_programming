#include "main.h"

/**
 * find_length - Finds the length of a string.
 * @s: The string.
 * @len: The current length.
 *
 * Return: The length of the string.
 */
int find_length(char *s, int len)
{
	if (s[len] == '\0')
		return (len);
	return (find_length(s, len + 1));
}

/**
 * check_palindrome - Checks if a string is a palindrome.
 * @s: The string.
 * @start: The starting index.
 * @end: The ending index.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int check_palindrome(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
		return (0);
	return (check_palindrome(s, start + 1, end - 1));
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	int len = find_length(s, 0) - 1;

	return (check_palindrome(s, 0, len));
}
