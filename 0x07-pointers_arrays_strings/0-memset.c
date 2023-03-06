#include"main.h"

/**
 * _memset - fills memory with constant byte
 * @s: pointer to memory area
 * @b: byte to fill with
 * @n: first n bytes
 * Description: fills first n bytes
 * Return: a pointer to memory s
 */

char *_memset(char *s, char b, unsigned int n)
{
	for (; n > 0; n--)
	{
		s[n - 1] = b;
	}
	return (s);
}

