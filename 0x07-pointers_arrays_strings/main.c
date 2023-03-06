#include <stdio.h>
#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "hi marvin";
    char *f = "irv";
    char *t;

    t = _strpbrk(s, f);
    printf("%s\n", t);
    return (0);
}
