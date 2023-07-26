#include "sort.h"

/**
 * swap_ints - substituting int values in unsorted array
 * @a: first int value to be sorted
 * @b: second int value to be sorted.
 */

void swap_ints(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * selection_sort - Sorting unsorted int array in increasing(ascending)
 * order via selection sort algorithm
 * @array: int array
 * @size: length or size of the array.
 * Description: Prints array after each completed iteration
 */

void selection_sort(int *array, size_t size)
{
	int *min;
	size_t i, j;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min = array + i;
		for (j = i + 1; j < size; j++)
			min = (array[j] < *min) ? (array + j) : min;

		if ((array + i) != min)
		{
			swap_ints(array + i, min);
			print_array(array, size);
		}
	}
}
