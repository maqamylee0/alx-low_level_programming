#include "main.h"

/**
 *print_to_98- prints numbers from n to 98
 *@n:starting to count from
 *Description: adds two numbers
 *Return: sum of numbers
 */

void print_to_98(int n)
{
while (n <= 98)
{
if (n <= 9)
{
_putchar('0' + (n % 10));
_putchar(',');
_putchar(' ');
n++;
}
else
{
_putchar('0' + (n / 10));
_putchar('0' + (n % 10));
_putchar(',');
_putchar(' ');
n++;
}

}
}