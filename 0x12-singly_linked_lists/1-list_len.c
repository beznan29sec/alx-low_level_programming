#include <stdlib.h>
#include "lists.h"
/**
 *list_len - lists number of elements
 *@h: pointer to list_t
 *Return: returns the number of elements in a linked list_t list
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
