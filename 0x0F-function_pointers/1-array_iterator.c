#include "function_pointers.h"
/**
* array_iterator - a function that prints each array elements
* @array: array
* @size: elements to print
* @action: a pointer
* Return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (array == NULL || action == NULL)
		return;
	for (x = 0; x < size; x++)
	{
		action(array[x]);
	}
}
