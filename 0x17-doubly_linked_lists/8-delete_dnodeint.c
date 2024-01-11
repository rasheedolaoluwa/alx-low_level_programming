#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node at a
 * specified index in a doubly linked list.
 *
 * @head: Double pointer to the head of the list.
 * @index: The index of the node to be deleted, starting from 0.
 * Return: 1 if the deletion is successful, -1 if it fails.
 *
 * This function traverses the list to find the node at the specified index.
 * If the node is found, it adjusts the links of the neighboring nodes and
 * frees the memory of the targeted node. Special cases are handled for
 * deleting the first node or nodes in the middle of the list.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *h1;
	dlistint_t *h2;
	unsigned int i;

	h1 = *head;

	if (h1 != NULL)
		while (h1->prev != NULL)
			h1 = h1->prev;

	i = 0;

	while (h1 != NULL)
	{
		if (i == index)
		{
			if (i == 0)
			{
				*head = h1->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				h2->next = h1->next;

				if (h1->next != NULL)
					h1->next->prev = h2;
			}

			free(h1);
			return (1);
		}
		h2 = h1;
		h1 = h1->next;
		i++;
	}

	return (-1);
}
