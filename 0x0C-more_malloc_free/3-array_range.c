#include "main.h"
/**
 * array_range - a function that creates an array
 * @min: minimum range of values
 * @max: maximum range of values
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int i;
	int s;
	int *p;

	if (min > max)
		return (NULL);
	s = max - min + 1;
	p = malloc(sizeof(int) * s);
	if (p == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
		p[i] = min++;
	return (p);
}
