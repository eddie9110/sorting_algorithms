#include "sort.h"

/**
 * selection_sort -  a function that sorts
 * an array using selection sort algorithm
 * @array: array to be sorted
 * @size: size of the array
*/

void selection_sort(int *array, size_t size)
{
	size_t er, fr, element_no = 0;
	int temp_holder;

	for (er = 0; er < size - 1; er++)
	{
		element_no = er;

		for (fr = er + 1; fr < size; fr++)
		{
			if (array[fr] < array[element_no])
				element_no = fr;
		}

		if (element_no != er)
		{
			temp_holder = array[er];
			array[er] = array[element_no];
			array[element_no] = temp_holder;
			print_array(array, size);
		}
	}
}
