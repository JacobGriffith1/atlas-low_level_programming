#include "lists.h"

/**
 * print_listint - Prints all the elements of a list_t list.
 * @h: Head of a list.
 * Return: Number of nodes (nodeCount).
 */

size_t print_listint(const listint_t *h)
{
	size_t nodeCount = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodeCount++;
	}
	return (nodeCount);
}
