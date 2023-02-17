#include <time.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * main = main function
 * Description: print alphabet
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
	putchar('\n');
	return (0);
}
