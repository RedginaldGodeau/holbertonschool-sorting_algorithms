#include "sort.h"

void swap(listint_t *a, listint_t *b)
{
    int *tmp;
    int num = b->n;

    /* A */
    tmp = (int *)&b->n;
    *tmp = a->n;
    /* B */
    tmp = (int *)&a->n;
    *tmp = num;
}

/**
 * insertion_sort_list: void return O(n^2)
 * desc: Sort doublelist by insert
 * 
 * @list: struct listint_t pointer
*/
void insertion_sort_list(listint_t **list)
{
    listint_t *current, *index;

    for (current = *list; current->next; current = current->next)
        for (index = current->next; index->next; index = index->next)
            if (current->n > index->n)
                swap(index, current);

    current = *list;
    while (current)
    {
        printf("%d", current->n);
        if (current->next->next)
            printf(", ");
        else
            printf("\n");
        current = current->next;
    }
}


