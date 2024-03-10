#include "lists.h"

/**
 * free_list - Frees a 'list_t' list.
 * @head: First node of a linked list.
 * Return: N/A
 */

void free_list(list_t *head)
{
	list_t *node;

	while ((node = head) != NULL)
	{
		head = head->next;
		free(node->str);
		free(node);
	}
}
