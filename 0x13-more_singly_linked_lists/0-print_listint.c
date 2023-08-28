#include "lists.h"
/**
 * print_listint - prints all elements
 * @h: linked list to be printed
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (1);
	struct listint_t *p = NULL;

	p = h;

	while (p != NULL)
	{
		count++;
		p = p->n;
	}
	printf("%d", count);
}
