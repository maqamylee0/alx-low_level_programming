#include "main.h"
#include <stdio.h>
#include <stdlib.h>
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
        putchar('0');
		return (0);

    }
    else if (n == 0)
    {
        putchar('+');
		return (1);
    }else
    {
        putchar('-');
		return (-1);
    }
		
}
