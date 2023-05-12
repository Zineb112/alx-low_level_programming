#include "main.h"
#include <stdio.h>

/**
 * main - prints its name, followed by a new line.
 * @argc: number of arguments passed to te program.
 * @argv: argument vector.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
		printf("%s\n", argv[count]);
	return (0);
}
