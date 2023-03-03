#include "main.h"

/**
 * *_strcat - concatenates two strings
 * @*dest :pointer to first string
 * @*src : pointer to second string
 * Return :pointer to resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;

	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i-1] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';

	return (dest);

}

