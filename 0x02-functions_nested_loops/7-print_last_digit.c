#include "main.h"

/**
 * print_last_digit - prints last digit
 * @a : integer input
 * Description: check uppr or lower case
 * Return: zero 0r 1
 */

int print_last_digit(int a)
{
if (a < 0)
{
a = -a;
_putchar((a % 10) + '0');
}
else
{
_putchar((a % 10) + '0');

}
return  (a % 10);
}
