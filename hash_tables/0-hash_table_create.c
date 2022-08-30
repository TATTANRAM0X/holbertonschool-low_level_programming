#include "hast_tables.h"

/**
 * hash_table_create - Funtion thah creates a hash table
 * @size: Size of the array
 *
 * Return: Pointer to newly created hash table or NULL if fails
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash_table = malloc(sizeof(hast_table_t));

	if (!new_hash_table)
		return (NULL);

	new_hash_table->size = size;
	new_hash_table->array = malloc(sizeof(hash_node_t *) * size);

	if (!new_hash_table->array)
	{
		free(new_hash_table);
			return (NULL);
	}

	unsigned long int i = 0;

	for (; i < size; i++)
	{
		new_hash_table->array[i] = NULL;
	}
	return (new_hast_table)
}

