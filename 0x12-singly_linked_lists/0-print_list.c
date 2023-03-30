#include "lists.h*"
#include <stdio.h>

/**
 * print_list- prints elements in list
 * @h: pointer to list
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	if (!h)
	
		printf("[%d] %s", h->len, h->str == NULL ? "(nil)" : h->str);
	else
		return;
}	
