#include "lists.h"
/**
 * add_nodeint_end - a function that add node at the end
 * @head: a pointer to the first node
 * @n: new data to be added
 * Return: he address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *last;
	listint_t *ptr = *head;

	last = malloc(sizeof(listint_t));

	if (!last)
		return (NULL);
	last->n = n;
	last->next = NULL;

	if (*head == NULL)
	{
		*head = last;
		return (last);
	}

	while (ptr->next)

		ptr = ptr->next;
	ptr->next = last;
	return (last);
}
