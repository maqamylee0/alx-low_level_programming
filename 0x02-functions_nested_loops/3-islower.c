#include "main.h"

/**
 * main - main function
 * _islower - method to check lower case
 * @c: character to check
 * Description: print alphabet
 * Return:  1 if lower case, 0 if 
 */

int _islower(int c)
{
	if (c <= 122 && c >= 97)
		return (1);
	else
		return (0);
}