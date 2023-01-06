#include "sort.h"

/**
 * bubble_sort - void return
 * Description: Sort Number in list
 * @array: int pointer
 * @size: size_t of array
 * Return: void
*/

void bubble_sort(int *array, size_t size)
{

	short int done = 0;
	size_t i, l;

	while (!done)
	{
		done = 1;

		for (i = 1; i < size; i++)
		{
			if (array[i] < array[i - 1])
			{
				done = 0;
				array[i] -= array[i - 1];
				array[i - 1] += array[i];
				array[i] = array[i - 1] - array[i];

				for (l = 0; l < size; l++)
				{
					printf("%d", array[l]);
					if (size - 1 > l)
						printf(", ");
					else
						printf("\n");
				}
			}
		}
	}
}

