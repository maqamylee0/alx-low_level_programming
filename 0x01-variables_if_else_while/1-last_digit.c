#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/**
 * main - main function
 * Return: zero or sucees
 *
 */
int main(void)
{
	int n, m;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	m = n % 10;
	if (m > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, m);
	} else if (m == 0)
	{
		printf("Last digit of %d is %d and is 0", n, m);
	} else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", n, m);
	}
	return (0);
}
