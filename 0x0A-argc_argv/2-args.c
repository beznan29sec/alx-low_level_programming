#include <stdio.h>
#include "main.h"
/**
 * main - a function prints all recieved arguments
 * @argc: arguments number
 * @argv: arguments array
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
			return (0);
}
