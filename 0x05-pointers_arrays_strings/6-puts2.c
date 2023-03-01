#include "main.h"

/**
 * puts2 - every other character of a string, starting with the first character, followed by a new line.
 * @str: input string to print
 * Description: prints every other character of string
 * Return: nothing
 **/

void puts2(char *str)
{
	int i, z;

	i = 0;
	z = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	while (z < i)
	{
		_putchar(str[z]);
		z += 2;
	}
	_putchar('\n');
}
