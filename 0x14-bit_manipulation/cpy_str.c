#include "main.h"

/**
 * cpy_str- copy string to new space
 * @ptr: pointer to string
 * @len: lenght of string
 * Return: pointer to new string
 */

char* cpy_str(const char *ptr, int len)
{
	int i = 0;
	char *c = malloc(len + 1);

	for (; i <= len; i++)
	{
		c[i] = ptr[i];
	}
	return (c);
}
