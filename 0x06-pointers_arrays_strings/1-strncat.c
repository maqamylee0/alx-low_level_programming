#include "main.h"

/**
 * _strncat - concat two string with n from second string
 * @dest: first string
 * @src: second string
 * @n: number of characters to copy from second string
 * Description: concat two string
 * Return: pointer to result string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;

	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (j < n)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

