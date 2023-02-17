#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - print alphabet in reverse
 * @void: empty params
 * Description:prints alphabet in revers
 * Return:  zero for success
*/
int main(void)
{
	int n = 57;

	while (n >= 48)
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
