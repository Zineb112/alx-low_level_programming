#include "main.h"

/**
 * positive_or_negative - main block
 * Description: Get a random number and print the number
 * and if it is positive, negative, or zero
 * @i: output.
 * Return: nothing
 */

void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);

	else if (i < 0)
		printf("%d is negative\n", i);

	else
		printf("%d is zero\n", i);
}
