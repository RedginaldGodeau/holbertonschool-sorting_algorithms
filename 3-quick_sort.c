#include "sort.h"
/**
 * echanger - void return
 * Description: Sort Number in list
 * @tableau: int pointer
 * @a: size_t of array
 * @b: size_t of array
 */
void echanger(int tableau[], int a, int b)
{
	int temp = tableau[a];

	tableau[a] = tableau[b];
	tableau[b] = temp;
}

/**
 * quickSort - void return
 * Description: Sort Number in list
 * @tableau: int pointer
 * @size: size_t of array
 * @fin: size_t of array
 * @debut: size_t of array
 */
void quickSort(int tableau[], int debut, int fin, size_t size)
{
	const int pivot = tableau[debut];
	int gauche = debut - 1;
	int droite = fin + 1;

	if (debut >= fin)
		return;

	while (1)
	{
		do
			droite--;
		while (tableau[droite] > pivot);
		do
			gauche++;
		while (tableau[gauche] < pivot);

		if (gauche < droite)
		{
			echanger(tableau, gauche, droite);
			print_array(tableau, size);
		}
		else
			break;
	}
	quickSort(tableau, debut, droite, size);
	quickSort(tableau, droite + 1, fin, size);
}
/**
 * quick_sort - void return
 * Description: Sort Number in list
 * @array: int pointer
 * @size: size_t of array
 */
void quick_sort(int *array, size_t size)
{
	quickSort(array, 0, size - 1, size);
}
