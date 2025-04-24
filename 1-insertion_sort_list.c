#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
/**
* insertion_sort_list - Sorts doubly linked list with Insertion Sort
* @list: pointer to the head of doubly linked list
*
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *cur, *prev, *next;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	cur = (*list)->next;
	while (cur != NULL)
	{
		next = cur->next;
		while (cur->prev != NULL && cur->n < cur->prev->n)
		{
			prev = cur->prev;

			prev->next = cur->next;
			if (cur->next)
				cur->next->prev = prev;

			cur->prev = prev->prev;
			cur->next = prev;

			if (prev->prev)
				prev->prev->next = cur;
			else
				*list = cur;

			prev->prev = cur;

			print_list(*list);
		}
		cur = next;
	}
}
