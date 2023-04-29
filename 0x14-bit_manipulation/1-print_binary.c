#include "main.h"

/**
 * print_binary- print a binary
 * @n: decimal number
 * Return:nothing
 */

void print_binary(unsigned long int n)
{
	unsigned long int holder;
	int i, times = 0;

	for (i = 63; i >= 0; i--)
	{
		holder = n >> i;
		if (holder & 1)
		{
			times++;
			_putchar('1');
		}
		if (times)
			_putchar('0');
	}
	if (!times)
		_putchar('0');
}
