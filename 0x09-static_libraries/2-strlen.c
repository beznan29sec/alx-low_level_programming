#include "main.h"
/**
 * _strlen - a function returns the length of a string
 * @s: string
 * Return: string length
 */
int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
		return (longi);
}
