#include "main.h"
#include <unistd.h>/**
 * main - main function
 * Return: zero or success
 */
int _putchar(char c) 
{
    write(1, &c, 1);
    return 0;
}
