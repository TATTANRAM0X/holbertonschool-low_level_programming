#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a list
 * @head: head node
 * @n: first element of the list
 * Return: address of the new element,
 * or NULL if it failed.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = NULL;
	listint_t *temp;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	temp = *head;

	if (*head != NULL)
	{
		while (temp->next)
			temp = temp->next;
		temp->next = new_node;
	}
	else
		*head = new_node;
	return (new_node);
}
