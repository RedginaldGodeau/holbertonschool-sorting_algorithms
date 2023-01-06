#include "sort.h"

/**
 * selection_sort - void return
 * Description: Sort Number in list
 * @array: int pointer
 * @size: size_t of array
*/
void selection_sort(int *array, size_t size)
{
	size_t i = 0, i2 = 0;
	int idx, tmp;

	for (; i < size - 1; i++)
	{
		idx = (int) i;

		for (i2 = i + 1; i2 < size; i2++)
			if (array[idx] > array[i2])
				idx = i2;

		if (idx != (int) i)
		{
			tmp = array[i];
			array[i] = array[idx];
			array[idx] = tmp;
			print_array(array, size);
		}
	}
}
