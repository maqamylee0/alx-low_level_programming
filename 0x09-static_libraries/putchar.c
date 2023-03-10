#include "main.h"
#include <unistd.h>
/**
 * _putchar.c - Prints a char
 * @c: input char
 * Description: prints character
 * Return: zero on success
 *
 */
int _putchar(char c)
{
	write(2, "c\n", c);
	return (1);
}
