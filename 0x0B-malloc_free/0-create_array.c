#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - create array of size size and assign char c
 * @size: size of array
 * @c: char to assign
 * Description: creates array of size size and assign char c
 * Return: pointer to array, NULL if fail
 *
 **/
char *create_array(unsigned int size, char c)
{
	char *d;
	unsigned int r;

	if (size <= 0)
		return (NULL);

	d = (char *)malloc(size * sizeof(char));

	if (d == NULL)
		return (NULL);
	for (r = 0; r < size; r++)
		d[r] = c;

	return (d);
}
