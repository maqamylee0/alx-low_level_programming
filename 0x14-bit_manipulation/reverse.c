#include "main.h"

/**
 * reverse- reverses a string
 * @p: ponter to start of string
 * @len: length of string
 * Return: pointer to reversed string
 */

char* reverse_string(char *ptr, int len)
{
	int i = 0;
	char hold;

	for (i = 0; i < (len / 2); i++)
	{
		hold = ptr[i];
		ptr[i] = ptr[len - i - 1];
		ptr[len - i - 1] = hold;
	}
 	return ptr;
}

