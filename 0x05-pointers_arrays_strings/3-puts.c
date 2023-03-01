#include "main.h"

/**
 * _puts -a string, followed by a new line
 * @s :input pointer to string
 * Description: a string, followed by a new line
 * Returns:nothing
 */

void _puts(char *str)
{
	int len = 0;
	
	while (s[len] != '\0')
	{
		_putchar(s[len]);
		len++;
	}
	_putchar('\n');
}
