#include "main.h"

/**
 * flip_bits- finds number of bits for flip
 * @n: first number
 * @m: second number
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i = 0;
	unsigned long int x = n ^ m;

	while (x > 0)
	{
		if (x & 1)
			i++;
		x >>= 1;
	}

	return (i);
}
