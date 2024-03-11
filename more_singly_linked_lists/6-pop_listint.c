#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t list,
 * and returns the head node's data (n).
 * @head: Head of the list.
 * Return: Head node's data (n), or 0 if list is empty.
 */

int pop_listint(listint_t **head)
{
	int nodeData;
	listint_t *node, *new;

	if (*head == NULL)
		return (0);

	node = *head;
	nodeData = node->n;
	new = node->next;

	free(node);
	*head = new;

	return (nodeData);
}
