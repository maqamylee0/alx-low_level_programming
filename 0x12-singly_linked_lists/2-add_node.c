#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <string.h>

/**
 * add_node- add node at start
 * @head: pointer to pointer to start
 * @str: string 
 * 
 * Return: address of new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node = malloc(sizeof(list_t));
	int i = 0;

	if (node == NULL)
		return (NULL);
	if (str[i] == NULL)
		return (0);
	while (str[i] != '\0')
	{
		i++;
	}
	node->str = strdup(str);
	node->len = i;
	node->next = *head;

	*head = node;
	return (new);
}
