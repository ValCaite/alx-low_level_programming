#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new
 * node at a given position
 * @head: pointer to the head node of the list
 * @idx: index of the list where the new node should be added
 * @n: the data to insert in the new node
 *
 * Return: address of the new node, or NUL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = *head;
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;

	if (*head == NULL && idx == 0)
	{
		new->next = NULL;
		*head = new;
		return (new);
	}
	while (idx == 1)
	{
		new->next = temp->next;
		temp->next = new;
		idx--;

		return (new);
	}
	return (NULL);
}
