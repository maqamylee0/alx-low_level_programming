#include "search_algos.h"

/**
 * linear_search - look for a value in an array of integers
 * using the Linear search algorithm
 * @array: array to be searched
 * @size: size of the array
 * @value: value to look for
 *
 * Return: index of value found or -1 failure
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
