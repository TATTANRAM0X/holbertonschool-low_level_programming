#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list
 * @head: double pointer that points to a list
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		temp = *head;
		*head = temp->next;
		free(temp);
	}
	head = NULL;
}

