#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *node;

	while (*h)
	{
		node = *h;
		*h = node->next;
		free(node);
		count++;
	}

	return (count);
}
