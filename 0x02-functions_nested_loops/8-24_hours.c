#include "main.h"

/**
 * jack_bauer - prints last digit
 * @void : empty input
 * Description: check uppr or lower case
 * Return: zero 0r 1
 */

void jack_bauer(void)
{
int a = 0, b = 0;

for (a = 0; a <= 24; a++)
{

for (b = 0; b <= 60; b++)
{
_putchar('0' + (a / 10));
_putchar('0' + (a % 10));
_putchar(':');
_putchar('0' + (b / 10));
_putchar('0' + (b % 10));
_putchar('\n');

}
}
}