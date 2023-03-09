#include "main.h"

/**
 * _print_rev_recursion - print in reverse
 * @s: input string
 * Description: print string in reverse
 * Return:nothing
 */

void _print_rev_recursion(char *s)
{
	int x = 0;

	while (*s != '\0')
		x++;
	_putchar(*(s + x));
	*(s + x) = '\0';
	_print_rev_recursion(s + (x - 1));
}
	
