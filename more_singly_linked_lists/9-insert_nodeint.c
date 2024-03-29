#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 * @head: Head of a list
 * @idx: index of the list where the new node should be added, starts at 0.
 * @n: Contents to reside within the new node.
 * Return: Address of new node, or NULL if it fails
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new, *node;

	node = *head;

	if (idx != 0)
	{
		for (i = 0; i < idx - 1 && node != NULL; i++)
			node = node->next;
	}

	if (node == NULL && idx != 0)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		new->next = node->next;
		node->next = new;
	}
	return (new);
}
