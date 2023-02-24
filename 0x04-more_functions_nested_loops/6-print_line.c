#include "main.h"

/**
 * print_line - print a line with _ n times
 * @n: length of line
 * Return: nothing
 **/

void print_line(int n)
{
	while (n >= 1)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}

