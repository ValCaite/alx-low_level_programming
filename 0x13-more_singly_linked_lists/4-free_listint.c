#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - function that frees a linked list
 * @head: pointer to the head node of linked list
 *
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (temp != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
