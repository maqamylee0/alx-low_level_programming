#include "lists.h"
/**
 * insert_dnodeint_at_index- node at index
 * @h: double pointer to head
 * @idx: index
 * @n: elements value
 * Return: address of new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current, *new_node, *res;
	unsigned int count;
	unsigned int len;


	count = 0;
	len = 0;
	current = *h;
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	while (current != NULL)
	{
		len++;
		current = current->next;
	} 
	if (idx > len)
	{
		free(new_node);
		return (NULL);
	}
	current = *h;
	if (idx == 0)
	{
		res = add_dnodeint(h, n);
		if (res == NULL)
		{
			free(new_node);
			return (NULL);
		}
	}
	while (current != NULL)
	{
		if (count == (idx - 1))
		{
			new_node->n = n;
			new_node->next = current->next;
			new_node->prev = current;
			if (current->next != NULL)
				current->next->prev = new_node;
			current->next = new_node;
			return (new_node);
		}
		current = current->next;
		count++;
	}
	if (idx == len)
	{
		res = add_dnodeint_end(h, n);
		if (res == NULL)
			free(new_node);
		return (NULL);
	}
	free(new_node);
	return (NULL);
}
