#include "lists.h"

/**
 * add_nodeint - that adds a new node at the
 * beginning of a list
 * @head: pointer
 * @n: integer
 * Return: newnode
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = makeNode(n);
	if (!*head)
		*head = newnode;
	else
	{
		newnode->next = *head;
		*head = newnode;
	}
	return (newnode);
}
/**
 * makeNode - creates a node for a list
 * @n: integer
 *
 * Return: new node
 */
listint_t *makeNode(int n)
{
	listint_t *new = NULL;

	new = malloc(sizeof(listint_t));
	if (!new)
	{
		free(new);
		return (new);
	}

	new->n = n;
	new->next = NULL;
	return (new);
}
