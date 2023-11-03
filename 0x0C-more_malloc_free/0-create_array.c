#include "main.c"
/**
 * create_array - a function create array
 * @size: size of array
 * @c: char
 * Return: a pointer to the allocated memory
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	s = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		s[i] = c;
	return (s);
}
