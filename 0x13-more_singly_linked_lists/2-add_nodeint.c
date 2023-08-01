#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - function that adds new node at the beginning of a linked list
 * @head: pointer to the head node
 * @n: the integer data for the new node
 *
 * Return: address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)

		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
