#include "lists.h"
/**
 * add_node_end - adds a node at the end of a list
 * @head: pointer
 * @str: string
 * Return: new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = NULL;
	list_t *aux = *head;
	int i;

	new = makeNode(str);

	if (!*head)
	{
		*head = new;
	}
	else
	{
		for (i = 0; aux->next; i++)
		{
			aux = aux->next;
		}
		aux->next = new;
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
