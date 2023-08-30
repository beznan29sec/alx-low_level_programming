#include "lists.h"
/**
 * pop_listint- a function to delete the head list
 * @head: a pointer to the first node
 * Return: if the linked list is empty return 0 or the deleted data
 */
int pop_listint(listint_t **head)
{
	listint_t *p;
	int i;

	if (!head || !*head)
		return (0);
	i = (*head)->n;
	p = (*head)->next;
	free(*head);
	*head = p;
	return (i);
}
