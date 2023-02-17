#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - main function
 * @void: Empty params *
 * Description: prints alphabet
 * Return: zero or success
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		if (letter == 'q')
		{
			letter++;
		}
		else if (letter == 'e')
		{
			letter++;
		}
		else
		{
			putchar(letter);
			letter++;
		}
	}
	putchar('\n');
	return (0);
}
