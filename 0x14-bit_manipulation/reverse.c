#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * reverse- reverses a string
 * @p: ponter to start of string
 * Return: pointer to reversed string
 */

char* reverse_string(char *ptr)
{
	int i = 0;
	int len = 0;
	char hold;

	while (ptr[i] != '\0')
	{
		len++;
		i++;
	}
	for (i = 0; i < (len / 2); i++)
	{
		hold = ptr[i];
		ptr[i] = ptr[len - i - 1];
		ptr[len - i - 1] = hold;
	}
 	return ptr;
}

