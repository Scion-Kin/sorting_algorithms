#include "sort.h"

/**
 * selection_sort- sorts an array using the selection
 * sort algorithm
 *
 * @array: unsorted array
 * @size: the size of the array
 *
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, low, high;
	int lowest, temp;

	if ((size < 2) || (array == NULL))
		return;

	for (i = 0; i < size - 1; i++)
	{
		high = i;
		for (j = i + 1; j < size; j++)
		{
			if ((array[j] < array[high]) && (lowest == 0))
			{
				low = j;
				lowest = array[j];
			}
			else if (array[j] < lowest)
				low = j;
		}
		temp = array[high];
		array[high] = array[low];
		array[low] = temp;
		lowest = 0;
		if (temp != array[high])
			print_array(array, size);
	}
}
