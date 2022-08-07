#include "lists.h"

/**
 * dlistint_len - returns number of elements in a linked list
 * @h: pointer entry
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	int numberElements = 0;

	while (h != NULL)
	{
		numberElements++;
		h = h->next;
	}
	return (numberElements);
}
