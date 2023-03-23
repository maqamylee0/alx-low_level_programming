#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_numbers - prints numbers, followed by a new line
 * description:prints numbers, followed by a new line
 * @separator: seperating char
 * @n: number of chars
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int i;

	va_start(nums, n);
	for (i = 0; i < n; i++)
	{
		printf("%d\n", va_arg(nums, int);
		
		if (separator != NULL)
			printf("%s", separator);
		
	}
	printf("\n");
	va_end(nums);
}


