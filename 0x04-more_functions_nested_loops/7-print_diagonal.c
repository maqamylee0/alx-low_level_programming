#include "main.h"

/**
 * print_diagonal - prints diagonal line
 * @n: height of diagonal line
 * Return: nothing
 **/

void print_diagonal(int n)
{
	int a, b;

	for (a = 1; a <= n; a++)
	{
		for (b = 1; b < a; b++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
	if (n < 1)
		_putchar('\n');
}

