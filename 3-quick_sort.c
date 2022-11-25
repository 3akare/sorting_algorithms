#include "sort.h"

void quick_sort(int *array, size_t size);
void quick_sort_recursion(int *array, int low, int high, size_t size);
int partition(int *array, int low, int high, size_t size);
void swap(int *x, int *y);

/**
 * swap - Swap Integers
 * @x: Integer
 * @y: Integer
 */

void swap(int *x, int *y)
{
	int tmp = *x;
	*x = *y;
	*y = tmp;
}

/**
 * quick_sort - Sorting integers with the quick sort alogrithm
 * @array: An array of integers
 * @size: Size of the array
 */

void quick_sort(int *array, size_t size)
{
	if (array == NULL || size <= 0)
		return;
	quick_sort_recursion(array, 0, size - 1, size);
}

/**
 * quick_sort_recursion - Quick sort helper
 * @array: An array of integer
 * @low: Lowest point of the array
 * @high: Highest point of the array
 * @size: Size of the array
 */

void quick_sort_recursion(int *array, int low, int high, size_t size)
{
	int pivot = 0;

	if (low < high)
	{
		pivot = partition(array, low, high, size);
		quick_sort_recursion(array, low, pivot - 1, size);
		quick_sort_recursion(array, pivot + 1, high, size);
	}
}

/**
 * partition - Partitioning for the quick sort algorithm
 * @array: An array of integers
 * @low: Lowest point of the array
 * @high: Highest point of the array
 * @size: Size of the array
 * Return: An integer
 */

int partition(int *array, int low, int high, size_t size)
{
	int pivot = array[high];
	int i = low, j;

	for (j = low; j < high; j++)
	{
		if (array[j] < pivot)
		{
			swap(&array[i], &array[j]);
			i++;
		}
	}
	swap(&array[i], &array[high]);
	print_array(array, size);
	return (i);
}
