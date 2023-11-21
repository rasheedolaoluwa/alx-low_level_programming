#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 *               and returns the head node's data (n).
 * @head: double pointer to the head of the list
 *
 * Return: the head node's data (n), or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	int node_data;
	listint_t *temp;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}

	temp = *head;
	node_data = temp->n;
	*head = temp->next;
	free(temp);

	return (node_data);
}
