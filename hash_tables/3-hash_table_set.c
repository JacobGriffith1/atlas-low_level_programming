#include "hash_tables.h"

/**
 * add_node - Adds a node at the beginning of a hash at an index.
 * @head: Head of the hash list.
 * @key: Key of the hash.
 * @value: Value to store.
 * Return: Head of the hash.
 */

hash_node_t *add_node(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *tmp;

	tmp = *head;

	while (tmp != NULL)
	{
		if (strcmp(key, tmp->key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			return (*head);
		}
		tmp = tmp->next;
	}

	tmp = malloc(sizeof(hash_node_t));

	if (tmp == NULL)
		return (NULL);

	tmp->key = strdup(key);
	tmp->value = strdup(value);
	tmp->next = *head;
	*head = tmp;

	return (*head);
}

/**
 * hash_table_set - Adds an element to a hash table.
 * @ht: Hash table to add or update the key/value to.
 * @key: The key. Can not be an empty string.
 * @value: The value. Must be duplicated. Can be an empty string.
 * Return: 1 (SUCCESS), 0 (FAILURE).
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int kIndex;

	if (ht == NULL)
		return (0);
	if (key == NULL || *key == '\0')
		return (0);

	kIndex = key_index((unsigned char *)key, ht->size);

	if (add_node(&(ht->array[kIndex]), key, value) == NULL)
		return (0);

	return (1);
}
