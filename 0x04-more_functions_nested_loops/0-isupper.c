#include"main.h"

/**
 * _isupper - checks for uppercase character.
 * @c: integer.
 * Return: 1 if c is uppercase and 0 otherwise.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')

		return (1);
	else if (c >= 'a' && c <= 'z')

		return (0);

}
