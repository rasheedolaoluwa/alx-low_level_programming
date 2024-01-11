#include "lists.h"

/**
 * sum_dlistint - Calculates the sum of all the data
 * (n) in a doubly linked list.
 *
 * @head: A pointer to the head of the list.
 * Return: The sum of the data in the list.
 *
 * This function iterates over each node of the doubly linked list, starting
 * from the head. It accumulates the sum of the integer values (n) stored in
 * each node. If the list is empty (head is NULL), the function returns 0.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			sum += head->n;
			head = head->next;
		}
	}

	return (sum);
}
