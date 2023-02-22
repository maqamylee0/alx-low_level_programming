#include "main.h"

/**
 * times_table- prints timetable
 * @void : empty input
 * Description: check uppr or lower case
 * Return: zero 0r 1
 */

void times_table(void)
{
int a, b, c;

for (a = 0; a <= 9; a++)
{

for (b = 0; b <= 9; b++)
{
c = b * a;
if ( c <= 9)
{
_putchar('0' + ( c / 10));

_putchar(',');
_putchar(' ');
_putchar(' ');


}
else 
{
_putchar('0' + (c / 10));
_putchar('0' + (c % 10));

_putchar(',');
_putchar(' ');
_putchar(' ');

}




}
_putchar('\n');

}
}