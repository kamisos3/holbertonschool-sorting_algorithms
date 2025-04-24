#include <stdlib.h>
#include "sort.h"
/**
* bubble_sort - Sorting array by ascending order
* @array: Integers to sort, pointer
* @size: Array size
*
*
*
*/
void bubble_sort(int *array, size_t size)
{
	size_t i;
	int temp;
	int swap;

	if (array == NULL || size < 2)
		return;

	swap = 1;
	while (swap != 0)
	{
		swap = 0;
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;

				swap = 1;
				print_array(array, size);
			}
		}
	}
}
