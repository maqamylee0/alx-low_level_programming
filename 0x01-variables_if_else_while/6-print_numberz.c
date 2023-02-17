#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - print numbers as chars
 * @void: empty params
 * Description: print single digit numbers as chars
 * Return: zero  for success
*/
int main(void)
{
	int n = 48;

	while (n <= 57)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
