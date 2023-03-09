#include "main.h"

/**
 * _sqrt_recursion - square root
 * @n:nis root
 * Description: square root
 * Return: integer
 */

int sqr_con(int n, int i)
{
	if (n == i * i)
		return (i);

	else if (n < i * i)
		return (-1);

	return (sqr_con(n, i + 1));
}

/**
 * _sqrt_recursion - find natural square root of n
 * @n: number to square
 * Description: find square root of n using recursion
 * Return: square root of n or -1 if none
 **/

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (sqr_con(n, 0));
}
