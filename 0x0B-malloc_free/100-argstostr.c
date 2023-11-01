#include "main.h"
#include <stdlib.h>
/**
 * argstostr - main function entry
 * @ac: int
 * @av: pointer of double array
 * Return: a pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int i;
	int y = 0;
	int x;
	int a = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (x = 0; av[i][x]; x++)
			y++;
	}
	y += ac;
	s = malloc(sizeof(char) * y + 1);

	if (s == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
	for (x = 0; av[i][x]; x++)
	{
		s[a] = av[i][x];
		a++;
	}
	if (s[a] == '\0')
	{
		s[a++] = '\n';
	}
	}
	return (s);
}
