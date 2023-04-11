#include "main.h"

/**
 * set_bit- set bit at index
 * @n: pointer to binary
 * @index: index
 * @Return: 1 0r -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (n != NULL)
	{
		if (index < (sizeof(unsigned long int) * 8))
		{
			*n = *n | (1 << index);
			return (1);
		}
		else
			return (-1);
	}
	else
		return (-1);
}
