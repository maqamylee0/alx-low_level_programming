#include "main.h"

/**
 * swap_int- awsps values of 2 integers
 * @a: pointer 1
 * @b: pointer 2
 * Description:swap numbers
 * Return:empty
 */

void swap_int(int *a, int *b)
{
	int z = *a;
	*a = *b;
	*b = z;
}
