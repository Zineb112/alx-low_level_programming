#include "main.h"
#include <stdio.h>

int main_is_prime_number(int n, int m);

/**
 * is_prime_number - check if number is prime.
 * @n: an int to be checked.
 * Return: 1 if the input integer is a prime number, otherwise return 0.
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (1);
	}
	return (main_is_prime_number(n, n - 1));
}


/**
 * main_is_prime_number - check if number is prime.
 * @n: an intger to be checked.
 * @m: intger.
 * Return: 1 if the input integer is a prime number, otherwise return 0.
 */
int main_is_prime_number(int n, int m)
{
	if (m == 1)
	{
		return (1);
	}
	else if (n % m == 0 && m > 0)
	{
		return (0);
	}

	return (main_is_prime_number(n, m - 1));
}
