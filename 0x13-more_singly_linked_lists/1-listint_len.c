#include "lists.h"
/**
 * listint_len - a function that returns number of elements
 * @h: a pointer to the next node
 * Return: number of elements in a linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}

	return (i);
}
