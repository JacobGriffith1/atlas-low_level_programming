#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked list_t list.
 * @h: Head of the linked list.
 * Return: Number of elements in the linked list (nodeCount)
 */

size_t listint_len(const listint_t *h)
{
	size_t nodeCount = 0;

	while (h != NULL)
	{
		h = h->next;
		nodeCount++;
	}
	return (nodeCount);
}
