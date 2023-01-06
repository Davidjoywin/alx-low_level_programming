#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key
 * @ht: hash table you want to look into
 * @key: key you are looking for
 * Return: The value associated with the element, or NULL if key couldn't be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *h_node;
	unsigned long int index;

	if (key == NULL || ht == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	h_node = ht->array[index];

	for (; h_node != NULL; h_node = h_node->next)
	{
		if (strcmp(h_node->key, key) == 0)
			return (h_node->value);
	}
	return (NULL);
}

