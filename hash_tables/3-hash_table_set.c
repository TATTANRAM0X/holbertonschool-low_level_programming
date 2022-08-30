#include "hash_tables.h"

/**
 * hash_table_set - Function that adds an element to the hash table
 * @ht: Hash table
 * @key: Is the key
 * @value: Is the value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node, *position_ht;

	if (strcmp(key, "") == 0 || !ht)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);
	position_ht = ht->array[index];

	if (position_ht && strcmp(position_ht->key, key) == 0)
	{
		free(position_ht->value);
		free(node);
		position_ht->value = strdup(value);
		return (1);
	}
	node->key = strdup(key);
	node->value = strdup(value);
	node->next = ht->array[index];
	ht->array[index] = node;
	return (1);
}

