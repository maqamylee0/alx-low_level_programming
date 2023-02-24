#include "main.h"


/**
 * _isdigit - checks if digit is between 0-9 *
 * @a: integer input
 * Return: 1 if c is a digit, otherwise 0
 **/

int _isdigit(int a)
{
	if (a >= 48 && a <= 57)
		return (1);
	else
		return (0);
}

