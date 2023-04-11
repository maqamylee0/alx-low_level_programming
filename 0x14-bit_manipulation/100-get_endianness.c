#include "main.h"

/**
 * get_endianness- get endianess
 * @void: nothing
 * Return: 0 or 1
 */

int get_endianness(void)
{
	int n = 1;
	char *ptr = (char *)&n;

	if (ptr[0] == 1)
		return (1);

	return (0);
}
