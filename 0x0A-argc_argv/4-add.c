#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers.
 *
 * @argc: arguments count.
 * @argv: arguments vector.
 *
 * Return: 1 or 0.
 */
int main(int argc, char *argv[])
{
	int a, b, s;

	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b]; b++)
		{
			if (argv[a][b] < '0' || argv[a][b] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		s += atoi(argv[a]);
	}

	printf("%d\n", s);

	return (0);
}

