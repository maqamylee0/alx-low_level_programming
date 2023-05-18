#include "lists.h"
/**
 * add_dnodeint_end- add node at end
 * @head: double pointer to end
 * @n: element data
 * Return: pointer to new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *current;

	current = *head;
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	if (*head == NULL)
	{
	        new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}	
	while (current->next != NULL)
	{
		current = current->next;
	}
	new_node->n = n;
	new_node->prev = current;
	current->next = new_node;
	return (new_node);
}
