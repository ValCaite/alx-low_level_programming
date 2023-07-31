#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - function that prints all the elements of a list
 * @h: pointer to the head node
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *current = h;
	size_t count = 0;

	while (current != NULL)
	{
		printf("%d \n", current->n);
		current = current->next;
		count++;
	}
	return (count);
}
