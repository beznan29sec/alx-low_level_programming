#include "main.h"
#include <stdlib.h>
/**
 * create_array - a function that create an array of size
 * and assign char c
 * @size: size of array
 * @c: char
 * Return: NULL if size = 0 or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = malloc(sizeof(char) * size);
	if (size == 0 || s == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		s[i] = c;
	return (s);
}

