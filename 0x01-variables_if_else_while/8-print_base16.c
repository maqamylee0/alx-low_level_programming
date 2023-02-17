#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main -main function
 * @void: empty params
 * Description: Prints all hexadecimals
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
	n = 97;
	while (n <= 102)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
