#include "lists.h"

/**
 * list_len - Returns the number of elements in a linked 'list_t' list.
 * @h: Singly linked list.
 * Return: Number of elements; elemCount
 */

size_t list_len(const list_t *h)
{
	size_t elemCount = 0;

	while (h->str != NULL)
	{
		h = h->next;
		elemCount++;
	}
	return (elemCount);
}
