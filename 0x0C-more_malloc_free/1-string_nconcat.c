#include "main.h"
/**
 * string_nconcat - a function that concatenates two strings.
 * @s1: first char
 * @s2: secound char
 * @n: unsigned int
 * Return: If the function fails, it should return NULL
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int a;
	unsigned int b;
	unsigned int c;

	if (s1 == NULL)
	{
		a = 0;
	}
	else
	{
		for (a = 0; s1[a]; ++a)
			;
	}
	if (s2 == NULL)
	{
		b = 0;
	}
	else
	{
		for (b = 0; s2[b]; ++b)
			;
	}
	if (b > n)
		b = n;
	str = malloc(sizeof(char) * (a + b + 1));
	if (str == NULL)
		return (NULL);
	for (c = 0; c < a; c++)
		str[c] = s1[c];
	for (c = 0; c < b; c++)
		str[c + a] = s2[c];
	str[a + b] = '\0';
	return (str);
}
