#include "sort.h"

/**
 * selection_sort: void return O(n^2)
 * desc: Sort Number in list
 * 
 * @array: int pointer
 * @size: size_t of array
*/
void selection_sort(int *array, size_t size)
{
    size_t i = 0, i2 = 0, l;
    int idx, tmp;

    for (; i < size - 1; i++)
    {
        idx = (int) i;

        for (i2 = i + 1; i2 < size - 1; i2++)
            if (array[idx] > array[i2])
                idx = i2;
        if (idx != (int) i)
        {
            for (l = 0; l < size; l++)
            {
                printf("%d", array[l]);
                if(l < size-1)
                    printf(", ");
                else
                    printf("\n");
            }
            
            tmp = array[i];
            array[i] = array[idx];
            array[idx] = tmp;
        }
    }
}
