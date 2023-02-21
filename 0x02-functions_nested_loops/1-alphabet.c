#include "main.h"
/**
 * main - main function
 * print_alphabet(void) - method to print alphabet
 * @void: empty params
 * Description: print alphabet
 * Return: zero or success
 */

void print_alphabet(void)
{
    int i;

    for (i = 97; i <= 122; i++)
    {
        putchar(i);
    }
}
