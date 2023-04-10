#include "main.h"
#include <stdlib.h>
/**
 * reverse- reverses a string
 * @p: ponter to start of string
 * Return: pointer to reversed string
 */

char *reverse_string(char *ptr)
{
	int i = 0;
	int len = 0;
	char hold;

	while (*ptr != '\0')
		len++;
	for (; i < (len / 2); i++)
	{
		hold = *ptr;
		ptr[i] = ptr[len - i - 1];
		ptr[len - i - 1] = hold;
	}
	ptr = &ptr[0];
	return (ptr);
}


