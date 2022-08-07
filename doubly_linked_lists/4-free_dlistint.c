#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: pointer to the beginning of the linked list
 *
 * Return: nothing
 */

void free_dlistint(dlistint_t *head)
{
	if (!head)
		return;

	free_dlistint(head->next);

	free(head);
}
