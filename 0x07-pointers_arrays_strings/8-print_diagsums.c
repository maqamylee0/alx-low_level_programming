#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print sum of diagonal values in a square array
 * @a: array 
 * @size: size of array
 * Description: prints sum of both diagonals
 * Return: nothing
 **/

void print_diagsums(int *a, int size)
{
	int z, b, y;

	z = 0;
	b = 0;

	for (y = 0; y < size; y++)
	{
		z = z + a[y * size + y];
	}

	for (y = size - 1; y >= 0; y--)
	{
		b += a[y * size + (size - y - 1)];
	}

	printf("%d, %d\n", z, b);
}

