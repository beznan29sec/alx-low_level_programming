#include "lists.h"
/**
 * add_nodeint - a function adds a node at the beginning
 * @head: pointer to the first node
 * @n: data to be added in the new node
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *add;

	add = (listint_t)malloc(sizeof(listint_t);
		if (!add)
			return (NULL);

		add->n = *head;
		*head = add;
	return (add);
}
