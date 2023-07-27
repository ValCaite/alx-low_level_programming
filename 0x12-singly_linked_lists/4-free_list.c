#include <stdlib.h>
#include "lists.h"

/**
 * free_list - a function that frees a list
 * @head: the list to be freed
 *
 * Return: no return
 */
void free_list(list_t *head)
{
	list_t *node;

	while (node)
	{
		node = head->next;
		free(head->str);
		free(head);
		head = node;
	}
}
