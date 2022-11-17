#include "lists.h"
/**
 * free_list - frees a list_t list
 * @head: The pointer to the list
 * Return: nothing
 */
void free_list(list_t *head)
{
	if (head)
	{
		free_list(head->next);
		if (head->str)
			free(head->str);
		free(head);
	}
}
