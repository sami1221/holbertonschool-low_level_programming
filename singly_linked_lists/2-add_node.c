#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list
 * @head: pointer
 * @str: string for new list
 * Return: address of new node, NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = NULL;

	new = makeNode(str);
	if (!*head)
	{
		*head = new;
	}
	else
	{
		new->next = *head;
		*head = new;
	}
	return (new);
}
/**
 * makeNode - creates a node for a list
 * @str: string to dup in new node
 * Return: new node
 */
list_t *makeNode(const char *str)
{
	list_t *new = NULL;
	int i = 0;
	char *dup;

	new = malloc(sizeof(list_t));
	if (!new)
	{
		free(new);
		return (new);
	}

	for (i = 0; str[i]; i++)
		;
	dup = strdup(str);
	if (!dup)
	{
		free(new);
	}
	else
	{
		new->str = dup;
		new->len = i;
		new->next = NULL;
	}
	return (new);
}

