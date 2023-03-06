#include "main.h"

/**
 * _strpbrk - first occurence of bytr
 * @s: string
 * @accept:string to check againtst
 * Description: find first occurence of string
 * Return: pointer to byte in s
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j;
	
	for (; s[i] != '\0'; i++)
	{
		j = 0;

		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
			j++;
		}
	}
	return (NULL);
}

