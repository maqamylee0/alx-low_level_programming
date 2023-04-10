#include "main.h"

/**
 * binary_to_uint- converts binary to integer
 * @b: character pointer to string of binary
 * Return: unsigned int decimal
 */

unsigned int binary_to_uint(const char *b)
{
	int count = 0;
	unsigned int number = 0, c;

	if (b == NULL)
		return (0);
	if (*b !=  '0' && *b != '1')
		return (0);

	while ((*b) != '\0')
	{
		if ((*b) == '1')
			c = 1;
		else
			c = 0;
		number += c * power(count);
		b = b + 1;
		count++;
	}
	return (number);
}
