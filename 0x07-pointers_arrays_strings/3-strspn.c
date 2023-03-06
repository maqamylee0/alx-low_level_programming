#include "main.h"

/**
 * _strspn - find length of substring
 * @s: string
 * @accept: criteria for count
 * Description: count substring chars in accept
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j;
	int count = 0;

	for (; s[i] != ' '; i++)
	{
		j = 0;

		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				count++;
			j++;
		}
	}
	return (count);
}

