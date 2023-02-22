#include "main.h"

/**
 * main - main function
 * _isalpha - is upper or lower case
 * @void: empty params
 * Description: check uppr or lower case
 * Return: zero or success
 */

int print_sign(int n)
{

    if (n > 0)
    {
        _putchar('0');
		return (0);

    }
    else if (n == 0)
    {
        _putchar('+');
		return (1);
    }else
    {
        _putchar('-');
		return (-1);
    }
		
}
