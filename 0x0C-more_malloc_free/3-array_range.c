#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: first integer
 * @max: last integer
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *arr;
	unsigned int i, range;

	if (min > max)
		return (NULL);

	range = max - min + 1;
	arr = malloc(sizeof(int) * range);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < range; i++, min++)
		arr[i] = min;

	return (arr);
}
