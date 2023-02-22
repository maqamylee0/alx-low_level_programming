#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 * print_alphabet - method to print alphabet
 * @void: empty params
 * Description: print alphabet
 * Return: zero or success
 */

void print_alphabet(void)
{
int i;

for (i = 97; i <= 122; i++)
{
    _putchar(i);
}
}
