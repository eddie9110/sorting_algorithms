#include "sort.h"

/**
 * insertion_sort_list - a function that sorts a doubly linked list 
 * using the insertion sort algorithm
 * @list: the doubly linked list to be sorted
*/

void insertion_sort_list(listint_t **list)
{
	listint_t *temp_pntr, *pntr;

	if ((*list)->next == NULL || list == NULL)
		return;

	pntr = *list;

	while (pntr)
	{
		while ((pntr->n > pntr->next->n) && pntr->next) /*comparing the data part of adjacent nodes*/
		{
			temp_pntr = pntr->next;
			pntr->next = temp_pntr->next;
			temp_pntr->prev = pntr->prev;

			if (pntr->prev != NULL)
				pntr->prev->next = temp_pntr;
			if (temp_pntr->next != NULL)
				temp_pntr->next->prev = pntr;

			pntr->prev = temp_pntr;
			temp_pntr->next = pntr;

			if (temp_pntr->prev)
				pntr = temp_pntr->prev;
			else
				*list = temp_pntr;
			print_list(*list);
		} pntr = pntr->next;
	}
}
