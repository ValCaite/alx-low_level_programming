#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of a linked list
 * @head: pointer to the head node of the linked list
 * @index: the index of the node starting at 0
 *
 * Return: nth node of the list, or NULL if node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;
	unsigned int count;

	count = 0;
	current = head;

	while (current == NULL && count < index)
	{
		current = current->next;
		count++;
	}
	if (current == NULL)
	{
		return(NULL);
	}

	return(current);
}

