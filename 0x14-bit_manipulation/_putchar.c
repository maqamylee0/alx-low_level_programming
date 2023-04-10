#include "main.h"
#include <unistd.h>
/**
 * _putchar- prints a charactert
 * @c: characyer
 * Return: success or failure
 */

void _putchar(char c)
{
	write(1, &c, 1);
}
