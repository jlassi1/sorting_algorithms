#include "sort.h"
/**
 *insertion_sort_list-function that sorts a doubly linked list of integers
 *in ascending order using the Insertion sort algorithm
 *
 *@list: doubly linked list
 *Return: void
 */

void insertion_sort_list(listint_t **list)
{
listint_t *curr = NULL, *tmp = *list, *head;
if (!list || !(*list) || !(*list)->next)
	return;

head = (*list)->next;
while (head)
	{
	curr = head;
	while (curr->prev)
	{
		tmp = curr->prev;
		if (tmp->n > curr->n)
		{
			if (tmp->prev)
				tmp->prev->next = curr;
			else
				*list = curr;

			if (curr->next)
				curr->next->prev = tmp;

			tmp->next  = curr->next;
			curr->prev = tmp->prev;

			curr->next = tmp;
			tmp->prev = curr;
			print_list(*list);
			continue;
		}

			curr = curr->prev;

	}
head = head->next;

}
}
