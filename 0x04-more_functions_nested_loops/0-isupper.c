#include "main.h"
/**
* _isupper - checks for uppercase character
* @c: Variable text
* Return: Always 0.
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		_putchar(c);
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar ('n');
}
