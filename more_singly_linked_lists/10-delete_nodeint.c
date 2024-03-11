#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at index 'index' of a
 * 'listint_t' list
 * @head: Head of a list.
 * @index: Index of the node that should be deleted. Starts at 0.
 * Return: 1 on success; -1 on failure.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *prev, *after;

	prev = *head;

	if (index != 0)
	{
		for (i = 0; i < index - 1 && prev != NULL; i++)
			prev = prev->next;
	}

	if (prev == NULL || (prev->next == NULL && index != 0))
		return (-1);

	after = prev->next;

	if (index != 0)
	{
		prev->next = after->next;
		free(after);
	}
	else
	{
		free(prev);
		*head = after;
	}

	return (1);
}
