#include "sort.h"

/**
 * selection_sort - sort an array of integers
 * @array: The array to be sorted
 * @size: The size of the array
 * Return: void
 */

void selection_sort(int *array, size_t size)
{
	int i, j, tmp, min_index;

	for (i = 0; i <= size; i++)
	{
		min_index = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_index])
				min_index = j;
		}
		if (min_index != i)
		{
			tmp = array[i];
			array[i] = array[min_index];
			array[min_index] = tmp;
			print_array(array, size);
		}
	}
}
