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
	size_t i, j;
	int lowest, temp;

	if ((size < 2) || (array == NULL))
		return;

	for (i = 0; i < size - 1; i++)
	{
		lowest = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] <= array[lowest])
			{
				lowest = j;
			}
		}
		temp = array[i];
		array[i] = array[lowest];
		array[lowest] = temp;
		if (temp != array[i]) /* check if swap took place and print */
			print_array(array, size);
	}
}
