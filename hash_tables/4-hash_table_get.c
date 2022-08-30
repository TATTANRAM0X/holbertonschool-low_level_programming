#include "hash_tables.h"

/**
 * hash_table_get - Function that retrieves a value
 * associated with a key
 * @ht: Hash table to look
 * @key: is the key you are looking for
 *
 * Return: value associated with the element
 * or NULL if key couldn’t be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *ht_temp;

	if (!ht || strcmp(key, "") == 0)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);

	ht_temp = ht->array[index];

	while (ht_temp)
	{
		if (strcmp(ht_temp->key, key) == 0)
			return (ht_temp->value);
		ht_temp = ht_temp->next;
	}
	return (NULL);
}

