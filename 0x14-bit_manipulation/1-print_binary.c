#include "main.h"
/**
 * print_binary - a function prints the binary equivalent to a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int i, num = 0;

	unsigned long int a;

	for (i = 63; i >= 0; i--)
	{
		a = n >> i;

		if (a & i)
		{
			_putchar(i);
			a++;
		}
		else if (num)
			_putchar('0');
	}
	if (!num)
		_putchar('0');
}
