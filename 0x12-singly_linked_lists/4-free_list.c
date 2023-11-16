#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Frees a linked list
 * @head: Pointer to the list_t list that needs to be freed
 *
 * Description: Iterates through each node of the list, freeing the memory
 * allocated for the string and the node itself. This process continues until
 * all nodes are freed, effectively deallocating the entire list.
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
