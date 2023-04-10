#include "main.h"

/**
 * print_binary- print a binary
 * @n: decimal number
 * Return:nothing
 */

void print_binary(unsigned long int n)
{
	unsigned int i = 1, l;

	if (n <= 1)
		_putchar(n - '0');
	while (n > 1)
	{
		l = n & i;
		_putchar(l - '0');
		n >> 1;
		i << 1;
	}
}
