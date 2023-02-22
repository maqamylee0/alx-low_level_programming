#include "main.h"

/**
 * times_table- prints timetable
 * @void : empty input
 * Description: check uppr or lower case
 * Return: zero 0r 1
 */

void times_table(void)
{
int a = 0, b = 0;

for (a = 0; a <= 9; a++)
{

for (b = 0; b <= 9; b++)
{
_putchar('0' + (a * b));
_putchar('  ');
_putchar('0' + (b * a));
_putchar('\n');

}
}
}