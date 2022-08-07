#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: double pointer to the beginning of the linked list
 * @idx: index at which to insert the new node
 * @n: data to enter into new node
 *
 * Return: pointer to the new node, or NULL on failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode, *next, *current;
	unsigned int i;

	if (!h)
		return (NULL);

	if (idx != 0)
	{
		current = *h;
		for (i = 0; i < idx - 1 && current != NULL; i++)
			current = current->next;
		if (!current)
			return (NULL);
	}
	newNode = malloc(sizeof(dlistint_t));
	if (!newNode)
		return (NULL);
	newNode->n = n;
	if (idx == 0)
	{
		next = *h;
		*h = newNode;
		newNode->prev = NULL;
	}
	else
	{
		newNode->prev = current;
		next = current->next;
		current->next = newNode;
	}
	newNode->next = next;
	if (newNode->next)
		newNode->next->prev = newNode;
	return (newNode);
}
