#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - print  0-9
 * @void: Empty params
 * Description: prints comma and space
 * Return: zero for success
*/
int main(void)
{
	int n = 48;

	while (n < 58)
	{
		putchar(n);
		if (n < 57)
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	putchar('\n');
	return (0);
}
