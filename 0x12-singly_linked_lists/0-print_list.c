#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list
 * @h: head
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	if (h == NULL)
	{
		printf("nill");
	}
	struct list_t *p = NULL;

	p = h;

	while (p != NULL)
	{
		printf("%d\n", p->val);
		p = p->link;
	}
}
