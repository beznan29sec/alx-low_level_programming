#include "variadic_functions.h"
/**
* print_strings - a function that prints strings.
* @separator: string to be printed.
* @n: number of strings.
* @...: elipsis.
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list s;
	char *str;
	unsigned int i;

	va_start(s, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(s, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}


		printf("\n");


		va_end(s);
}

