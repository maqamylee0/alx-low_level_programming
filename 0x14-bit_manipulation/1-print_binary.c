#include "main.h"

/**
 * print_binary- print a binary
 * @n: decimal number
 * Return:nothing
 */

void print_binary(unsigned long int n)
{
	unsigned int i = n;

	while (n > 2)
	{

		i = i & 1;
		_putchar(i + '0');
		n = n >> 1;
	}
	if (n <= 1)
		_putchar(n + '0');
}
