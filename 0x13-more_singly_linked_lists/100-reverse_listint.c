#include "lists.h"
/**
 * reverse_listint - a function that reverses a linked list
 * @head: pointer to the first node
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *old = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = old;
		old = *head;
		*head = next;
	}

	*head = old;

	return (*head);
}
