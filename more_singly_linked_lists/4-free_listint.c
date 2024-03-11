#include "lists.h"

/**
 * free_listint - Frees a listint_t list.
 * @head: Head of a list. Will be reassigned to point at each node
 * during the freeing process.
 * Return: N/A
 */

void free_listint(listint_t *head)
{
	listint_t *node;

	while ((node = head) != NULL)
	{
		head = head->next;
		free(node);
	}
}
