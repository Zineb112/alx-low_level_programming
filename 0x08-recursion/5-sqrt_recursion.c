#include "main.h"

int main_sqrt_recursion(int n, int m);

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: intger.
 * Return: square root result.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (main_sqrt_recursion(n, 0));
}

/**
 * main_sqrt_recursion - returns the natural square root of a number.
 * @n: intger.
 * @m: intger.
 * Return: square root.
 */
int main_sqrt_recursion(int n, int m)
{
	if (m * m > n)
	{
		return (-1);
	}
	else if (m * m == n)
	{
		return (m);
	}

	return (main_sqrt_recursion(n, m + 1));
}
