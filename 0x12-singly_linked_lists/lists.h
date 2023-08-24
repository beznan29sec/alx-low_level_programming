#ifndef LISTS_H
#define LISTS_H
#include <stdio.h>
#include <stdlib.h>

int _putchar(char c);
size_t print_list(const list_t *h);
/**
 * struct- Liked list
 * @val: value of the node
 * @link: points to the next node
 */
struct node
{
	int val;
	struct node *link;
};
#endif
