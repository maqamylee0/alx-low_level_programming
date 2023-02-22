#include "main.h"

/**
 * times_table- prints timetable
 * @n :  input integer
 * Description: check uppr or lower case
 * Return: zero 0r 1
 */

void print_times_table(int n)
{
int y, x, prod;

if (n <= 15 && n >= 0)
{
for (y = 0; y <= n; y++)
{
for (x = 0; x <= n; x++)
{
prod = (y * x);
if (x != 0)
{
_putchar(',');
_putchar(' ');
}
if (prod < 10 && x != 0)
{
_putchar(' ');
_putchar(' ');
_putchar((prod % 10) + '0');
}
else if (prod >= 10 && prod < 100)
{
_putchar(' ');
_putchar((prod / 10) + '0');
_putchar((prod % 10) + '0');
}
else if (prod >= 100 && x != 0)
{
_putchar((prod / 100) + '0');
_putchar((prod / 10) % 10 + '0');
_putchar((prod % 10) + '0');
}
else
_putchar((prod % 10) + '0');
}
_putchar('\n');
}
}


}


