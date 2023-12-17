#include "sort.h"

/**
 * insertion_sort_list - this is an insertion sort algorithm
 * to sort a doubly linked list
 * @list: the list to be sorted
 * Return: Nothing
*/

void insertion_sort_list(listint_t **list)
{
	listint_t *nextn = (*list)->next;
	listint_t *swap_point, *current;

	if (!list || !(*list) || !(*list)->next)
		return;

	while (nextn->next != NULL)
	{
		current = nextn;
		while (nextn->prev != NULL && nextn->n < nextn->prev->n)
		{
			swap_point = nextn->prev;
			swap_point->prev = nextn->prev;
			swap_point->next = nextn->next;
			nextn->prev = nextn;
			nextn = swap_point;
			nextn = nextn->prev;
			print_list(*list);
		}
		nextn = current->next;
	}
}
