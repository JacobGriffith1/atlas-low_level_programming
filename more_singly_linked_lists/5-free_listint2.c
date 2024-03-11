#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list, sets head to NULL.
 * @head: Head of a string. Will be changed during the freeing process
 * to each other node, and then NULL after freeing is complete.
 * Return: N/A
 */

void free_listint2(listint_t **head)
{
	listint_t *node, *temp;

	if (head != NULL)
	{
		node = *head;
		while ((temp = node) != NULL)
		{
			node = node->next;
			free(temp);
		}
		*head = NULL;
	}
}
