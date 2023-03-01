#include "main.h"
/**
 * print_rev - reversw string
 * @s: input string
 * Description: prints string in reverse
 * Return: nothing
 **/

void print_rev(char *s)
{
	int i = 0;
	
	while (s[i] != '\0')
		i++;
	for (i = i - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
