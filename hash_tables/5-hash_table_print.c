#include "hash_tables.h"

/**
 * hash_table_print - Function that prints a hash table
 * @ht: Hast table to print
 *
 * Return: nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int position = 0;
	int find_key = 0;
	hash_node_t *ht_temp;

	if (!ht)
		return;

	printf("{");
	while (position < ht->size)
	{
		ht_temp = ht->array[position];
		while (ht_temp)
		{
			if (find_key == 1)
				printf(",");
			printf("'%s': '%s'", ht_temp->key, ht_temp->value);
			find_key = 1;
			ht_temp = ht_temp->next;
		}
		position++;
	}
	printf("}\n");
}
