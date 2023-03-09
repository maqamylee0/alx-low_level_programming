#include "main.h"

/**
 * _puts_recursion - prints string
 * @s: input string
 * Description: prints string
 * Return: nothing
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		return;
	_putchar(*s);
	_puts_recursion(*(s + 1));
}

