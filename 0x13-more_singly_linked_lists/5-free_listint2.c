#include "lists.h"
/**
 * free_listint2 - a function that  frees a linked list
 * @head: pointer to the listint_t
 */
void free_listint2(listint_t **head)
{
	listint_t *t;

	if (head == NULL)
		return;

	while (*head)
	{
		t = (*head)->next;
		free(*head);
		*head = t;
	}

	*head = NULL;
}
