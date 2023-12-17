#include "sort.h"

/**
 * bubble_sort - this is the bubble sort algorithm, sorting array elements
 * @array: the array to be sorted
 * @size: the size of the array
 * Return: Nothing
*/

void bubble_sort(int *array, size_t size)
{
	size_t i, j, k;
	int temp, swapped;

	if (!array || size == 0)
	{
		return;
	}

	for (i = 0; i < size - 1; i++)
	{
		swapped = 0;

		for (j = 0; j < size - 1 - i; j++)
		{
			if (array[j + 1] < array[j])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				swapped = 1;
			}
		}

		if (swapped == 1)
		{
			printf("%d", array[0]);
			for (k = 1; k < size; k++)
				printf(", %d", array[k]);
			printf("\n");
		}
	}
}
