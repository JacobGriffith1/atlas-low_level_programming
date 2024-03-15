#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data of a dlistint_t linked list.
 * @head: Head of the list.
 * Return: Sum or 0 if no data is found.
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			sum += head->n;
			head = head->next;
		}
	}
	return (sum);
}
