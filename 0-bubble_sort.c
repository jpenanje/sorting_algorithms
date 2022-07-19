#include <stdbool.h>
#include "sort.h"

/**
 * bubble_sort - sort an array
 * @array: the array of integers
 * @size: size of the array
 * Return: nothing
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int tmp;
	i = 0;
	bool swap = false;
	
	if (array == NULL || size == 0)
	{
		return;
	}

	do
	{
		swap = false;
		for (j = 0; j < (size - 1 - i); j++)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				swap = true;
				print_array(array, size);
			}
		}
		i++;
	} while (swap);
}
