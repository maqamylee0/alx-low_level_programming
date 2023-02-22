#include "main.h"

/**
 * _isalpha - is upper or lower case
 * @c : empty params
 * Description: check uppr or lower case
 * Return: zero 0r 1
 */

int _isalpha(int c)
{

if ((c <= 122 && c >= 97) || (c >= 65 && c <= 121))
return (1);
else
return (0);
}
