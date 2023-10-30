#include <stdio.h>
#include "main.h"
/**
 * main - a function that print the number of arguments
 * @argc: no of arguments
 * @argv: arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	(void) argv;
		printf("%d\n", argc - 1);

		return (0);
}
