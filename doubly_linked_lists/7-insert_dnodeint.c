#include "lists.h"

/**
 * insert_dnodeint_at_index - Insets a new node at a given position.
 * @h: Head of the list.
 * @idx: Index of the list where the new node should be added;
 * starts at 0.
 * @n: Contents to go in the new node.
 * Return: Address of the new node, or NULL on failure.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *t;
	unsigned int i;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	t = *h;

	while (t->prev != NULL)
		t = t->prev;

	i = 0;
	while (t != NULL)
	{
		if (i == idx)
			break;
		t = t->next;
		i++;
	}

	new->prev = t->prev;
	new->next = t->next;

	return (new);
}
