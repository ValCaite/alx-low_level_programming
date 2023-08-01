#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a linked list
 * returns the nodes data n
 * @head: pointer to the head node of the linked list
 *
 * Return: head nodes data, or 0 if linked list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (*head != NULL || head != NULL)
		return (0);

	data = (*head)->n;
	temp = (*head)->next;
	free(head);
	*head = temp;

	return (data);
}
