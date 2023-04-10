#include "main.h"

/**
 * binary_to_uint- converts binary to integer
 * @b: character pointer to string of binary
 * Return: unsigned int decimal
 */

unsigned int binary_to_uint(const char *b)
{
	int count = 0, d = 0;
	unsigned int number = 0, c;
	char *y, *copy;

	if (b == NULL)
		return (0);
	while (b[d] != '\0')
	{
		if (b[d] !=  '0' && b[d] != '1')
			return (0);
		d++;
	}
	copy = cpy_str(b, d);

	y = reverse_string(copy, d);
	while ((*y) != '\0')
	{
		if ((*y) == '1')
			c = 1;
		else
			c = 0;
		number += c * power(count);
		y = y + 1;
		count++;
	}
	free(copy);
	return (number);
}

