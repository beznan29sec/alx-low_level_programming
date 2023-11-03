#include "main.h"
/**
 * _realloc - a function that reallocates a memory block
 * @ptr: pointer to the memory
 * @old_size:is the size in bytes
 * @new_size: the new size
 * Return: pointer allocate new size memory, or NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p1;
	unsigned int i, new = new_size;
	char *pr = ptr;

	if (ptr == NULL)
	{
		p1 = malloc(new_size);
		return (p1);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);
	p1 = malloc(new_size);
	if (p1 == NULL)
		return (NULL);
	if (new_size > old_size)
		new = old_size;
	for (i = 0; i < new; i++)
		p1[i] = pr[i];
	free(ptr);
	return (p1);
}
