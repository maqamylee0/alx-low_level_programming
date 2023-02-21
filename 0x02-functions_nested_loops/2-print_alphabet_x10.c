#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 * function print_alphabet_x10 - method to print alphabet
 * @void: empty params
 * Description: print alphabet
 * Return: zero or success
 */

void print_alphabet_x10(void)
{
int i, j = 1;
while (j <= 10)
{
for (i = 97; i <= 122; i++)
{
putchar(i);
}
putchar('\n');
j++;
}
}