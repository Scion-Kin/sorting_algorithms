#include "sort.h"

/**
 * bubble_sort - this is the bubble sort algorithm, sorting array elements
 * @array: the array to be sorted
 * @size: the size of the array
 * Return: Nothing
*/

void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp;
	int swapped; /* Flag to check if any swaps occurred in a pass */

	if (!array || size == 0)
		return;

	for (i = 0; i < size - 1; i++)
	{
		swapped = 0; /* Reset the flag at the beginning of each pass */

		for (j = 0; j < size - 1 - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				/* Swap elements */
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				swapped = 1; /* Set the flag since a swap occurred */
			}
		}

		/* Print the array after each pass if any swaps occurred */
		if (swapped)
		{
			printf("%d", array[0]);
			for (j = 1; j < size; j++)
				printf(", %d", array[j]);
			printf("\n");
		}
	}
}
