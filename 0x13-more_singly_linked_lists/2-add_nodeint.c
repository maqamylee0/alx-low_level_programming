#include "lists.h"

/**
 * add_nodeint- add node at start
 * @head: pointer to pointer to head
 * @n: integer to add
 * Return: address of new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = (* int)malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	
	if ((**head) == NULL)
		return;
	new->n = n;
	new->next = (**head);
	head = new;
}	
