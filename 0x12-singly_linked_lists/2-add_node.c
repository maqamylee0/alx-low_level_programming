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
	int i = 0;

	while (str[i] != '\0' && str != NULL)
	{
		i++;
	}

	if (new == NULL)
		return;

	node->str = new;
	node->len = i;
	node->next = *head;

	*head->next = node;
	free(new);
	return (new);
}
