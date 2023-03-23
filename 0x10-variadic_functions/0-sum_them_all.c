#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * sum_them_all - function that returns the sum of all its parameters.
 * description:function that returns the sum of all its parameters.
 * @n: number of arguments
 * Return: sum of numbers
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i, sum;

	sum = 0;
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);
	return (sum);
}
