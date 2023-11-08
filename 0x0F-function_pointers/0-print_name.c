#include "function_pointers.h"
/**
* print_name - a function that  prints
* @name: string to add
* @f: a function pointer
* Return: nothing
**/
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
		return;
	f(name);
}
