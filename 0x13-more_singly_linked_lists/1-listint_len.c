#include <stdio.h>
#include "lists.h"

/**
 * listint_len - function that returns the numbe rof elements in a linked list
 * @h: pointer to the head node
 *
 * Return: numbe rof elements in the linked list
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		printf("%ld\n", count);
		h = h->next;
	}
	return (count);
}
