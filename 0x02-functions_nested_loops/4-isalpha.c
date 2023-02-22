#include "main.h"

/**
 * main - main function
 * _isalpha - is upper or lower case
 * @void: empty params
 * Description: check uppr or lower case
 * Return: zero or success
 */

int _isalpha(int c)
{

if ((c <= 122 && c >= 97) || (c >= 65 && c <= 121))
		return (1);
	else
		return (0);
}
