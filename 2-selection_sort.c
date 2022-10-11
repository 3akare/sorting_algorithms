#include "sort.h"

/**
 * swap - Swaps the integer in an array
 * @x: Address of an int in an array
 * @y: Address of an int in an array
 * Return: Always Successful
 */

int swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
	return (0);
}

/**
 * selection_sort - sorts an array of integers in ascending order
 * using the Selection sort algorithm
 * @array: an integer array
 * @size: size of array
 */

void selection_sort(int *array, size_t size)
{
	size_t idx, idx2;
	int *tmp;

	if (!array || size < 2)
		return;
	for (idx = 0; idx  < size - 1; idx++)
	{
		tmp = array + idx;
		for (idx2 = idx + 1; idx2 < size; idx2++)
			tmp = (array[idx2] < *tmp) ? (array + idx2) : tmp;
		if (*tmp != (int)idx)
		{
			swap(tmp, &array[idx]);
			print_array(array, size);
		}
	}
}


