#include <stdio.h>
#include "main.h"
/**
 * _atoi - a function that converts a string to an integer
 * @s: string
 * Return: converted int
 */
int _atoi(char *s)
{
	int i, l, a, y, dig, num;

		i = 0;
		l = 0;
		a = 0;
		y = 0;
		dig = 0;
		num = 0;
		while (s[l] != '\0')
			l++;

		while (i < l && a == 0)
		{

			if (s[i] == '-')
				++y;
			if (s[i] >= '0' && s[i] <= '9')
			{
				dig = s[i] - '0';
				if (y % 2)
					dig = -dig;
				num = num * 10 + dig;
				a = 1;
				if (s[i + 1] < '0' || s[i + 1] > '9')
					break;
				a = 0;
			}
				i++;
		}

		if (a == 0)
			return (0);

		return (num);
}
/**
 * main - a function that multiplies two numbers
 * @argc: arguments number
 * @argv: arguments array
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int res, number1, number2;

		if (argc < 3 || argc > 3)
		{
			printf("Error\n");
			return (1);
		}

		number1 = _atoi(argv[1]);
		number2 = _atoi(argv[2]);
		res = number1 * number2;

		printf("%d\n", res);

		return (0);
}
