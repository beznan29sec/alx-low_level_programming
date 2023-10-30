#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * check_num - check string
 * @str: array
 * Return: Always 0 (Success)
 */
int check_num(char *str)
{
	unsigned int c;

	c = 0;
	while (c < strlen(str))
	{
		if (!isdigit(str[c]))
		{
			return (0);
		}
			c++;
	}
	return (1);
}
/**
 * main - a function print program name
 * @argc: count arguments
 * @argv: arguments
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int c;
	int str_int;
	int s = 0;

	c = 1;
	while (c < argc)
	{
		if (check_num(argv[c]))
		{
			str_int = atoi(argv[c]);
			s += str_int;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
			c++;
	}

	printf("%d\n", s);
	return (0);
}
