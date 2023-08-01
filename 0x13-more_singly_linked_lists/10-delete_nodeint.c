#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node at index
 * @head: pointer to the head node of linked list
 * @index: index of the node to be deleted
 *
 * Return: 1 on success, -1 on fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	unsigned int count = 0;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		temp = *head;
		free(temp);

		return (1);
	}
	while (temp != NULL && count < index)
	{
		*head = temp;
		temp = (*head)->next;
		count++;
	}
	free(temp);

	return (1);
}

