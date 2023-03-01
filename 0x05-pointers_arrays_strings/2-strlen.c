#include "main.h"

/**
 * _strlen - find lenght of string
 * @s : parameter one
 * Description:function counts lenght of a string
 * Returns: integer for lenght of string
 */

int _strlen(char *s)
{
	int len = 0;
	
	while(s[len] != '\0')
	{
		len++;
	}
	return len;
}
