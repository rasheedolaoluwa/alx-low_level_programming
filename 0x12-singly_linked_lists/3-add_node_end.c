#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a linked list
 * @head: Double pointer to the list_t list
 * @str: String to store in the new node
 *
 * Description: Allocates memory for a new list_t node, duplicates the provided
 * string, & appends the new node to the end of the linked list. It calculates
 * If the list is empty, the new node becomes the head of the list.
 *
 * Return: Address of the new element, or NULL if memory allocation fails.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *temp = *head;
	unsigned int length = 0;

	while (str[length])
		length++;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = length;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new_node;

	return (new_node);
}
