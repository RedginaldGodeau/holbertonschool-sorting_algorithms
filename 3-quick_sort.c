#include "sort.h"

/**
 * sort: void return O(n^2)
 * desc: Sort Number in list
 * 
 * @array: int pointer
 * @start: size_t start number in array
 * @end: size_t end number in array
*/
void sort (int *array, size_t start, size_t end, size_t size)
{
    size_t i = start, pos = start, l;
    int num = array[start];

    if (start >= end) 
        return;

    for (; i < end; i++)
    {
        if (array[i] < num)
        {
            array[pos] = array[i];
            array[i] = array[++pos];
            array[pos] = num;

            for (l = 0; l < size; l++)
            {
                printf("%d", array[l]);
                if(l < size - 1)
                    printf(", ");
                else
                    printf("\n");
            }
        }

    }

    sort(array, start, pos, size);
    sort(array, pos + 1, end, size);
}

/**
 * bubble_sort: void return
 * desc: Sort Number in list
 * 
 * @array: int pointer
 * @size: size_t of array
*/
void quick_sort(int *array, size_t size)
{
    sort(array, 0, size, size);
}