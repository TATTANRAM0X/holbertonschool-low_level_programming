#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: head node
 *
 * Return: number_elements
 */

size_t list_len(const list_t *h)
{
	size_t number_elements = 0;

	while (h != NULL)
	{
		h = h->next;
		number_elements++;
	}
	return (number_elements);
}
