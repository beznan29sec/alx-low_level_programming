#include "variadic_functions.h"
/**
* sum_them_all - a function that returns the sum.
* @n: number of paramters passed.
* @...: elipsis
* Return: If n == 0 - 0.
*         Otherwise - the sum of all parameters.
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list a;
	unsigned int i, add = 0;

	va_start(a, n);

	for (i = 0; i < n; i++)
		add += va_arg(a, int);
	va_end(a);
	return (add);
}
