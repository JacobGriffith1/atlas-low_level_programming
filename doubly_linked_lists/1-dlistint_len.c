#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a linked dlistint_t list.
 * @h: Head of the list.
 * Return: Number of nodes in list (nodeCt).
 */

size_t dlistint_len(const dlistint_t *h)
{
	int nodeCt = 0;

	if (h == NULL)
		return (nodeCt);
	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		nodeCt++;
		h = h->next;
	}
	return (nodeCt);
}
