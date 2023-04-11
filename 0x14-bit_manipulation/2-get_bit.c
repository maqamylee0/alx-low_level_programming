#include "main.h"

/**
 * get_bit- value at an index
 * @n: number
 * @index: index
 * @Return:value of bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int i;

	i = n >> index;
	
	if (i & 1)
		return (i & 1);
	else
		return (-1);
}
