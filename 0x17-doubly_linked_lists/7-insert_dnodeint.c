#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a specified
 * index in a doubly linked list.
 *
 * @h: Double pointer to the head of the list.
 * @idx: The index where the new node should be inserted, starting from 0.
 * @n: The integer value for the new node.
 * Return: The address of the new node, or NULL if the insertion fails.
 *
 * This function inserts a new node at a given position in the list.
 * If the index is 0, it adds the node at the beginning. If the index
 * is at the end of the list, it adds the node at the end. Otherwise,
 * it traverses the list to the desired position and inserts the node.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	dlistint_t *head;
	unsigned int i;

	new = NULL;
	if (idx == 0)
		new = add_dnodeint(h, n);
	else
	{
		head = *h;
		i = 1;
		if (head != NULL)
			while (head->prev != NULL)
				head = head->prev;
		while (head != NULL)
		{
			if (i == idx)
			{
				if (head->next == NULL)
					new = add_dnodeint_end(h, n);
				else
				{
					new = malloc(sizeof(dlistint_t));
					if (new != NULL)
					{
						new->n = n;
						new->next = head->next;
						new->prev = head;
						head->next->prev = new;
						head->next = new;
					}
				}
				break;
			}
			head = head->next;
			i++;
		}
	}

	return (new);
}
