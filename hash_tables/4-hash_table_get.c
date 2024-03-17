#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key.
 * @ht: The hash table to look into.
 * @key: Key to search for.
 * Return: Value, or NULL if no key is found.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int kIndex;
	hash_node_t *tmp;

	if (ht == NULL)
		return (NULL);

	if (key == NULL || *key == '\0')
		return (NULL);

	kIndex = key_index((unsigned char *)key, ht->size);

	tmp = ht->array[kIndex];

	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}
	return (NULL);
}
