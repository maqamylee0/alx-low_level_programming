#include "main.h"

/**
 * print_sign - is upper or lower case
 * @n: empty params
 * Description: check uppr or lower case
 * Return: zero or success
 */

int print_sign(int n)
{

if (n > 0)
{
_putchar('+');
return (1);

}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
