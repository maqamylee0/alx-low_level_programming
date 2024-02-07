#include <stdio.h>

/**
 * binary_search - look for a value in an array of integers using binary search
 * using binary search algorithm
 * @array: array to be searched
 * @size: size of the array
 * @value: value to look for
 *
 * Return: index of value found or -1 failure
 */
int binary_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, mid = 0;

	if (array == NULL)
	{
		return (-1);
	}
	while (low <= high)
	{
		print_array(array, low, high);
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (-1);
}

/**
 * print_array - prints elements of array
 * @array: array to be printed
 * @l: lower index of array
 * @r: upper index of array
 *
 * Return: Nothing
 */
void print_array(int *array, size_t l, size_t r)
{
	size_t i;

	printf("Searching in array: ");
	for (i = l; i <= r; i++)
	{
		printf("%d", array[i]);
		if (i < r)
			printf(", ");
	}
	printf("\n");
}

