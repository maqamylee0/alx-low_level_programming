#include "main.h"

/**
 * rot13 - encoding with rot13
 * @a: input string
 * Description: encoding in rot13
 * Return: string
 */

char *rot13(char *a)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		if ((a[i] >= 'a' && a[i] <= 'z') || (a[i] >= 'A' && a[i] <= 'Z'))
		{
			a[i] = a[i] + 13;
		}
		
	}
	return (a);
}


