#include "lists.h"

/*
 * print_listint - prints all the elements of a listint_t list.
 * @h: head node
 * Return: number_nodes
 */

size_t print_listint(const listint_t *h)
{

	size_t number_nodos = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		number_nodos++;
	}
	return (number_nodos);
}
