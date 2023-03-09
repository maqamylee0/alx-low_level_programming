#include "main.h"

/**
 * _strlen_recursion - lenght of string
 * @s: string
 * Description:lenght of string
 * Return: int lenght
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	if (*(s + 1) == '\0')
	{
		return (1);
	}
	else
	{
		return (_strlen_recursion(s+1) + 1);
	}
}
