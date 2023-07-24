#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * insertion_sort_list - Write a function that sorts a doubly
 * linked list of integers in ascending order
 * using the Insertion sort algorithm
 * @list: This is the list
 * Return: void
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *ptr = NULL;
	listint_t *swap = NULL;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	ptr = *list;
	ptr = ptr->next;

	while (ptr != NULL)
	{
		while (ptr->prev && ptr->n < (ptr->prev)->n)
		{
			swap = ptr;

			if (ptr->next)
				(ptr->next)->prev = swap->prev;
			(ptr->prev)->next = swap->next;
			ptr = ptr->prev;
			swap->prev = ptr->prev;
			swap->next = ptr;

			if (ptr->prev)
				(ptr->prev)->next = swap;

			ptr->prev = swap;

			if (swap->prev == NULL)
				*list = swap;
			print_list(*list);
			ptr = ptr->prev;
		}
		ptr = ptr->next;
	}
}
