#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: string one
 * @s2: string two
 * Description: compares two strings
 * Return: 0 if equal, + if s1 is greater,- if s1 is less
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	int j = 0;

	int z = 0;

	while (s1[i] != '\0')
	{
		i++;
	}

	while (s2[j] != '\0')
	{
		j++;
	}

	if (i > j)
	{
		return (1);
	}
	else
		if (i < j)
		{
			return (-1);
		}
		else
		{
			for (; s1[z] != '\0'; z++)
			{
				if (s1[z] != s2[z])
					break;
			}
			return (0);
		}
}

