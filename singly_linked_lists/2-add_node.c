#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a 'list_t' list.
 * @head: First node of linked list.
 * @str: string to add to linked list.
 * Return: Address of new element or NULL if failed.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t charCount;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (charCount = 0; str[charCount]; charCount++)
		;

	new->len = charCount;
	new->next = *head;
	*head = new;

	return (*head);
}
