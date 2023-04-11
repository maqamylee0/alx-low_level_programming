#include "main.h"

/**
 * clear_bit- set bit to zero
 * @n: pointer to binary
 * @index: index
 * @Return:1 or -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (n != NULL)
	{
		i |= 1 << index;
		*n = i & 0;
		return (1);
	}
	else
		return (-1);
}
