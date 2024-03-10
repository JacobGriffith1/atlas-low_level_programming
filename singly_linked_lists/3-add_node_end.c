#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a 'list_t' list.
 * @head: The first node of the list.
 * @str: The string to be added to the list.
 * Return: Address of the new element, or NULL if failed.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;
	size_t charCount;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (charCount = 0; str[charCount]; charCount++)
		;

	new->len = charCount;
	new->next = NULL;
	temp = *head;

	if (temp == NULL)
	{
		*head = new;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}

	return (*head);
}
