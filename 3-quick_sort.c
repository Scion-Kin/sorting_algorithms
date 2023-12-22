#include "sort.h"

/**
* quick_sort - sorts an array of integers in ascending order
*
* @array: array to be sorted
*
* @size: size of the array
*/

void quick_sort(int *array, size_t size)
{
	int pivot = 0;
	size_t partition_index = 0;

	if ((size <= 1) || array == NULL)
		return;

	pivot = array[size - 1];
	partition_index = partition(array, size, pivot);
	quick_sort(array, partition_index);
	quick_sort(array + partition_index + 1, size - partition_index - 1);
}


/**
 * swap - swap two integers
 * @a: first integer
 *
 * @b: second integer
 */
void swap(int *a, int *b)
{
	int tmp = 0;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * partition - partition the array to get the two
 * subarrays and the index of the pivot
 *
 * @array: array to be sorted
 * @size: size of the array
 * @pivot: pivot
 *
 * Return: index of the pivot
 *
 */
size_t partition(int *array, size_t size, int pivot)
{
	int j = 0;
	size_t i = 0;

	for (i = 0; i < size - 1; i++)
	{
		if (array[i] < pivot)
		{
			swap(&array[i], &array[j]);
			j++;
		}
	}
	swap(&array[i], &array[j]);
	print_array(array, size);
	return (j);
}
