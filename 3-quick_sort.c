#include "sort.h"

/**
 * sort - void return O(n^2)
 * Description: Sort Number in list
 * @array: int pointer
 * @start: size_t start number in array
 * @end: size_t end number in array
 * @size: size of array
*/
void sort(int *array,size_t first,size_t last, size_t size){
    const size_t pivot = first;
    size_t start = first, end = last;
    int tmp;

    if (first >= last)
        return;

    while (start < end)
    {
        while (array[start] <= array[pivot] && start < last)
            start++;
        while (array[end] > array[pivot])
            end--;
        
        if (start < end)
        {
            tmp = array[start];
            array[start] = array[end];
            array[end] = tmp;

            print_array(array, size);
        }
    }

    tmp = array[pivot];
    array[pivot] = array[end];
    array[end] = tmp;

    sort(array, first, end - 1, size);
    sort(array, end + 1, last, size);
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
