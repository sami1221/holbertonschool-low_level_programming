#include "lists.h"
#include <stdio.h>
/**
 * print_listint - prints all the elements of a list
 * @h: linked list
 * Return: num of elements
 */
size_t print_listint(const listint_t *h)
{
	int num_elem = 0;

	if (h)
	{
		printf("%d\n", h->n);
		num_elem++;
		num_elem += print_listint(h->next);
	}
	return (num_elem);
}
