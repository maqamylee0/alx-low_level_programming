#include "main.h"

/**
 * rot13 - encoding with rot13
 * @a: input string
 * Description: encoding in rot13
 * Return: string
 */

char *rot13(char *a)
{
	int i = 0;

	char *c[] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"}
	char *e[] = {"abcdefghijklmnopqrstuvwxyz"}

	while (a[i] != '\0')
	{
		if (((a[i] >= 'a' && a[i] <= 'z') || (a[i] >= 'A' && a[i] <= 'Z') ) && ((a[i] < 'n') || (a[i] < 'N')))
		{
			a[i] = a[i] + 13;
		}
		else
		{
			a[i] = a[i] - 13;
		}
		i++;
	}
	return (a);
}


