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
		putchar(letter);
		letter++;
	}

	letter = 'A';

	while (letter <= 'Z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
