#include "lists.h"
/**
 * free_listint2 - free and set head to NULL
 * @head: pointer
 */
void free_listint2(listint_t **head)
{
	if (head)
	{
		free_listint(*head);
		*head = NULL;
	}
}
#include "lists.h"
/**
 * free_listint - frees a list
 * @head: listint_t to free
 */
void free_listint(listint_t *head)
{
	if (head)
	{
		free_listint(head->next);
		free(head);
	}
}
