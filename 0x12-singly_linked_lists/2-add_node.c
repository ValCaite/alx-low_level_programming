#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning of a list
 * @head: double pointer to the linked list
 * @str: new string to add to the node
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->len = len;
	new->str = strdup(str);
	new->next = (*head);
	(*head) = new;

	return (*head);
}
