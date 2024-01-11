#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a doubly linked list.
 *
 * @head: A double pointer to the head of the list.
 * @n: The integer value to be stored in the new node.
 * Return: The address of the new element, or NULL if allocation fails.
 *
 * This function creates a new node with the given value and inserts it
 * at the beginning of the doubly linked list. It adjusts the links of
 * the existing nodes to maintain the structure of the list. If the list
 * is initially empty, the new node becomes the head of the list.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *h;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	h = *head;

	if (h != NULL)
	{
		while (h->prev != NULL)
			h = h->prev;
	}

	new->next = h;

	if (h != NULL)
		h->prev = new;

	*head = new;

	return (new);
}
