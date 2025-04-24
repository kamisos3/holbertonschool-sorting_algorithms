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
	listint_t *current, *temp;

	if (!list || !*list || !(*list)->next)
		return;

	current = (*list)->next;
	while (current)
	{
		temp = current;
		current = current->next;
		while (current->prev && current->n < current->prev->n)
		{
			listint_t *prev = current->prev;

			if (prev->prev)
				prev->prev->next = current;
			else
				*list = current;
			if (current->next)
				current->next->prev = prev;

			current->prev = prev->prev;
			prev->next = current->next;
			current->next = prev;
			prev->prev = current;

			print_list(*list); /*Print list after each swap*/
		}
		current = temp;
	}
}
