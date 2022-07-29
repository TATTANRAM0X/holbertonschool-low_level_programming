#include "lists.h"

/**
 * add_node_end - check the code
 *@head: head node
 *@str: string of the node
 *
 * Return: address of the new element
 * or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{

	list_t *new, *last;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = (list_t *)malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = NULL;
	last = *head;

	if (last == NULL)
	{
		*head = new;
		return (*head);
	}

	while (last->next)
		last = last->next;
	last->next = new;

	return (new);
}

