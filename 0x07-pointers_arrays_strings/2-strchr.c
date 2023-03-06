#include "main.h"

/**
 * _strchr - finds character in a string
 * @s: string
 * @c: character to find
 * Description: locate character in string
 * Return: pointer to first occurence of the character
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	int count = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			count++;
			if (count == 1)
				return (s[i]);
		}
		else
			continue;
	}

	if (count == 0)
		return (NULL);
}

