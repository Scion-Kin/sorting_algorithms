#include "sort.h"

/**
 * insertion_sort_list - an insertion sort algorithm for a doubly linked list
 * @list: A pointer to the head of the doubly linked list
 * Return: Nothing
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *current, *prev, *nextn;

	if (!list || !(*list) || !(*list)->next)
		return;

	current = (*list)->next;

	while (current != NULL)
	{
		nextn = current->next;

		while (current->prev != NULL && current->n < current->prev->n)
		{
			prev = current->prev;

			if (current->next)
				current->next->prev = prev;

			prev->next = current->next;
			current->next = prev;

			if (prev->prev)
				prev->prev->next = current;

			current->prev = prev->prev;
			prev->prev = current;

			if (!current->prev)
				*list = current;

			print_list(*list);
		}
		current = nextn;
	}
}
