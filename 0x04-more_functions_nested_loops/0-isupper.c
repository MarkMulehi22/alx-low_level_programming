#include "main.h"

/**
 * _isupper -> A function that checks for upper case characters
 * @c: parameter to be printed
 * Return: 1 if uppercase and 0 if not
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
