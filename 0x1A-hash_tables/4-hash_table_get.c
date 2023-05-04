#include "hash_tables.h"

/**
 * hash_table_get - Retrieving the value associated with
 *                  a key in a hash table.
 * @ht: A pointer pointing to the hash table.
 * @key: The key to getting the value of.
 *
 * Return: If the key cannot be matched - NULL.
 *         Otherwise - the value associated with key in ht.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int indexx;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	indexx = key_index((const unsigned char *)key, ht->size);
	if (indexx >= ht->size)
		return (NULL);

	node = ht->array[indexx];
	while (node && strcmp(node->key, key) != 0)
		node = node->next;

	return ((node == NULL) ? NULL : node->value);
}

