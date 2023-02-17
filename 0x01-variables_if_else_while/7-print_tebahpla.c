#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - prints alphabet
 * @void: empty params
 * Description: Prints the alphabet
 * Return: zero for success
*/
int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
