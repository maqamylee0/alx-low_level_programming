#include "main.h"

/**
 * reverse_array - reverses an array
 * @a: input array
 * @n: number of elements of a
 * Description: reverses an array
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i = 0;

	int z;

	while (i < (n / 2))
	{
		z = a[i];
		a[i] = a[n - (i + 1)];
		a[n - (i + 1)] = z;
	}

