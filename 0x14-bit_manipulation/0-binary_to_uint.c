#include "main.h"
/**
 * binary_to_unit -  a function that converts binary number to unsigned int
 * @b: string of binary number
 * Return: the converted number
 */
unsigned int binary_to_unit(const char *b)
{
	unsigned int n = 0;
	int i;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		n = 2 * n + (b[i] - '0');
	}
	return (n);
}
