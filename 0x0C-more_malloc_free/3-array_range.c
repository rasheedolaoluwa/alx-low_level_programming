#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: the first integer in the array
 * @max: the last integer in the array
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	if (min > max)
		return (NULL);
	int *arr;
	unsigned int i, len = max - min + 1;

	arr = malloc(len * sizeof(int));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < len; i++, min++)
		arr[i] = min;

	return (arr);
}
