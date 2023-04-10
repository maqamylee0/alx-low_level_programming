#include "main.h"

/**
 * power- calculates power of 2
 * @n: power of 2
 * Return: result of powering 2
 */

unsigned int power(int n)
{
	int i = 0;
	unsigned int result = 1;

	if (n == 0)
		return (1);

	for (; i < n; i++)
		result *= 2;

	return (result);
}
