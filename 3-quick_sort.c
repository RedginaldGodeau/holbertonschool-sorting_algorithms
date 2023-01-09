#include "sort.h"

/**
 * swap - void return O(n^2)
 * Description: Sort Number in list
 * @a: int pointer
 * @b: size_t start number in array
*/
void swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * partition - int return O(n^2)
 * Description: Sort and check number
 * Return: i + 1 (int)
 * @array: int pointer
 * @low: size_t start number in array
 * @high: size_t end number in array
 * @size: size of array
 */
int partition(int *array, size_t low, size_t high, size_t size)
{
	const int pivot = array[high];
	size_t i = (low - 1), i2 = low;

	for (; i2 <= high - 1; i2++)
	{
		if (array[i2] < pivot)
		{
			i2++;
			swap(&array[i], &array[i2]);
			print_array(array, size);
		}
	}
	swap(&array[i + 1], &array[high]);
	print_array(array, size);
	return (i + 1);
}
/**
 * sort - void return O(n^2)
 * Description: Sort Number in list
 * @array: int pointer
 * @low: size_t start number in array
 * @high: size_t end number in array
 * @size: size of array
 */
void sort(int *array, size_t low, size_t high, size_t size) {
	int pi;

	if (low < high) {
		pi = partition(array, low, high, size);
		sort(array, low, pi - 1, size);
		sort(array, pi + 1, high, size);
	}

}

/**
 * quick_sort - void return
 * Description: Sort Number in list
 * @array: int pointer
 * @size: size_t of array
 */
void quick_sort(int *array, size_t size)
{
	sort(array, 0, size - 1, size);
}
