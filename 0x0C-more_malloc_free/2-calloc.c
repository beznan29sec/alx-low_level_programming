#include "main.h"
/**
* _calloc - a function that allocates memory
* @size: rturns a pointer to the allocated memory.
* @nmemb: allocate memory
* @size: allocate element
* Return: pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int y;
	char *x;

	if (nmemb == 0 || size == 0)
		return (NULL);
	x = malloc(nmemb * size);
	if (x == NULL)
		return (NULL);
	for (y = 0; y < (nmemb * size); y++)
		x[y] = 0;
	return (x);
}
