#include "main.h"

/**
 * _puts -a string, followed by a new line
 * @str :input pointer to string
 * Description: a string, followed by a new line
 * Returns:nothing
 */

void _puts(char *str)
{
	int len = 0;
	
	while (str[len] != '\0')
	{
		_putchar(str[len]);
		len++;
	}
	_putchar('\n');
}
