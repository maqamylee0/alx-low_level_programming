#include "main.h"

/**
 * _pow_recursion - power
 * @x: first value
 * @y: second value
 * Description: power
 * Return: int
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	return (x * _pow_recursion(x, (y - 1)));
}

