#include "lists.h"

/**
 * dlistint_len - Counts the number of elements in a doubly linked list.
 *
 * @h: A pointer to the head of the doubly linked list.
 * Return: The total number of nodes in the list.
 *
 * This function begins at the head of the list and counts each node
 * until it reaches the end of the list. If the list is empty (head is NULL),
 * it returns zero. It also adjusts the starting position to the beginning of
 * the list if the initial head is not at the start.
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count;

	count = 0;

	if (h == NULL)
		return (count);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
