#include "lists.h"
/**
 * listint_len - returns the num of elem in a list
 * @h: linked list
 * Return: elements of the list
 */
size_t listint_len(const listint_t *h)
{
	int count_nodes = 0;

	if (h)
	{
		count_nodes += listint_len(h->next);
		count_nodes++;
	}
	return (count_nodes);
}
