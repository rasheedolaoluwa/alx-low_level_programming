#include "lists.h"

/**
 * free_dlistint - Frees the memory allocated for a doubly linked list.
 * @head: A pointer to the head of the list.
 * Return: None.
 *
 * This function releases the memory allocated for each node in the
 * doubly linked list, starting from the head. It traverses the list,
 * freeing each node one by one until it reaches the end of the list.
 */
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;

	while (head->next)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}
