#include "main.h"

/**
 * leet - encoding in 1337
 * @a: input string
 * Description: encoding a string in 1337
 * Return: encoded string
 */

char *leet(char *a)
{
	char *b = "aAeEoOtTlL";
	char *c = "4433007711";
	int i = 0;
	int x = 0;

	while (a[i] != '\0')
	{
		while (b[x] != '\0')
		{
			if (b[x] == a[i])
			{
				a[i] = c[x];
			}
			x++;
		}
		i++;
	}
	return (a);
}

