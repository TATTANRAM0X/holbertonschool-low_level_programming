#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of linked list
 * @head: double pointer to head node
 * @index: index of the node that should be deleted. Index starts at 0
 * Return: 1 on success, -1 on failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *aux;

	aux = *head;
	if (!*head)
		return (-1);

	while (index != 0)
	{
		if (!aux)
			return (-1);

		aux = aux->next;
		index--;
	}

	if (aux == *head)
	{
		*head = aux->next;
		if (*head)
			(*head)->prev = NULL;
	}
	else
	{
		aux->prev->next = aux->next;
		if (aux->next)
			aux->next->prev = aux->prev;
	}
	free(aux);
	return (1);
}

