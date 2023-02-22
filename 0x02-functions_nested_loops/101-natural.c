#include "main.h"
#include <stdio.h>
/**
 * main- main function
 * @void :  empty  string
 * Description: print natural numbers
 * Return: zero 0r 1
 */

int main(void)
{
	int total, i;

	total = 0;

	for (i = 1; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
			total += i;
	}
	printf("%d\n", total);
	return (0);
}


