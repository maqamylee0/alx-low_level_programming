#include "main.h"

/**
 * _print_rev_recursion - print in reverse
 * @s: input string
 * Description: print string in reverse
 * Return:nothing
 */

void _print_rev_recursion(char *s)
{

	while (*s == '\0')
		return;
	if (*(s + 1) == '\0')
	{
		_putchar(*s);
	}
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}

