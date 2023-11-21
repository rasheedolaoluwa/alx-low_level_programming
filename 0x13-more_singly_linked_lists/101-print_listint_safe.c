#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - prints a listint_t linked list, even if it has a loop
 * @head: pointer to the head of the list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current, *checker;
	size_t count = 0;

	current = head;
	while (current != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		count++;

		/* Check for loop */
		checker = head;
		while (checker != current)
		{
			if (checker == current->next)
			{
				printf("-> [%p] %d\n", (void *)current->next, current->next->n);
				return (count);
			}
			checker = checker->next;
		}

		current = current->next;
	}

	return (count);
}
