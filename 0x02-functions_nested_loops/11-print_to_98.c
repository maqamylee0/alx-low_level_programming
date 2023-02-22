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
_putchar('0' + n);
_putchar(',');
_putchar(' ');
}
}