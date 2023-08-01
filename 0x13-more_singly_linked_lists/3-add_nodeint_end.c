#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - function that adds new node at end of linked list
 * @head: pointer to the head node
 * @n: new integer data in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *end;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		end = *head;

		while (end->next != NULL)
			end = end->next;
		end->next = new;
	}
	return (*head);
}
