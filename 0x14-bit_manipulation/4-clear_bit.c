#include "main.h"

/**
 * clear_bit- set bit to zero
 * @n: pointer to binary
 * @index: index
 * Return:1 or -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (n != NULL)
	{
		if (index < (sizeof(unsigned long int) * 8))
		{
			*n &= ~(1 << index);
			return (1);
		}
		else
			return (-1);
	}
	else
		return (-1);
}
