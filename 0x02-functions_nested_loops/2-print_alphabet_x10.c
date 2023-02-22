#include "main.h"

/**
 * print_alphabet_x10 - method to print alphabet
 * Return: zero or success
 */

void print_alphabet_x10(void)
{
int i, j = 1;

while (j <= 10)
{
for (i = 97; i <= 122; i++)
{
_putchar(i);
}
j++;
_putchar('\n');
}
}