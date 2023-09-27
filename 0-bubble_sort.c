#include "sort.h"

/**
 * bubble_sort - a funtion that sorts an array
 * using bubble sort algorithm
 * @array: array to be sorted
 * @size: size of the array to be sorted
*/

void bubble_sort(int *array, size_t size)
{
	int temp;
	size_t as, zs;

	if (size < 2)
		return;
	for (as = 0; as < size; as++)
	{
		for (zs = 0; zs < size - 1; zs++)
		{
			if (array[zs] > array[zs + 1])
			{
				temp = array[zs];
				array[zs] = array[zs + 1];
				array[zs + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
