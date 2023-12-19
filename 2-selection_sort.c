#include "sort.h"

/**
 * selection_sort- sorts an array using the selection
 * sort algorithm
 * @array: unsorted array
 * @size: the size of the array
 *
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int min, holder;

	if ((size < 2) || (array == NULL))
		return;

	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] <= array[min])
			{
				min = j;
			}
		}
		holder = array[i];
		array[i] = array[min];
		array[min] = holder;
		if (holder != array[i]) /* check if swap took place and print */
			print_array(array, size);
	}
}
