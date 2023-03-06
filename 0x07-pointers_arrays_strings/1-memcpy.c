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
	int i = 0;

	for (; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

