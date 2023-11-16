#include <stdlib.h>
#include "lists.h"

/**
 * list_len - Counts the elements in a linked list
 * @h: Pointer to the start of the list_t linked list
 *
 * Description: Iterates through each node of the linked list and counts them.
 * This function is useful for determining the size of the list.
 *
 * Return: The total number of elements in the linked list pointed to by 'h'.
 */
size_t list_len(const list_t *h)
{
	size_t element_count = 0;

	while (h)
	{
		element_count++;
		h = h->next;
	}
	return (element_count);
}
