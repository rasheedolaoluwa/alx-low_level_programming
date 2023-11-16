#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a linked list
 * @head: Double pointer to the list_t list
 * @str: New string to add in the node
 *
 * Description: Creates a new list_t node, duplicates the provided string, and
 * adds it to the start of the linked list. The function calculates the length
 * of the string and assigns it to the new node.
 *
 * Return: Address of the new element, or NULL if memory allocation fails.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int length = 0;

	while (str[length])
		length++;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = length;
	new_node->next = (*head);
	(*head) = new_node;

	return (*head);
}
