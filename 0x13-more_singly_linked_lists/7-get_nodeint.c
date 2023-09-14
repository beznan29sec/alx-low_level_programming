#include "lists.h"
/**
 * get_nodeint_at_index - a function that returns the node at a certain index in a linked list
 * @head: first node
 * @index: index of the node
 *
 * Return: pointer to the node we're looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *t = head;
	unsigned int i = 0;

	while (t && i < index)
	{
		t = t->next;
		i++;
	}

	return (t ? t : NULL);
}
