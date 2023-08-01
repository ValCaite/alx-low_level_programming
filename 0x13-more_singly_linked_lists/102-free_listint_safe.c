#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - function that frees a linked list
 * @h: pointer to head node of the list
 *
 * Return: size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current;
	listint_t *next;
	size_t count = 0;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		count++;

		current = next;
	}
	*h = NULL;

	return (count);
}

