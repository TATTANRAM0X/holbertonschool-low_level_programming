#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: first node of the list
 * @idx: index of the node, starting at 0
 * @n: data of the new node
 * Return: address of the new node or NULL if head is NULL,
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *aux;
	unsigned int i = 0;

	aux = *head;
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	else
	{
		while (aux && i < idx - 1)
		{
			aux = aux->next;
			i++;
		}

		if (i == idx - 1)
		{
			new->next = aux->next;
			aux->next = new;
			return (new);
		}
	}
	return (NULL);
}
