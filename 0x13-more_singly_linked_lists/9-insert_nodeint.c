#include "lists.h"
/**
 * insert_nodeint_at_index - a function that inserts a new node
 * @head: pointer to the first node
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *x;
	unsigned int i;
	listint_t *t = *head;

	x = malloc(sizeof(listint_t));
	if (!x || !head)
		return (NULL);

	x->n = n;
	x->next = NULL;

	if (idx == 0)
	{
		x->next = *head;
		*head = x;
		return (x);
	}

	for (i = 0; t && i < idx; i++)
	{
		if (i == idx - 1)
		{
			x->next = t->next;
			t->next = x;
			return (x);
		}
		else
			t = t->next;
	}

	return (NULL);
}
