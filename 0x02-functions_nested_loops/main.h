#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
void _putchar(void)
{
    putchar('_');
    putchar('p');
    putchar('u');
    putchar('t');
    putchar('c');
    putchar('h');
    putchar('a');
    putchar('r');
    putchar('\n');
}
void print_alphabet(void)
{
    int i;

    for (i = 97; i <= 122; i++)
    {
        putchar(i);
    }
}

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