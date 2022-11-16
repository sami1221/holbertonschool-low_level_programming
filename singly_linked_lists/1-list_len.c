#include "lists.h"
/**
 * list_len - returns the number of elements in a linked list
 * @h: pointer
 * Return: length of elements in a list
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
