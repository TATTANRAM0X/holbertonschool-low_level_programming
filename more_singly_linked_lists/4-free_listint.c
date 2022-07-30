#include "lists.h"

/**
 * free_listint - function that frees a list
 * @head: First node of the list
 */

void free_listint(listint_t *head)
{
	if (head == NULL)
		return;

	if (head->next)
		free_listint(head->next);
	free(head);
}

