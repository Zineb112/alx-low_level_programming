#include "main.h"


/**
 * print_binary - prints the binary representation of a number.
 * @n: decimal number.
 */
void print_binary(unsigned long int n)
{
	int i;
	unsigned long int x;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (x = n, i = 0; (x >>= 1) > 0; i++)
		;

	for (; i >= 0; i--)
	{
		if ((n >> i) & 1)
			printf("1");
		else
			printf("0");
	}
}
