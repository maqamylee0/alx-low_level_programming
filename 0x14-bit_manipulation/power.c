#include "main.h"

/**
 * power- calculates power of 2
 * @n: power of 2
 * Return: result of powering 2
 */

unsigned int power(int n)
{
	unsigned int result = 1;

	if (n == 0)
		return (1);
	result = 1 << n;

	return (result);
}
