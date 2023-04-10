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
/**
 * binary_to_uint- converts binary to integer
 * @b: character pointer to string of binary
 * Return: unsigned int decimal
 */

unsigned int binary_to_uint(const char *b)
{
	int count = 0, d = 0;
	unsigned int number = 0, c;

	if (b == NULL)
		return (0);
	while (b[d] != '\0')
	{
		if (b[d] !=  '0' && b[d] != '1')
			return (0);
		d++;
	}
	while (d >= 0)
	{
		if (b[d] == '1')
			c = 1;
		else
			c = 0;
		number += c * power(count - 1);
		count++;
		d--;
	}
	return (number);
}
