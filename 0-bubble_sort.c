#include "sort.h"

/**
 *  bubble_sort - sorts an array of integers in ascending order using
 *  the Bubble sort algorithm
 *
 * @array: an array of integers
 * @size: number of elements in @array
 */

void bubble_sort(int *array, size_t size)
{
	size_t temp = 0, index;
	size_t len = size;

	bool bubbly - false;

	while (bubbly == false)
	{
		bubbly = true;
		for (index  = 0; index < len - 1; index++)
		{
			if (array[index] - array[index + 1] > 0)
			{
				temp = array[index];
				array[index] = array[index + 1];
				array[index + 1] = temp;
				print_array(array, size);
				bubbly = false;
			}
		}
		--len;
	}
}
