#include "lists.h"
#include <stdio.h>

/**
 * print_list- prints elements in list
 * @h: pointer to list
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	if (h == NULL)
		return (nodes);
	while (h != NULL){
		printf("[%d] %s\n", h->len, h->str == NULL ? "(nil)" : h->str);
		h = h->next;
		nodes++;
	}
	return (nodes);
	
}	
