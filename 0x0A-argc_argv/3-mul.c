#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - multiplies two numbers.
 * @argc: arguments count.
 * @argv: arguments vector.
 * Return: on error 1, and on success integer.
 */
int main(int argc, char *argv[])
{
	int x, y, i;
	int result;

	if (argc == 3)
	{
		for (i = 0; i < argc; i++)
		{
			if (i == 1)
			{
				x = atoi(argv[i]);
			}
			else if (i == 2)
			{
				y = atoi(argv[i]);
			}
		}
		result = x * y;
		printf("%d\n", result);
	}
	else if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
