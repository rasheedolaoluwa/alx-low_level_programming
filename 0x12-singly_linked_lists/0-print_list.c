#include <stdio.h>
#include "lists.h"

/**
 * print_list - This function displays the elements of a singly linked list
 * @h: Pointer to the start of the list_t linked list
 *
 * Description: Iterates over each element of the list, printing its content.
 * If an element's string is NULL, it prints "(nil)".
 *
 * Return: Returns the total count of the nodes traversed in the list.
 */
size_t print_list(const list_t *h)
{
	size_t nodes_count = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}

		h = h->next;
		nodes_count++;
	}

	return (nodes_count);
}
