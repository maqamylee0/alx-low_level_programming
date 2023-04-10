#include "main.h"
#include <unistd.h>
/**
 * _putchar- prints a charactert
 * @c: characyer
 * Return: success or failure
 */

int _putchar(char c)
{
	write(1, &c, 1);
	return (0);

}
