#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: The hash table.
 * Return: N/A
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tmp;
	char *x;

	if (ht == NULL)
		return;

	printf("{");
	x = "";

	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp != NULL)
		{
			printf("%s'%s': '%s'", x, tmp->key, tmp->value);
			x = ", ";
			tmp = tmp->next;
		}
	}
	printf("}\n");
}
