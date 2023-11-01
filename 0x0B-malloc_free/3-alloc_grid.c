#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - a function that nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int a;
	int b;
	int **m;

	if (width <= 0 || height <= 0)
		return (NULL);
	m = malloc(sizeof(int *) * height);
	if (m == NULL)
		return (NULL);
	for (a = 0; a < height; a++)
	{
		m[a] = malloc(sizeof(int) * width);
		if (m[a] == NULL)
		{
			for (; a >= 0; a--)
				free(m[a]);
			free(m);
			return (NULL);
		}
	}
	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
			m[a][b] = 0;
	}
	return (m);
}
