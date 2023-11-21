#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - frees a listint_t list, even if it has a loop
 * @h: double pointer to the head of the list
 *
 * Return: the size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current, *temp;
	size_t count = 0;

	if (h == NULL || *h == NULL)
	{
		return (0);
	}

	while (*h)
	{
		temp = (*h)->next;

		if (*h < temp)
		{
			free(*h);
			*h = temp;
			count++;
		}
		else
		{
			free(*h);
			*h = NULL;
			count++;
			break;
		}
	}

	*h = NULL;
	return (count);
}
