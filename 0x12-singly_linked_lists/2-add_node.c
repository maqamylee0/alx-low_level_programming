#include "lists.h"

/**
 * add_node- add node at start
 * @head: pointer to pointer to start
 * @str: string 
 * 
 * Return: address of new element
 */

list_t *add_node(list_t **head, const char *str)
{
	char *new = strdup(str);
	list_t *node = malloc(sizeof(list_t));


	if (new == NULL)
		return;
	node->str = new;
	node->next = head;

	*head->next = node;
	free(new);
}
