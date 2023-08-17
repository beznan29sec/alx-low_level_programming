#include "variadic_functions"
/**
 * sum_them_all - Returns the sum of all its paramters.
 * @n: The number of paramters passed to the function.
 * @...: A variable number of paramters to calculate the sum of.
 *
 * Return: If n == 0 - 0.
 *         Otherwise - the sum of all parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
va_list nums;

va_start(nums, n);
int i;
int sum = 0;

for (i = 0; i < n; i++)
{
sum += va_arg(nums, n);
}
va_end(nums);
return (sum);
}
