#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <string.h>

/**
 * add_node_end- add node to end of list
 * @head: double pointer to start
 * @str: string
 *
 * Return: address to end of list
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nextNode, *node;
	int i = 0;

	node = malloc(sizeof(list_t));

	if (node == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		i++;
	}

	node->str = strdup(str);
	node->len = i;
	node->next = NULL;

	newNode = *head;

	if (newNode == NULL)
	{
		*head = node;
		return (node);
	}

	while (*newNode->next != NULL)
		newNode = newNode.next;
	newNode->next = node;
	return (node);
}
