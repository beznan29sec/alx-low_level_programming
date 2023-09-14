#include "lists.h"
/**
 * sum_listint - a function calculates the sum of all the data
 * @head: first node
 *
 * Return: result sum
 */
int sum_listint(listint_t *head)
{
	listint_t *t = head;
	int s = 0;

	while (t)
	{
		s += t->n;
		t = t->next;
	}

	return (s);
}
