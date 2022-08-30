#include "hash_tables.h"

/**
 * hash_table_delete - Function that deletes a hash table
 * @ht: Hast table to delete
 *
 * Return: Nothing
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int position = 0;
	hash_node_t *ht_temp_1, *ht_temp_2;

	if (!ht)
		return;

	while (position < ht->size)
	{
		ht_temp_1 = ht->array[position];
		while (ht_temp_1)
		{
			ht_temp_2 = ht_temp_1;
			free(ht_temp_2->key);
			free(ht_temp_2->value);
			free(ht_temp_2);
			ht_temp_1 = ht_temp_1->next;
		}
		free(ht_temp_1);
		position++;
	}
	free(ht->array);
	free(ht);
}

