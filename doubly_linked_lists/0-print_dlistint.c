#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: pointer to a struct of type dlistint_t
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int numberNodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		numberNodes++;
		h = h->next;
	}
	return (numberNodes);
}

