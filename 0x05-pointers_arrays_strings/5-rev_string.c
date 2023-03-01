#include "main.h"
/**
 * rev_string - reverse a string
 * @s: input string
 * Description: reverses the string
 * Return: nothing
 **/

void rev_string(char *s)
{
	int i = 0;

	int z = 0;

	char rev[1000];
	
	while (s[i] != '\0')
	{
		i++;
	}
	
	for (; i > 0; i--)
	{
		rev[z] = s[i - 1];
		z++;
	}
	
	while (i < z)
	{
		s[i] = rev[i];
		i++;
	}
}
