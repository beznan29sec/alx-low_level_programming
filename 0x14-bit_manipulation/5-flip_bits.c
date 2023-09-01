#include "main.h"
/**
 * flip_bits - a function counts number of bits to change
 * @n: int number
 * @m: int number
 * Returns: bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i;
	int a = 0;
	unsigned long int val;
	unsigned long int x = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		val = x >> i;
		if (val & 1)
			a++;
	}

	return (a);
}
