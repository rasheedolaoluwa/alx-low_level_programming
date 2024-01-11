#include "lists.h"

/**
 * print_dlistint - Prints all elements of a doubly linked list.
 *
 * @h: A pointer to the head of the doubly linked list.
 * Return: The total number of nodes in the list.
 *
 * This function starts at the head of the list and traverses
 * through each node, printing the integer value stored in each node.
 * If the list is empty (head is NULL), it returns zero.
 * If the head is not at the start of the list, it first moves to
 * the start before printing each element.
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count;

	count = 0;

	if (h == NULL)
		return (count);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}

	return (count);
}
