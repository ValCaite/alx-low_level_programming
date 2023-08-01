#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * reverse_listint - function that reverse listint_t linked list
 * @head: pointer to head node of the linked list
 *
 * Return: pointer to the first node of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous;
	listint_t *next;

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = previous;
			previous = *head;
		*head = next;
	}
	*head = previous;

	return (*head);
}
