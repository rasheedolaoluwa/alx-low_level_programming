#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - prints a listint_t linked list, even if it has a loop
 * @head: pointer to the head of the list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow = head;
	const listint_t *fast = head;
	size_t count = 0;
	int loop_detected = 0;

	while (slow && fast && fast->next)
	{
		if (slow == fast && count > 0)
		{
			loop_detected = 1;
			break;
		}
		slow = slow->next;
		fast = fast->next->next;
		count++;
	}

	if (loop_detected)
	{
		printf("-> [%p] %d\n", (void *)slow, slow->n);
		return (count);
	}

	count = 0;
	while (head)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		count++;
	}

	return (count);
}
