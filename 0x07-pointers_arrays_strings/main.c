#include <stdlib.h>
#include <stdio.h>
#include <string.h>
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

    t = strpbrk(s, f);
    printf("%s\n", t);
    return (0);
}
