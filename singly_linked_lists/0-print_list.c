#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list
 *
 * @h: head node
 * 
 * Return: number_nodes
 */

size_t print_list(const list_t *h)
{
	size_t number_nodes = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		number_nodes++;
	}
	return (number_nodes);
}