#include "main.h"

/**
 * jack_bauer - prints last digit
 * @void : empty input
 * Description: check uppr or lower case
 * Return: zero 0r 1
 */

void jack_bauer(void)
{
int a = 0, b = 0, c, d;

for (a = 0; a <= 23; a++)
{

for (b = 0; b <= 60; b++)
{
if (b <= 9)
{
c = '0' + b;
}
else
{
c = b;
}

}
if (a <= 9)
{
d = '0' + a;
}
else
{
d = a;
}
_putchar(d);
_putchar(':');
_putchar(c);
_putchar('\n');

}
}