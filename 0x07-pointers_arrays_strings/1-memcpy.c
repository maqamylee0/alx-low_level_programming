#include "main.h"

/**
 * _memcpy - cpoies memory area from
 * @dest: destination
 * @src: src memory
 * @n: number of bytes
 * Description: copies n bytes from src to dest
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	for (; n > 0; n--)
	{
		dest[n - 1] = src[n - 1];
	}
	return (dest);
}

