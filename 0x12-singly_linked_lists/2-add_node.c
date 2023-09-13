#include "lists.h"
/**
 * *add_node - a function that adds a new node at the beginning
 * @head: a double pointer
 * @str: string to add in the node
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int l = 0;
	list_t *n;

	while (str[l])
		l++;
	n = malloc(sizeof(list_t));
	if (!n)
		return (NULL);
	n->str = strdup(str);
	n->l = l;
	n->next = (*head);
	(*head) = n;

	return (*head);
}
