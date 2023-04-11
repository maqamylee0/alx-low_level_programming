#include "main.h"

/**
 * get_bit- value at an index
 * @n: number
 * @index: index
 * Return: value of bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	n &= 1 << index;
	if (n == 0)
		return (0);
	else if (n > 0)
		return (1);
	else
		return (-1);
}
